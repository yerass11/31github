package Task5;

abstract class Circuit {
    public abstract double getResistance();
    public abstract double getPotentialDiff();
    public abstract void applyPotentialDiff(double V);

    public double getCurrent() {
        return getPotentialDiff() / getResistance();
    }
    public double getPower(){
        return getPotentialDiff() * getPotentialDiff() / getResistance();
    }
}
