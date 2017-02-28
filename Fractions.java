import java.util.Scanner;
import java.lang.Math;
public class Fractions
{

	public static int GCD(int a, int b) 
	{
		if (b==0) return a;
		return GCD(b,a%b);	
	}
	public static String FractionColumns(int a, int b) {
	    int GCD = GCD(a, b);
	    return (a / GCD) + " " + (b / GCD);
	}

	public static void main(String[] args) {
	    System.out.println(FractionColumns(4, 8)); //  "1 2"
	    System.out.println(FractionColumns(1536, 78360));     //  "64 3265"
	    System.out.println(FractionColumns(51478,  5536)); //  "25739 2768"
	    System.out.println(FractionColumns(46410, 119340));//  "7 18"
	    System.out.println(FractionColumns(7673, 4729)); //  "763 4729"
	    System.out.println(FractionColumns(4096, 1024)); //  "4 1"
	}

	}

 
 