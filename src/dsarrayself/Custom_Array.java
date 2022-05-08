package dataStructure.src.dsarrayself;
import java.lang.*;

public class Custom_Array {
    //variables
    String items[];
    int items1[];
    char items2[];
    double items3[];
    float items4[];
    long items5[];
    int count;

    //Constructor
    public Custom_Array(String type, int arraySize){
        if(type.equals("String")){
            items = new String[arraySize];
        }
        else if(type.equals("Integer"))
            items1 = new int[arraySize];
        else if(type.equals("Character"))
            items2 = new char[arraySize];
        else if(type.equals("Double"))
            items3 = new double[arraySize];
        else if(type.equals("Float"))
            items4 = new float[arraySize];
        else if(type.equals("Long"))
            items5 = new long[arraySize];
        else
            System.out.println("Wrong data type! Check spelling or there is no such data type as "+type+".");
    }

    //Print method for all types
    public void print(){
        for(int i=0; i<count; i++) {
            if (items != null)
                System.out.print(items[i]);
            else
                break;
        }
        for(int i=0; i<count; i++) {
            if (items1 != null)
                System.out.print(items1[i]);
            else
                break;
        }
        for(int i=0; i<count; i++) {
            if (items2 != null)
                System.out.print(items2[i]);
            else
                break;
        }
        for(int i=0; i<count; i++) {
            if (items3 != null)
                System.out.print(items3[i]);
            else
                break;
        }
        for(int i=0; i<count; i++) {
            if (items4 != null)
                System.out.print(items4[i]);
            else
                break;
        }
        for(int i=0; i<count; i++) {
            if (items5 != null)
                System.out.print(items5[i]);
            else
                break;
        }
    }

    //Insert method for all types
    public void insert(String item){
        if(items.length == count){
            String newItems[] = new String[count*2];
            for (int i=0; i<count; i++){
                newItems[i] = items[i];
            }
            items = newItems;
        }
        items[count++] = item;
    }
    public void insert(int item){
        if(items1.length == count){
            int newItems1[] = new int[count*2];
            for (int i=0; i<count; i++){
                newItems1[i] = items1[i];
            }
            items1 = newItems1;
        }
        items1[count++] = item;
    }
    public void insert(char item){
        if(items2.length == count){
            char newItems2[] = new char[count*2];
            for (int i=0; i<count; i++){
                newItems2[i] = items2[i];
            }
            items2 = newItems2;
        }
        items2[count++] = item;
    }
    public void insert(double item){
        if(items3.length == count){
            double newItems3[] = new double[count*2];
            for (int i=0; i<count; i++){
                newItems3[i] = items3[i];
            }
            items3 = newItems3;
        }
        items3[count++] = item;
    }
    public void insert(float item){
        if(items4.length == count){
            float newItems4[] = new float[count*2];
            for (int i=0; i<count; i++){
                newItems4[i] = items4[i];
            }
            items4 = newItems4;
        }
        items4[count++] = item;
    }
    public void insert(long item){
        if(items5.length == count){
            long newItems5[] = new long[count*2];
            for (int i=0; i<count; i++){
                newItems5[i] = items5[i];
            }
            items5 = newItems5;
        }
        items5[count++] = item;
    }

    //remove value at pointed index
    public void removeAt(int index){
        if(index<0 || index>=count) {
            throw new IllegalArgumentException();
        }
        for(int i=index; i<count; i++){
            if(items!=null)
                items[i] = items[i+1];
            else
                break;

            if(items[count-1]==items[count-2])
                break;
        }
        for(int i=index; i<count; i++){
            if(items!=null)
                items1[i] = items1[i+1];
            else
                break;

            if(items1[count-1]==items1[count-2])
                break;
        }
        for(int i=index; i<count; i++){
            if(items2!=null)
                items2[i] = items2[i+1];
            else
                break;

            if(items2[count-1]==items2[count-2])
                break;
        }
        for(int i=index; i<count; i++){
            if(items3!=null)
                items3[i] = items3[i+1];
            else
                break;

            if(items3[count-1]==items3[count-2])
                break;
        }
        for(int i=index; i<count; i++){
            if(items4!=null)
                items4[i] = items4[i+1];
            else
                break;

            if(items4[count-1]==items4[count-2])
                break;
        }
        for(int i=index; i<count; i++){
            if(items5!=null)
                items5[i] = items5[i+1];
            else
                break;

            if(items5[count-1]==items5[count-2])
                break;
        }
        count--;
    }

    //return index of an existing item
    public int indexOf(String item){
        for(int i=0; i<count; i++){
            if(items[i]==item)
                return i;
        }
        return -1;
    }
    public int indexOf(int item){
        for(int i=0; i<count; i++){
            if(items1[i]==item)
                return i;
        }
        return -1;
    }
    public int indexOf(char item){
        for(int i=0; i<count; i++){
            if(items2[i]==item)
                return i;
        }
        return -1;
    }
    public int indexOf(double item){
        for(int i=0; i<count; i++){
            if(items3[i]==item)
                return i;
        }
        return -1;
    }
    public int indexOf(float item){
        for(int i=0; i<count; i++){
            if(items4[i]==item)
                return i;
        }
        return -1;
    }
    public int indexOf(long item){
        for(int i=0; i<count; i++){
            if(items5[i]==item)
                return i;
        }
        return -1;
    }

    //return true if the item exists in the array, otherwise return false
    public boolean contains(String item){
        return indexOf(item) != -1;
    }
    public boolean contains(int item){
        return indexOf(item) != -1;
    }
    public boolean contains(char item){
        return indexOf(item) != -1;
    }
    public boolean contains(double item){
        return indexOf(item) != -1;
    }
    public boolean contains(float item){
        return indexOf(item) != -1;
    }
    public boolean contains(long item){
        return indexOf(item) != -1;
    }

}
