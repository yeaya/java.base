#ifndef _Equals2_h_
#define _Equals2_h_
//$ class Equals2
//$ extends Equals2A

#include <Equals2A.h>
#include <java/lang/Array.h>

class $export Equals2 : public ::Equals2A {
	$class(Equals2, $NO_CLASS_INIT, ::Equals2A)
public:
	Equals2();
	void init$();
	virtual ::Equals2* m() override;
	static void main($StringArray* args);
	void returnType();
};

#endif // _Equals2_h_