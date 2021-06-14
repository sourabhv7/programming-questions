package coders;

public class Sort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int arr[] = {21,19,54};
      int temp;
      for(int i=0;i<3;i++)
      {
    	  for(int j=i+1;j<3;j++)
    	  {
    		  if(arr[i]<arr[j])
    		  {
    			  temp=arr[i];
    			  arr[i]=arr[j];
    			  arr[j]=temp;
    		  }
    	  }
      }
    	  System.out.println("Asscending : ");
    	  for(int m=0;m<3;m++)
    		  System.out.print(arr[m]+" ");
    	  
    	  System.out.println("\nDessecnding : ");
    	  for(int n=2;n>=0;n--)
    		  System.out.print(arr[n]+" ");
      
      
      
      
	}

}
