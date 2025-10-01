#ifndef _jdk_internal_icu_impl_Norm2AllModes$Norm2AllModesSingleton_h_
#define _jdk_internal_icu_impl_Norm2AllModes$Norm2AllModesSingleton_h_
//$ class jdk.internal.icu.impl.Norm2AllModes$Norm2AllModesSingleton
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Norm2AllModes;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Norm2AllModes$Norm2AllModesSingleton : public ::java::lang::Object {
	$class(Norm2AllModes$Norm2AllModesSingleton, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Norm2AllModes$Norm2AllModesSingleton();
	void init$($String* name);
	::jdk::internal::icu::impl::Norm2AllModes* allModes = nullptr;
	::java::lang::RuntimeException* exception = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Norm2AllModes$Norm2AllModesSingleton_h_