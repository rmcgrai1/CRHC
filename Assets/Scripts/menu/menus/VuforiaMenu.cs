using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class VuforiaMenu : IMenu {
    private IMenu menu;
    private Experience exp;

    public VuforiaMenu(IMenu menu, Experience exp) {
        this.menu = menu;
        this.exp = exp;

        ILoader loader = ServiceLocator.getILoader();
    }

    public override bool enter() {
        AppRunner.getVuforiaManager().activate(exp);

        return menu.enter();
    }
    public override bool exit(bool isClosing) {
        if (menu.exit(isClosing)) {
            AppRunner.getVuforiaManager().deactivate();
            return true;
        }
        else {
            return false;
        }
    }

    public override void addRow(IRow row) {
        menu.addRow(row);
    }

    public override void draw(float w, float h) {
        menu.draw(w, h);
    }

    public override float getHeight(float w) {
        return menu.getHeight(w);
    }

    public override void reset() {
        menu.reset();
    }

    public override void setColor(Color color) {
        menu.setColor(color);
    }

    public override void onDispose() {
        menu.Dispose();
        menu = null;
    }
}
