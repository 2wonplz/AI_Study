class Data {

    public void doA(int a) {
        System.out.println("doA = " + a);
    }

}

public class Ex04 {

    public static void main(String[] args) {

        Data d[] = new Data[2];

        d[0] = new Data();

        d[0].doA(0);
        d[1].doA(1);

    }

}
