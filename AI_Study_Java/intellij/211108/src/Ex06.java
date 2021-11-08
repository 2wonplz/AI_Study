class MyBox {

    private String name;
    private int boxnum;

    public MyBox(String name, int boxnum) {
        this.name = name;
        this.boxnum = boxnum;
    }

    @Override
    public String toString() {
        return "myBox{" +
                "name='" + name + '\'' +
                ", boxnum=" + boxnum +
                '}';
    }

    public int getBoxnum() {
        return boxnum;
    }

}

public class Ex06 {

    public static void main(String[] args) {

        MyBox[] myBoxes = new MyBox[3];
        myBoxes[0] = new MyBox("coffee", 101);
        myBoxes[1] = new MyBox("computer", 202);
        myBoxes[2] = new MyBox("Dress", 303);

        for (MyBox e : myBoxes) {
            if (e.getBoxnum() == 303)
                System.out.println(e);
        }

    }

}
