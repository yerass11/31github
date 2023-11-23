package Task4;

import java.util.Vector;

class Account {
    private double balance;
    private int accNumber;

    public Account(int a) {
        balance = 0.0;
        accNumber = a;
    }

    public void deposit(double sum) {
        balance += sum;
    }

    public void withdraw(double sum) {
        balance -= sum;
    }

    public double getBalance() {
        return balance;
    }

    public int getAccountNumber() {
        return accNumber;
    }

    public void transfer(double amount, Account other) {
        if (this.balance >= amount) {
            this.balance -= amount;
            other.balance += amount;
        } else {
            System.out.println("No money, no funny, no transfer bby)))");
        }
    }

    @Override
    public String toString() {
        return "Account Number: " + accNumber + ", Balance: $" + balance;
    }

    public final void print() {
        System.out.println(toString());
    }
}