#ifndef _java_text_RBCollationTables_h_
#define _java_text_RBCollationTables_h_
//$ class java.text.RBCollationTables
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TERTIARYORDERMASK")
#undef TERTIARYORDERMASK
#pragma push_macro("SECONDARYDIFFERENCEONLY")
#undef SECONDARYDIFFERENCEONLY
#pragma push_macro("PRIMARYORDERSHIFT")
#undef PRIMARYORDERSHIFT
#pragma push_macro("CONTRACTCHARINDEX")
#undef CONTRACTCHARINDEX
#pragma push_macro("UNMAPPED")
#undef UNMAPPED
#pragma push_macro("EXPANDCHARINDEX")
#undef EXPANDCHARINDEX
#pragma push_macro("SECONDARYORDERSHIFT")
#undef SECONDARYORDERSHIFT
#pragma push_macro("PRIMARYDIFFERENCEONLY")
#undef PRIMARYDIFFERENCEONLY
#pragma push_macro("SECONDARYORDERMASK")
#undef SECONDARYORDERMASK
#pragma push_macro("PRIMARYORDERMASK")
#undef PRIMARYORDERMASK

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace text {
		class IntHashtable;
		class UCompactIntArray;
	}
}

namespace java {
	namespace text {

class RBCollationTables : public ::java::lang::Object {
	$class(RBCollationTables, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RBCollationTables();
	void init$($String* rules, int32_t decmp);
	::java::util::Vector* getContractValues(int32_t ch);
	::java::util::Vector* getContractValuesImpl(int32_t index);
	static int32_t getEntry(::java::util::Vector* list, $String* name, bool fwd);
	$ints* getExpandValueList(int32_t idx);
	int32_t getMaxExpansion(int32_t order);
	int16_t getMaxSecOrder();
	int16_t getMaxTerOrder();
	$String* getRules();
	int32_t getUnicodeOrder(int32_t ch);
	bool isFrenchSec();
	bool isSEAsianSwapping();
	static void reverse(::java::lang::StringBuffer* result, int32_t from, int32_t to);
	bool usedInContractSeq(int32_t c);
	static const int32_t EXPANDCHARINDEX = 0x7E000000;
	static const int32_t CONTRACTCHARINDEX = 0x7F000000;
	static const int32_t UNMAPPED = (-1);
	static const int32_t PRIMARYORDERMASK = 0xFFFF0000;
	static const int32_t SECONDARYORDERMASK = 0x0000FF00;
	static const int32_t TERTIARYORDERMASK = 255;
	static const int32_t PRIMARYDIFFERENCEONLY = 0xFFFF0000;
	static const int32_t SECONDARYDIFFERENCEONLY = (-256);
	static const int32_t PRIMARYORDERSHIFT = 16;
	static const int32_t SECONDARYORDERSHIFT = 8;
	$String* rules = nullptr;
	bool frenchSec = false;
	bool seAsianSwapping = false;
	::sun::text::UCompactIntArray* mapping = nullptr;
	::java::util::Vector* contractTable = nullptr;
	::java::util::Vector* expandTable = nullptr;
	::sun::text::IntHashtable* contractFlags = nullptr;
	int16_t maxSecOrder = 0;
	int16_t maxTerOrder = 0;
};

	} // text
} // java

#pragma pop_macro("TERTIARYORDERMASK")
#pragma pop_macro("SECONDARYDIFFERENCEONLY")
#pragma pop_macro("PRIMARYORDERSHIFT")
#pragma pop_macro("CONTRACTCHARINDEX")
#pragma pop_macro("UNMAPPED")
#pragma pop_macro("EXPANDCHARINDEX")
#pragma pop_macro("SECONDARYORDERSHIFT")
#pragma pop_macro("PRIMARYDIFFERENCEONLY")
#pragma pop_macro("SECONDARYORDERMASK")
#pragma pop_macro("PRIMARYORDERMASK")

#endif // _java_text_RBCollationTables_h_