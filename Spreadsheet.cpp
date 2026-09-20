#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;
class Spreadsheet {
private:
    unordered_map<string, int> cells;
    int parseOperand(const string & op) {
        if (!op.empty() && isdigit(op[0])) {
            return stoi(op);
        }
        if (cells.count(op)){
            return cells[op];
        }
        return 0;
    }
public:
    Spreadsheet(int rows) {
        
    }
    void setCell(string cell, int value) {
        cells[cell] = value;
    }
    
    void resetCell(string cell) {
        cells.erase(cell);
    }
    
    int getValue(string formula) {
        size_t plus_pos = formula.find('+');
        string x_str = formula.substr(1, plus_pos - 1);
        string y_str = formula.substr(plus_pos + 1);
        return parseOperand(x_str) + parseOperand(y_str);
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */