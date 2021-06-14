package coders;

public class ArmstrongPring {
     public static int digits(int n)
     {
    	 int digits=0;
    	 while(n>0)
    	 {
    		 digits++;
    		 n/=10;
    	 }
    	 return digits;
     }
     public static boolean armstrong(int n)
     {
    	 int k =n; int digit = digits(n);int sum=0,rem;
    	 while(k>0)
    	 {
    		 rem = k%10;
    		 sum = sum +(int) Math.pow(rem, digit);
    		 k=k/10;
    	 }
    	   if(sum==n)
    		   return true;
    	   else
    		   return false;
     }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int k,rem;
         for(int i =1;i<=1000;i++)
         {
        	if(armstrong(i))
        		System.out.print(i+" ");
         }
	}

}
