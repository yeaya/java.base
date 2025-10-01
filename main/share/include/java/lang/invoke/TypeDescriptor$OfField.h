#ifndef _java_lang_invoke_TypeDescriptor$OfField_h_
#define _java_lang_invoke_TypeDescriptor$OfField_h_
//$ interface java.lang.invoke.TypeDescriptor$OfField
//$ extends java.lang.invoke.TypeDescriptor

#include <java/lang/invoke/TypeDescriptor.h>

namespace java {
	namespace lang {
		namespace invoke {

class $import TypeDescriptor$OfField : public ::java::lang::invoke::TypeDescriptor {
	$interface(TypeDescriptor$OfField, $PRELOAD | $NO_CLASS_INIT, ::java::lang::invoke::TypeDescriptor)
public:
	virtual ::java::lang::invoke::TypeDescriptor$OfField* arrayType() {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* componentType() {return nullptr;}
	virtual bool isArray() {return false;}
	virtual bool isPrimitive() {return false;}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_TypeDescriptor$OfField_h_