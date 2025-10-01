#ifndef _java_lang_invoke_VarHandleByteArrayAsDoubles_h_
#define _java_lang_invoke_VarHandleByteArrayAsDoubles_h_
//$ class java.lang.invoke.VarHandleByteArrayAsDoubles
//$ extends java.lang.invoke.VarHandleByteArrayBase

#include <java/lang/Double.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>

#pragma push_macro("BYTES")
#undef BYTES
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

class VarHandleByteArrayAsDoubles : public ::java::lang::invoke::VarHandleByteArrayBase {
	$class(VarHandleByteArrayAsDoubles, 0, ::java::lang::invoke::VarHandleByteArrayBase)
public:
	VarHandleByteArrayAsDoubles();
	void init$();
	static int64_t convEndian(bool big, double v);
	static double convEndian(bool big, int64_t rv);
	static ::jdk::internal::access::JavaNioAccess* NIO_ACCESS;
	static const int32_t ALIGN = 7; // ::java::lang::Double::BYTES - 1
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("ALIGN")
#pragma pop_macro("NIO_ACCESS")
#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_lang_invoke_VarHandleByteArrayAsDoubles_h_