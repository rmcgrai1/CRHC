using System;
using System.Collections;
using UnityEngine;

public class Experience : CrchItem {
    private Action action;

    public Experience(CrchItem parent, JsonChildList.JsonChild data) : base(parent, data) {
    }

    public string getTargetId() {
        return getData("targetId");
    }

    protected override IEnumerator tryLoad() {
        AppRunner.getVuforiaManager().activate(getId());

        Menu menu = new Menu();

        Row backRow = new Row();
        backRow.addItem(new BackButton(this), 1);
        menu.addRow(backRow);

        AppRunner.enterMenu(menu);
        yield return null;
    }

    protected override IEnumerator tryUnload() {
        AppRunner.getVuforiaManager().deactivate();
        AppRunner.exitMenu();

        yield return null;
    }

    private class BackButton : MenuRect {
        private Experience owner;

        public BackButton(Experience owner) : base(Color.red) {
            this.owner = owner;
        }

        public override void onClick() {
            owner.unload();
        }
    }
}