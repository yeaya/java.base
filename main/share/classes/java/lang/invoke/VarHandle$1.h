#ifndef _java_lang_invoke_VarHandle$1_h_
#define _java_lang_invoke_VarHandle$1_h_
//$ class java.lang.invoke.VarHandle$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		class ArrayIndexOutOfBoundsException;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandle$1 : public ::java::util::function::Function {
	$class(VarHandle$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	VarHandle$1();
	void init$();
	virtual ::java::lang::ArrayIndexOutOfBoundsException* apply($String* s);
	virtual $Object* apply(Object$* s) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandle$1_h_