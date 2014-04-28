#include "Letter.h"


Letter::Letter(void) {
}


Letter::~Letter(void) {
}

void Letter::Draw() {
	for (int i = 0; i < v.size(); ++i) {
		v[i].Draw();
	}
}