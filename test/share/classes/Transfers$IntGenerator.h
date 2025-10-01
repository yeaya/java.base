#ifndef _Transfers$IntGenerator_h_
#define _Transfers$IntGenerator_h_
//$ class Transfers$IntGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Transfers$IntGenerator : public ::java::lang::Object {
	$class(Transfers$IntGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Transfers$IntGenerator();
	void init$(int32_t max);
	virtual bool hasNext();
	virtual int32_t next();
	int32_t max = 0;
	int32_t cur = 0;
	int32_t p2 = 0;
};

#endif // _Transfers$IntGenerator_h_