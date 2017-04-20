public class SpaceItem : IItem {
    public override bool draw(float w, float h) {
        return false;
    }

    protected override float calcPixelHeight(float w) {
        return 0;
    }

    public override void onDispose() {
    }
}