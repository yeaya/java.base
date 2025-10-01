#ifndef _TryLock_h_
#define _TryLock_h_
//$ class TryLock
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TryLock : public ::java::lang::Object {
	$class(TryLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TryLock();
	void init$();
	static void main($StringArray* args);
	static void test1(bool shared, bool trylock);
	static void test2(bool shared, bool trylock);
	static void test3(bool shared, bool trylock);
};

#endif // _TryLock_h_