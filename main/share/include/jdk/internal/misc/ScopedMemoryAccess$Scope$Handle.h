#ifndef _jdk_internal_misc_ScopedMemoryAccess$Scope$Handle_h_
#define _jdk_internal_misc_ScopedMemoryAccess$Scope$Handle_h_
//$ interface jdk.internal.misc.ScopedMemoryAccess$Scope$Handle
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import ScopedMemoryAccess$Scope$Handle : public ::java::lang::Object {
	$interface(ScopedMemoryAccess$Scope$Handle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope() {return nullptr;}
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_ScopedMemoryAccess$Scope$Handle_h_