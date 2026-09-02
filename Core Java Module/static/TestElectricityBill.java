class Electricity{
	static double rate;
	String consumerName;
	int consumerId;
	int units;
	static {
		 rate=10;
	}
	static double getRate() {
		return rate;
	}
	static void setRate(double r) {
		rate = r;
	}
	String getConsumerName() {
		return consumerName;
	}
	void setConsumerName(String consumerName) {
		this.consumerName = consumerName;
	}
	int getConsumerId() {
		return consumerId;
	}
	void setConsumerId(int consumerId) {
		this.consumerId = consumerId;
	}
	int getUnits() {
		return units;
	}
	void setUnits(int units) {
		this.units = units;
	}
	Electricity() {
		
		this.consumerName = "NA";
		this.consumerId = 0;
		this.units = 0;
	}
	Electricity(String consumerName, int consumerId, int units) {
	
		this.consumerName = consumerName;
		this.consumerId = consumerId;
		this.units = units;
	}
	void display()
	{
		System.out.println("Rate:"+this.rate);
		System.out.println("consumerName:"+this.consumerName);
		System.out.println("consumerId:"+this.consumerId);
		System.out.println("Units:"+this.units);
	}
	void calculate()
	{
		double billAmount=units*rate;
		System.out.println("Bill Amount:"+billAmount);
	}
}
class TestElectricityBill {

	public static void main(String[] args) {
		Electricity eb1=new Electricity("Tanmay",2044,40);
		eb1.display();
		eb1.calculate();
		
		Electricity eb2=new Electricity("Viraj",3644,45);
		eb2.display();
		eb2.calculate();
		
		Electricity eb3=new Electricity("Sahil",7544,50);
		eb3.display();
		eb3.calculate();
		
		Electricity.setRate(9);
		eb1.display();
		eb1.calculate();
		eb2.display();
		eb2.calculate();
		eb3.display();
		eb3.calculate();
		
	}

}
