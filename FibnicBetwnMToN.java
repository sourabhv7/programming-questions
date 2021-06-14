package coders;

import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class FibnicBetwnMToN {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
          Scanner sc = new Scanner(System.in);
	   int a=0,b=1,c,m,n;
	   List<Integer> series = new LinkedList<Integer>();
	   System.out.println("Enter starting point");
	   m = sc.nextInt();
	   System.out.println("Enter Ending Point");
	   n = sc.nextInt();
	   series.add(0, 0);
	   if(m>n||m==n)
	   {
		   System.out.println("Invalid Starting or Ending Points");
	   }
	   else if(m==0)
	   {
		   System.out.println("Starting point should be greater than 0");
	   }
	   else
	   {
		   for(int i=1;i<=n;i++)
		   {
			   c=a+b;
			   series.add(i, a);
			   a=b;b=c;
		   }
		   for(int i=m;i<=n;i++)
		   {
			   System.out.print(series.get(i)+" ");
		   }
		   
		   
		   
	   }
	}

}
