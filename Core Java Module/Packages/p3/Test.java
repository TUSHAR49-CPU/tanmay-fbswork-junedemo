package p3;
import p1.Employee;
import p2.Admin;
import p2.HR;
import p2.SalesManager;

public class Test {

	public static void main(String[] args) {
		
		
		Employee[] emp = new Employee[3];

		emp[0] = new HR(101, "Yash", 30000, 5000);

		emp[1] = new SalesManager(102, "Harshal", 40000, 8000, 120);

		emp[2] = new Admin(103, "Simran", 35000, 6000);

		for (int i = 0; i < emp.length; i++) {

		System.out.println("-------------------------");

		System.out.println(emp[i]);

		System.out.println("Calculated Salary: " + emp[i].calSal());
		}

	}

}
