#ifndef _jdk_internal_icu_impl_NormalizerImpl$ReorderingBuffer_h_
#define _jdk_internal_icu_impl_NormalizerImpl$ReorderingBuffer_h_
//$ class jdk.internal.icu.impl.NormalizerImpl$ReorderingBuffer
//$ extends java.lang.Appendable

#include <java/lang/Appendable.h>

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class NormalizerImpl;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl$ReorderingBuffer : public ::java::lang::Appendable {
	$class(NormalizerImpl$ReorderingBuffer, $NO_CLASS_INIT, ::java::lang::Appendable)
public:
	NormalizerImpl$ReorderingBuffer();
	using ::java::lang::Appendable::equals;
	void init$(::jdk::internal::icu::impl::NormalizerImpl* ni, ::java::lang::Appendable* dest, int32_t destCapacity);
	void append(int32_t c, int32_t cc);
	void append(::java::lang::CharSequence* s, int32_t start, int32_t limit, bool isNFD, int32_t leadCC, int32_t trailCC);
	virtual ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* append(char16_t c) override;
	virtual ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* append(::java::lang::CharSequence* s) override;
	virtual ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* append(::java::lang::CharSequence* s, int32_t start, int32_t limit) override;
	void appendZeroCC(int32_t c);
	bool equals(::java::lang::CharSequence* s, int32_t start, int32_t limit);
	void flush();
	::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* flushAndAppendZeroCC(::java::lang::CharSequence* s, int32_t start, int32_t limit);
	int32_t getLastCC();
	::java::lang::StringBuilder* getStringBuilder();
	void insert(int32_t c, int32_t cc);
	bool isEmpty();
	int32_t length();
	int32_t previousCC();
	void remove();
	void removeSuffix(int32_t suffixLength);
	void setIterator();
	void skipPrevious();
	::jdk::internal::icu::impl::NormalizerImpl* impl = nullptr;
	::java::lang::Appendable* app = nullptr;
	::java::lang::StringBuilder* str = nullptr;
	bool appIsStringBuilder = false;
	int32_t reorderStart = 0;
	int32_t lastCC = 0;
	int32_t codePointStart = 0;
	int32_t codePointLimit = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_NormalizerImpl$ReorderingBuffer_h_