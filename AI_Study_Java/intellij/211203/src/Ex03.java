interface Printable {
    void print(String s);
}

class Printer implements Printable {
    @Override
    public void print(String s) {
        System.out.println(s);
    }
}

public class Ex03 {
    public static void main(String[] args) {

        Printable prn1 = new Printer();
        prn1.print("aaa");

        Printable prn2 = new Printable() {
            @Override
            public void print(String s) {
                System.out.println(s);
            }
        };
        prn2.print("bbb");

        Printable prn3 = (s) -> {
            System.out.println(s);
        };
        prn3.print("ccc");

    }
}
