package coders;

import java.util.Scanner;

/*   if a number is  prime and the reverse o its number is also a prime than the number is said to be e mbr number
 * */
public class EmprNumber {
   public static boolean isPrime(int num)
   {
	  for(int i=2;i<=num/2;i++) 
	  {
		  
		    if(num%i==0)
		    return false;
		 
	  }
	
	   return true;
   }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(int i=2;i<=150;i++)
		{
			int num =i;
			int rev=0;
			if(isPrime(num))
			{
				//System.out.println("prime " + i);
				while(num>0)
				{
				 rev = rev*10+(num%10);
				 num = num/10;
				}
				if(isPrime(rev))
					System.out.println(i);
				
			}
			
		}
		
	}

}
