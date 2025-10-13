#ifndef _java_text_RuleBasedCollator_h_
#define _java_text_RuleBasedCollator_h_
//$ class java.text.RuleBasedCollator
//$ extends java.text.Collator

#include <java/text/Collator.h>

#pragma push_macro("CHARINDEX")
#undef CHARINDEX
#pragma push_macro("COLLATIONKEYOFFSET")
#undef COLLATIONKEYOFFSET
#pragma push_macro("CONTRACTCHARINDEX")
#undef CONTRACTCHARINDEX
#pragma push_macro("EXPANDCHARINDEX")
#undef EXPANDCHARINDEX
#pragma push_macro("UNMAPPED")
#undef UNMAPPED

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
		class CollationElementIterator;
		class CollationKey;
		class RBCollationTables;
	}
}

namespace java {
	namespace text {

class $import RuleBasedCollator : public ::java::text::Collator {
	$class(RuleBasedCollator, $NO_CLASS_INIT, ::java::text::Collator)
public:
	RuleBasedCollator();
	using ::java::text::Collator::compare;
	using ::java::text::Collator::equals;
	void init$($String* rules);
	void init$($String* rules, int32_t decomp);
	void init$(::java::text::RuleBasedCollator* that);
	virtual $Object* clone() override;
	virtual int32_t compare($String* source, $String* target) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::text::CollationElementIterator* getCollationElementIterator($String* source);
	virtual ::java::text::CollationElementIterator* getCollationElementIterator(::java::text::CharacterIterator* source);
	virtual ::java::text::CollationKey* getCollationKey($String* source) override;
	virtual $String* getRules();
	virtual ::java::text::RBCollationTables* getTables();
	virtual int32_t hashCode() override;
	static const int32_t CHARINDEX = 0x70000000;
	static const int32_t EXPANDCHARINDEX = 0x7E000000;
	static const int32_t CONTRACTCHARINDEX = 0x7F000000;
	static const int32_t UNMAPPED = (-1);
	static const int32_t COLLATIONKEYOFFSET = 1;
	::java::text::RBCollationTables* tables = nullptr;
	::java::lang::StringBuffer* primResult = nullptr;
	::java::lang::StringBuffer* secResult = nullptr;
	::java::lang::StringBuffer* terResult = nullptr;
	::java::text::CollationElementIterator* sourceCursor = nullptr;
	::java::text::CollationElementIterator* targetCursor = nullptr;
};

	} // text
} // java

#pragma pop_macro("CHARINDEX")
#pragma pop_macro("COLLATIONKEYOFFSET")
#pragma pop_macro("CONTRACTCHARINDEX")
#pragma pop_macro("EXPANDCHARINDEX")
#pragma pop_macro("UNMAPPED")

#endif // _java_text_RuleBasedCollator_h_