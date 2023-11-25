package problem5;
import java.util.Date;

import problem4.Employee;
public class Test {
	public static void main(String[] args) {

    Chocolate[] chocolates = {
            new Chocolate(50, "Twix"),
            new Chocolate(40, "Snickers"),
            new Chocolate(60, "KitKat")
    };

    System.out.println("Chocolates before sorting:");
    for (Chocolate chocolate : chocolates) {
        System.out.println(chocolate);
    }

    Sort.bubbleSort(chocolates); 

    System.out.println("\nChocolates after sorting by weight:");
    for (Chocolate chocolate : chocolates) {
        System.out.println(chocolate);
    }
    
    }}

