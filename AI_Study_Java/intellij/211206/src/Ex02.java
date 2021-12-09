interface AA {
    void cal(int a, int b);
}

public class Ex02 {
    public static void main(String[] args) {

        AA obj = new AA() {
            @Override
            public void cal(int a, int b) {
                System.out.println(a + b);
            }
        };
        obj.cal(10, 20);

        AA lamb = (a, b) -> System.out.println(a + b);
        lamb.cal(10, 20);

    }
}
