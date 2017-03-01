using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace generic.mobile {
    public class MouseTouch : ITouch {
        protected override bool queryDownStart() {
            return Input.GetMouseButtonDown(0);
        }

        protected override bool queryUpStart() {
            return Input.GetMouseButtonUp(0);
        }

        protected override Vector2 queryTouchPosition() {
            Vector2 mousePosition = Input.mousePosition;
            return new Vector2(mousePosition.x, Screen.height - mousePosition.y);
        }
    }
}
