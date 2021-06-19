package coders;

public class PrimePattern {
public static boolean isPrime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
       int num =4;
       for(int i=0;i<6;i++)
       {
    	   for(int j=1;j<=i;j++)
    	   {
    		   if(isPrime(num))
    			   num++;
    		   if(!isPrime(num)) {
    			   System.out.print(num+" ");
    			   num++;
    			   }  		   
    	   }
    	   System.out.println();
       }
       
	}

}
