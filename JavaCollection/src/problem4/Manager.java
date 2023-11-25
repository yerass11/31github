package problem4;
import java.util.*;

public class Manager extends Employee{
	private Vector<Employee> team;
    private double bonus;
    public Manager(String name, double annualSalary, Date hireDate, String nationalInsuranceNumber,Vector<Employee> team, double bonus) {
    	super(name, annualSalary, hireDate, nationalInsuranceNumber);
    	this.team = team;
    	this.bonus = bonus;
}

    public Vector<Employee> getTeam() {
        return team;
    }

    public double getBonus() {
        return bonus;
    }

    @Override
    public String toString() {
        return "Manager [name=" + getName() + ", annualSalary=" + getAnnualSalary() +
                ", hireDate=" + getHireDate() + ", nationalInsuranceNumber=" + getNationalInsuranceNumber() +
                ", bonus=" + bonus + "]";
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
        	return false;
        Manager manager = (Manager) obj;
        	return Double.compare(manager.bonus, bonus) == 0 && team.equals(manager.team);
    }

    @Override
    public int compareTo(Employee other) {
        int salaryComparison = Double.compare(annualSalary, other.annualSalary);
        if (salaryComparison != 0)
			return salaryComparison;
        return hireDate.compareTo(other.hireDate);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        Manager clonedManager = (Manager) super.clone();

        clonedManager.team = (Vector<Employee>) this.team.clone();
        return clonedManager;
    }



}
