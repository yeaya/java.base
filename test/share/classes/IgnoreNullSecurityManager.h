#ifndef _IgnoreNullSecurityManager_h_
#define _IgnoreNullSecurityManager_h_
//$ class IgnoreNullSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IgnoreNullSecurityManager : public ::java::lang::Object {
	$class(IgnoreNullSecurityManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IgnoreNullSecurityManager();
	void init$();
	static void main($StringArray* argv);
};

#endif // _IgnoreNullSecurityManager_h_