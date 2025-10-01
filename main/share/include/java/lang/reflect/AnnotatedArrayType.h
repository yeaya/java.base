#ifndef _java_lang_reflect_AnnotatedArrayType_h_
#define _java_lang_reflect_AnnotatedArrayType_h_
//$ interface java.lang.reflect.AnnotatedArrayType
//$ extends java.lang.reflect.AnnotatedType

#include <java/lang/reflect/AnnotatedType.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import AnnotatedArrayType : public ::java::lang::reflect::AnnotatedType {
	$interface(AnnotatedArrayType, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedType)
public:
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedGenericComponentType() {return nullptr;}
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AnnotatedArrayType_h_