package javanumber;

import java.util.Scanner;

/** 
 * atuomorphic is number where the number square last digit(s) is equal to the digit(s)
 * */
public class AutomorphicNumber {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	 int num = sc.nextInt();
	 int rem, sqr = num*num ,sqrem;
	 boolean bol = true;
	 while(num>0)
	 {
		 rem = num%10;
		 sqrem = sqr%10;
		 if(rem!=sqrem)
		 {
			 System.out.println("number is not Automorphic number");
			 bol=false;
			 break;
		 }
		 num/=10;
		 sqr/=10;
	 }

	 if(bol) {
		 System.out.println("number is Automorphic number");
	 }
	}

}
