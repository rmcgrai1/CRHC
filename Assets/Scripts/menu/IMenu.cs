using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public interface IMenu {
    void addRow(IRow row);
    void draw(float w, float h);
}
