/*
interface ANIMAL {
    int DOG = 1;
    int CAT = 2;
}

interface PERSON {
    int MAN = 1;
    int WOMAN = 2;
}
*/

enum ANIMAL {
    DOG, CAT;
}

enum PERSON {
    MAN, WOMAN;

    @Override
    public String toString() {
        return "PERSON{}";
    }
}

public class Ex02 {
    public static void main(String[] args) {
        who(PERSON.MAN);
//        who(ANIMAL.DOG);
    }

    private static void who(PERSON man) {
        switch (man) {
            case MAN:
                System.out.println("남성 손님 입니다.");
                break;
            case WOMAN:
                System.out.println("여성 손님 입니다.");
                break;
        }
    }
}
