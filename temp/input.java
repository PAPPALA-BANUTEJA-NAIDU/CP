import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger fac = BigInteger.ONE;
        int n = sc.nextInt();
        for (int i = 2; i <= n; i++)
            fac = fac.multiply(BigInteger.valueOf(i));
        System.out.println(fac);
    }
}
