import java.util.Scanner;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
	Scanner scan = new Scanner(System.in);
	BigInteger big[] = new BigInteger[4004];

	big[0] = BigInteger.ONE;
	big[1] = BigInteger.ONE;

	for(int i = 2; i < 4004; i++)
	    big[i] = big[i-2].add(big[i-1]);
	
	while(scan.hasNext()){
	    int r  = scan.nextInt();
	    if(r == 0) break;
	    System.out.println(big[(2*r)-1]);
	}
    }
}
