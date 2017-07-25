public class Factorial {

   public static void main(String[] args) {
       int no = 7;
       int result = 1;
       for (int i = 1; i <= no; i++) {
        result = result * i;
       }
       System.out.println(" factorial of 7 is " + result);
   }
}
