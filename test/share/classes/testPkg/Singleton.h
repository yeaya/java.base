#ifndef _testPkg_Singleton_h_
#define _testPkg_Singleton_h_
//$ class testPkg.Singleton
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace testPkg {

class $export Singleton : public ::java::lang::Object {
	$class(Singleton, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Singleton();
	void init$();
};

} // testPkg

#endif // _testPkg_Singleton_h_