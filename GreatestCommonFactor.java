package javanumber;

import java.util.Scanner;

public class GreatestCommonFactor {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        int x = 10,y=12;
        int gcf=1;
        for(int i =1;i<=x&&i<=y;i++)
        {
        	if(x%i==0 && y%i==0)
        		gcf=i;
        }
        System.out.println(gcf);
	}

}
