class PaA {
    String name;
    int pa;

    public PaA() {
        System.out.println("부모생성자");
    }

    public PaA(String name, int pa) {
        this.name = name;
        this.pa = pa;
    }
}

class CaA extends PaA {
    int ca;
    int cb;

    CaA(String n, int p, int a, int c) {
        super(n, p);
        name = n;
        pa = p;
        ca = a;
        cb = c;
    }

    @Override
    public String toString() {
        return "CaA{" +
                "name='" + name + '\'' +
                ", pa=" + pa +
                ", ca=" + ca +
                ", cb=" + cb +
                '}';
    }
}

public class Ex02 {

    public static void main(String[] args) {

        CaA caA = new CaA("NAME", 10, 20, 30);
        System.out.println(caA);

    }

}
