package ;

import java.util.Scanner;

public class java1
{
  public static void main(String[] args)
  {
    String str,rev ="";
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the string you want to check :");
    str = sc.nextLine();
    int n = str.length();
    for(int i=n-1;i>=0;i--)
    {
      rev = rev + str.charAt(i);
    }
    if(str.equalsIgnoreCase(rev))
    {

      System.out.println("\n"+str+" is a Palindrome");
    }
    else
    {
      System.out.println("\n"+str+" is not a Palindrome");
    }
  }
}
  