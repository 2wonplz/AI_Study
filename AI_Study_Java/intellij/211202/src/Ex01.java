import java.util.*;

class Person implements Comparable<Person> {
    private int age;
    private String name;

    public Person(int age, String name) {
        this.age = age;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Person{" +
                "age=" + age +
                ", name='" + name + '\'' +
                '}';
    }

    @Override
    public int compareTo(Person o) {
        return o.age - this.age;
    }
}

public class Ex01 {
    public static void main(String[] args) {

        Person p1 = new Person(20, "홍길동");
//        System.out.println(p1);
//        List<Person> list = new ArrayList<>();
//        list.add(p1);
//        System.out.println(list);
        List<Person> list = Arrays.asList(
                new Person(20, "홍길동"),
                new Person(30, "김길동"),
                new Person(40, "이길동")
        );

        System.out.println(list);
        System.out.println(list.get(0));
        System.out.println(list.get(1));
        System.out.println(list.get(2));

//        Collections.sort(list, new Comparator<Person>() {
//            @Override
//            public int compare(Person o1, Person o2) {
////                return o2.age = o1.age;
//            }
//        });

        System.out.println(list.get(0));
        System.out.println(list.get(1));
        System.out.println(list.get(2));
    }
}
