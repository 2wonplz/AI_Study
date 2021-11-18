public class SPrintDriver implements Printable{

    @Override
    public void print(String doc) {
        System.out.println("Samsung Printer");
        System.out.println(doc);
    }
}
