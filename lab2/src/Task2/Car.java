package Task2;

class Car extends Vehicle {
    private boolean engineRunning;

    public Car(String licensePlate) {
        super(licensePlate);
        this.engineRunning = false;
    }

    @Override
    public void startEngine() {
        if (!engineRunning) {
            System.out.println("Starting the engine of the car.");
            engineRunning = true;
        } else {
            System.out.println("The car engine is already running.");
        }
    }
}
