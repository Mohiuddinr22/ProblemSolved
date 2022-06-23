package dataStructure.src.String;

import java.util.*;

public class Parentheses {
    public static boolean isValid(String item){
        Stack<Character> stack = new Stack<>();

        for(int i=0; i<item.length(); i++){
            if(stack.empty())
                stack.push(item.charAt(i));

            else if(stack.peek()=='('&&item.charAt(i)==')'||stack.peek()=='{'&&item.charAt(i)=='}'||stack.peek()=='['&&item.charAt(i)==']')
                stack.pop();

            else
                stack.push(item.charAt(i));
        }
        if(stack.empty()){
            return true;
        }

        return false;
    }

    public static void main(String[] args) {
        String item = "{()[]}";
        if(isValid(item)){
            System.out.println("Parentheses are okay!");
        }
        else{
            System.out.println("Parentheses are not okay!");
        }
    }
}
