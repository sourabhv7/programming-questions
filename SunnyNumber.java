package javanumber;
/* 
 * A number is suuny when next number of a number is perfect sqaure
 * perfect square = if number is a perfect sqrrt like 81 = 9, 11 is  not
 * */
public class SunnyNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
          int num = 80;
          int n = num+1;
          double sqrt =  Math.sqrt(n);
          System.out.println(sqrt-Math.floor(sqrt));
        if(sqrt-Math.floor(sqrt)==0)
        {
        	System.out.println("number is sunny");
        }
        else
        {
        	System.out.println("Number is not sunny");
        }
          
	}

}
