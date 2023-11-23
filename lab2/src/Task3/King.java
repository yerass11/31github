package Task3;

public class King extends Piece{
    private Position pos;
    private Color Side;

    public King() {
    }

    public King(Position pos, Color side) {
        this.pos = pos;
        Side = side;
    }

    @Override
    boolean isLegalMove(Position newPos) {
        if(pos == newPos) return false;
        int xDiff = pos.getXDiff(newPos);
        int yDiff = pos.getYDiff(newPos);
        if(xDiff < 2 && yDiff < 2) return true;
        return false;
    }

}
