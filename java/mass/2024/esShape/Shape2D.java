import java.util.ArrayList;

public abstract class Shape2D {

    public double perimeter;
    public double area;

    public ArrayList<Double> lati;
    
    public Shape2D(ArrayList<Double> lati){
        this.lati = lati;
    }

    public double calculatePerimeter(){
        double sum = 0;
        for(int i=0;i<lati.size();i++){
            sum += lati.get(i);
        }
        // for(double l : lati){
        //     sum += l;
        // }
        return sum;
    }

    public abstract double calculateArea();

}
