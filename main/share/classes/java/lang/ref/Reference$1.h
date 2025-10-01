#ifndef _java_lang_ref_Reference$1_h_
#define _java_lang_ref_Reference$1_h_
//$ class java.lang.ref.Reference$1
//$ extends jdk.internal.access.JavaLangRefAccess

#include <jdk/internal/access/JavaLangRefAccess.h>

namespace java {
	namespace lang {
		namespace ref {

class Reference$1 : public ::jdk::internal::access::JavaLangRefAccess {
	$class(Reference$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaLangRefAccess)
public:
	Reference$1();
	void init$();
	virtual void runFinalization() override;
	virtual bool waitForReferenceProcessing() override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Reference$1_h_