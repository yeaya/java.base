#ifndef _jdk_internal_misc_ScopedMemoryAccess$Scope$ScopedAccessError_h_
#define _jdk_internal_misc_ScopedMemoryAccess$Scope$ScopedAccessError_h_
//$ class jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError
//$ extends java.lang.Error

#include <java/lang/Error.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace jdk {
	namespace internal {
		namespace misc {

class $export ScopedMemoryAccess$Scope$ScopedAccessError : public ::java::lang::Error {
	$class(ScopedMemoryAccess$Scope$ScopedAccessError, 0, ::java::lang::Error)
public:
	ScopedMemoryAccess$Scope$ScopedAccessError();
	void init$();
	static const int64_t serialVersionUID = (int64_t)1;
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError* INSTANCE;
	ScopedMemoryAccess$Scope$ScopedAccessError(const ScopedMemoryAccess$Scope$ScopedAccessError& e);
	ScopedMemoryAccess$Scope$ScopedAccessError wrapper$();
	virtual void throwWrapper$() override;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_misc_ScopedMemoryAccess$Scope$ScopedAccessError_h_