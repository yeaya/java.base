#ifndef _java_lang_annotation_Annotation_h_
#define _java_lang_annotation_Annotation_h_
//$ interface java.lang.annotation.Annotation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace annotation {

class $export Annotation : public ::java::lang::Object {
	$interface(Annotation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Class* annotationType() {return nullptr;}
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_Annotation_h_