package coders;

import java.util.Scanner;

public class DecToBinary {

	public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int num ;
      String binary="";
      System.out.println("Enter decimal number");
		num = sc.nextInt();
	  int n = num;
	  while(num>0)
	  {
		  binary =(num%2)+ binary;
		  num/=2;
	  }
	  System.out.println("Binary of "+n+" is = "+binary);
		
		
	}

}
