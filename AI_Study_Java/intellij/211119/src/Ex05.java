import java.io.File;
import java.util.Scanner;

public class Ex05 {

    public static void main(String[] args) {

        Scanner sc = null;
        try {
            sc = new Scanner(new File("a.txt"));
            String line = sc.nextLine();
            System.out.println("line : " + line);
            line = sc.nextLine();
            System.out.println("line : " + line);
        } catch (Exception e) {
            System.out.println(e.getMessage());
            System.out.println("예외");
        } finally {
            System.out.println("finally");
            sc.close();
        }

    }

}
