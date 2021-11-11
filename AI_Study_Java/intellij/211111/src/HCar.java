class Car {

    String name;

    public void tellName() {
        System.out.println("name = " + name);
    }

}

public class HCar extends Car {

    String brand;

    public HCar() {
        brand = "현대";
        name = "아반떼";
    }

    public void tellInfo() {
        tellName();
        System.out.println("brand = " + brand);
    }

    public static void main(String[] args) {

        HCar hCar = new HCar();
        hCar.tellInfo();

    }

}
