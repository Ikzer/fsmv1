// FSM that recognizes the regexp (a|b)*abb

bool recognize(string str)
{
    string::size_type len = str.length();

    // can't be shorter than 3 chars
    if (len < 3)
        return false;

    // last 3 chars must be "abb"
    if (str.substr(len - 3, 3) != "abb")
        return false;

    // must contain no chars other than "a" and "b"
    if (str.find_first_not_of("ab") != string::npos)
        return false;

    return true;
}
