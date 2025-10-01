#ifndef _UnixTest_h_
#define _UnixTest_h_
//$ class UnixTest
//$ extends ProcessTest

#include <ProcessTest.h>

namespace java {
	namespace io {
		class File;
	}
}

class UnixTest : public ::ProcessTest {
	$class(UnixTest, $NO_CLASS_INIT, ::ProcessTest)
public:
	UnixTest();
	void init$(::java::io::File* script);
	virtual void createScript(::java::io::File* processTrapScript);
};

#endif // _UnixTest_h_