import java.awt.image.SampleModel;

class MobilePhone extends Object {

    int number;

    public MobilePhone() {
    }

    public MobilePhone(int number) {
        this.number = number;
    }

    public void answer() {
        System.out.println("Hi from " + number);
    }

    @Override
    public String toString() {
        return "MobilePhone{" +
                "number=" + number +
                '}';
    }

}

public class SmartPhone extends MobilePhone {

    private String androidVer;

    public SmartPhone(int number, String androidVer) {
        super(number);
        this.androidVer = androidVer;
    }

    public void playApp() {
        System.out.println("안드로이드 버전 = " + androidVer);
    }

    public static void main(String[] args) {

        MobilePhone mp = new MobilePhone(123);
        System.out.println(mp.toString());
        mp.answer();

        System.out.println();
        SmartPhone sp = new SmartPhone(400, "9.0");
        System.out.println(sp);
        sp.answer();
        sp.playApp();

    }

}
