package p2;

import p1.Employee;

public class HR extends Employee {
private double commission;

	public HR(int id,String name,double salary,double commission) {
		super(id,name,salary);
		this.commission = commission;
	}
	public void setCommission(double com)
	{
		this.commission=com;
	}
	public double getCommission()
	{
		return commission;
	}
	
	public String toString() {
		
		return super.toString()+"\nCommission: "+this.commission;
	}
	
	public double calSal() {
		
		return getSalary()+commission;
	}
	
}
