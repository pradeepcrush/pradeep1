
import java.io.*;
import java.util.Scanner;
public class Roman {
    public static void main(String args[])
    {int n;
    Scanner s=new Scanner(System.in);
    n=s.nextInt();
    if(n==1)
    {System.out.println('I');
    
    }
    if(n==5)
    {System.out.println('V');
    }
    if(n==10)
    {System.out.println('X');
    }
    if(n==50)
    {System.out.println('L');
    }
    if(n==100)
    {System.out.println('C');
    }
    if(n==500)
    {System.out.println('D');
    }if(n==1000)
    {System.out.println('M');
    }
    }
