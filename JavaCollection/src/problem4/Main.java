package problem4;

import java.util.Date;
import java.util.Vector;

class Main {
		public static void main(String[] args) throws CloneNotSupportedException {
			 
	        Employee emp1 = new Employee("Aidyn", 70000, new Date(), "123-456-789");
	        Employee emp2 = new Employee("Piko", 60000, new Date(), "987-654-321");

	     
	        Vector<Employee> team = new Vector<>();
	        team.add(emp1);
	        team.add(emp2);

	    
	        Manager manager = new Manager("Nariman", 80000, new Date(), "456-789-012", team, 5000);

	        
	        System.out.println(emp1.toString());
	        System.out.println(manager.toString());
	        System.out.println(emp1.equals(emp2)); 
	        System.out.println(manager.equals(emp1)); 

	        
            Employee clonedEmp = (Employee) emp1.clone();
            Manager clonedManager = (Manager) manager.clone();

            System.out.println(clonedEmp.toString());
            System.out.println(clonedManager.toString());

            System.out.println(emp1.equals(clonedEmp)); 
            System.out.println(manager.equals(clonedManager)); 

	        

	}

}
