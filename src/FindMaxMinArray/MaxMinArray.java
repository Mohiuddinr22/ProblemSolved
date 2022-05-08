package dataStructure.src.FindMaxMinArray;
import java.lang.*;

public class MaxMinArray {
    int max;
    int min;
    int[] numbers;
    int count;

    public MaxMinArray(int arraySize){
        numbers = new int[arraySize];
    }
    public void insert(int item){
        if(numbers.length == count){
            int[] newNumbers = new int[count*2];
            for(int i=0; i<count; i++){
                newNumbers[i] = numbers[i];
            }
            numbers = newNumbers;
        }
        numbers[count++] = item;
    }
    public void print(){
        for(int i=0; i<count; i++)
            if(numbers[i]!=0)
                System.out.println(numbers[i]);
    }
    public int getMin(){
        min = numbers[0];
        for(int i=0; i<count; i++){
            if(numbers[i]<min)
                min = numbers[i];
        }
        return min;
    }
    public int getMax(){
        max = numbers[0];
        for(int i=0; i<count; i++){
            if(numbers[i]>max)
                max = numbers[i];
        }
        return max;
    }
}
