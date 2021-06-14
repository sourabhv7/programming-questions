package coders;

import java.util.Scanner;
 
public class NumberToWord {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
       String words[] = {"","one","two","three","four","five","six","seven",
    		            "eight","nine","ten","eleven","twelv","thirteen","fourteen","fifteen",
    		            "sixteen","seventeen","Eighteen"};
       String tens[] = {"","ninteen","twenty","thirty","fourty","fifty","seventy","eighty","ninty"};
       
       int num = 21;
       int n = num;
       String ans="";
       int temp;
       String s = Integer.toString(num);
       int len = s.length();
       
       if(num==0)
       {
    	   ans =ans+ "zero";
       }
       
       if(len==2|| len==1)
       {
    	  if(num>18) 
    	  {
    		   ans = ans+tens[num/10]+" "+words[num%10];
    		     		  
    	  }
    	  else
    	  {
    		  ans = ans+words[num];
    	  }
       }
       
       else if(len>6)
	   {
		   
		   ans = ans+"Invalid Number!! Number should be upto 6 digits";
	   }
       
       
       else
       {
    	   
       
       while(num>0)
       {
    	   
    	     if(num>=100000)
    	   {
    		   temp = num/100000;
    		   if(temp>0&&temp<=17)
    		   {
    			   ans = ans+words[temp];
    		   }
    		   else
    		   {
    			   ans = ans+tens[num/10]+" "+words[num%10];
    		   }
    		   ans = ans+" Lakh ";
    		   num = num%100000;
    		   
    	   }
    	   
    	   else if(num>=1000)
    	   {
    		   temp = num/1000;
    		   if(temp>0&&temp<=17)
    		   {
    			   ans = ans+words[temp];
    		   }
    		   else
    		   {
    			   ans = ans+tens[num/10]+" "+words[num%10];
    		   }
    		   ans = ans+" Thousand ";
    		   num = num%1000;   
    	   }
    	   
    	   else if(num>=100)
    	   {
    		   temp = num/100;
    		   if(temp>0&&temp<=17)
    		   {
    			   ans = ans+words[temp];
    		   }
    		   else
    		   {
    			   ans = ans+tens[num/10]+" "+words[num%10];
    		   }
    		   ans = ans+" Hundred ";
    		   num = num%100;     
    	   }
    	   
    	   else if(num<100)
    	   {
    		   temp = num/10;
    		   int temp2 = num%10;
    		   ans = ans+"and ";
    		   if(num>0&&num<=17)
    		   {
    			   ans = ans+words[num];
    		   }
    		   else
    		   {
    			   ans = ans+tens[num/10]+" "+words[num%10];
    		   }
    		   if(temp*10+temp2==0)
    		   num = num%10; 
    		   else
    			   num = num%1;
    	   }
    	   
    	   
    	   
       }//while loop end
       
       }//end main else
       
       
       
       
      
       System.out.println(n +" -->"+ans);
	}

}
