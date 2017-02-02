using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public interface LoadableObserver {
    void onLoadSuccess(Loadable obj);
    void onLoadFailure(Loadable obj);
    void onUnloadSuccess(Loadable obj);
    void onUnloadFailure(Loadable obj);
}
