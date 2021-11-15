public class Friend {
    String name;
    String tel;

    public Friend(String name, String tel) {
        this.name = name;
        this.tel = tel;
    }

    public void showInfo() {}
}

class UnivFriend extends Friend {
    private String major;

    UnivFriend(String name, String tel, String major) {
        super(name, tel);
        this.major = major;
    }

    public void showInfo() {
        System.out.println("name = " + name);
        System.out.println("tel = " + tel);
        System.out.println("major = " + major);
    }
}

class CompFriend extends Friend {
    private String department;

    public CompFriend(String name, String tel, String department) {
        super(name, tel);
        this.department = department;
    }

    public void showInfo() {
        System.out.println("name = " + name);
        System.out.println("tel = " + tel);
        System.out.println("department = " + department);
    }
}