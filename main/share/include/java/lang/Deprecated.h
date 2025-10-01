#ifndef _java_lang_Deprecated_h_
#define _java_lang_Deprecated_h_
//$ interface java.lang.Deprecated
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {

class $import Deprecated : public ::java::lang::annotation::Annotation {
	$interface(Deprecated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool forRemoval() {return false;}
	virtual $String* since() {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_Deprecated_h_