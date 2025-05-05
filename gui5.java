import java.awt.*;
import java.awt.event.*;

public class gui5 {
    
}

class JsmFrame{
    public JsmFrame(String title)
    {
        Frame f = new Frame(title);
        f.setSize(400,400);
        f.setLayout(new GridLayout(2,1,20,40));
        f.setVisible(true);

        Button b1 = new Button("Submit");
        b1.setBounds(50,100,50,50);
        f.add(b1);
        f.addWindowListener(new JsmFrameListener());
    }

}

class JsmFrameListener extends WindowAdapter
{

}