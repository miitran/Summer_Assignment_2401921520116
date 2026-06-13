package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test {
    public static void main(String[] args)
    {
        // Intance of Veena and Calling Play()
        Veena v=new Veena();
        v.play();

        //Instance of Saxophone and Calling Play()
        Saxophone s =new Saxophone();
        s.play();

        //Playable Interface
        Playable p;

        p= new Veena();
        p.play();

        p=new Saxophone();
        p.play();
    }
 
}
