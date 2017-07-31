#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int num = 1;
	
	for(int linenum = 1 ; linenum < 5 ; linenum++ )
	{	puts("<TableRow>");

		for(int i =0 ; i< 5; i++)
		{
			puts("<LinearLayout android:orientation=\"horizontal\">");
			puts("<TextView ");
			puts("android:layout_width=\"wrap_content\"");
			puts("android:layout_height=\"wrap_content\"");
			printf("android:text=\"%d.\" />", num);
			puts("<EditText");
			printf("android:id=\"@+id/et%02d\" style=\"@style/question_answer_mark\"", num);
			printf("android:nextFocusDown=\"@id/et%02d\"/>", num+1);
  			puts("</LinearLayout>");
  			num++;
		}
		puts("</TableRow>");
	}
	
	return 0;
}
