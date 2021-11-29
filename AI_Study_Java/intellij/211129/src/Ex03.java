import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

class Row implements Comparable<Row> {
    private String name;
    private int kor;
    private int eng;
    private int math;
    private int total;

    public Row(String name, int kor, int eng, int math) {
        this.name = name;
        this.kor = kor;
        this.eng = eng;
        this.math = math;
        this.total = kor + eng + math;
    }

    @Override
    public boolean equals(Object o) {
        Row row = (Row) o;
        return this.kor == row.kor
                && this.eng == row.eng
                && this.math == row.math
                && this.total == row.total
                && Objects.equals(this.name, row.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, kor, eng, math, total);
    }

    @Override
    public String toString() {
        return "Row{" +
                "name='" + name + '\'' +
                ", kor=" + kor +
                ", eng=" + eng +
                ", math=" + math +
                ", total=" + total +
                '}';
    }

    @Override
    public int compareTo(Row o) {
        return this.total - o.total;
    }
}

public class Ex03 {
    public static void main(String[] args) {

        List<Row> a1 = new ArrayList<>();
        a1.add(new Row("aa", 100, 80, 70));
        a1.add(new Row("bbb", 90, 70, 60));
        a1.add(new Row("cccc", 70, 90, 80));

        System.out.println(a1);

    }
}
