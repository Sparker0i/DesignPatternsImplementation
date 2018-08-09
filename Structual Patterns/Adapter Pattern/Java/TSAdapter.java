public class TSAdapter implements TempSensor {
    TS7000 sensor;

    public TSAdapter(TS7000 sensor) {
        this.sensor = sensor;
    }

    public double getTemperature() {
        return sensor.getTemp();
    }
}