#ifndef _jdk_internal_misc_ScopedMemoryAccess$BufferAccess_h_
#define _jdk_internal_misc_ScopedMemoryAccess$BufferAccess_h_
//$ class jdk.internal.misc.ScopedMemoryAccess$BufferAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUFFER_ADDRESS")
#undef BUFFER_ADDRESS
#pragma push_macro("NIO_ACCESS")
#undef NIO_ACCESS
#pragma push_macro("BYTE_BUFFER_HB")
#undef BYTE_BUFFER_HB

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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
			class ScopedMemoryAccess$Scope;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $export ScopedMemoryAccess$BufferAccess : public ::java::lang::Object {
	$class(ScopedMemoryAccess$BufferAccess, 0, ::java::lang::Object)
public:
	ScopedMemoryAccess$BufferAccess();
	void init$();
	static int64_t bufferAddress(::java::nio::ByteBuffer* bb, int64_t offset);
	static $Object* bufferBase(::java::nio::ByteBuffer* bb);
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope(::java::nio::ByteBuffer* bb);
	static int64_t BUFFER_ADDRESS;
	static int64_t BYTE_BUFFER_HB;
	static ::jdk::internal::access::JavaNioAccess* NIO_ACCESS;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("BUFFER_ADDRESS")
#pragma pop_macro("NIO_ACCESS")
#pragma pop_macro("BYTE_BUFFER_HB")

#endif // _jdk_internal_misc_ScopedMemoryAccess$BufferAccess_h_