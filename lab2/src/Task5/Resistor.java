package Task5;

public class Resistor extends Circuit {
    private double resistance;
    private double potentialDiff;

    public Resistor(double resistance) {
        this.resistance = resistance;
        this.potentialDiff = 0.0;
    }

    @Override
    public double getResistance() {
        return resistance;
    }

    @Override
    public double getPotentialDiff() {
        return potentialDiff;
    }

    @Override
    public void applyPotentialDiff(double V){
        this.potentialDiff = V;
    }
}
