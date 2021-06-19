package coders;

import java.util.Scanner;

public class PasswordPatterrn {
   
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char c;
        int len=0,upper=0,lower=0,spcl=0,digit=0;
        int length = s.length();
        if(length>=8 && length<=12)
        	len++;
        for(int i=0;i<length;i++)
        {
        	c = s.charAt(i);
        	if(Character.isUpperCase(c))
        		upper++;
        	else if(Character.isLowerCase(c))
        		lower++;
        	else if(Character.isDigit(c))
        		digit++;
        	else
        		spcl++;
        }
       
        if(len>0&&upper>0&&lower>0&&spcl>0&&digit>0)
        	System.out.println("Strong Password");
        if(len==0)
     	   System.out.println("Length should be in b/w 8-12");
       if(spcl==0)
    	   System.out.println("Spacial Character missing");
       if(upper==0)
    	   System.out.println("upper case missing");
       if(lower==0)
    	   System.out.println("Lower case missing");
       if(digit==0)
    	   System.out.println("Digits missing");

}
}