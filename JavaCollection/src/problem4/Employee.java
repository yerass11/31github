
package problem4;

import java.util.*;

public class Employee extends Person implements  Comparable<Employee>, Cloneable  {
	protected double annualSalary;
    protected Date hireDate;
    private String nationalInsuranceNumber;

	public Employee(String name, double annualSalary, Date hireDate, String nationalInsuranceNumber) {
		super(name);
		this.annualSalary = annualSalary;
        this.hireDate = hireDate;
        this.nationalInsuranceNumber = nationalInsuranceNumber;


	}
	  public double getAnnualSalary() {
	        return annualSalary;
	    }

	    public Date getHireDate() {
	        return hireDate;
	    }

	    public String getNationalInsuranceNumber() {
	        return nationalInsuranceNumber;
	    }

	    @Override
	    public String toString() {
	        return "Employee [name=" + getName() + ", annualSalary=" + annualSalary +
	                ", hireDate=" + hireDate + ", nationalInsuranceNumber=" + nationalInsuranceNumber + "]";
	    }
	    @Override
	    public boolean equals(Object o) {
	    	if (this == o)
	    		return true;
	    	if (o == null)
	    		return false;
	    	if (getClass() != o.getClass())
				return false;
	    	Employee employee = (Employee) o;
	    	return  Double.compare(employee.annualSalary, annualSalary) == 0 &&
	                hireDate.equals(employee.hireDate) &&
	                nationalInsuranceNumber.equals(employee.nationalInsuranceNumber);
	    }
	    @Override
	    public Object clone() throws CloneNotSupportedException {
	        return super.clone();
	    }

	    public int compareTo(Employee other) {
	        int salaryComparison = Double.compare(annualSalary, other.annualSalary);
	        if (salaryComparison != 0) {
	            return salaryComparison;
	        }
	        return hireDate.compareTo(other.hireDate);
	    }
}
