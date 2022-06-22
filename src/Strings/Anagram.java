package dataStructure.src.String;
import java.util.*;

public class Anagram {
    public static boolean isAnagram(String item1, String item2){
        char charArray1[] = item1.toCharArray();
        char charArray2[] = item2.toCharArray();
        Arrays.sort(charArray1);
        Arrays.sort(charArray2);
        int i=0;
        while(i<charArray1.length){
            if(charArray1[i]!=charArray2[i])
                return false;

            i++;
        }
        return true;
    }

    public static void main(String[] args) {
        String item1 = "teacher";
        String item2 = "cheater";
        if(isAnagram(item1,item2)){
            System.out.println("Anagram verified!");
        }
        else{
            System.out.println("Not Anagram!");
        }
    }
}
