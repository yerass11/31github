package Task3;

public class Queen extends Piece{
    private Position pos;
    private Color Side;

    public Queen() {
    }

    public Queen(Position pos, Color side) {
        this.pos = pos;
        Side = side;
    }

    @Override
    boolean isLegalMove(Position newPos) {
        if(pos == newPos) return false;
        int xDiff = pos.getXDiff(newPos);
        int yDiff = pos.getYDiff(newPos);
        
        if (xDiff == 0 || yDiff == 0 || xDiff == yDiff) return true;   
        return false;
    }
}
