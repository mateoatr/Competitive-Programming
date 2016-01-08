import java.util.Scanner;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
	Scanner scan = new Scanner(System.in);
	BigInteger stop = new BigInteger("-999999");
	
	while(scan.hasNext()){
	    BigInteger[] numeros = new BigInteger[101];
	    int pos = 0;
	    numeros[pos] = scan.nextBigInteger(); pos++;
	    while(scan.hasNext()){
		BigInteger temp = scan.nextBigInteger();
		if(temp.compareTo(stop) == 0)
		    break;
		numeros[pos] = temp;
		pos++;
	    }

	    BigInteger ans = numeros[0];	    
	    for(int i = 0; i < pos; i++){
		BigInteger actual = BigInteger.ONE;
		for(int j = i; j < pos; j++){
		    actual = actual.multiply(numeros[j]);
		    ans = ans.max(actual);
		}
	    }
	    
	    System.out.println(ans);
	}
    }
}
