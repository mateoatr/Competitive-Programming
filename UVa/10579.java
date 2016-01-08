import java.math.BigInteger;
import java.util.Scanner;

class java10579{
    public static void main(String args[]){
	Scanner scan = new Scanner(System.in);
	BigInteger big[] = new BigInteger[5001];
	big[0] = BigInteger.ZERO;
	big[1] = BigInteger.ONE;

	for(int i = 2; i < 5001; i++)
	    big[i] = big[i-2].add(big[i-1]);

	while(scan.hasNext())
	    System.out.println(big[scan.nextInt()]);
    }
}
