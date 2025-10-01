#ifndef _java_lang_annotation_Repeatable_h_
#define _java_lang_annotation_Repeatable_h_
//$ interface java.lang.annotation.Repeatable
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {
		namespace annotation {

class $export Repeatable : public ::java::lang::annotation::Annotation {
	$interface(Repeatable, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Class* value() {return nullptr;}
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_Repeatable_h_