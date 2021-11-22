package exam;

// 19.1
class Point {
    private int xPos;
    private int yPos;

    public Point(int x, int y) {
        xPos = x;
        yPos = y;
    }

    public void setxPos(int xPos) {
        this.xPos = xPos;
    }

    public void setyPos(int yPos) {
        this.yPos = yPos;
    }

    @Override
    public boolean equals(Object obj) {
        Point p = (Point) obj;

        if (xPos == p.xPos && yPos == p.yPos)
            return true;
        else
            return false;
    }
}

class Rectangle {
    private Point upperLeft;
    private Point lowerRight;

    public Rectangle(int x1, int y1, int x2, int y2) {
        upperLeft = new Point(x1, y1);
        lowerRight = new Point(x2, y2);
    }

    public void setUpperLeft(Point upperLeft) {
        this.upperLeft = upperLeft;
    }

    public void setLowerRight(Point lowerRight) {
        this.lowerRight = lowerRight;
    }

    @Override
    public boolean equals(Object obj) {
        Rectangle r = (Rectangle) obj;

        if (upperLeft.equals(r.upperLeft) && lowerRight.equals(r.lowerRight))
            return true;
        else
            return false;
    }
}

public class Ex01 {

    public static void main(String[] args) {

        Point p1 = new Point(1, 1);
        Point p2 = new Point(1, 1);

        if (p1.equals(p2))
            System.out.println("p1과 p2는 같다.");
        else
            System.out.println("p1과 p2는 다르다.");

        p1.setxPos(2);
        p1.setyPos(2);

        if (p1.equals(p2))
            System.out.println("p1과 p2는 같다.");
        else
            System.out.println("p1과 p2는 다르다.");

        Rectangle r1 = new Rectangle(1, 1, 1, 1);
        Rectangle r2 = new Rectangle(1, 1, 1, 1);

        if (r1.equals(r2))
            System.out.println("r1과 r2는 같다.");
        else
            System.out.println("r1과 r2는 다르다.");

        r1.setUpperLeft(new Point(2, 2));
        r1.setLowerRight(new Point(2, 2));

        if (r1.equals(r2))
            System.out.println("r1과 r2는 같다.");
        else
            System.out.println("r1과 r2는 다르다.");

    }

}
