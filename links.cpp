#include <iostream>
#include <string>
using namespace std;

class LinkPrinter {
public:
    enum Keywords { table, bloom, cat, ragtime, easy, sumbul, prank, package, kid, shenanigans, son, stop };

    void printLink(Keywords keyword) {
        switch (keyword) {
        case table:
            cout << "https://www.youtube.com/shorts/m1lOrx10-Hg?feature=share";
            break;
        case bloom:
            cout << "https://youtu.be/wvtezQPbeRY";
            break;
        case cat:
            cout << "https://youtu.be/tPEE9ZwTmy0";
            break;
        case ragtime:
            cout << "https://youtu.be/8LFoPY6NFRg";
            break;
        case easy:
            cout << "https://youtu.be/f2IbEZT21wc";
            break;
        case sumbul:
            cout << "https://youtu.be/O08XTXJSOtI";
            break;
        case prank:
            cout << "https://youtu.be/Ip7QZPw04Ks";
            break;
        case package:
            cout << "https://www.youtube.com/shorts/l98WL2fge-A?feature=share";
            break;
        case kid:
            cout << "https://youtu.be/KJt72vE-UUc";
            break;
        case shenanigans: 
            cout << "https://youtu.be/wqeGPX7TRv0";
            break;
        case son:
            cout << "https://youtu.be/hmL-uss5Nvc";
            break;
        case stop:
            cout << "https://youtu.be/oMtkP_Tonp4";
            break;
        default:
            cout << "Invalid input. Please enter a valid keyword.";
        }
    }
};

int main() {
    LinkPrinter linkPrinter;

    string x;
    cout << "Enter one of these words:" << endl;
    cout << "table,bloom,cat,ragtime,easy,sumbul,prank,package,kid,shenanigans,son,stop" << endl;
    cin >> x;

    LinkPrinter::Keywords keyword;
    if (x == "table") keyword = LinkPrinter::table;
    else if (x == "bloom") keyword = LinkPrinter::bloom;
    else if (x == "cat") keyword = LinkPrinter::cat;
    else if (x == "ragtime") keyword = LinkPrinter::ragtime;
    else if (x == "easy") keyword = LinkPrinter::easy;
    else if (x == "sumbul") keyword = LinkPrinter::sumbul;
    else if (x == "prank") keyword = LinkPrinter::prank;
    else if (x == "package") keyword = LinkPrinter::package; 
    else if (x == "kid") keyword = LinkPrinter::kid;
    else if (x == "shenanigans") keyword = LinkPrinter::shenanigans;
    else if (x == "son") keyword = LinkPrinter::son;
    else if (x == "stop") keyword = LinkPrinter::stop;
    else {
        cout << "Invalid input.";
        return 0;
    }

    linkPrinter.printLink(keyword);

    return 0;
}

