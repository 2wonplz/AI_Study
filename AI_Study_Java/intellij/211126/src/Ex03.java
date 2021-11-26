class Apple {
    private String name;

    public Apple(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Apple{" +
                "name='" + name + '\'' +
                '}';
    }
}

class Banana {
    private String name;


    public Banana(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Banana{" +
                "name='" + name + '\'' +
                '}';
    }
}

public class Ex03 {

    public static void main(String[] args) {

        Object obj1 = new Apple("사과");
        Object obj2 = new Apple("바나나");
        System.out.println(obj1);
        System.out.println(obj2);

    }

}
