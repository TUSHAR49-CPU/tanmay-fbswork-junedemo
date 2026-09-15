abstract class InsurancePolicy{
	String policyHolderName;
	double basePremium;
	
	InsurancePolicy() {
		super();
		this.policyHolderName = "Na";
		this.basePremium = 0;
	}
	
	InsurancePolicy(String policyHolderName, double basePremium) {
		super();
		this.policyHolderName = policyHolderName;
		this.basePremium = basePremium;
	}

	String getPolicyHolderName() {
		return policyHolderName;
	}

	void setPolicyHolderName(String policyHolderName) {
		this.policyHolderName = policyHolderName;
	}

	double getBasePremium() {
		return basePremium;
	}

	void setBasePremium(double basePremium) {
		this.basePremium = basePremium;
	}
	
	abstract double calculatePremium();
	
	void printPolicyDetails()
	{
	    System.out.println("Policy Holder Name: " + policyHolderName);
	    System.out.println("Base Premium: Rs." + basePremium);
	    System.out.println("Final Premium: Rs." + calculatePremium());
	}
}
class CarInsurance extends InsurancePolicy
{
	int carAgeInYears;
    boolean hadAccidentInLastYear;
    double carValue;

    CarInsurance(String name, double basePremium,
                 int carAgeInYears,
                 boolean hadAccidentInLastYear,
                 double carValue)
    {
        super(name, basePremium);

        this.carAgeInYears = carAgeInYears;
        this.hadAccidentInLastYear = hadAccidentInLastYear;
        this.carValue = carValue;
    }
    double calculatePremium()
    {
        double premium = basePremium;

        if(carAgeInYears <= 3)
        {
            premium = premium + (basePremium * 0.10);
        }
        else if(carAgeInYears <= 7)
        {
            premium = premium + (basePremium * 0.20);
        }
        else
        {
            premium = premium + (basePremium * 0.30);
        }
        
        if(hadAccidentInLastYear)
        {
            premium = premium + (basePremium * 0.25);
        }
        else
        {
            premium = premium - (basePremium * 0.10);
        }

        if(carValue > 1000000)
        {
            premium = premium + 2000;
        }

        return premium;
    }
	void printPolicyDetails() {
    	super.printPolicyDetails();
    	System.out.println("Car Age in years: "+this.carAgeInYears);
    	System.out.println("Had Accident in last Year: "+this.hadAccidentInLastYear);
    	System.out.println("Car Value: Rs."+this.carValue);
    }
}
class HealthInsurance extends InsurancePolicy
{
    int age;
    boolean isSmoker;
    boolean hasPreExistingDisease;

    HealthInsurance(String name, double basePremium,
                    int age,
                    boolean isSmoker,
                    boolean hasPreExistingDisease)
    {
        super(name, basePremium);

        this.age = age;
        this.isSmoker = isSmoker;
        this.hasPreExistingDisease = hasPreExistingDisease;
    }

    double calculatePremium()
    {
        double premium = basePremium;

        if(age < 30)
        {
            premium = premium + (basePremium * 0.10);
        }
        else if(age <= 45)
        {
            premium = premium + (basePremium * 0.25);
        }
        else
        {
            premium = premium + (basePremium * 0.40);
        }

        if(isSmoker)
        {
            premium = premium + (basePremium * 0.30);
        }
        else
        {
            premium = premium - (basePremium * 0.05);
        }

        if(hasPreExistingDisease)
        {
            premium = premium + (basePremium * 0.20);
        }

        return premium;
    }
	void printPolicyDetails() {
    	super.printPolicyDetails();
    	System.out.println("Age is: "+this.age);
    	System.out.println("is Smoker: "+this.isSmoker);
    	System.out.println("Has Pre Existing Disease: "+this.hasPreExistingDisease);
    }
}
class TestInsurancePremium {

	public static void main(String[] args) {
	
        InsurancePolicy ip1; 
        
		System.out.println("====CarInsurance Premium===");
		
        ip1= new CarInsurance("Tanmay", 20000, 5, true, 2000000);
        ip1.printPolicyDetails();
		System.out.println();

		System.out.println("====HealthInsurance Premium===");
		
        ip1=new HealthInsurance("Rahul", 10000, 35, false, true);
        ip1.printPolicyDetails();
	}
}


