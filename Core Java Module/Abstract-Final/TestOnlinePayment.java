abstract class Payment {
    protected String paymentId;
    protected double amount;
    protected String payerName;
    protected String status;

    Payment(String paymentId, double amount, String payerName) {
        this.paymentId = paymentId;
        this.amount = amount;
        this.payerName = payerName;
        this.status = "PENDING";
    }

    void printSummary() {
        System.out.println("Payment ID: " + paymentId);
        System.out.println("Amount: " + amount);
        System.out.println("Payer Name: " + payerName);
        System.out.println("Status: " + status);
    }

    final void process() {
        System.out.println("\nProcessing Payment...");
        
        if (!validate()) {
            status = "FAILED";
            System.out.println("Validation failed.");
            return;
        }

        deductAmount();
        sendNotification();

        status = "SUCCESS";
        System.out.println("Payment processed successfully.");
    }
    abstract boolean validate();

    abstract void deductAmount();

    abstract void sendNotification();
}

class CardPayment extends Payment {
    private String cardNumber;
    private String cvv;

    CardPayment(String paymentId, double amount, String payerName,
                String cardNumber, String cvv) {
        super(paymentId, amount, payerName);
        this.cardNumber = cardNumber;
        this.cvv = cvv;
    }

    boolean validate() {
        return cardNumber.matches("\\d{16}")
                && cvv.matches("\\d{3}")
                && amount > 0;
    }

    void deductAmount() {
        System.out.println("Amount ₹" + amount + " deducted from card.");
    }

    void sendNotification() {
        System.out.println("Card payment notification sent to " + payerName);
    }
}
    
class UPIPayment extends Payment {
    private String upiId;

    UPIPayment(String paymentId, double amount, String payerName,
               String upiId) {
        super(paymentId, amount, payerName);
        this.upiId = upiId;
    }

    boolean validate() {
        return upiId.contains("@") && amount > 0;
    }

    void deductAmount() {
        System.out.println("Amount ₹" + amount + " deducted through UPI.");
    }

    void sendNotification() {
        System.out.println("UPI payment notification sent to " + payerName);
    }
}

class TestOnlinePayment {
    public static void main(String[] args) {

        Payment p1;
        p1 = new CardPayment("C101", 5000, "Rahul","1234567890123456", "123");
        System.out.println("===== CARD PAYMENT =====");
        p1.process();
        p1.printSummary();


        p1 = new UPIPayment("U101", 2500, "Priya", "priya@upi");

        System.out.println("\n===== UPI PAYMENT =====");
        p1.process();
        p1.printSummary();
    }
}