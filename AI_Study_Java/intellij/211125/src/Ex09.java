import java.util.Arrays;

class INum {
    private int num;

    public INum(int num) {
        this.num = num;
    }

    @Override
    public boolean equals(Object obj) {
        if (this.num == ((INum) obj).num)
            return true;
        else
            return false;
    }
}

public class Ex09 {

    public static void main(String[] args) {

        INum[] iNums1 = new INum[3];
        INum[] iNums2 = new INum[3];

        iNums1[0] = new INum(3);
        iNums2[0] = new INum(3);
        iNums1[1] = new INum(4);
        iNums2[1] = new INum(4);
        iNums1[2] = new INum(5);
        iNums2[2] = new INum(5);

        System.out.println(Arrays.equals(iNums1, iNums2));

    }

}
