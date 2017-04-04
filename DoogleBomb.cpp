#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

enum Wires { WHITE, RED, BLACK, ORANGE, GREEN, PURPLE };
bool Defuse(const vector<Wires>& wires);
Wires parse_wire(const string& wire);

int main(int arga, char *argb[])
{
	ifstream fh(argb[1]);
	string line;
	vector<Wires> wires;
	while (getline(fh, line))
		wires.push_back(parse_wire(line));
	if (Defuse(wires))
		cout << "Bomb Successfully Defused Bruh, You Get To Live Another Day" << endl;
	else
		cout << "Boom Bye Bye Yuh Likkle Dutty Bombo" << endl;
	return 0;
}

bool Defuse(const vector<Wires>& wires)
{
	for (size_t i = 0; i < wires.size() - 1; i++)
	{
		Wires current = wires[i], next = wires[i + 1];
		switch (current)
		{
		case WHITE: if (next == WHITE || next == BLACK) return false; break;
		case RED: if (next != GREEN) return false; break;
		case BLACK: if (next == GREEN || next == WHITE || next == ORANGE) return false; break;
		case ORANGE: if (next != RED || next != BLACK) return false; break;
		case GREEN: if (next != ORANGE && next != WHITE) return false; break;
		case PURPLE: if (next == PURPLE || next == GREEN || next == ORANGE || next == WHITE) return false; break;
		}
	}
	return true;
}