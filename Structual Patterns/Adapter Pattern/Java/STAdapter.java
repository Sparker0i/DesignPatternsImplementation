public class STAdapter implements TempSensor {
    SuperTemp sensor;

    public STAdapter(SuperTemp sensor) {
        this.sensor = sensor;
    }

    public double getTemperature() {
        return sensor.current_reading() * 10;
    }
}