abstract class ElectricityBill{
	String customerName;
	double units;
	
	ElectricityBill() {
		super();
		this.customerName = "Cn";
		this.units = 0;
	}
	ElectricityBill(String customerName, double units) {
		super();
		this.customerName = customerName;
		this.units = units;
	}
	
	String getCustomerName() {
		return customerName;
	}
	void setCustomerName(String customerName) {
		this.customerName = customerName;
	}
	double getUnits() {
		return units;
	}
	void setUnits(double units) {
		this.units = units;
	}
	
	void showUsage() {
		System.out.println("Customer Name: "+this.customerName);
		System.out.println("Units Consumed: "+this.units);
	}
	abstract double calculateBill();
	
	final void generateBill()
    {
        double bill = calculateBill();
        double tax = bill * 0.05;
        double finalBill = bill + tax + 50;

        showUsage();
        System.out.println("Bill Amount: Rs." + bill);
        System.out.println("Tax (5%): Rs." + tax);
        System.out.println("Fixed Charge: Rs.50");
        System.out.println("Final Bill Amount: Rs." + finalBill);
    }
	
	public String toString() {
		
		return "Customer Name: "+this.customerName+"\nUnits: "+this.units;
	}
	
}
class Residential extends ElectricityBill
{
	Residential(String customerName,double units){
		super(customerName,units);
	}
	 double calculateBill()
	    {
	        double bill = 0;

	        if(units <= 100)
	            bill = units * 3;
	        else if(units <= 200)
	            bill = 100 * 3 + (units - 100) * 5;
	        else
	            bill = 100 * 3 + 100 * 5 + (units - 200) * 7;

	        return bill;
	    }
}

class Commercial extends ElectricityBill
{
	Commercial(String customerName,double units){
		super(customerName,units);
	}
	double calculateBill()
    {
        double bill = units * 6.5;

        if(units < 200)
        {
            bill = 1500;
        }

        if(units > 1000)
        {
            double surcharge = bill * 0.08;
            bill = bill + surcharge;
        }
        return bill;
    }

}

class TestElectricityBill{

	public static void main(String[] args) {
		
		ElectricityBill eb1;
		
		System.out.println("======Residential Bill====");
		
		eb1= new Residential("Tanmay", 250);
		eb1.generateBill();
		System.out.println();
		
		System.out.println("======Commercial Bill====");
				
        eb1 = new Commercial("ABC Shop", 450);
        eb1.generateBill();


	}

}
