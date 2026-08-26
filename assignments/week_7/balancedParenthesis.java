import java.util.*;

public class balancedParenthesis{
	public static boolean balancedParenthesis(String str) {
		Stack<Character> st = new Stack<>();
		for (char i: str.toCharArray()) {
			if (i == '(' || i == '[' || i == '{') {
				st.push(i);
			}
			else {
				if (st.isEmpty())
					return false;
				if ((i == ']' && st.peek() != '[') || 
				    (i == '}' && st.peek() != '{') ||
				    (i == ')' && st.peek() != '('))
					return false;
				st.pop();
			}
		}
		if (st.isEmpty()) return true;
		return false;
	}
	public static void main(String[] args){
		String x;
		Scanner sc =  new Scanner(System.in);
		x = sc.nextLine();
		System.out.println(balancedParenthesis(x));
	}
}
		
		
