public class Ex02 {
    public static void main(String[] args) {

        Friend f1 = new Friend("홍길동", null);
        Friend f2 = new Friend("김길동", new Company("asw"));

        if (f1.cmp != null)
            System.out.println(f1.cmp.getcName());
        else
            System.out.println("직장 없음");
        System.out.println(f2.cmp.getcName());

    }
}
