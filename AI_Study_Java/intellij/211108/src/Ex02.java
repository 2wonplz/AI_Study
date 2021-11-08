class Box {

    private String conts;

    public Box(String conts) {
        this.conts = conts;
    }

    @Override
    public String toString() {
        return "Box{" +
                "conts='" + conts + '\'' +
                '}';
    }

}

public class Ex02 {

    public static void main(String[] args) {

        Box[] boxes = new Box[3];
        for (Box temp : boxes)
            System.out.println("temp = " + temp);

        boxes[0] = new Box("사과");
        boxes[1] = new Box("바나나");
        boxes[2] = new Box("수박");

        for (Box temp : boxes)
            System.out.println("temp = " + temp);

    }

}
