#ifndef _jdk_internal_icu_impl_Norm2AllModes$NoopNormalizer2_h_
#define _jdk_internal_icu_impl_Norm2AllModes$NoopNormalizer2_h_
//$ class jdk.internal.icu.impl.Norm2AllModes$NoopNormalizer2
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

class Norm2AllModes$NoopNormalizer2 : public ::jdk::internal::icu::text::Normalizer2 {
	$class(Norm2AllModes$NoopNormalizer2, $NO_CLASS_INIT, ::jdk::internal::icu::text::Normalizer2)
public:
	Norm2AllModes$NoopNormalizer2();
	void init$();
	virtual ::java::lang::StringBuilder* append(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	virtual $String* getDecomposition(int32_t c) override;
	virtual bool hasBoundaryBefore(int32_t c) override;
	virtual bool isNormalized(::java::lang::CharSequence* s) override;
	using ::jdk::internal::icu::text::Normalizer2::normalize;
	virtual ::java::lang::StringBuilder* normalize(::java::lang::CharSequence* src, ::java::lang::StringBuilder* dest) override;
	virtual ::java::lang::Appendable* normalize(::java::lang::CharSequence* src, ::java::lang::Appendable* dest) override;
	virtual ::java::lang::StringBuilder* normalizeSecondAndAppend(::java::lang::StringBuilder* first, ::java::lang::CharSequence* second) override;
	virtual int32_t spanQuickCheckYes(::java::lang::CharSequence* s) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Norm2AllModes$NoopNormalizer2_h_