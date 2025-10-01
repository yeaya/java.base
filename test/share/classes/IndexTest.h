#ifndef _IndexTest_h_
#define _IndexTest_h_
//$ class IndexTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

class $export IndexTest : public ::java::lang::Object {
	$class(IndexTest, 0, ::java::lang::Object)
public:
	IndexTest();
	void init$();
	static void displayInterfaceInformation(::java::net::NetworkInterface* netint);
	static void main($StringArray* args);
	static bool isWindows;
};

#endif // _IndexTest_h_