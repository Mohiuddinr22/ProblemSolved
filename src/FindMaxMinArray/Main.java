package dataStructure.src.FindMaxMinArray;

public class Main {
    public static void main(String[] args) {
        MaxMinArray arr = new MaxMinArray(10);
        arr.insert(18);
        arr.insert(124);
        arr.insert(11);

        arr.print();
        System.out.println("Minimum value is "+arr.getMin());
        System.out.println("Maximum value is "+arr.getMax());
    }
}
