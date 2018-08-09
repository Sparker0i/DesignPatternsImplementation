import java.util.ArrayList;

public class SensorFactory {
    public ArrayList<TempSensor> getSensors() {
        ArrayList<TempSensor> sensors = new ArrayList<>();

        TS7000 ts1;
        TSAdapter tsadapter;
        ts1 = new TS7000();
        ts1.setTemp(4.0);
        tsadapter = new TSAdapter(ts1);
        sensors.add(tsadapter);

        ts1 = new TS7000();
        ts1.setTemp(5.0);
        tsadapter = new TSAdapter(ts1);
        sensors.add(tsadapter);

        ts1 = new TS7000();
        ts1.setTemp(6.0);
        tsadapter = new TSAdapter(ts1);
        sensors.add(tsadapter);

        SuperTemp st1 = new SuperTemp();
        STAdapter stadapter;
        st1.setTemp(0.4);
        stadapter = new STAdapter(st1);
        sensors.add(stadapter);

        st1 = new SuperTemp();
        st1.setTemp(0.5);
        stadapter = new STAdapter(st1);
        sensors.add(stadapter);

        st1 = new SuperTemp();
        st1.setTemp(0.6);
        stadapter = new STAdapter(st1);
        sensors.add(stadapter);

        return sensors;
    }
}