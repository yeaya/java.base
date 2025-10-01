#ifndef _java_lang_ref_ReferenceQueue$Null_h_
#define _java_lang_ref_ReferenceQueue$Null_h_
//$ class java.lang.ref.ReferenceQueue$Null
//$ extends java.lang.ref.ReferenceQueue

#include <java/lang/ref/ReferenceQueue.h>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class ReferenceQueue$Null : public ::java::lang::ref::ReferenceQueue {
	$class(ReferenceQueue$Null, $PRELOAD | $NO_CLASS_INIT, ::java::lang::ref::ReferenceQueue)
public:
	ReferenceQueue$Null();
	void init$();
	virtual bool enqueue(::java::lang::ref::Reference* r) override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_ReferenceQueue$Null_h_