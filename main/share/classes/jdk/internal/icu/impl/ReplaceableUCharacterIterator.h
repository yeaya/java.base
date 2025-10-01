#ifndef _jdk_internal_icu_impl_ReplaceableUCharacterIterator_h_
#define _jdk_internal_icu_impl_ReplaceableUCharacterIterator_h_
//$ class jdk.internal.icu.impl.ReplaceableUCharacterIterator
//$ extends jdk.internal.icu.text.UCharacterIterator

#include <java/lang/Array.h>
#include <jdk/internal/icu/text/UCharacterIterator.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class Replaceable;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class ReplaceableUCharacterIterator : public ::jdk::internal::icu::text::UCharacterIterator {
	$class(ReplaceableUCharacterIterator, $NO_CLASS_INIT, ::jdk::internal::icu::text::UCharacterIterator)
public:
	ReplaceableUCharacterIterator();
	using ::jdk::internal::icu::text::UCharacterIterator::getText;
	void init$($String* str);
	void init$(::java::lang::StringBuffer* buf);
	virtual $Object* clone() override;
	virtual int32_t current();
	virtual int32_t getIndex() override;
	virtual int32_t getLength() override;
	virtual int32_t getText($chars* fillIn, int32_t offset) override;
	virtual int32_t next() override;
	virtual int32_t previous() override;
	virtual void setIndex(int32_t currentIndex) override;
	::jdk::internal::icu::text::Replaceable* replaceable = nullptr;
	int32_t currentIndex = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_ReplaceableUCharacterIterator_h_