#ifndef _java_lang_reflect_AnnotatedWildcardType_h_
#define _java_lang_reflect_AnnotatedWildcardType_h_
//$ interface java.lang.reflect.AnnotatedWildcardType
//$ extends java.lang.reflect.AnnotatedType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedType.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import AnnotatedWildcardType : public ::java::lang::reflect::AnnotatedType {
	$interface(AnnotatedWildcardType, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedType)
public:
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedLowerBounds() {return nullptr;}
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override {return nullptr;}
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedUpperBounds() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AnnotatedWildcardType_h_