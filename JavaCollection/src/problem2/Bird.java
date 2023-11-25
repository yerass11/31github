package problem2;

public class Bird implements Flyable {

    boolean move = true;
    boolean fly;
    boolean forward = true;
    double maxHei;

    public Bird (boolean fly, double maxHei) {
        this.fly = fly;
        this.maxHei = maxHei;
    }

    @Override
    public boolean MoveForward() {
        if (forward)
            return true;
        return false;
    }

    @Override
    public boolean MoveRight() {
        if (move) {
            return true;
        }
        else {
            return false;
        }
    }

    @Override
    public boolean MoveLeft() {
        if (move)
            return true;
        return false;
    }

    @Override
    public boolean canFly() {
        if (fly)
            return true;
        return false;
    }

    @Override
    public double maxHeight() {
        if (!fly) return 0;
        return maxHei;
    }
}
