package exam;

public class Ex13_2_2 {

    public static void main(String[] args) {

        int arr[][] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };

        System.out.println("변경 전");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++)
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }

        charr(arr);
        System.out.println("변경 후");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++)
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }

    }

    public static void charr(int[][] arr) {

        int brr[] = arr[0];
        arr[0] = arr[2];
        arr[2] = brr;

        brr = arr[2];
        arr[2] = arr[1];
        arr[1] = brr;

    }

}
