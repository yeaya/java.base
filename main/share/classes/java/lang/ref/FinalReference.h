#ifndef _java_lang_ref_FinalReference_h_
#define _java_lang_ref_FinalReference_h_
//$ class java.lang.ref.FinalReference
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

class FinalReference : public ::java::lang::ref::Reference {
	$class(FinalReference, $PRELOAD | $NO_CLASS_INIT, ::java::lang::ref::Reference)
public:
	FinalReference();
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* q);
	virtual void clear() override;
	virtual bool enqueue() override;
	virtual $Object* get() override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_FinalReference_h_