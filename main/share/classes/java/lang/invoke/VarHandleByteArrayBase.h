#ifndef _java_lang_invoke_VarHandleByteArrayBase_h_
#define _java_lang_invoke_VarHandleByteArrayBase_h_
//$ class java.lang.invoke.VarHandleByteArrayBase
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BE")
#undef BE
#pragma push_macro("BUFFER_ADDRESS")
#undef BUFFER_ADDRESS
#pragma push_macro("BUFFER_LIMIT")
#undef BUFFER_LIMIT
#pragma push_macro("BYTE_BUFFER_HB")
#undef BYTE_BUFFER_HB
#pragma push_macro("BYTE_BUFFER_IS_READ_ONLY")
#undef BYTE_BUFFER_IS_READ_ONLY

namespace java {
	namespace lang {
		class IllegalStateException;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayBase : public ::java::lang::Object {
	$class(VarHandleByteArrayBase, 0, ::java::lang::Object)
public:
	VarHandleByteArrayBase();
	void init$();
	static ::java::lang::IllegalStateException* newIllegalStateExceptionForMisalignedAccess(int32_t index);
	static int64_t BUFFER_ADDRESS;
	static int64_t BUFFER_LIMIT;
	static int64_t BYTE_BUFFER_HB;
	static int64_t BYTE_BUFFER_IS_READ_ONLY;
	static bool BE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BE")
#pragma pop_macro("BUFFER_ADDRESS")
#pragma pop_macro("BUFFER_LIMIT")
#pragma pop_macro("BYTE_BUFFER_HB")
#pragma pop_macro("BYTE_BUFFER_IS_READ_ONLY")

#endif // _java_lang_invoke_VarHandleByteArrayBase_h_