public class PrimeNumber
{
public static void main(String[] args)
{
int n=11,c=0;
for (int j = 1; j <= n / 2; j++) {
      if (n % j == 0) {
        c++;
if (c > 1) {
        System.out.println("The number is not prime");
    }
    else {
      System.out.println("The number is prime");
    }
  }
}
}
}
