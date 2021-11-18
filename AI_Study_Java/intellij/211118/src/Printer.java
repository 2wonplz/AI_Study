public class Printer implements Printable {

    @Override
    public void print(String doc) {
        System.out.println(doc);
    }

    public static void main(String[] args) {
        Printable prn1 = new Printer();
        Printable prn2 = (doc) -> {
            System.out.println("람다");
        };

        prn1.print("기본 생성 방법");
    }

}
