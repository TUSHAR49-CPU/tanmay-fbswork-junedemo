package p2;

import p1.Employee;

public class SalesManager extends Employee{

	    private double incentive;
	    private double target;

	    public SalesManager(int id, String name, double salary,
	                         double incentive, double target) {
	        super(id, name, salary);
	        this.incentive = incentive;
	        this.target = target;
	    }

	    public double getIncentive() {
	        return incentive;
	    }

	    public double getTarget() {
	        return target;
	    }

	    public void setIncentive(double incentive) {
	        this.incentive = incentive;
	    }

	    public void setTarget(double target) {
	        this.target = target;
	    }

	    public double calSal() {
	        
	            return getSalary() + incentive;
	    }

	    public String toString() {
	        return super.toString() +
	               "\nIncentive: " + incentive +
	               "\nTarget: " + target;
	    }
}
