class AA {
}

public class Ex01 {

    public static void main(String[] args) {

        int arr[] = new int[5];
        for (int temp : arr)
            System.out.println("temp = " + temp);

        System.out.println("arr.length = " + arr.length);

        String sarr[] = new String[5];
        for (String temp : sarr)
            System.out.println("temp = " + temp);

        System.out.println("sarr.length = " + sarr.length);

        AA aa[] = new AA[5];
        for (AA temp : aa)
            System.out.println("temp = " + temp);

        System.out.println("aa.length = " + aa.length);

    }

}
