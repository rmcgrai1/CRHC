using Newtonsoft.Json.Linq;
using System.Collections;
using UnityEngine;

public class Experience : CrhcItem {
    public Experience(CrhcItem parent, JObject data) : base(parent, data) {
    }

    public override void onDispose() {
    }

    public Landmark getLandmark() {
        return getParent() as Landmark;
    }

    public string getTargetId() {
        return getData<string>("targetId");
    }

    public string getSource() {
        return getData<string>("source");
    }

    protected override IEnumerator tryLoad() {
        AppRunner.getVuforiaManager().activate(this);

        Menu menu = new Menu();

        Row backRow = new Row();
        backRow.addItem(new Landmark.BackButton(this), 1);
        menu.addRow(backRow);

        AppRunner.enterMenu(menu);
        yield return null;
    }

    protected override IEnumerator tryUnload() {
        AppRunner.getVuforiaManager().deactivate();
        AppRunner.exitMenu();

        yield return null;
    }
}