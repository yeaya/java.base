#ifndef _java_lang_ref_WeakReference_h_
#define _java_lang_ref_WeakReference_h_
//$ class java.lang.ref.WeakReference
//$ extends java.lang.ref.Reference

#include <java/lang/ref/Reference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class $import WeakReference : public ::java::lang::ref::Reference {
	$class(WeakReference, $PRELOAD | $WEAK_REFERENCE | $NO_CLASS_INIT, ::java::lang::ref::Reference)
public:
	WeakReference();
	void init$(Object$* referent);
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* q);
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_WeakReference_h_