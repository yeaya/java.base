#ifndef _java_text_CollationElementIterator_h_
#define _java_text_CollationElementIterator_h_
//$ class java.text.CollationElementIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NULLORDER")
#undef NULLORDER
#pragma push_macro("UNMAPPEDCHARVALUE")
#undef UNMAPPEDCHARVALUE

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
		class RBCollationTables;
		class RuleBasedCollator;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class NormalizerBase;
			}
		}
	}
}

namespace java {
	namespace text {

class $import CollationElementIterator : public ::java::lang::Object {
	$class(CollationElementIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CollationElementIterator();
	void init$($String* sourceText, ::java::text::RuleBasedCollator* owner);
	void init$(::java::text::CharacterIterator* sourceText, ::java::text::RuleBasedCollator* owner);
	int32_t getMaxExpansion(int32_t order);
	int32_t getOffset();
	static bool isIgnorable(int32_t order);
	static bool isLaoBaseConsonant(int32_t ch);
	static bool isLaoPreVowel(int32_t ch);
	static bool isThaiBaseConsonant(int32_t ch);
	static bool isThaiPreVowel(int32_t ch);
	$ints* makeReorderedBuffer(int32_t colFirst, int32_t lastValue, $ints* lastExpansion, bool forward);
	int32_t next();
	int32_t nextContractChar(int32_t ch);
	int32_t prevContractChar(int32_t ch);
	int32_t previous();
	static int32_t primaryOrder(int32_t order);
	void reset();
	static int16_t secondaryOrder(int32_t order);
	void setOffset(int32_t newOffset);
	void setText($String* source);
	void setText(::java::text::CharacterIterator* source);
	int32_t strengthOrder(int32_t order);
	static int16_t tertiaryOrder(int32_t order);
	static const int32_t NULLORDER = (-1);
	static const int32_t UNMAPPEDCHARVALUE = 0x7FFF0000;
	::jdk::internal::icu::text::NormalizerBase* text = nullptr;
	$ints* buffer = nullptr;
	int32_t expIndex = 0;
	::java::lang::StringBuffer* key = nullptr;
	int32_t swapOrder = 0;
	::java::text::RBCollationTables* ordering = nullptr;
	::java::text::RuleBasedCollator* owner = nullptr;
};

	} // text
} // java

#pragma pop_macro("NULLORDER")
#pragma pop_macro("UNMAPPEDCHARVALUE")

#endif // _java_text_CollationElementIterator_h_