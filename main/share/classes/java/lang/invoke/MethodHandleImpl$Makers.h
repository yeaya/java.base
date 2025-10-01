#ifndef _java_lang_invoke_MethodHandleImpl$Makers_h_
#define _java_lang_invoke_MethodHandleImpl$Makers_h_
//$ class java.lang.invoke.MethodHandleImpl$Makers
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRODUCE_REINVOKER_FORM")
#undef PRODUCE_REINVOKER_FORM
#pragma push_macro("PRODUCE_BLOCK_INLINING_FORM")
#undef PRODUCE_BLOCK_INLINING_FORM
#pragma push_macro("TYPED_COLLECTORS")
#undef TYPED_COLLECTORS

namespace java {
	namespace lang {
		class ClassValue;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$Makers : public ::java::lang::Object {
	$class(MethodHandleImpl$Makers, 0, ::java::lang::Object)
public:
	MethodHandleImpl$Makers();
	void init$();
	static ::java::util::function::Function* PRODUCE_BLOCK_INLINING_FORM;
	static ::java::util::function::Function* PRODUCE_REINVOKER_FORM;
	static ::java::lang::ClassValue* TYPED_COLLECTORS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("PRODUCE_REINVOKER_FORM")
#pragma pop_macro("PRODUCE_BLOCK_INLINING_FORM")
#pragma pop_macro("TYPED_COLLECTORS")

#endif // _java_lang_invoke_MethodHandleImpl$Makers_h_