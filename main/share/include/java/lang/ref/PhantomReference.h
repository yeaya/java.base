#ifndef _java_lang_ref_PhantomReference_h_
#define _java_lang_ref_PhantomReference_h_
//$ class java.lang.ref.PhantomReference
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

class $import PhantomReference : public ::java::lang::ref::Reference {
	$class(PhantomReference, $PRELOAD | $NO_CLASS_INIT, ::java::lang::ref::Reference)
public:
	PhantomReference();
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* q);
	virtual $Object* get() override;
	virtual bool refersTo0(Object$* o) override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_PhantomReference_h_