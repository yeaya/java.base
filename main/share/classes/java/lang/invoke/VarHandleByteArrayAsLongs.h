#ifndef _java_lang_invoke_VarHandleByteArrayAsLongs_h_
#define _java_lang_invoke_VarHandleByteArrayAsLongs_h_
//$ class java.lang.invoke.VarHandleByteArrayAsLongs
//$ extends java.lang.invoke.VarHandleByteArrayBase

#include <java/lang/Long.h>
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

class VarHandleByteArrayAsLongs : public ::java::lang::invoke::VarHandleByteArrayBase {
	$class(VarHandleByteArrayAsLongs, 0, ::java::lang::invoke::VarHandleByteArrayBase)
public:
	VarHandleByteArrayAsLongs();
	void init$();
	static int64_t convEndian(bool big, int64_t n);
	static ::jdk::internal::access::JavaNioAccess* NIO_ACCESS;
	static const int32_t ALIGN = 7; // ::java::lang::Long::BYTES - 1
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("ALIGN")
#pragma pop_macro("NIO_ACCESS")
#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_lang_invoke_VarHandleByteArrayAsLongs_h_