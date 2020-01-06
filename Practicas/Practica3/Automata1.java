import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.Panel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.WindowConstants;

public class Automata1 extends JFrame{
               
    public Automata1() {
        super("Automata");
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setSize(600,400);
        setVisible(true);
    }
    
    public static void main(String args[]){
        new Automata1();
    }
    
    public void paint(Graphics g){
        g.drawLine(20, 200, 500, 200);
        g.drawArc(95, 120, 140, 100, 0, 180);
        g.drawArc(95, 180, 265, 100, 180, 180);
        g.drawArc(80, 175, 35, 100, 180, 180);
        g.setColor(Color.BLACK);
        g.drawString("e",160,190);
        g.drawString("q0",100,165);
        g.drawString("q2",235,165);
        g.drawString("q1",355,165);
        g.drawString("r",290,190);
        g.drawString("e",430,190);
        g.drawString("!=e",63,280);
        g.drawString("!=r",160,145);
        g.drawString("!=e",240,270);
        g.drawString("Inicio",40,190);
        g.drawString("Salida",450,170);
        g.setColor(Color.BLUE);        
        g.fillOval(70,170,60,60);
        g.setColor(Color.BLUE);
        g.fillOval(200,170,60,60);
        g.setColor(Color.BLUE);
        g.fillOval(330,170,60,60);
        g.setColor(Color.BLUE);
        g.fillOval(470,170,60,60);
    }
}

