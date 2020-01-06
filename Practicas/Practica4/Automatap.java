import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.WindowConstants;

public class Automatap extends JFrame{
               
    public Automatap() {
        super("Automata");
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setSize(540,400);
        setVisible(true);
    }
    
    public static void main(String args[]){
        new Automatap();
    }
    
    public void paint(Graphics g){
        g.drawArc(115, 110, 265, 200, 180, 360);
        g.drawArc(85, 75, 330, 270, 180, 360);
        g.setColor(Color.BLACK);
        g.drawString("q0",100,100);        
        g.drawString("q1",390,100);
        g.drawString("q2",90,330);
        g.drawString("q3",390,330);
        g.drawString("1",245,90);
        g.drawString("1",245,130);
        g.drawString("1",245,300);
        g.drawString("1",245,340);
        g.drawString("0",90,220);
        g.drawString("0",120,220);
        g.drawString("0",365,220);
        g.drawString("0",400,220);
        g.setColor(Color.RED);        
        g.fillOval(90,100,80,80);
        g.setColor(Color.BLUE);        
        g.fillOval(95,105,70,70);
        g.setColor(Color.BLUE);
        g.fillOval(90,240,80,80);
        g.setColor(Color.BLUE);
        g.fillOval(330,100,80,80);
        g.setColor(Color.BLUE);
        g.fillOval(330,240,80,80);
    }
}
