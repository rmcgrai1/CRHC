public abstract class IImageButtonRow : IButtonRow {
    public IImageButtonRow(string imageUrl) {
        ImageItem imageItem = new ImageItem(imageUrl);
        imageItem.setAspectType(AspectType.FIT_IN_REGION);
        addItem(imageItem, 1);
        setTouchable(true);
    }

    protected override float calcPixelHeight(float w) {
        return CrhcConstants.SIZE_HOME_BUTTON.getAs(general.number.NumberType.PIXELS);
    }

    public override void onDispose() {
        base.onDispose();
    }
}
