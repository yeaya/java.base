#ifndef _java_lang_annotation_Target_h_
#define _java_lang_annotation_Target_h_
//$ interface java.lang.annotation.Target
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {
		namespace annotation {
			class ElementType;
		}
	}
}

namespace java {
	namespace lang {
		namespace annotation {

class $export Target : public ::java::lang::annotation::Annotation {
	$interface(Target, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::java::lang::annotation::ElementType>* value() {return nullptr;}
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_Target_h_