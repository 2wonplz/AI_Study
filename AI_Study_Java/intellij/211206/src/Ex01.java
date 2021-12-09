import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

class A implements Comparator<String> {
    @Override
    public int compare(String o1, String o2) {
        return o1.length() - o2.length();
    }
}

public class Ex01 {
    public static void main(String[] args) {

        List<String> list = Arrays.asList("Robot", "Box", "Lambda", "A", "Bb");

        Collections.sort(list, new A());
        System.out.println(list);
        Collections.sort(list, (o1, o2) -> {
            return o2.length() - o1.length();
        });
        System.out.println(list);

    }
}
