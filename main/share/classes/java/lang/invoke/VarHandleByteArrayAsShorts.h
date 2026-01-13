#ifndef _java_lang_invoke_VarHandleByteArrayAsShorts_h_
#define _java_lang_invoke_VarHandleByteArrayAsShorts_h_
//$ class java.lang.invoke.VarHandleByteArrayAsShorts
//$ extends java.lang.invoke.VarHandleByteArrayBase

#include <java/lang/invoke/VarHandleByteArrayBase.h>

#pragma push_macro("ALIGN")
#undef ALIGN
#pragma push_macro("NIO_ACCESS")
#undef NIO_ACCESS
#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS

namespace jdk {
	namespace internal {
		namespace access {
			class JavaNioAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsShorts : public ::java::lang::invoke::VarHandleByteArrayBase {
	$class(VarHandleByteArrayAsShorts, 0, ::java::lang::invoke::VarHandleByteArrayBase)
public:
	VarHandleByteArrayAsShorts();
	void init$();
	static int16_t convEndian(bool big, int16_t n);
	static ::jdk::internal::access::JavaNioAccess* NIO_ACCESS;
	static const int32_t ALIGN = 1; // Short.BYTES - 1
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ALIGN")
#pragma pop_macro("NIO_ACCESS")
#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_lang_invoke_VarHandleByteArrayAsShorts_h_