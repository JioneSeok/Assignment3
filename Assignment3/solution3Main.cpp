#include "S3Fileclass.h"
#include "S3class.h"

int main() {
	ST akali, amumu, annie, ashe;
	File ff;
	
	ff.fileOpen("akali.txt");
	akali = ST(ff.n1, ff.n2, ff.a, ff.b, ff.x, ff.dx, ff.m);

	ff.fileOpen("amumu.txt");
	amumu = ST(ff.n1, ff.n2, ff.a, ff.b, ff.x, ff.dx, ff.m);

	ff.fileOpen("annie.txt");
	annie = ST(ff.n1, ff.n2, ff.a, ff.b, ff.x, ff.dx, ff.m);

	ff.fileOpen("ashe.txt");
	ashe = ST(ff.n1, ff.n2, ff.a, ff.b, ff.x, ff.dx, ff.m);
}