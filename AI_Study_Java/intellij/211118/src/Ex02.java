public class Ex02 {

    public static void main(String[] args) {

        Printable prn1 = new SPrintDriver();
        prn1.print("삼성프린터로 출력");

        Printable prn2 = new LPrintDriver();
        prn1.print("엘지프린터로 출력");

        System.out.println(Printable.PAPER_WIDTH);
        System.out.println(Printable.PAPER_HEIGHT);

        Printable.staticPrint("출력");

    }

}
