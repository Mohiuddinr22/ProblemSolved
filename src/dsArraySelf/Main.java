package dataStructure.src.dsArraySelf;
import java.lang.*;

public class Main {
    public static void main(String[]args){
        Custom_Array newCharArray = new Custom_Array("Character",10);
        newCharArray.insert('a');
        newCharArray.insert('b');
        newCharArray.insert('c');
        newCharArray.insert('d');
        newCharArray.insert('e');
        newCharArray.insert('f');
        newCharArray.insert('g');
        newCharArray.insert('h');
        newCharArray.insert('i');
        newCharArray.insert('j');
        newCharArray.removeAt(4);
        System.out.println(newCharArray.indexOf('m'));
        System.out.println(newCharArray.contains('e'));
        newCharArray.print();
    }
}
