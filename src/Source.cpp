#include <iostream>
#include "Segment.h"
#include "Figure.h"
#include <ctime>

using namespace std;

void Vertexes(vector <point> &vec) { // Çàïîëíåíèå âåêòîðà òî÷åê äëÿ ìíîãîóãîëüíèêà
	cout << "Enter number of vertexes: " << endl;
	int n;
	cin >> n;
	if (n > 3)
		for (int i = 0; i < n; i++) {
			point a;
			cout << "Enter " << i + 1 << " point coordinates" << endl;
			cin >> a.x >> a.y;
			vec.push_back(a);
		}
	else
		cout << "Wrong number of vertexes" << endl;
}

//Ôóíêèöÿ äëÿ ïîñòðîåíèÿ ìíîæåñòâà òî÷åê äëÿ àëãîðèòìà Ãðåõåìà
void Cloud(vector <point>& vec) {
	srand(time(NULL));
	cout << "Enter number of vertexes: ";
	int n;
	cin >> n;
	int w; //Â êàêîì ðàéîíå íàì ôëåêñèòü âåðòåêñàìè
	cout << "Enter max coordinates: ";
	cin >> w;
	for (int i = 0; i < n; i++) {
		
		point a;
		a.x = rand() % w;
		a.y = rand() % w;
		cout << a.x << " " << a.y << endl;
		vec.push_back(a);
	}
}



int main() {

/*	vector <point> vec;
	Cloud(vec);
	
	convex_hull(vec); //Âûïóêëàÿ îáîëî÷êà. Âîçâðàùàåò ïîñòðîåííûé âåêòîð. Êðàéíèå òî÷êè

	Polygon shell(vec); //Ïîñòðîåíèå ìíîãîóãîëüíèêà ïî èçìåíåíåííîìó âåêòîðó òî÷åê
	shell.Read(); */

	
	
	
	//Ïîñòðîåíèå äâóõ îòðåçêîâ è ïîèñê òî÷êè ïåðñå÷åíèÿ

	/*point a, b;
	cin >> a.x >> a.y >> b.x >> b.y;
	point c, d;
	cin >> c.x >> c.y >> d.x >> d.y; 

	point p;
	p.x = 0;
	p.y = 0;

	Segment n(a, b);
	Segment m(c, d);
	cout << n.Length() << " " << m.Length() << endl; //Äëèíû îòðåçêîâ 

	m.Cross(n, m, p); */

	

	
	
	/*vector <point> vec; //Ñòðîèì ìíîãîóãîëüíèê. Ïðîâåðêà òî÷êè íà íàõîæäåíèå âíóòðè ìíîãîóãîëüíèêà
	Vertexes(vec);

	Polygon pol(vec);
	
	
	point a;
	cin >> a.x >> a.y;
	
	cout << "PI " << pol.Point_Inside(a) << endl;*/
	



	//Òî÷êà ïåðåñå÷åíèÿ îòðåçêîâ
	/*point a, b;
	cin >> a.x >> a.y >> b.x >> b.y;
	point c, d;
	cin >> c.x >> c.y >> d.x >> d.y;

	point x = { 0,0 };


	Segment l(a, b);
	Segment m(c, d);
	cout << l.Cross(l, m, x) << endl;
	//cout << l.Cross_B(l, m) << endl;*/

}
