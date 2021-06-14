package javanumber;
/** 
 * A number is Peterson when sum of factoral of its digit is eqal to the number itself
 * */
public class PetersonNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       int num = 145;
       int n = num;
       int rem ,sum=0,factsum=0;
       int fact[]= {1,1,2,6,24,120,720,5040,40320,362880};
		while(num>0)
		{
			rem = num%10;
			
			factsum=factsum+fact[rem];
			num/=10;
		}
	
		System.out.println(factsum);
		if(n==factsum) {
			System.out.println("number is peterson");
		}
		else {
			System.out.println("number is not peterson");
		}
		
	}

}
