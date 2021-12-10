public class Ex01 {
    public static void main(String[] args) {

        Thread th = Thread.currentThread();
        String name = th.getName();
        System.out.println("name = " + name);

    }
}
