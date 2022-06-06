import java.util.Stack;

public class Stacks {
    public static String reverseStr(String item){
        if(item==null)
            throw new IllegalArgumentException();

        Stack<Character> stack = new Stack<>();

        for(char chr : item.toCharArray())
            stack.push(chr);

        StringBuffer reverser = new StringBuffer();
        while(!stack.empty())
            reverser.append(stack.pop());

        return reverser.toString();
    }
    public static void main(String[] args) {
        String sentence = "I am a student!";
        System.out.println(reverseStr(sentence));
    }
}
