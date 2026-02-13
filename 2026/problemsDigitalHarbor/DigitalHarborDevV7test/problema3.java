import java.math.BigInteger;
import java.util.Scanner;

class main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger A = sc.nextBigInteger();
        BigInteger B = sc.nextBigInteger();
        int N = sc.nextInt();
        BigInteger C = BigInteger.ZERO;
        for(int i = 2; i < N; i++){
            C = A.add(B.multiply(B));
            A = B;
            B = C;
        }

        System.out.println(C);
    }
}