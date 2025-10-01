#ifndef _java_lang_invoke_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle
//$ extends java.lang.invoke.VarHandle

#include <java/lang/invoke/VarHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class VarForm;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsShorts$ByteArrayViewVarHandle : public ::java::lang::invoke::VarHandle {
	$class(VarHandleByteArrayAsShorts$ByteArrayViewVarHandle, $NO_CLASS_INIT, ::java::lang::invoke::VarHandle)
public:
	VarHandleByteArrayAsShorts$ByteArrayViewVarHandle();
	void init$(::java::lang::invoke::VarForm* form, bool be, bool exact);
	bool be = false;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandleByteArrayAsShorts$ByteArrayViewVarHandle_h_