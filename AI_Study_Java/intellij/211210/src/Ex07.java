import java.util.concurrent.*;

public class Ex07 {
    public static void main(String[] args) throws Exception {

        Callable<String> task = () -> {
            for (int i = 0; i < 10; i++)
                System.out.println(i);
            return "반환";
        };

        ExecutorService es = Executors.newFixedThreadPool(1);
        Future<String> fu = es.submit(task);
        String retValue = fu.get();
        System.out.println("retValue = " + retValue);
        es.shutdown();

    }
}
