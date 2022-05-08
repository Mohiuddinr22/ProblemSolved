package dataStructure.src.ArraysClass;
import java.lang.*;

public class Main {
    public static void main(String[]args){
        Custom_Array newStringArr = new Custom_Array("String", 5);
        newStringArr.insert("a");
        newStringArr.insert("b");
        newStringArr.insert("c");
        newStringArr.insert("d");
        newStringArr.insert("e");
        newStringArr.reverse();

        newStringArr.print();
    }
}
