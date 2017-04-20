public abstract class IImageButtonRow : IButtonRow {
    public IImageButtonRow(string imageUrl) {
        ImageItem imageItem = new ImageItem(imageUrl);
        imageItem.setAspectType(AspectType.HEIGHT_DEPENDENT_ON_WIDTH);
        addItem(imageItem, 1);
    }

    public override void onDispose() {
        base.onDispose();
    }
}
