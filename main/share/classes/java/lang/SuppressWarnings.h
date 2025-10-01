#ifndef _java_lang_SuppressWarnings_h_
#define _java_lang_SuppressWarnings_h_
//$ interface java.lang.SuppressWarnings
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {

class $export SuppressWarnings : public ::java::lang::annotation::Annotation {
	$interface(SuppressWarnings, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_SuppressWarnings_h_