using System.Collections;
using UnityEngine;

public class Experience : CrhcItem {
    public Experience(CrhcItem parent, JsonChildList.JsonChild data) : base(parent, data) {
    }

    public override void onDispose() {
    }

    public Landmark getLandmark() {
        return getParent() as Landmark;
    }

    public string getTargetId() {
        return getData("targetId");
    }

    public string getSource() {
        return getData("source");
    }

    protected override IEnumerator tryLoad() {
        AppRunner.getVuforiaManager().activate(this);

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

    private class BackButton : RectItem {
        private Experience owner;

        public BackButton(Experience owner) : base(Color.red) {
            this.owner = owner;
        }

        public override void onClick() {
            owner.unload();
        }
    }
}