import java.util.*;

public class Palindrome {
    public static boolean isPalindrome(String item){
        int i = 0, j = item.length()-1;

        while (i<j){
            if(item.charAt(i) != item.charAt(j))
                return false;

            i++;
            j--;
        }
        return true;
    }
    public static void main(String[]args){
        Scanner input = new Scanner(System.in);
        System.out.print("Type a random word : ");
        String item = input.next();
        if(isPalindrome(item)){
            System.out.println(item+" is palindrome!");
        }
        else{
            System.out.println(item+" is not palindrome!");
        }
    }
}
