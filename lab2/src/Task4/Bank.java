package Task4;

import java.util.Vector;

class Bank {
    private Vector<Account> accounts = new Vector<>();

    public void addAccount(Account account) {
        accounts.add(account);
    }

    public void closeAccount(int accountNumber) {
        for (Account account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                accounts.remove(account);
                break;
            }
        }
    }

    public void update() {
        for (Account account : accounts) {
            if (account instanceof SavingsAccount) {
                SavingsAccount savingsAccount = (SavingsAccount) account;
                savingsAccount.addInterest();
            } else if (account instanceof CheckingAccount) {
                CheckingAccount checkingAccount = (CheckingAccount) account;
                checkingAccount.deductFee();
            }
        }
    }

    public void printAccounts() {
        for (Account account : accounts) {
            account.print();
        }
    }
}
