// Processed by NMI's Java Code Viewer 4.8.1 © 1997-2000 B. Lemaire
// Website: http://njcv.htmlplanet.com	E-mail: info@njcv.htmlplanet.com
// Copy registered to Evaluation Copy
// Source File Name:   MatrixLayout.java

import java.awt.*;
import java.util.*;

public class MatrixLayout
    implements LayoutManager {

    int nrows;
    int ncols;
    Hashtable hash;

    public MatrixLayout(int i, int j) {
        nrows = i;
        ncols = j;
        hash = new Hashtable();
    }

    public void addLayoutComponent(String s, Component component) {
        if(!hash.containsKey(s))
            hash.put(s, component);
    }

    public void removeLayoutComponent(Component component) {
        for(Enumeration enumeration = hash.keys(); enumeration.hasMoreElements();) {
            String s = (String)enumeration.nextElement();
            if(hash.get(s) == component) {
                hash.remove(s);
                return;
            }
        }

    }

    public Dimension minimumLayoutSize(Container container) {
        int i = 0;
        int j = 0;
        for(Enumeration enumeration = hash.elements(); enumeration.hasMoreElements();) {
            Component component = (Component)enumeration.nextElement();
            Dimension dimension = component.minimumSize();
            if(dimension.width > i)
                i = dimension.width;
            if(dimension.height > j)
                j = dimension.height;
        }

        int k = i * ncols + container.insets().left + container.insets().right;
        int l = j * nrows + container.insets().top + container.insets().bottom;
        return new Dimension(k, l);
    }

    public Dimension preferredLayoutSize(Container container) {
        int i = 0;
        int j = 0;
        for(Enumeration enumeration = hash.elements(); enumeration.hasMoreElements();) {
            Component component = (Component)enumeration.nextElement();
            Dimension dimension = component.preferredSize();
            if(dimension.width > i)
                i = dimension.width;
            if(dimension.height > j)
                j = dimension.height;
        }

        int k = i * ncols + container.insets().left + container.insets().right;
        int l = j * nrows + container.insets().top + container.insets().bottom;
        return new Dimension(k, l);
    }

    public void layoutContainer(Container container) {
        int i;
        int j;
        int k;
        int l;
        Component component;
        for(Enumeration enumeration = hash.keys(); enumeration.hasMoreElements(); component.reshape(i, j, k, l)) {
            String s = (String)enumeration.nextElement();
            StringTokenizer stringtokenizer = new StringTokenizer(s, ",");
            component = (Component)hash.get(s);
            k = component.preferredSize().width;
            l = component.preferredSize().height;
            i = Integer.parseInt(stringtokenizer.nextToken().trim());
            j = Integer.parseInt(stringtokenizer.nextToken().trim());
        }

    }
}
