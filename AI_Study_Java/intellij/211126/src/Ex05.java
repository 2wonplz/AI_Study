class DBox<T, L extends Number, R> {
    private T name;
    private R count;

    public void set(T n, R c) {
        name = n;
        count = c;
    }

    @Override
    public String toString() {
        return "DBox{" +
                "name=" + name +
                ", count=" + count +
                '}';
    }
}

public class Ex05 {

    public static void main(String[] args) {

        DBox<String, Double, Integer> dBox1 = new DBox<>();
        dBox1.set("사과", 10);
        System.out.println(dBox1);

    }

}
