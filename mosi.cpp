string message = "";
string current = "";

for (int i = 0; i < morse.size(); i++) {
    if (morse[i] == ' ') {
        if (current == "/") {
            message += " ";
        }
        else {
            if (current == "·-") {
                message += "A";
            }
            else if (current == "-···") {
                message += "B";
            }
            // add more if statements for other characters
            current = "";
        }
    }
    else {
        current += morse[i];
    }
}

cout << message << endl;

return 0;
