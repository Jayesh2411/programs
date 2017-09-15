// Processed by NMI's Java Code Viewer 4.8.1 © 1997-2000 B. Lemaire
// Website: http://njcv.htmlplanet.com	E-mail: info@njcv.htmlplanet.com
// Copy registered to Evaluation Copy
// Source File Name:   HighScore.java

import java.applet.Applet;
import java.applet.AppletContext;
import java.awt.*;
import java.io.*;
import java.net.*;
import java.util.StringTokenizer;

public class HighScore extends Frame {

    String URLSTRING;
    String INSTURL;
    Panel card1;
    Panel card2;
    Panel card2top;
    Panel card3;
    Button yesButton;
    Button noButton;
    Button postButton;
    Button cancelButton;
    Button okButton;
    Button okButton2;
    Label posLbl;
    private STextField firstNameTxt;
    private STextField nameTxt;
    private STextField emailTxt;
    private STextField countryTxt;
    private STextField ageTxt;
    private Checkbox checkbox;
    Font boldFont;
    Snake6110 owner;
    private CheckboxGroup cg1;
    private CheckboxGroup cg2;
    private Checkbox oc1;
    private Checkbox oc2;
    private Checkbox nw1;
    private Checkbox nw2;
    private Choice ageChoice;
    private boolean highEntry;
    private Label instLabel;
    public boolean dialogActive;
    Image name;
    Image ok;
    Image email;
    Image send;
    Image cancel;
    Image draw;
    Image carve;
    Image drawcarve;
    Image drawquest;
    Image carvequest;
    Image inst;
    SImageCanvas comp_name;
    SImageCanvas comp_email;
    SImageCanvas comp_send_a;
    SImageCanvas comp_cancel_a;
    SImageCanvas comp_ok;
    SImageCanvas comp_inst;
    SImageCanvas comp_draw;
    SImageCanvas comp_carve;
    SImageCanvas comp_drawcarve;
    SImageCanvas comp_drawquest;
    SImageCanvas comp_carvequest;
    int loScore;
    int hiScore;
    int level;
    private Panel currCard;
    private boolean sendFlag;

    HighScore(Snake6110 snake6110, int i) {
        super("Play the Snake");
        URLSTRING = "http://www.nokia.com/snake/snake_hs.cgi";
        INSTURL = "http://www.nokia.com/snake/rules.html";
        boldFont = new Font("Helvetica", 1, 12);
        dialogActive = true;
        sendFlag = false;
        resize(390, 430);
        sendFlag = false;
        name = snake6110.name;
        email = snake6110.email;
        send = snake6110.send;
        cancel = snake6110.cancel;
        ok = snake6110.ok;
        draw = snake6110.draw;
        carve = snake6110.carve;
        drawcarve = snake6110.drawcarve;
        drawquest = snake6110.drawquest;
        carvequest = snake6110.carvequest;
        inst = snake6110.inst;
        comp_name = new SImageCanvas(name, 356, 83);
        comp_email = new SImageCanvas(email, 384, 14);
        comp_send_a = new SImageCanvas(send, 87, 32);
        comp_cancel_a = new SImageCanvas(cancel, 83, 32);
        comp_ok = new SImageCanvas(ok, 40, 26);
        comp_carve = new SImageCanvas(carve, 311, 109);
        comp_draw = new SImageCanvas(draw, 299, 77);
        comp_drawcarve = new SImageCanvas(drawcarve, 311, 139);
        comp_drawquest = new SImageCanvas(drawquest, 214, 36);
        comp_carvequest = new SImageCanvas(carvequest, 211, 38);
        comp_inst = new SImageCanvas(inst, 264, 13);
        ageChoice = new Choice();
        ageChoice.addItem("---------");
        ageChoice.addItem(" - 12");
        ageChoice.addItem("13 - 17");
        ageChoice.addItem("18 - 25");
        ageChoice.addItem("26 - 30");
        ageChoice.addItem("31 - 35");
        ageChoice.addItem("36 - 40");
        ageChoice.addItem("41 - 45");
        ageChoice.addItem("46 - ");
        instLabel = new Label("Please read the competition rules");
        instLabel.setFont(new Font("Arial", 0, 10));
        owner = snake6110;
        Color color = new Color(156, 222, 173);
        setBackground(color);
        setForeground(SPlayfield.PF_SNAKE);
        cg1 = new CheckboxGroup();
        cg2 = new CheckboxGroup();
        oc1 = new Checkbox("Of Course!", cg1, true);
        nw1 = new Checkbox("No Way!", cg1, false);
        oc2 = null;
        nw2 = null;
        oc2 = new Checkbox("Of Course!", cg2, true);
        nw2 = new Checkbox("No Way!", cg2, false);
        oc1.setBackground(color);
        nw1.setBackground(color);
        oc2.setBackground(color);
        nw2.setBackground(color);
        checkbox = new Checkbox();
        firstNameTxt = new STextField(110, 32);
        nameTxt = new STextField(110, 32);
        emailTxt = new STextField(231, 32);
        countryTxt = new STextField(113, 32);
        Color color1 = new Color(198, 255, 198);
        firstNameTxt.setBackground(color1);
        nameTxt.setBackground(color1);
        emailTxt.setBackground(color1);
        countryTxt.setBackground(color1);
        ageChoice.setBackground(color1);
        instLabel.setForeground(new Color(35, 98, 42));
        instLabel.setBackground(color);
        ageTxt = new STextField(123, 32);
        card1 = new Panel();
        MatrixLayout matrixlayout = new MatrixLayout(390, 430);
        card1.setLayout(matrixlayout);
        card1.add("7,88", firstNameTxt);
        card1.add("131,88", nameTxt);
        card1.add("0,0", comp_name);
        card1.add("255,88", countryTxt);
        card1.add("78,308", comp_send_a);
        card1.add("229,308", comp_cancel_a);
        card1.add("7,153", emailTxt);
        card1.add("0,133", comp_email);
        card1.add("258,153", ageChoice);
        card1.add("0,346", comp_inst);
        card2 = new Panel();
        matrixlayout = new MatrixLayout(390, 430);
        card2.setLayout(matrixlayout);
        card3 = new Panel();
        matrixlayout = new MatrixLayout(390, 430);
        card3.setLayout(matrixlayout);
        setLayout(new BorderLayout());
        add("Center", card1);
        currCard = card1;
        validate();
        repaint();
        dialogActive = true;
    }

