public class Ex03 {

    public static void main(String[] args) {

        String[] sr = new String[7];
        sr[0] = new String("Java");
        sr[1] = new String("System");
        sr[2] = new String("Compiler");
        sr[3] = new String("Park");
        sr[5] = new String("Tree");
        sr[4] = new String("Dinner");
        sr[6] = new String("Brunch Cafe");

        System.out.println("Java.length = " + "java".length());

        int cnum = 0;
        for (String temp : sr)
            cnum += temp.length();

        System.out.println("cnum = " + cnum);

    }

}
