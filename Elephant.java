import java.util.Scanner;
public class Elephant{
     public static void main(String[] args){
          Scanner sc=new Scanner(System.in);
          int x=sc.nextInt();
          int minimumSteps=(int) Math.ceil(x/5.0);
          System.out.println(minimumSteps);
     }
}