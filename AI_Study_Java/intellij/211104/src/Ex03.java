class A {

    private int num;

    A() {
        System.out.println("기본 생성자");
    }

    A(int num) {
        this();
        System.out.println("int num이 있는 생성자");
    }

    A(int n1, int n2) {
        this(10);
        System.out.println("int n1, int n2가 있는 생성자");
    }

}

public class Ex03 {

    public static void main(String[] args) {

        new A();
        new A(10);
        new A(20,30);

    }

}
