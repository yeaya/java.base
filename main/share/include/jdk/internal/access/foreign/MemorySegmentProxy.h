#ifndef _jdk_internal_access_foreign_MemorySegmentProxy_h_
#define _jdk_internal_access_foreign_MemorySegmentProxy_h_
//$ class jdk.internal.access.foreign.MemorySegmentProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class IndexOutOfBoundsException;
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
		namespace access {
			namespace foreign {

class $import MemorySegmentProxy : public ::java::lang::Object {
	$class(MemorySegmentProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MemorySegmentProxy();
	void init$();
	static int64_t addOffsets(int64_t op1, int64_t op2, ::jdk::internal::access::foreign::MemorySegmentProxy* segmentProxy);
	virtual void checkAccess(int64_t offset, int64_t length, bool readOnly) {}
	virtual bool isSmall() {return false;}
	static int64_t multiplyOffsets(int64_t op1, int64_t op2, ::jdk::internal::access::foreign::MemorySegmentProxy* segmentProxy);
	static ::java::lang::IndexOutOfBoundsException* overflowException(int64_t min, int64_t max);
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope() {return nullptr;}
	virtual $Object* unsafeGetBase() {return nullptr;}
	virtual int64_t unsafeGetOffset() {return 0;}
};

			} // foreign
		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_foreign_MemorySegmentProxy_h_