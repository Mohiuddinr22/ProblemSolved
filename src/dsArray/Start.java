package dataStructure.src.dsArray;
import java.lang.*;

public class Start{
	
	public static void main(String[] args){
		
		ArrayDS xxx = new ArrayDS(3);
		
		xxx.insert(10);
		xxx.insert(20);
		xxx.insert(30);
		xxx.insert(40);
		xxx.removeAt(1);
		System.out.println(xxx.indexOf(10));
		xxx.print();
		//System.out.println();
		
	}
}