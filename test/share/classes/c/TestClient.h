#ifndef _c_TestClient_h_
#define _c_TestClient_h_
//$ class c.TestClient
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace c {

class $export TestClient : public ::java::lang::Object {
	$class(TestClient, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClient();
	void init$();
	static void main($StringArray* args);
};

} // c

#endif // _c_TestClient_h_