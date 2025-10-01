#ifndef _NegativeInitSize_h_
#define _NegativeInitSize_h_
//$ class NegativeInitSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NegativeInitSize : public ::java::lang::Object {
	$class(NegativeInitSize, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NegativeInitSize();
	void init$();
	static void main($StringArray* args);
};

#endif // _NegativeInitSize_h_