public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        // Test Case1
        System.out.println("Kid User - Age 10, Book Type Kids");
        KidUser kid1 = new KidUser(10, "Kids");
        kid1.registerAccount();
        kid1.requestBook();

        System.out.println();

        // Test Case2
        System.out.println("Kid User - Age 18, Book Type Fiction");
        KidUser kid2 = new KidUser(18, "Fiction");
        kid2.registerAccount();
        kid2.requestBook();

        System.out.println();

        // Adult User Test Case1
        System.out.println("Adult User - Age 5, Book Type Kids");
        AdultUser adult1 = new AdultUser(5, "Kids");
        adult1.registerAccount();
        adult1.requestBook();

        System.out.println();

        // Adult User Test Case2
        System.out.println("Adult User - Age 23, Book Type Fiction");
        AdultUser adult2 = new AdultUser(23, "Fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}
