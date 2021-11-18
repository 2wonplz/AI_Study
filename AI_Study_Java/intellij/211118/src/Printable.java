public interface Printable {
    int PAPER_WIDTH = 70;
    int PAPER_HEIGHT = 120;

    public void print(String doc);

    default void printCMYK(String doc) {
        System.out.println("컬러로 출력");
        print(doc);
    }

    static void staticPrint(String doc) {
        System.out.println("static은 객체생성 없이도 호출가능");
        System.out.println(doc);
    }
}
