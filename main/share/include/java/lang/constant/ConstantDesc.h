#ifndef _java_lang_constant_ConstantDesc_h_
#define _java_lang_constant_ConstantDesc_h_
//$ interface java.lang.constant.ConstantDesc
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $import ConstantDesc : public ::java::lang::Object {
	$interface(ConstantDesc, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) {return nullptr;}
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_ConstantDesc_h_