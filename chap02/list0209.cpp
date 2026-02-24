// 読み込んだ月の季節を表示

#include <iostream>

using namespace std;

int main()
{
  int month;

  cout << "季節を求めます。\n何月ですか：";
  cin >> month;

  if (month >= 3 && month <=5) // ３月・４月・５月
    cout << "それは春です。\n";
  else if(month >= 6 && month <= 8) // ６月・７月・８月
    cout << "それは夏です。\n";
  else if(month >= 9 && month <= 11) // ９月・１０月・１１月
    cout << "それは秋です。\n";
  else if(month == 12 || month == 1 || month == 2) // １２月・１月・２月
    cout << "それは冬です。\n";
  else
    cout << "\aそんな月はありませんよ。\n";
}
