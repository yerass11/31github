package Task3;

import java.util.Objects;

public class Position {
    private char x;
    private char y;

    public Position() {
    }

    public Position(char x, char y) {
        this.x = x;
        this.y = y;
    }

    public char getX() {
        return x;
    }

    public void setX(char x) {
        this.x = x;
    }

    public char getY() {
        return y;
    }

    public void setY(char y) {
        this.y = y;
    }

    public int getXDiff(Position newPos){
        return Math.abs(this.getX() - newPos.getX());
    }

    public int getYDiff(Position newPos){
        return Math.abs(this.getY() - newPos.getY());
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Position position = (Position) o;
        return getX() == position.getX() && getY() == position.getY();
    }

    @Override
    public int hashCode() {
        return Objects.hash(getX(), getY());
    }
}
