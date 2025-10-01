#ifndef _java_lang_invoke_VarHandle$AccessDescriptor_h_
#define _java_lang_invoke_VarHandle$AccessDescriptor_h_
//$ class java.lang.invoke.VarHandle$AccessDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export VarHandle$AccessDescriptor : public ::java::lang::Object {
	$class(VarHandle$AccessDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VarHandle$AccessDescriptor();
	void init$(::java::lang::invoke::MethodType* symbolicMethodType, int32_t type, int32_t mode);
	::java::lang::invoke::MethodType* symbolicMethodTypeExact = nullptr;
	::java::lang::invoke::MethodType* symbolicMethodTypeErased = nullptr;
	::java::lang::invoke::MethodType* symbolicMethodTypeInvoker = nullptr;
	$Class* returnType = nullptr;
	int32_t type = 0;
	int32_t mode = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandle$AccessDescriptor_h_