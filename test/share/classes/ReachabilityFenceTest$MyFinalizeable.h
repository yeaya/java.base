#ifndef _ReachabilityFenceTest$MyFinalizeable_h_
#define _ReachabilityFenceTest$MyFinalizeable_h_
//$ class ReachabilityFenceTest$MyFinalizeable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

class ReachabilityFenceTest$MyFinalizeable : public ::java::lang::Object {
	$class(ReachabilityFenceTest$MyFinalizeable, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReachabilityFenceTest$MyFinalizeable();
	void init$(::java::util::concurrent::atomic::AtomicBoolean* b);
	virtual void finalize() override;
	::java::util::concurrent::atomic::AtomicBoolean* finalized = nullptr;
};

#endif // _ReachabilityFenceTest$MyFinalizeable_h_