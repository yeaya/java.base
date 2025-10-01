#ifndef _jdk_internal_icu_impl_Norm2AllModes$DecomposeNormalizer2_h_
#define _jdk_internal_icu_impl_Norm2AllModes$DecomposeNormalizer2_h_
//$ class jdk.internal.icu.impl.Norm2AllModes$DecomposeNormalizer2
//$ extends jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl

#include <jdk/internal/icu/impl/Norm2AllModes$Normalizer2WithImpl.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class NormalizerImpl;
				class NormalizerImpl$ReorderingBuffer;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Norm2AllModes$DecomposeNormalizer2 : public ::jdk::internal::icu::impl::Norm2AllModes$Normalizer2WithImpl {
	$class(Norm2AllModes$DecomposeNormalizer2, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Norm2AllModes$Normalizer2WithImpl)
public:
	Norm2AllModes$DecomposeNormalizer2();
	void init$(::jdk::internal::icu::impl::NormalizerImpl* ni);
	virtual bool hasBoundaryBefore(int32_t c) override;
	using ::jdk::internal::icu::impl::Norm2AllModes$Normalizer2WithImpl::normalize;
	virtual void normalize(::java::lang::CharSequence* src, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer) override;
	virtual void normalizeAndAppend(::java::lang::CharSequence* src, bool doNormalize, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer) override;
	virtual int32_t spanQuickCheckYes(::java::lang::CharSequence* s) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Norm2AllModes$DecomposeNormalizer2_h_