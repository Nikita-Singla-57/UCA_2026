import java.util.*;

public class postfix{
	public static int postfixExp(String str) {
		Stack<Integer> st = new Stack<>();
		for (char i: str.toCharArray()) {
			if (i == ' ') continue;
			if (i >= '0' && i <= '9') {
				int j = i - '0';
				st.push(j);
			}
			else {
				int b = st.pop();
				int a = st.pop();
				if (i == '+')
					st.push(a + b);
				else if (i == '-')
					st.push(a - b);
				else if (i == '*')
					st.push(a * b);
				else 
					st.push(a / b);
			}
		}
		return st.pop();
	}
	public static void main(String[] args) {
		String x;
		Scanner sc = new Scanner(System.in);
		x = sc.nextLine();
		System.out.println(postfixExp(x));
	}
}
