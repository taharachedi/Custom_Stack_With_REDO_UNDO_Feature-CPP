#pragma once
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class clsMyString
{

private:
    string _Value; // Stores the current string value.
    stack <string> _Undo; // Stack that holds previous values of _Value
    stack <string> _Redo; // Stack that holds values that were undone

public:

    void Set(string Value) {

        _Undo.push(_Value); //Stores the current value in _Undo before updating it.
        _Value = Value;

        //while (!_Redo.empty())
        //{
        //    _Redo.pop();
        //}
    }

    string Get() {

        return _Value;
    }

    __declspec(property(get = Get, put = Set)) string Value;

    void Undo() {

        if (!_Undo.empty())
        {
            _Redo.push(_Value);
            _Value = _Undo.top();
            _Undo.pop();
        }
    }

    void Redo() {

        if (!_Redo.empty())
        {
            _Undo.push(_Value);
            _Value = _Redo.top();
            _Redo.pop();
        }
    }

};