package exam;

class Business implements Cloneable {
    private String company;
    private String work;

    public Business(String company, String work) {
        this.company = company;
        this.work = work;
    }

    public void showBusinessInfo() {
        System.out.println("회사 : " + company);
        System.out.println("업무 : " + work);
    }

    @Override
    protected Business clone() throws CloneNotSupportedException {
        Business cp = (Business) super.clone();
        return cp;
    }
}

class PersonalInfo implements Cloneable {
    private String name;
    private int age;
    private Business bz;

    public PersonalInfo(String name, int age, String company, String work) {
        this.name = name;
        this.age = age;
        bz = new Business(company, work);
    }

    public void showPersonalInfo() {
        System.out.println("이름 : " + name);
        System.out.println("나이 : " + age);
        bz.showBusinessInfo();
    }

    @Override
    protected PersonalInfo clone() throws CloneNotSupportedException {
        PersonalInfo cp = (PersonalInfo) super.clone();
        cp.bz = bz.clone();
        return cp;
    }
}

public class Ex02 {

    public static void main(String[] args) {

        try {
            PersonalInfo p = new PersonalInfo("aaa", 20, "kb", "student");
            PersonalInfo cp = p.clone();
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }

    }

}
