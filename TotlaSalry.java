package coders;

import java.util.Scanner;

public class TotlaSalry {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] s = input.split(" ");
        int basic = Integer.parseInt(s[0]);
        char[] grade = s[1].toCharArray();
        double hra,da,pf;
        int allow=0;
        
        hra = basic*0.2;
        da = (basic*0.5);
        pf = (basic*0.11);
        if(grade[0]=='A')
            allow=1700;
        else if(grade[0]=='B')
            allow=1500;
        else
            allow=1300;
        
        double total = basic+ hra+da-pf+allow;
        System.out.println(Math.round(total));
        
	}

}
