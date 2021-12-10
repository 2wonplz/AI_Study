public class Ex02 {
    public static void main(String[] args) {

        Runnable r1 = new Runnable() {
            @Override
            public void run() {
                String name = Thread.currentThread().getName();
                for (int i = 0; i < 50; i++)
                    System.out.println(name + " = " + i);
            }
        };

        Runnable r2 = () -> {
            String name = Thread.currentThread().getName();
            for (int i = 0; i < 50; i++)
                System.out.println(name + " = " + i);
        };

        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r2);

        t1.start();
        t2.start();

        String name = Thread.currentThread().getName();
        for (int i = 0; i < 50; i++)
            System.out.println(name + " = " + i);

    }
}
