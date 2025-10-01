#ifndef _java_lang_invoke_DelegatingMethodHandle$Holder_h_
#define _java_lang_invoke_DelegatingMethodHandle$Holder_h_
//$ class java.lang.invoke.DelegatingMethodHandle$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class DelegatingMethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DelegatingMethodHandle$Holder : public ::java::lang::Object {
	$class(DelegatingMethodHandle$Holder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DelegatingMethodHandle$Holder();
	void init$(::java::lang::invoke::DelegatingMethodHandle* this$0);
	::java::lang::invoke::DelegatingMethodHandle* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DelegatingMethodHandle$Holder_h_