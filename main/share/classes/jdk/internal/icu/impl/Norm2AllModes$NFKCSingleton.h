#ifndef _jdk_internal_icu_impl_Norm2AllModes$NFKCSingleton_h_
#define _jdk_internal_icu_impl_Norm2AllModes$NFKCSingleton_h_
//$ class jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Norm2AllModes$Norm2AllModesSingleton;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Norm2AllModes$NFKCSingleton : public ::java::lang::Object {
	$class(Norm2AllModes$NFKCSingleton, 0, ::java::lang::Object)
public:
	Norm2AllModes$NFKCSingleton();
	void init$();
	static ::jdk::internal::icu::impl::Norm2AllModes$Norm2AllModesSingleton* INSTANCE;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_icu_impl_Norm2AllModes$NFKCSingleton_h_