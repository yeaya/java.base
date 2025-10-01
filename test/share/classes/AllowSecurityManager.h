#ifndef _AllowSecurityManager_h_
#define _AllowSecurityManager_h_
//$ class AllowSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export AllowSecurityManager : public ::java::lang::Object {
	$class(AllowSecurityManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AllowSecurityManager();
	void init$();
	static void main($StringArray* args);
};

#endif // _AllowSecurityManager_h_