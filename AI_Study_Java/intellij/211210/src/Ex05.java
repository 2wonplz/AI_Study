class Counter {
    public int cnt = 0;

    synchronized public void increment() {
        cnt++;
    }

    synchronized public void decrement() {
        cnt--;
    }

    public int getCnt() {
        return cnt;
    }
}

public class Ex05 {
    public static Counter cnt = new Counter();

    public static void main(String[] args) throws Exception {

        Runnable r1 = () -> {
            for (int i = 0; i < 10000; i++)
                cnt.decrement();
        };

        Runnable r2 = () -> {
            for (int i = 0; i < 10000; i++)
                cnt.increment();
        };

        Thread th1 = new Thread(r1);
        Thread th2 = new Thread(r2);
        th1.start();
        th2.start();
        th1.join();
        th2.join();
        System.out.println("종료 : " + cnt.getCnt());

    }
}