    public void initialize(boolean flag) {
        sendFlag = false;
        String s = httpGet(URLSTRING + "?c=g&");
        splitScoreBounds(s);
        card1.remove(oc1);
        card1.remove(nw1);
        card1.remove(oc2);
        card1.remove(nw2);
        card1.remove(comp_drawquest);
        card1.remove(comp_carvequest);
        if(owner.getScore() >= loScore)
            flag = true;
        else
            flag = false;
        highEntry = flag;
        if(flag) {
            card1.add("0,204", comp_carvequest);
            card1.add("258,202", oc1);
            card1.add("258,222", nw1);
            card1.add("0,258", comp_drawquest);
            card1.add("258,256", oc2);
            card1.add("258,276", nw2);
        } else {
            card1.add("0,204", comp_drawquest);
            card1.add("258,202", oc2);
            card1.add("258,222", nw2);
        }
        remove(currCard);
        add("Center", card1);
        currCard = card1;
        dialogActive = true;
        show();
        validate();
        repaint();
        requestFocus();
    }

    public boolean action(Event event, Object obj) {
        Object obj1 = null;
        byte byte0 = 0;
        if(event.target == comp_send_a && currCard == card1) {
            if(!postEntry())
                return true;
            SImageCanvas simagecanvas;
            if(highEntry && oc1.getState()) {
                simagecanvas = comp_carve;
                byte0 = 101;
            } else {
                simagecanvas = null;
            }
            if(simagecanvas != null) {
                remove(currCard);
                String s = "0," + byte0;
                card3.add(s, simagecanvas);
                card3.add("175,311", comp_ok);
                add("Center", card3);
                currCard = card3;
                validate();
                repaint();
            } else {
                dialogActive = false;
                show(false);
                owner.requestFocus();
            }
        } else
        if(event.target == comp_cancel_a) {
            dialogActive = false;
            show(false);
        } else
        if(event.target == comp_ok) {
            dialogActive = false;
            show(false);
            owner.requestFocus();
        } else
        if(event.target == comp_inst)
            try {
                owner.getAppletContext().showDocument(new URL(INSTURL), "_top");
            }
            catch(Exception _ex) { }
        else
            return false;
        validate();
        repaint();
        return true;
    }

    public int getHighScore() {
        return hiScore;
    }

    public int getLowScore() {
        return loScore;
    }

    private void splitScoreBounds(String s) {
        StringTokenizer stringtokenizer = new StringTokenizer(s, "#", false);
        int i = 0;
        int j = 0;
        try {
            String s1 = stringtokenizer.nextToken();
            i = Integer.parseInt(s1);
            s1 = stringtokenizer.nextToken();
            j = Integer.parseInt(s1);
        }
        catch(Exception _ex) { }
        hiScore = i;
        loScore = j;
    }

