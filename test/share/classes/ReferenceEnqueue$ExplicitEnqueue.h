#ifndef _ReferenceEnqueue$ExplicitEnqueue_h_
#define _ReferenceEnqueue$ExplicitEnqueue_h_
//$ class ReferenceEnqueue$ExplicitEnqueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export ReferenceEnqueue$ExplicitEnqueue : public ::java::lang::Object {
	$class(ReferenceEnqueue$ExplicitEnqueue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReferenceEnqueue$ExplicitEnqueue();
	void init$();
	virtual void run();
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	::java::util::List* refs = nullptr;
	static const int32_t iterations = 1000;
};

#endif // _ReferenceEnqueue$ExplicitEnqueue_h_