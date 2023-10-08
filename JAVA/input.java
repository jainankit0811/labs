import java.util.*;

class input{
    public static void main(String arg[]){
        
        //input for only one word in a line
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        System.out.println(name);

        // input for full line & paragraph
        Scanner s = new Scanner(System.in);
        String line = s.nextLine();
        System.out.println(line);

        

    }
}