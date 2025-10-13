#ifndef _java_text_RBTableBuilder_h_
#define _java_text_RBTableBuilder_h_
//$ class java.text.RBTableBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARINDEX")
#undef CHARINDEX
#pragma push_macro("IGNORABLEMASK")
#undef IGNORABLEMASK
#pragma push_macro("INITIALTABLESIZE")
#undef INITIALTABLESIZE
#pragma push_macro("MAXKEYSIZE")
#undef MAXKEYSIZE
#pragma push_macro("PRIMARYORDERINCREMENT")
#undef PRIMARYORDERINCREMENT
#pragma push_macro("SECONDARYORDERINCREMENT")
#undef SECONDARYORDERINCREMENT
#pragma push_macro("TERTIARYORDERINCREMENT")
#undef TERTIARYORDERINCREMENT

namespace java {
	namespace text {
		class MergeCollation;
		class RBCollationTables$BuildAPI;
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

class RBTableBuilder : public ::java::lang::Object {
	$class(RBTableBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RBTableBuilder();
	void init$(::java::text::RBCollationTables$BuildAPI* tables);
	void addComposedChars();
	void addContractFlags($String* chars);
	void addContractOrder($String* groupChars, int32_t anOrder);
	void addContractOrder($String* groupChars, int32_t anOrder, bool fwd);
	void addExpandOrder($String* contractChars, $String* expandChars, int32_t anOrder);
	void addExpandOrder(int32_t ch, $String* expandChars, int32_t anOrder);
	int32_t addExpansion(int32_t anOrder, $String* expandChars);
	void addOrder(int32_t ch, int32_t anOrder);
	void build($String* pattern, int32_t decmp);
	void commit();
	int32_t getCharOrder(int32_t ch);
	int32_t getContractOrder($String* groupChars);
	::java::util::Vector* getContractValues(int32_t ch);
	::java::util::Vector* getContractValuesImpl(int32_t index);
	int32_t increment(int32_t aStrength, int32_t lastValue);
	static const int32_t CHARINDEX = 0x70000000;
	static const int32_t IGNORABLEMASK = 0x0000FFFF;
	static const int32_t PRIMARYORDERINCREMENT = 0x00010000;
	static const int32_t SECONDARYORDERINCREMENT = 256;
	static const int32_t TERTIARYORDERINCREMENT = 1;
	static const int32_t INITIALTABLESIZE = 20;
	static const int32_t MAXKEYSIZE = 5;
	::java::text::RBCollationTables$BuildAPI* tables = nullptr;
	::java::text::MergeCollation* mPattern = nullptr;
	bool isOverIgnore = false;
	$chars* keyBuf = nullptr;
	::sun::text::IntHashtable* contractFlags = nullptr;
	bool frenchSec = false;
	bool seAsianSwapping = false;
	::sun::text::UCompactIntArray* mapping = nullptr;
	::java::util::Vector* contractTable = nullptr;
	::java::util::Vector* expandTable = nullptr;
	int16_t maxSecOrder = 0;
	int16_t maxTerOrder = 0;
};

	} // text
} // java

#pragma pop_macro("CHARINDEX")
#pragma pop_macro("IGNORABLEMASK")
#pragma pop_macro("INITIALTABLESIZE")
#pragma pop_macro("MAXKEYSIZE")
#pragma pop_macro("PRIMARYORDERINCREMENT")
#pragma pop_macro("SECONDARYORDERINCREMENT")
#pragma pop_macro("TERTIARYORDERINCREMENT")

#endif // _java_text_RBTableBuilder_h_