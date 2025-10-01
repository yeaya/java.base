#ifndef _java_lang_Cloneable_h_
#define _java_lang_Cloneable_h_
//$ interface java.lang.Cloneable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $import Cloneable : public ::java::lang::Object {
	$interface(Cloneable, $PRELOAD | $CLONEABLE | $NO_CLASS_INIT, ::java::lang::Object)
};

	} // lang
} // java

#endif // _java_lang_Cloneable_h_