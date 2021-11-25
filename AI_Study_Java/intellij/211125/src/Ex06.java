import java.util.Random;

public class Ex06 {

    public static void main(String[] args) {

        Random rand1 = new Random();
        for(int i = 0; i < 7; i++)
            System.out.println(rand1.nextInt(1000));

//        Random rand2 = new Random(12);
//        for(int i = 0; i < 7; i++)
//            System.out.println(rand2.nextInt(1000));

    }

}
