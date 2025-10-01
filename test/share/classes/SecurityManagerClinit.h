#ifndef _SecurityManagerClinit_h_
#define _SecurityManagerClinit_h_
//$ class SecurityManagerClinit
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SecurityManagerClinit : public ::java::lang::Object {
	$class(SecurityManagerClinit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SecurityManagerClinit();
	void init$();
	static void main($StringArray* args);
};

#endif // _SecurityManagerClinit_h_