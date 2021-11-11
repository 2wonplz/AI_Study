package exam;

public class Ex13_1 {

    public static int minValue(int[] arr) {

        int min = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (min > arr[i])
                min = arr[i];
        }

        return min;

    }

    public static int maxValue(int[] arr) {

        int max = arr[0];

        for (int e : arr) {
            if (max < e)
                max = e;
        }

        return max;

    }

    public static void main(String[] args) {

        int[] arr = {3, 1, 2, 4, 10, 20, 45};
        System.out.println("minValue = " + minValue(arr));
        System.out.println("maxValue = " + maxValue(arr));

    }

}
