#ifndef _jdk_internal_icu_impl_CharacterIteratorWrapper_h_
#define _jdk_internal_icu_impl_CharacterIteratorWrapper_h_
//$ class jdk.internal.icu.impl.CharacterIteratorWrapper
//$ extends jdk.internal.icu.text.UCharacterIterator

#include <java/lang/Array.h>
#include <jdk/internal/icu/text/UCharacterIterator.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class CharacterIteratorWrapper : public ::jdk::internal::icu::text::UCharacterIterator {
	$class(CharacterIteratorWrapper, $NO_CLASS_INIT, ::jdk::internal::icu::text::UCharacterIterator)
public:
	CharacterIteratorWrapper();
	using ::jdk::internal::icu::text::UCharacterIterator::getText;
	void init$(::java::text::CharacterIterator* iter);
	virtual $Object* clone() override;
	virtual int32_t current();
	virtual int32_t getIndex() override;
	virtual int32_t getLength() override;
	virtual int32_t getText($chars* fillIn, int32_t offset) override;
	virtual int32_t next() override;
	virtual int32_t previous() override;
	virtual void setIndex(int32_t index) override;
	::java::text::CharacterIterator* iterator = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_CharacterIteratorWrapper_h_