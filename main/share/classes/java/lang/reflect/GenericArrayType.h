#ifndef _java_lang_reflect_GenericArrayType_h_
#define _java_lang_reflect_GenericArrayType_h_
//$ interface java.lang.reflect.GenericArrayType
//$ extends java.lang.reflect.Type

#include <java/lang/reflect/Type.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export GenericArrayType : public ::java::lang::reflect::Type {
	$interface(GenericArrayType, $NO_CLASS_INIT, ::java::lang::reflect::Type)
public:
	virtual ::java::lang::reflect::Type* getGenericComponentType() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_GenericArrayType_h_