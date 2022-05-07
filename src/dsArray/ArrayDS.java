package dataStructure.src.dsArray;
import java.lang.*;

public class ArrayDS{
	
	private int numbers[];
	private int newNum;

	public ArrayDS(int arraySize){
		numbers = new int[arraySize];
	}

	public void insert(int num){
		//If the array is full, resize it by creating a new array which is twice the size
		if(numbers.length==newNum){
			int[] newNumbers = new int[newNum * 2];
			//copy all the existing items to the new array
			for(int i=0; i<newNum; i++){
				newNumbers[i] = numbers[i];
			}
			//set "numbers" to this new array
			numbers = newNumbers;
		}
		//add the new inserted item at the end
		numbers[newNum++] = num;
	}

	public void removeAt(int indexNo){
		//validate the index
		if(indexNo<0 || indexNo>=newNum){
			throw new IllegalArgumentException();
		}
		//shift the items to the left to fill the  hole
		for(int i=indexNo; i<newNum; i++)
			numbers[i] = numbers[i+1];

		//shrinking the size of the array
		newNum--;
	}

	public int indexOf(int item){
		//if the item is found then return index
		for(int i=0; i<newNum; i++){
			if(numbers[i] == item){
				return i;
			}
		}
		//otherwise return -1
		return -1;
	}
	
	public void print(){
		for(int i=0; i<newNum; i++){
			if(numbers[i] != 0){
				System.out.println(numbers[i]);
			}
		}
	}
}