#ifndef _One$Test_h_
#define _One$Test_h_
//$ class One$Test
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStreamReader;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}

class One$Test : public ::java::lang::Object {
	$class(One$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	One$Test();
	void init$($bytes* in, $String* expect);
	virtual void go();
	virtual void read() {}
	::java::io::InputStreamReader* isr = nullptr;
	::java::lang::StringBuffer* sb = nullptr;
	$String* expect = nullptr;
};

#endif // _One$Test_h_