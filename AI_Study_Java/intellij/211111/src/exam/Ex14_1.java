package exam;

class Car {
    int gasolineGauge;

    public Car(int gasolineGauge) {
        this.gasolineGauge = gasolineGauge;
    }
}

class HybridCar extends Car {
    int electricGauge;

    public HybridCar(int gasolineGauge, int electricGauge) {
        super(gasolineGauge);
        this.electricGauge = electricGauge;
    }
}

class HybridWaterCar extends HybridCar {
    int waterGauge;

    public void showCurrentGauge() {
        System.out.println("잔여 가솔린 : " + gasolineGauge);
        System.out.println("잔여 전기량 : " + electricGauge);
        System.out.println("잔여 워터량 : " + waterGauge);
    }

    public HybridWaterCar(int gasolineGauge, int electricGauge, int waterGauge) {
        super(gasolineGauge, electricGauge);
        this.waterGauge = waterGauge;
    }
}

public class Ex14_1 {

    public static void main(String[] args) {

        HybridWaterCar hybridWaterCar = new HybridWaterCar(100, 50, 80);
        hybridWaterCar.showCurrentGauge();

    }

}
