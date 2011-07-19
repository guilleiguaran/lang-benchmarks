public class Fibonacci {

    public static void main(String[] args) {
        for(int i = 0; i < 36; i++) {
            System.out.println("n="+i+" => "+fib(i));
        }
    }

    public static int fib(int n) {
        if(n == 0 || n == 1) {
            return n;
        } else {
            return fib(n-1) + fib(n-2);
        }
    }
}
