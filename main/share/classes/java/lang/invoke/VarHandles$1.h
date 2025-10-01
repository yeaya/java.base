#ifndef _java_lang_invoke_VarHandles$1_h_
#define _java_lang_invoke_VarHandles$1_h_
//$ class java.lang.invoke.VarHandles$1
//$ extends java.lang.ClassValue

#include <java/lang/ClassValue.h>

namespace java {
	namespace lang {
		namespace invoke {

class VarHandles$1 : public ::java::lang::ClassValue {
	$class(VarHandles$1, $NO_CLASS_INIT, ::java::lang::ClassValue)
public:
	VarHandles$1();
	void init$();
	virtual $Object* computeValue($Class* type) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandles$1_h_