class MyInteger {
    private int element;

    public MyInteger(int element) {
        this.element = element;
    }

    public int intValue() {
        return element;
    }
}

public class Ex03 {

    public static void main(String[] args) {

        MyInteger mi = new MyInteger(3);
        int myint = mi.intValue();
        System.out.println("myint = " + myint);

    }

}
