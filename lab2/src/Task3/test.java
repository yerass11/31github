package Task3;

public class test {
    public static void main(String[] args) {

        Queen rock = new Queen(new Position('d', '4'), Color.WHITE);

        Position newPos1 = new Position('h', '4');
        System.out.println("legal horizontal move : " + (rock.isLegalMove(newPos1) ? "PASSED" : "FAILED"));

        Position newPos2 = new Position('d', '7');
        System.out.println("Testing legal vertical move to d7: " + (rock.isLegalMove(newPos2) ? "PASSED" : "FAILED"));


        Position newPos3 = new Position('f', '6');
        System.out.println("illegal diagonal: " + (rock.isLegalMove(newPos3) ? "PASSED" : "FAILED"));

        Position newPos4 = new Position('d', '4');
        System.out.println("no move: " + (!rock.isLegalMove(newPos4) ? "PASSED" : "FAILED"));
        
        
        
    }
}
