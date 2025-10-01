#ifndef _java_lang_invoke_MethodHandleImpl$CasesHolder_h_
#define _java_lang_invoke_MethodHandleImpl$CasesHolder_h_
//$ class java.lang.invoke.MethodHandleImpl$CasesHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class MethodHandleImpl$CasesHolder : public ::java::lang::Object {
	$class(MethodHandleImpl$CasesHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodHandleImpl$CasesHolder();
	void init$($Array<::java::lang::invoke::MethodHandle>* cases);
	$Array<::java::lang::invoke::MethodHandle>* cases = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$CasesHolder_h_