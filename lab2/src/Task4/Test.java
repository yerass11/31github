package Task4;

public class Test {
    public static void main(String[] args) {
        Bank bank = new Bank();

        SavingsAccount savingsAccount = new SavingsAccount(1, 0.05);
        CheckingAccount checkingAccount = new CheckingAccount(2, 5);

        bank.addAccount(savingsAccount);
        bank.addAccount(checkingAccount);

        savingsAccount.deposit(1000);
        checkingAccount.deposit(500);

        bank.update();

        bank.printAccounts();
    }
}
