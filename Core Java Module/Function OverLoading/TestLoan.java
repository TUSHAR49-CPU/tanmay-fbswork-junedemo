class Student {
    int rollNo;
    String name;
    double percentage;
    
    Student() {
        this.rollNo = 0;
        this.name = "NA";
        this.percentage = 0;
    }
    Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }
	int getRollNo() {
		return rollNo;
	}
	void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getPercentage() {
		return percentage;
	}
	void setPercentage(double percentage) {
		this.percentage = percentage;
	}
	void display() {
		System.out.println("Roll No: " + rollNo); 
		System.out.println("Name: " + name);
		System.out.println("Percentage: " + percentage); 	
	}
}

class Employee {
    int id;
    String name;
    double annualSalary;
    
    Employee() {
        this.id = 0;
        this.name ="NA";
        this.annualSalary = 0;
    }
    Employee(int id, String name, double annualSalary) {
        this.id = id;
        this.name = name;
        this.annualSalary = annualSalary;
    }
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getAnnualSalary() {
		return annualSalary;
	}
	void setAnnualSalary(double annualSalary) {
		this.annualSalary = annualSalary;
	}
	void display() {
		System.out.println("ID: " + id);
		System.out.println("Name: " + name);
		System.out.println("Annual Salary: " + annualSalary);
	}
}

class Bank {

    double approveLoan(Student s) {
    	double loanAmt;
        if (s.percentage > 80) {
            loanAmt=200000;
        }
        else if (s.percentage >= 60) {
            loanAmt=100000;
        }
        else if (s.percentage >= 40) {
            loanAmt=50000;
        }
        else {
            System.out.println("No loan approved...");
            loanAmt=0;
        }
        return loanAmt;
        
    }
    
    double approveLoan(Employee e) {
    	double loanAmt;
        if (e.annualSalary > 12) {
            loanAmt=700000;
        }
        else if (e.annualSalary >= 10) {
            loanAmt=600000;
        }
        else if (e.annualSalary >= 6) {
           loanAmt=500000;
        }
        else if (e.annualSalary >= 4) {
            loanAmt=400000;
        }
        else {
            System.out.println("No loan approved");
            loanAmt=0;
        }
        return loanAmt;
       
    }
}

class TestLoan{
    public static void main(String[] args) {

        Bank b = new Bank();
        
        Student s1 = new Student(101, "Rahul", 85);
        double studentLoan=b.approveLoan(s1);
        s1.display();
        System.out.println("Approved Loan: " +studentLoan);
        
        Employee e1 = new Employee(201, "Raj", 14000);
        double employeeLoan=b.approveLoan(e1);
        e1.display();
        System.out.println("Approved Loan: " + employeeLoan);
        }
}

