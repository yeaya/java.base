#ifndef _Stop_h_
#define _Stop_h_
//$ class Stop
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export Stop : public ::java::lang::Object {
	$class(Stop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Stop();
	void init$();
	static void lambda$main$0(::java::util::concurrent::CountDownLatch* ready);
	static void lambda$main$1(::java::util::concurrent::CountDownLatch* ready, ::java::lang::ThreadGroup* group);
	static void main($StringArray* args);
};

#endif // _Stop_h_