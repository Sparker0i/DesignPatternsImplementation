public class SingletonDemo {
    public static void main(String[] args) {
        SingleObject object = SingleObject.getInstance();
        object.showMessage();

        SingleObject object1 = SingleObject.getInstance();
        object1.showMessage();
    }
}