package coders;

public class ReverseFunction {
   public static int reverseNumber(int num)
   {
	   int rem,rev=0;
	   while(num>0)
	   {
		   rem = num%10;
		   rev = (rev*10)+rem;
		   num/=10;
	   }
	   return rev;
   }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
         int rev = ReverseFunction.reverseNumber(123456);
         System.out.println("Reverse num of 123456 is = "+rev);
	}

}
