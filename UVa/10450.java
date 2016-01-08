import java.util.Scanner;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
	Scanner scan = new Scanner(System.in);
	BigInteger big[] = new BigInteger[55];

	big[0] = BigInteger.ONE;
	big[1] = BigInteger.ONE;

	for(int i = 2; i < 55; i++)
	    big[i] = big[i-2].add(big[i-1]);

	int caso;
	caso = scan.nextInt();

	for(int i = 1; i <= caso; i++){
	    System.out.print("Scenario #" + i + ":\n" + big[scan.nextInt()+1] + "\n\n");
	}
    }
}
