#ifndef _java_lang_reflect_AnnotatedTypeVariable_h_
#define _java_lang_reflect_AnnotatedTypeVariable_h_
//$ interface java.lang.reflect.AnnotatedTypeVariable
//$ extends java.lang.reflect.AnnotatedType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedType.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import AnnotatedTypeVariable : public ::java::lang::reflect::AnnotatedType {
	$interface(AnnotatedTypeVariable, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedType)
public:
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedBounds() {return nullptr;}
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AnnotatedTypeVariable_h_