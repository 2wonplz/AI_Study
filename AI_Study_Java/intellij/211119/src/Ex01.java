import java.io.FileWriter;
import java.io.IOException;

public class Ex01 {

    public static void main(String[] args) {

        try {
            int a = 10;
            int b = 0;

            System.out.println(a / b);
        } catch (Exception e) {
            System.out.println("오류가 발생했습니다.");

            try {
                FileWriter fileWriter = new FileWriter("test.txt");
                fileWriter.write("프로그램에 문제가 발생했습니다.");
                fileWriter.close();
            } catch (IOException ex) {
                ex.printStackTrace();
            }

            e.printStackTrace();
        }
        System.out.println("프로그램이 종료됩니다.");

    }

}
