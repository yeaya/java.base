#ifndef _java_lang_invoke_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle
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

class VarHandleByteArrayAsFloats$ByteArrayViewVarHandle : public ::java::lang::invoke::VarHandle {
	$class(VarHandleByteArrayAsFloats$ByteArrayViewVarHandle, $NO_CLASS_INIT, ::java::lang::invoke::VarHandle)
public:
	VarHandleByteArrayAsFloats$ByteArrayViewVarHandle();
	void init$(::java::lang::invoke::VarForm* form, bool be, bool exact);
	bool be = false;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandleByteArrayAsFloats$ByteArrayViewVarHandle_h_