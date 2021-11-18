public class LPrintDriver implements Printable {

    @Override
    public void print(String doc) {
        System.out.println("LG Printer");
        System.out.println(doc);
    }
}
