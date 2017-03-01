public class SpaceItem : IItem {
    public override bool draw(float w, float h) {
        return false;
    }

    public override float getHeight(float w) {
        return 0;
    }

    public override void onDispose() {
    }
}