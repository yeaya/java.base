#ifndef _MyInt_h_
#define _MyInt_h_
//$ class MyInt
//$ extends Int

#include <Int.h>

class MyInt : public ::Int {
	$class(MyInt, $NO_CLASS_INIT, ::Int)
public:
	MyInt();
	void init$();
	virtual void main() override;
};

#endif // _MyInt_h_