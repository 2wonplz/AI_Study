package exam;

public class Ex13_2_1 {

    public static void addOneDArr(int[] arr, int add) {

        for (int i = 0; i < arr.length; i++)
            arr[i] += add;

    }

    public static void addTwoDArr(int[][] arr, int add) {

        for(int temp_arr[] : arr)
            addOneDArr(temp_arr, add);

    }

}
