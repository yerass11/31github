package Task3;

public class Pawn extends Piece{
    private Position pos;
    private Color Side;

    public Pawn() {
    }

    public Pawn(Position pos, Color side) {
        this.pos = pos;
        Side = side;
    }

    @Override
    boolean isLegalMove(Position newPos) {
        if(pos == newPos) return false;
        int xDiff = pos.getXDiff(newPos);
        int yDiff = pos.getYDiff(newPos);
        if(xDiff == 0 && yDiff < 2) return true;
        return false;
    }

}

