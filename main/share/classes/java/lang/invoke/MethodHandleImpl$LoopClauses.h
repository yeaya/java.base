#ifndef _java_lang_invoke_MethodHandleImpl$LoopClauses_h_
#define _java_lang_invoke_MethodHandleImpl$LoopClauses_h_
//$ class java.lang.invoke.MethodHandleImpl$LoopClauses
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

class MethodHandleImpl$LoopClauses : public ::java::lang::Object {
	$class(MethodHandleImpl$LoopClauses, 0, ::java::lang::Object)
public:
	MethodHandleImpl$LoopClauses();
	void init$($Array<::java::lang::invoke::MethodHandle, 2>* clauses);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	$Array<::java::lang::invoke::MethodHandle, 2>* clauses = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$LoopClauses_h_