public class Ex02 {

    public static void main(String[] args) {

        Friend f1 = new CompFriend("aaa", "123-4567", "dev");
        Friend f2 = new UnivFriend("bbb", "777-7777", "it");

        f1.showInfo();
        f2.showInfo();

        Friend[] frs = new Friend[10];
        int cnt = 0;
        frs[cnt++] = new CompFriend("aaa", "123-4567", "dev");
        frs[cnt++] = new UnivFriend("bbb", "777-7777", "computer");
        frs[cnt++] = new CompFriend("aaa", "123-4567", "design");
        frs[cnt++] = new UnivFriend("bbb", "777-7777", "electronics");
        frs[cnt++] = new CompFriend("aaa", "123-4567", "publisher");
        frs[cnt++] = new UnivFriend("bbb", "777-7777", "english");

        for (Friend fr : frs)
            fr.showInfo();

    }

}
