package coders;

import java.util.Scanner;

public class NoteCounter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner sc = new Scanner(System.in);
      int money = sc.nextInt();
      int th=0,five=0,hund=0,fifty=0,ten=0;
      if(money<10)
      {
    	  System.out.println("Money should be greater than 9");
      }
      th = money/1000;
      five = (money%1000)/500;
      hund = (money%1000%500)/100;
      fifty = (money%1000%500%100)/50;
      ten = (money%1000%500%100%50)/10;
      int rem=0;
       rem = (money%1000%500%100%50%10);
      if(th!=0)
    	  System.out.println("1000 - "+th);
      if(five!=0)
          System.out.println("500 - "+five);
      if(hund!=0)
          System.out.println("100 - "+hund);
      if(fifty!=0)
    	  System.out.println("50 - "+fifty);
      if(ten!=0)
    	  System.out.println("10 - "+ten);
      if(rem!=0)
    	  System.out.println("Remaining change - "+rem);
	}  

}
