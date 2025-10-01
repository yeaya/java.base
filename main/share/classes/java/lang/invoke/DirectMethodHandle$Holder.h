#ifndef _java_lang_invoke_DirectMethodHandle$Holder_h_
#define _java_lang_invoke_DirectMethodHandle$Holder_h_
//$ class java.lang.invoke.DirectMethodHandle$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class DirectMethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DirectMethodHandle$Holder : public ::java::lang::Object {
	$class(DirectMethodHandle$Holder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirectMethodHandle$Holder();
	void init$(::java::lang::invoke::DirectMethodHandle* this$0);
	::java::lang::invoke::DirectMethodHandle* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DirectMethodHandle$Holder_h_