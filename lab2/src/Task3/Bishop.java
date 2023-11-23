package Task3;


public class Bishop extends Piece {
    private Position pos;
    private Color side;

    public Bishop() {
    }

    public Bishop(Position pos, Color side) {
        this.pos = pos;
        this.side = side;
    }

    @Override
    boolean isLegalMove(Position newPos) {
        if (pos.equals(newPos)) return false;
        int xDiff = Math.abs(pos.getXDiff(newPos));
        int yDiff = Math.abs(pos.getYDiff(newPos));
        if (xDiff == yDiff) return true;
        return false;
    }
}