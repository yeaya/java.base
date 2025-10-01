#ifndef _BadEnvp_h_
#define _BadEnvp_h_
//$ class BadEnvp
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export BadEnvp : public ::java::lang::Object {
	$class(BadEnvp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BadEnvp();
	void init$();
	static void main($StringArray* args);
};

#endif // _BadEnvp_h_