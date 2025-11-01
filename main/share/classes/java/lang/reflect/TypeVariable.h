#ifndef _java_lang_reflect_TypeVariable_h_
#define _java_lang_reflect_TypeVariable_h_
//$ interface java.lang.reflect.TypeVariable
//$ extends java.lang.reflect.Type,java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Type.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class GenericDeclaration;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export TypeVariable : public ::java::lang::reflect::Type, public ::java::lang::reflect::AnnotatedElement {
	$interface(TypeVariable, $NO_CLASS_INIT, ::java::lang::reflect::Type, ::java::lang::reflect::AnnotatedElement)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedBounds() {return nullptr;}
	virtual $Array<::java::lang::reflect::Type>* getBounds() {return nullptr;}
	virtual ::java::lang::reflect::GenericDeclaration* getGenericDeclaration() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_TypeVariable_h_