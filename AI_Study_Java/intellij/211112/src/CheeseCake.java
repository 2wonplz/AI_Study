public class CheeseCake extends Cake {

    @Override
    public void yummy() {
        System.out.println("Yummy CheeseCake");
    }

    public static void main(String[] args) {

        Cake c1 = new CheeseCake();
        Cake c2 = new Cake();

        c1.yummy();
        c2.yummy();

    }

}