    private boolean postEntry() {
        level = owner.levelUI.getLevel();
        if(sendFlag)
            return true;
        String s2 = firstNameTxt.getText();
        String s3 = nameTxt.getText();
        String s4 = emailTxt.getText();
        String s5 = countryTxt.getText();
        if(s2.length() < 1) {
            setTitle("Please enter your First Name");
            return false;
        }
        if(s3.length() < 1) {
            setTitle("Please enter your Family Name");
            return false;
        }
        if(s4.length() < 1 || s4.indexOf(64) < 0 || s4.indexOf(46) < 0) {
            setTitle("Please enter a valid E-mail address");
            return false;
        }
        if(s5.length() < 1) {
            setTitle("Please enter your country");
            return false;
        }
        if(ageChoice.getSelectedIndex() == 0) {
            setTitle("Please enter your age");
            return false;
        }
        String s;
        if(oc2.getState())
            s = "y";
        else
            s = "n";
        String s1;
        if(highEntry && oc1.getState())
            s1 = "y";
        else
            s1 = "n";
        String s7 = String.valueOf(owner.getScore()).toString();
        String s6 = s7 + "#" + s2 + "#" + s3 + "#" + s4 + "#" + s5 + "#" + level + "#" + ageChoice.getSelectedItem() + "#" + s + "#" + s1;
        s6 = URLEncoder.encode(s6);
        String s8 = "c=i&s=" + s6 + "&";
        String s9 = httpGet(URLSTRING + "?" + s8);
        sendFlag = true;
        s9 = s9.trim();
        return true;
    }

    private synchronized String httpGet(String s) {
        StringBuffer stringbuffer = new StringBuffer();
        URLConnection urlconnection;
        try {
            URL url = new URL(s);
            urlconnection = url.openConnection();
            urlconnection.setDoInput(true);
            urlconnection.setUseCaches(false);
        }
        catch(IOException _ex) {
            System.err.println("HTTP GET connection failed: " + s);
            return null;
        }
        try {
            java.io.InputStream inputstream = urlconnection.getInputStream();
            DataInputStream datainputstream = new DataInputStream(inputstream);
            String s1;
            while((s1 = datainputstream.readLine()) != null) 
                stringbuffer.append(s1 + "\n");
            datainputstream.close();
        }
        catch(Exception _ex) {
            System.err.println("HTTP GET receive failed: " + s);
        }
        urlconnection = null;
        System.gc();
        String s2 = new String(stringbuffer);
        String s3 = "";
        try {
            for(StringTokenizer stringtokenizer = new StringTokenizer(s2, "\n", false); stringtokenizer.hasMoreTokens();) {
                String s4 = stringtokenizer.nextToken();
                s4.trim();
                if(s4.startsWith("SCORERESULT")) {
                    s3 = stringtokenizer.nextToken();
                    return s3;
                }
            }

        }
        catch(Exception _ex) { }
        return s3;
    }

    public synchronized String httpPost(String s, String s1) {
        Object obj = null;
        StringBuffer stringbuffer = new StringBuffer();
        URLConnection urlconnection;
        try {
            URL url = new URL(s);
            urlconnection = url.openConnection();
            urlconnection.setDoOutput(true);
            urlconnection.setUseCaches(false);
        }
        catch(IOException _ex) {
            System.err.println("HTTP POST connection failed: " + s);
            return null;
        }
        try {
            PrintStream printstream = new PrintStream(urlconnection.getOutputStream());
            printstream.print(s1);
            printstream.println("");
            printstream.close();
        }
        catch(IOException _ex) {
            System.err.println("HTTP POST send failed: " + s);
        }
        try {
            java.io.InputStream inputstream = urlconnection.getInputStream();
            DataInputStream datainputstream = new DataInputStream(inputstream);
            String s2;
            while((s2 = datainputstream.readLine()) != null) 
                stringbuffer.append(s2 + "\n");
            datainputstream.close();
        }
        catch(Exception _ex) {
            System.err.println("HTTP POST receive failed: " + s);
        }
        urlconnection = null;
        System.gc();
        String s3 = new String(stringbuffer);
        String s4 = "";
        try {
            for(StringTokenizer stringtokenizer = new StringTokenizer(s3, "\n", false); stringtokenizer.hasMoreTokens();) {
                String s5 = stringtokenizer.nextToken();
                s5.trim();
                if(s5.equals("SCORERESULT")) {
                    s4 = stringtokenizer.nextToken();
                    return s4;
                }
            }

        }
        catch(Exception _ex) { }
        return s4;
    }
}
