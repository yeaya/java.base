#ifndef _java_lang_reflect_WildcardType_h_
#define _java_lang_reflect_WildcardType_h_
//$ interface java.lang.reflect.WildcardType
//$ extends java.lang.reflect.Type

#include <java/lang/Array.h>
#include <java/lang/reflect/Type.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import WildcardType : public ::java::lang::reflect::Type {
	$interface(WildcardType, $NO_CLASS_INIT, ::java::lang::reflect::Type)
public:
	virtual $Array<::java::lang::reflect::Type>* getLowerBounds() {return nullptr;}
	virtual $Array<::java::lang::reflect::Type>* getUpperBounds() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_WildcardType_h_