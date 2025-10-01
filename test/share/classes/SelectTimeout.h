#ifndef _SelectTimeout_h_
#define _SelectTimeout_h_
//$ class SelectTimeout
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIGGER_TIMEOUT")
#undef BIGGER_TIMEOUT
#pragma push_macro("SLEEP_MILLIS")
#undef SLEEP_MILLIS
#pragma push_macro("BIG_TIMEOUT")
#undef BIG_TIMEOUT

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicReference;
			}
		}
	}
}

class $export SelectTimeout : public ::java::lang::Object {
	$class(SelectTimeout, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SelectTimeout();
	void init$();
	static void lambda$test$0(::java::nio::channels::Selector* selector, int64_t timeout, ::java::util::concurrent::atomic::AtomicBoolean* isTimedOut, ::java::util::concurrent::atomic::AtomicReference* theException);
	static void main($StringArray* args);
	static bool test(int64_t timeout);
	static const int64_t BIG_TIMEOUT = (int64_t)0x000000174876EBE8;
	static const int64_t BIGGER_TIMEOUT = (int64_t)0x000305120C0F2000;
	static const int64_t SLEEP_MILLIS = 10000;
};

#pragma pop_macro("BIGGER_TIMEOUT")
#pragma pop_macro("SLEEP_MILLIS")
#pragma pop_macro("BIG_TIMEOUT")

#endif // _SelectTimeout_h_