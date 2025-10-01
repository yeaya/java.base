#ifndef _jdk_internal_misc_ScopedMemoryAccess$Scope_h_
#define _jdk_internal_misc_ScopedMemoryAccess$Scope_h_
//$ interface jdk.internal.misc.ScopedMemoryAccess$Scope
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope$Handle;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import ScopedMemoryAccess$Scope : public ::java::lang::Object {
	$interface(ScopedMemoryAccess$Scope, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* acquire() {return nullptr;}
	virtual void checkValidState() {}
	virtual bool isImplicit() {return false;}
	virtual $Thread* ownerThread() {return nullptr;}
	virtual void release(::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* handle) {}
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_ScopedMemoryAccess$Scope_h_