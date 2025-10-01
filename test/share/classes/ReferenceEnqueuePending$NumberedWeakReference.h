#ifndef _ReferenceEnqueuePending$NumberedWeakReference_h_
#define _ReferenceEnqueuePending$NumberedWeakReference_h_
//$ class ReferenceEnqueuePending$NumberedWeakReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

class $export ReferenceEnqueuePending$NumberedWeakReference : public ::java::lang::ref::WeakReference {
	$class(ReferenceEnqueuePending$NumberedWeakReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ReferenceEnqueuePending$NumberedWeakReference();
	void init$(::java::lang::Integer* referent, ::java::lang::ref::ReferenceQueue* q, int32_t i);
	int32_t number = 0;
};

#endif // _ReferenceEnqueuePending$NumberedWeakReference_h_