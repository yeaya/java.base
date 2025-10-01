#ifndef _PackageMain_h_
#define _PackageMain_h_
//$ class PackageMain
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export PackageMain : public ::java::lang::Object {
	$class(PackageMain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PackageMain();
	void init$();
	static void main($StringArray* args);
};

#endif // _PackageMain_h_