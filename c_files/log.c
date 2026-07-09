#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define FILE_NAME "audit.log"
#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    int fd;

    if (argc < 2)
    {
        printf("Usage:\n");
        printf("./auditlog --add \"message\"\n");
        printf("./auditlog --view\n");
        return 1;
    }

    // Add message
    if (strcmp(argv[1], "--add") == 0)
    {
        if (argc < 3)
        {
            printf("Please provide a message.\n");
            return 1;
        }

        fd = open(FILE_NAME, O_WRONLY | O_CREAT | O_APPEND, 0644);

        if (fd < 0)
        {
            printf("Error opening file.\n");
            return 1;
        }

        write(fd, argv[2], strlen(argv[2]));
        write(fd, "\n", 1);

        close(fd);
    }

    // View log
    else if (strcmp(argv[1], "--view") == 0)
    {
        fd = open(FILE_NAME, O_RDONLY);

        if (fd < 0)
        {
            printf("No log file found.\n");
            return 1;
        }

        char ch;
        int line = 1;

        printf("%d: ", line);

        while (read(fd, &ch, 1) > 0)
        {
            write(STDOUT_FILENO, &ch, 1);

            if (ch == '\n')
            {
                line++;

                if (read(fd, &ch, 1) > 0)
                {
                    printf("%d: ", line);
                    write(STDOUT_FILENO, &ch, 1);
                }
                else
                    break;
            }
        }

        close(fd);
    }

    else
    {
        printf("Invalid option.\n");
    }

    return 0;
}
