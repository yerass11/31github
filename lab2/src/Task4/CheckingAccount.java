package Task4;

class CheckingAccount extends Account {
    private int transactionCount;
    private int freeTransactions;

    public CheckingAccount(int accountNumber, int freeTransactions) {
        super(accountNumber);
        this.transactionCount = 0;
        this.freeTransactions = freeTransactions;
    }

    public void deductFee() {
        int totalTransactions = transactionCount - freeTransactions;
        if (totalTransactions > 0) {
            double fee = totalTransactions * 0.02;
            withdraw(fee);
        }
    }

    @Override
    public void deposit(double sum) {
        super.deposit(sum);
        transactionCount++;
    }

    @Override
    public void withdraw(double sum) {
        super.withdraw(sum);
        transactionCount++;
    }

    @Override
    public String toString() {
        return super.toString() + ", Transaction Count: " + transactionCount;
    }
}
