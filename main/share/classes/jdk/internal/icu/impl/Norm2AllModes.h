#ifndef _jdk_internal_icu_impl_Norm2AllModes_h_
#define _jdk_internal_icu_impl_Norm2AllModes_h_
//$ class jdk.internal.icu.impl.Norm2AllModes
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NOOP_NORMALIZER2")
#undef NOOP_NORMALIZER2

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Norm2AllModes$ComposeNormalizer2;
				class Norm2AllModes$DecomposeNormalizer2;
				class Norm2AllModes$NoopNormalizer2;
				class Norm2AllModes$Norm2AllModesSingleton;
				class NormalizerImpl;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Norm2AllModes : public ::java::lang::Object {
	$class(Norm2AllModes, 0, ::java::lang::Object)
public:
	Norm2AllModes();
	void init$(::jdk::internal::icu::impl::NormalizerImpl* ni);
	static ::jdk::internal::icu::impl::Norm2AllModes* getInstanceFromSingleton(::jdk::internal::icu::impl::Norm2AllModes$Norm2AllModesSingleton* singleton);
	static ::jdk::internal::icu::impl::Norm2AllModes* getNFCInstance();
	static ::jdk::internal::icu::impl::Norm2AllModes* getNFKCInstance();
	::jdk::internal::icu::impl::NormalizerImpl* impl = nullptr;
	::jdk::internal::icu::impl::Norm2AllModes$ComposeNormalizer2* comp = nullptr;
	::jdk::internal::icu::impl::Norm2AllModes$DecomposeNormalizer2* decomp = nullptr;
	static ::jdk::internal::icu::impl::Norm2AllModes$NoopNormalizer2* NOOP_NORMALIZER2;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("NOOP_NORMALIZER2")

#endif // _jdk_internal_icu_impl_Norm2AllModes_h_