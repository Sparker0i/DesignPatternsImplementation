import java.util.ArrayList;

public class AdapterDemo {
    public static void main(String[] args) {
        SensorFactory sf = new SensorFactory();
        ArrayList<TempSensor> sensors = sf.getSensors();

        double temp = 0;
        for (TempSensor sensor : sensors)
            temp += sensor.getTemperature();

        System.out.println("Temperature : " + temp);
    }
}