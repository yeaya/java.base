#ifndef _HoldsLock_h_
#define _HoldsLock_h_
//$ class HoldsLock
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HoldsLock : public ::java::lang::Object {
	$class(HoldsLock, 0, ::java::lang::Object)
public:
	HoldsLock();
	void init$();
	static void checkLock(bool value);
	static void main($StringArray* args);
	static $Object* target;
};

#endif // _HoldsLock_h_