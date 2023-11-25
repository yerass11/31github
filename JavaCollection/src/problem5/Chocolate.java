package problem5;

public class Chocolate implements Comparable<Chocolate> {

	 private double weight;
	 private String name;

	    public Chocolate(double weight, String name) {
	        this.weight = weight;
	        this.name = name;
	    }

	    public double getWeight() {
	        return weight;
	    }

	    public int compareTo(Chocolate other) {
	        return Double.compare(this.weight, other.weight);
	    }

	    @Override
	    public String toString() {
	        return name + " - " + weight + "g";
	    }
	}


