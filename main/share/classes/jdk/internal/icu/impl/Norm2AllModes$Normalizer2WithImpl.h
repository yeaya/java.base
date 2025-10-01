#ifndef _jdk_internal_icu_impl_Norm2AllModes$Normalizer2WithImpl_h_
#define _jdk_internal_icu_impl_Norm2AllModes$Normalizer2WithImpl_h_
//$ class jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl
//$ extends jdk.internal.icu.text.Normalizer2

#include <jdk/internal/icu/text/Normalizer2.h>

namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
		class StringBuilder;
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

class Norm2AllModes$Normalizer2WithImpl : public ::jdk::internal::icu::text::Normalizer2 {
	$class(Norm2AllModes$Normalizer2WithImpl, $NO_CLASS_INIT, ::jdk::internal::icu::text::Normalizer2)
public:
	Norm2AllModes$Normalizer2WithImpl();
	void init$(::jdk::internal::icu::impl::NormalizerImpl* ni);
	virtual ::java::lang::StringBuilder* append(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	virtual int32_t getCombiningClass(int32_t c) override;
	virtual $String* getDecomposition(int32_t c) override;
	virtual bool isNormalized(::java::lang::CharSequence* s) override;
	using ::jdk::internal::icu::text::Normalizer2::normalize;
	virtual ::java::lang::StringBuilder* normalize(::java::lang::CharSequence* src, ::java::lang::StringBuilder* dest) override;
	virtual ::java::lang::Appendable* normalize(::java::lang::CharSequence* src, ::java::lang::Appendable* dest) override;
	virtual void normalize(::java::lang::CharSequence* src, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer) {}
	virtual void normalizeAndAppend(::java::lang::CharSequence* src, bool doNormalize, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer) {}
	virtual ::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	virtual ::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second, bool doNormalize);
	::jdk::internal::icu::impl::NormalizerImpl* impl = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Norm2AllModes$Normalizer2WithImpl_h_