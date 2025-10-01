#ifndef _Sharing_h_
#define _Sharing_h_
//$ class Sharing
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Sharing : public ::java::lang::Object {
	$class(Sharing, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sharing();
	void init$();
	static void MultiThreadedFD();
	static void TestCloseAll();
	static void TestFinalizer();
	static void TestIsValid();
	static void TestMultipleFD();
	static void main($StringArray* args);
	static const int32_t numFiles = 10;
	static $volatile(bool) fail;
};

#endif // _Sharing_h_