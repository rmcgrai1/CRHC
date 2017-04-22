using Newtonsoft.Json.Linq;
using UnityEngine;

public class JSONBoolRow : Row {
    private JObject dict;
    private string key;
    private CheckboxItem checkbox;

    public JSONBoolRow(JObject dict, string key) {
        this.dict = dict;
        this.key = key;

        setColor(CrhcConstants.COLOR_BLUE_MEDIUM);
        setPadding(true, true, true);

        // Break up key into separate words.
        TextItem textItem = new TextItem(splitCamelCase(key));
        addItem(textItem, .8f);

        checkbox = new CheckboxItem(dict.Value<bool>(key));
        addItem(checkbox, .2f);

        setTouchable(true);
    }

    private static string splitCamelCase(string input) {
        input = System.Text.RegularExpressions.Regex.Replace(input, "([A-Z])", " $1", System.Text.RegularExpressions.RegexOptions.Singleline).Trim();
        input = char.ToUpper(input[0]) + input.Substring(1);

        return input;
    }

    public override bool draw(float w) {
        if(base.draw(w)) {
            dict[key] = !dict.Value<bool>(key);
            checkbox.setIsFilled(dict.Value<bool>(key));
        }

        return false;
    }
}