import java.util.Stack;

public class Postfix {
    private static int precedence(char character){
        if(character=='^')
            return 3;
        else if(character=='/'||character=='*')
            return 2;
        else if(character=='+'||character=='-')
            return 1;
        else
            return -1;
    }
    public static String postFix(String expression){
        Stack<Character> stack = new Stack<>();
        String result = "";

        for(int i=0; i<expression.length(); i++){
            char c = expression.charAt(i);

            if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9')
                result+=c;

            else if(c=='(')
                stack.push(c);

            else if(c==')'){
                while(stack.peek()!='('){
                    result+=stack.peek();
                    stack.pop();
                }
                stack.pop();
            }
            else{
                while(!stack.empty() && precedence(expression.charAt(i)) <= precedence(stack.peek())){
                    if(c=='^' && stack.peek()=='^')
                        break;

                    else{
                        result+=stack.peek();
                        stack.pop();
                    }
                }
                stack.push(c);
            }
        }
        while(!stack.empty()){
            result+=stack.peek();
            stack.pop();
        }
        return result;
    }
    
    public static int evaluatePostfix(String expression){
        Stack<Integer> stack = new Stack<>();

        for(int i=0; i<expression.length(); i++){
            char c = expression.charAt(i);

            if(Character.isDigit(c))
                stack.push(c - '0');

            else{
                int value1 = stack.pop();
                int value2 = stack.pop();

                switch (c){
                    case'+':
                        stack.push(value1+value2);
                        break;
                    case'-':
                        stack.push(value2-value1);
                        break;
                    case'*':
                        stack.push(value1*value2);
                        break;
                    case'/':
                        stack.push(value2/value1);
                        break;
                }
            }
        }
        return stack.pop();
    }

    public static void main(String[] args) {
        String expression = "1+2*(3-4)-(4+1+9-7)*9/3";
        System.out.println(postFix(expression));
    }
}
