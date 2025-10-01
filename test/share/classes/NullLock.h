#ifndef _NullLock_h_
#define _NullLock_h_
//$ class NullLock
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullLock : public ::java::lang::Object {
	$class(NullLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullLock();
	void init$();
	static void main($StringArray* argv);
	static bool testBufferedReader();
	static bool testBufferedWriter();
};

#endif // _NullLock_h_