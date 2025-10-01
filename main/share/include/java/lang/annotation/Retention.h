#ifndef _java_lang_annotation_Retention_h_
#define _java_lang_annotation_Retention_h_
//$ interface java.lang.annotation.Retention
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {
		namespace annotation {
			class RetentionPolicy;
		}
	}
}

namespace java {
	namespace lang {
		namespace annotation {

class $import Retention : public ::java::lang::annotation::Annotation {
	$interface(Retention, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::java::lang::annotation::RetentionPolicy* value() {return nullptr;}
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_Retention_h_