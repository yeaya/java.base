#ifndef _java_lang_ref_Cleaner$Cleanable_h_
#define _java_lang_ref_Cleaner$Cleanable_h_
//$ interface java.lang.ref.Cleaner$Cleanable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {

class $import Cleaner$Cleanable : public ::java::lang::Object {
	$interface(Cleaner$Cleanable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clean() {}
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Cleaner$Cleanable_h_