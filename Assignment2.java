class Rectangle{
    double width, height;
    Rectangle(){
        this.width = 5;
        this.height = 5;
    }
    Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }

    double getArea(){
        return this.height*this.width;
    }
}

public class Assignment2{
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        System.out.println(r.getArea());
    }
}