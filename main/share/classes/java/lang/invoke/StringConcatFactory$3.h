#ifndef _java_lang_invoke_StringConcatFactory$3_h_
#define _java_lang_invoke_StringConcatFactory$3_h_
//$ class java.lang.invoke.StringConcatFactory$3
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class StringConcatFactory$3 : public ::java::util::function::Function {
	$class(StringConcatFactory$3, $PRELOAD | $NO_CLASS_INIT, ::java::util::function::Function)
public:
	StringConcatFactory$3();
	void init$();
	virtual ::java::lang::invoke::MethodHandle* apply($Class* c);
	virtual $Object* apply(Object$* c) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_StringConcatFactory$3_h_