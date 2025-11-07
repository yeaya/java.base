#ifndef _java_lang_ref_SoftReference_h_
#define _java_lang_ref_SoftReference_h_
//$ class java.lang.ref.SoftReference
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

class $import SoftReference : public ::java::lang::ref::Reference {
	$class(SoftReference, $PRELOAD | $SOFT_REFERENCE | $NO_CLASS_INIT, ::java::lang::ref::Reference)
public:
	SoftReference();
	void init$(Object$* referent);
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* q);
	virtual $Object* get() override;
	static int64_t clock;
	int64_t timestamp = 0;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_SoftReference_h_