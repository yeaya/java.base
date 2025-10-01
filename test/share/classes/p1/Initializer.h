#ifndef _p1_Initializer_h_
#define _p1_Initializer_h_
//$ class p1.Initializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p1 {

class $export Initializer : public ::java::lang::Object {
	$class(Initializer, 0, ::java::lang::Object)
public:
	Initializer();
	void init$();
	static void init();
	static bool isInited();
	static bool inited;
};

} // p1

#endif // _p1_Initializer_h_