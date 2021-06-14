package coders;

import java.util.Scanner;

public class HexaToDeci {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
     String hexa = sc.nextLine();
     int deci=0, len = hexa.length()-1, x=1;
     boolean w = true;
     while(len>=0)
     {
    	 if(hexa.charAt(len)>='0' && hexa.charAt(len)<='9')
    	 {
    		 deci = deci + (hexa.charAt(len)-'0')*x;
    	 }
    	 else if(hexa.charAt(len)>='A' && hexa.charAt(len)<='F')
    	 {
    		 deci = deci + (hexa.charAt(len)-'A'+10)*x;
    	 }
    	 else if(hexa.charAt(len)>='a' && hexa.charAt(len)<='f')
    	 {
    		 deci = deci + (hexa.charAt(len)-'a'+10)*x;
    	 }
    	 else
    	 {
    		 System.out.println("Please enter correct HexaDecimal Number");
    		 w=false;
    		 break;
    	 }
    	
    	 x = x*16;
    	 len--;
     }
       if(w)
      System.out.println(deci);
     
	}

}
