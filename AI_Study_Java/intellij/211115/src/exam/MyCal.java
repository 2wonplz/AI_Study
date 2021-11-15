package exam;


import java.util.Scanner;

class Add {
    int a, b;

    void setValue(int a, int b) {
        this.a = a;
        this.b = b;
    }

    int calculate() {
        return a + b;
    }
}

class Sub {
    int a, b;

    void setValue(int a, int b) {
        this.a = a;
        this.b = b;
    }

    int calculate() {
        return a - b;
    }
}

class Mul {
    int a, b;

    void setValue(int a, int b) {
        this.a = a;
        this.b = b;
    }

    int calculate() {
        return a * b;
    }
}

class Div {
    int a, b;

    void setValue(int a, int b) {
        this.a = a;
        this.b = b;
    }

    int calculate() {
        return a / b;
    }
}

public class MyCal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("두 정수와 연산자를 입력하시오 >> ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        String cal = sc.next();

        switch (cal) {
            case "+":
                Add q = new Add();
                q.setValue(a, b);
                System.out.println(q.calculate());
                break;
            case "-":
                Sub w = new Sub();
                w.setValue(a, b);
                System.out.println(w.calculate());
                break;
            case "*":
                Mul e = new Mul();
                e.setValue(a, b);
                System.out.println(e.calculate());
                break;
            case "/":
                Div r = new Div();
                r.setValue(a, b);
                System.out.println(r.calculate());
                break;
        }

    }

}
