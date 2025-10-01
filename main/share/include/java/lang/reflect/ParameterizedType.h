#ifndef _java_lang_reflect_ParameterizedType_h_
#define _java_lang_reflect_ParameterizedType_h_
//$ interface java.lang.reflect.ParameterizedType
//$ extends java.lang.reflect.Type

#include <java/lang/Array.h>
#include <java/lang/reflect/Type.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import ParameterizedType : public ::java::lang::reflect::Type {
	$interface(ParameterizedType, $NO_CLASS_INIT, ::java::lang::reflect::Type)
public:
	virtual $Array<::java::lang::reflect::Type>* getActualTypeArguments() {return nullptr;}
	virtual ::java::lang::reflect::Type* getOwnerType() {return nullptr;}
	virtual ::java::lang::reflect::Type* getRawType() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ParameterizedType_h_