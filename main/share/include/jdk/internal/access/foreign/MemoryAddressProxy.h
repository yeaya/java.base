#ifndef _jdk_internal_access_foreign_MemoryAddressProxy_h_
#define _jdk_internal_access_foreign_MemoryAddressProxy_h_
//$ interface jdk.internal.access.foreign.MemoryAddressProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class IndexOutOfBoundsException;
	}
}

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

class $import MemoryAddressProxy : public ::java::lang::Object {
	$interface(MemoryAddressProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static int64_t addOffsets(int64_t op1, int64_t op2, ::jdk::internal::access::foreign::MemoryAddressProxy* addr);
	virtual void checkAccess(int64_t offset, int64_t length, bool readOnly) {}
	virtual bool isSmall() {return false;}
	static int64_t multiplyOffsets(int64_t op1, int64_t op2, ::jdk::internal::access::foreign::MemoryAddressProxy* addr);
	static ::java::lang::IndexOutOfBoundsException* overflowException(int64_t min, int64_t max);
	virtual $Object* unsafeGetBase() {return nullptr;}
	virtual int64_t unsafeGetOffset() {return 0;}
};

			} // foreign
		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_foreign_MemoryAddressProxy_h_