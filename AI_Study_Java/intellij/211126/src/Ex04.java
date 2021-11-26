class Box<T> {
    private T obj;

    public Box(T obj) {
        this.obj = obj;
    }

    @Override
    public String toString() {
        return "Box{" +
                "obj=" + obj +
                '}';
    }

    public T get() {
        return obj;
    }
}

public class Ex04 {

    public static void main(String[] args) {

        Box<Apple> abox = new Box(new Apple("사과"));
        Box<Banana> bbox = new Box(new Banana("바나나"));

        Apple apple = abox.get();
        Banana banana = bbox.get();

        System.out.println(apple);
        System.out.println(banana);

    }

}
