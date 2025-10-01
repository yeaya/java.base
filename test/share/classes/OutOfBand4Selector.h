#ifndef _OutOfBand4Selector_h_
#define _OutOfBand4Selector_h_
//$ class OutOfBand4Selector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class $export OutOfBand4Selector : public ::java::lang::Object {
	$class(OutOfBand4Selector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OutOfBand4Selector();
	void init$();
	static void main($StringArray* args);
	static void test(::java::net::Socket* s, bool urgentExpected, int32_t bytesBefore, int32_t bytesAfter, ::java::nio::channels::Selector* sel);
};

#endif // _OutOfBand4Selector_h_