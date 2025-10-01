#ifndef _java_lang_reflect_GenericDeclaration_h_
#define _java_lang_reflect_GenericDeclaration_h_
//$ interface java.lang.reflect.GenericDeclaration
//$ extends java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedElement.h>

namespace java {
	namespace lang {
		namespace reflect {
			class TypeVariable;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import GenericDeclaration : public ::java::lang::reflect::AnnotatedElement {
	$interface(GenericDeclaration, $PRELOAD | $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedElement)
public:
	virtual $Array<::java::lang::reflect::TypeVariable>* getTypeParameters() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_GenericDeclaration_h_