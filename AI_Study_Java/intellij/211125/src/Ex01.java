class Box implements Cloneable {
    private String element;

    public Box(String element) {

        this.element = element;
    }

    public void setElement(String element) {
        this.element = element;
    }

    @Override
    public String toString() {
        return "Box{" +
                "element='" + element + '\'' +
                '}';
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class Ex01 {

    public static void main(String[] args) throws CloneNotSupportedException {

        Box box1 = new Box("사과");
        Box box2 = (Box) box1.clone();
        box1.setElement("바나나");

        System.out.println(box1);
        System.out.println(box2);

    }

}
