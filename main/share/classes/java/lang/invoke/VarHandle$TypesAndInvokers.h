#ifndef _java_lang_invoke_VarHandle$TypesAndInvokers_h_
#define _java_lang_invoke_VarHandle$TypesAndInvokers_h_
//$ class java.lang.invoke.VarHandle$TypesAndInvokers
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export VarHandle$TypesAndInvokers : public ::java::lang::Object {
	$class(VarHandle$TypesAndInvokers, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VarHandle$TypesAndInvokers();
	void init$();
	$Array<::java::lang::invoke::MethodType>* methodType_table = nullptr;
	$Array<::java::lang::invoke::MethodHandle>* methodHandle_table = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandle$TypesAndInvokers_h_