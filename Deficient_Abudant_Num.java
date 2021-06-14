package coders;

import java.util.Scanner;

/* The deficient number can be defined as the number for which the sum of the proper divisors is lesser than the number itself.

For example, the number 21 with its proper divisors (1, 3 and 7) has sum (11) lesser than itself.
 * */
public class Deficient_Abudant_Num {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     Scanner sc = new Scanner(System.in);
     int num = sc.nextInt();
     int sum=0;
     for(int i=1;i<num;i++)
     {
    	 if(num%i==0)
    		 sum+=i;
     }
     if(sum<num)
    	 System.out.println("Number is Deficient");
   
     else if(sum>num)
    	 System.out.println("Number is Abudant number");
     
     else
    	 System.out.println("Number is not Deficient nor Abudant Number");
		
		
	}

}
