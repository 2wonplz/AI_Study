import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Ex04 {
    public static void main(String[] args) {

        List<String> list1 = Arrays.asList("Robot", "Box", "Lambda", "A", "Bb");
        List<String> list2 = new ArrayList<>(list1);

//        list2.removeIf((s) -> s.length() > 3);
//        list2.forEach((s) -> System.out.println("s = " + s));

        for (String a : list2) {
            if (a.length() > 3)
                list2.remove(a);
        }

//        for (String a : list2)
//            System.out.println("a = " + a);

        System.out.println(list2);

    }
}
