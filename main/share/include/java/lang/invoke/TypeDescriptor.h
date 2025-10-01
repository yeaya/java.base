#ifndef _java_lang_invoke_TypeDescriptor_h_
#define _java_lang_invoke_TypeDescriptor_h_
//$ interface java.lang.invoke.TypeDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {

class $import TypeDescriptor : public ::java::lang::Object {
	$interface(TypeDescriptor, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* descriptorString() {return nullptr;}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_TypeDescriptor_h_