#ifndef _jdk_internal_icu_text_UCharacterIterator_h_
#define _jdk_internal_icu_text_UCharacterIterator_h_
//$ class jdk.internal.icu.text.UCharacterIterator
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("DONE")
#undef DONE

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export UCharacterIterator : public ::java::lang::Cloneable {
	$class(UCharacterIterator, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	UCharacterIterator();
	void init$();
	virtual $Object* clone() override;
	virtual int32_t getIndex() {return 0;}
	static ::jdk::internal::icu::text::UCharacterIterator* getInstance($String* source);
	static ::jdk::internal::icu::text::UCharacterIterator* getInstance(::java::lang::StringBuffer* source);
	static ::jdk::internal::icu::text::UCharacterIterator* getInstance(::java::text::CharacterIterator* source);
	virtual int32_t getLength() {return 0;}
	virtual int32_t getText($chars* fillIn, int32_t offset) {return 0;}
	int32_t getText($chars* fillIn);
	virtual $String* getText();
	virtual int32_t moveCodePointIndex(int32_t delta);
	virtual int32_t next() {return 0;}
	virtual int32_t nextCodePoint();
	virtual int32_t previous() {return 0;}
	virtual int32_t previousCodePoint();
	virtual void setIndex(int32_t index) {}
	virtual void setToStart();
	static const int32_t DONE = (-1);
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("DONE")

#endif // _jdk_internal_icu_text_UCharacterIterator_h_