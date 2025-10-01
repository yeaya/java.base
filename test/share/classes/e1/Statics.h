#ifndef _e1_Statics_h_
#define _e1_Statics_h_
//$ class e1.Statics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace e1 {

class $export Statics : public ::java::lang::Object {
	$class(Statics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Statics();
	void init$();
	static void packageMethod();
	static void privateMethod();
};

} // e1

#endif // _e1_Statics_h_