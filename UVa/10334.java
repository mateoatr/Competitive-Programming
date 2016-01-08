import java.util.Scanner;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
	Scanner scan = new Scanner(System.in);
	BigInteger big[] = new BigInteger[1002];
	big[0] = BigInteger.ONE;
	big[1] = BigInteger.ONE;

	for(int i = 2; i < 1002; i++)
	    big[i] = big[i-2].add(big[i-1]);

	while(scan.hasNext())
	    System.out.println(big[scan.nextInt()+1]);
    }
}
