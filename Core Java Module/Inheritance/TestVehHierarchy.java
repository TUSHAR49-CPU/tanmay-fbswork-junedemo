class Vehicle{
	
	int number;
	int model;
	String companyName;
	int noOfWheels;
	double price;
	
	Vehicle() {
		
		super();
		this.number = 0;
		this.model = 0;
		this.companyName = "NA";
		this.noOfWheels = 0;
		this.price = 0;
	}

	Vehicle(int number, int model, String companyName, int noOfWheels, double price) {
		super();
		this.number = number;
		this.model = model;
		this.companyName = companyName;
		this.noOfWheels = noOfWheels;
		this.price = price;
	}

	int getNumber() {
		return number;
	}

	void setNumber(int number) {
		this.number = number;
	}

	int getModel() {
		return model;
	}

	void setModel(int model) {
		this.model = model;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	int getNoOfWheels() {
		return noOfWheels;
	}

	void setNoOfWheels(int noOfWheels) {
		this.noOfWheels = noOfWheels;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this.price = price;
	}
	
	void display()
	{
		System.out.println("Number is: "+number);
		System.out.println("Model is: "+model);
		System.out.println("Company Name: "+companyName);
		System.out.println("No of Wheels: "+noOfWheels);
		System.out.println("Price is: "+price);
	}
}
class Bike extends Vehicle
{
	int noOfStands;
	int noOfHelmets;
	String category;
	
	Bike() {
		super();
		this.noOfStands = 0;
		this.noOfHelmets = 0;
		this.category = "ng";
	}
	
	Bike(int number, int model, String companyName, int noOfWheels, double price, int noOfStands, int noOfHelmets, String category) {
		super(number,model,companyName,noOfWheels,price);
		this.noOfStands = noOfStands;
		this.noOfHelmets = noOfHelmets;
		this.category = category;
	}

	int getNoOfStands() {
		return noOfStands;
	}

	void setNoOfStands(int noOfStands) {
		this.noOfStands = noOfStands;
	}

	int getNoOfHelmets() {
		return noOfHelmets;
	}

	void setNoOfHelmets(int noOfHelmets) {
		this.noOfHelmets = noOfHelmets;
	}

	String getCategory() {
		return category;
	}

	void setCategory(String category) {
		this.category = category;
	}
	void display()
	{
		super.display();
		System.out.println("No of Stands:"+noOfStands);
		System.out.println("No of Helmets:"+noOfHelmets);
		System.out.println("Category:"+category);
	}
}
class Car extends Vehicle{
	
	String powerSteering;
	String driveMode;
	String parkingAssistSensors;
	
	Car() {
		super();
		this.powerSteering = "Not given";
		this.driveMode = "n";
		this.parkingAssistSensors = "Not Given";
	}

	Car(int number, int model, String companyName, int noOfWheels, double price, String powerSteering, String driveMode, String parkingAssistSensors) {
		
		super(number,model,companyName,noOfWheels,price);
		this.powerSteering = powerSteering;
		this.driveMode = driveMode;
		this.parkingAssistSensors = parkingAssistSensors;
	}

	String getPowerSteering() {
		return powerSteering;
	}

	void setPowerSteering(String powerSteering) {
		this.powerSteering = powerSteering;
	}

	String getDriveMode() {
		return driveMode;
	}

	void setDriveMode(String driveMode) {
		this.driveMode = driveMode;
	}

	String getParkingAssistSensors() {
		return parkingAssistSensors;
	}

	void setParkingAssistSensors(String parkingAssistSensors) {
		this.parkingAssistSensors = parkingAssistSensors;
	}
	
	void display()
	{
		super.display();
		System.out.println("Power Steering:"+powerSteering);
		System.out.println("Drive Mode:"+driveMode);
		System.out.println("Parking Assist Sensors:"+parkingAssistSensors);
	}
}
class Bus extends Vehicle{
	int passengerCapacity;
	int standingCapacity;
	
	Bus() {
		super();
		this.passengerCapacity = 0;
		this.standingCapacity = 0;
	}
	Bus(int number, int model, String companyName, int noOfWheels, double price, int passengerCapacity, int standingCapacity) {
		super(number,model,companyName,noOfWheels,price);
		this.passengerCapacity = passengerCapacity;
		this.standingCapacity = standingCapacity;
	}
	int getPassengerCapacity() {
		return passengerCapacity;
	}
	void setPassengerCapacity(int passengerCapacity) {
		this.passengerCapacity = passengerCapacity;
	}
	int getStandingCapacity() {
		return standingCapacity;
	}
	void setStandingCapacity(int standingCapacity) {
		this.standingCapacity = standingCapacity;
	}
	
	void display()
	{
		super.display();
		System.out.println("Passenger Capacity:"+passengerCapacity);
		System.out.println("Standing Capacity:"+standingCapacity);
	}
}
class TestVehHierarchy {

	public static void main(String[] args) {
		
		Vehicle v1;
				
		v1=new Car(8329,2003,"Tata",4,1000000,"Yes","Sport","Yes");
		v1.display();
		
		v1 = new Bus(1234, 2020, "Volvo", 6, 5000000, 50, 20);
		v1.display();
		
		v1=new Bike(3952,2004,"Honda",2,100000,1,1,"Scooty");
		v1.display();
		
	}

}
