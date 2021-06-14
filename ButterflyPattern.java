package coders;

import java.util.Scanner;

public class ButterflyPattern {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
        int i,j,row,s=0;
        System.out.println("---------ButterFly Patter---------");
        System.out.println("Enter Number of Rows");
        row = sc.nextInt();
        if(row%2==0)
        {
        for(i=1;i<=row;i++)
        {
        	if(i<(row/2)+1)
        	{
        		s++;
        	}
        	else if(i>(row/2)+1)
        	{
        		s--;
        	}
        	for(j=1;j<=row;j++)
        	{
        		if(j<=s || j>=(row+1)-s)
        		{
        			System.out.print("*");
        		}
        		else
        		{
        			System.out.print(" ");
        		}
        	}
        	System.out.println();
        }
        }
        else
        {
        	for(i=1;i<=row;i++)
            {
            	if(i<=(row+1)/2)
            	{
            		s++;
            	}
            	else 
            	{
            		s--;
            	}
            	for(j=1;j<=(row+1);j++)
            	{
            		if(j<=s || j>=(row+2)-s)
            		{
            			System.out.print("*");
            		}
            		else
            		{
            			System.out.print(" ");
            		}
            	}
            	System.out.println();
            }
            	
        }
        
	}

}
