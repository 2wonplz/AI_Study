import java.util.Objects;

class INum {
    int num;

    public INum(int num) {
        this.num = num;
    }

    @Override
    public boolean equals(Object o) {
        return this.num == ((INum) o).num;
    }
}

public class Ex02 {

    public static void main(String[] args) {

        INum i1 = new INum(10);
        INum i2 = new INum(10);
        INum i3 = new INum(10);

        i1 = i3;
        if (i1 == i2)
            System.out.println("i1 == i2");
        if (i1 == i3)
            System.out.println("i1 == i3");
        if (i1.equals(i2))
            System.out.println("i1 equals i2");
        if (i1.equals(i3))
            System.out.println("i1 equals i3");

        i1.num = 30;
        System.out.println("i3.num = " + i3.num);


    }

}
