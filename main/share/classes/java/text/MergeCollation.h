#ifndef _java_text_MergeCollation_h_
#define _java_text_MergeCollation_h_
//$ class java.text.MergeCollation
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BITARRAYMASK")
#undef BITARRAYMASK
#pragma push_macro("BYTEMASK")
#undef BYTEMASK
#pragma push_macro("BYTEPOWER")
#undef BYTEPOWER

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class PatternEntry;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace java {
	namespace text {

class MergeCollation : public ::java::lang::Object {
	$class(MergeCollation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MergeCollation();
	void init$($String* pattern);
	void addPattern($String* pattern);
	$String* emitPattern();
	$String* emitPattern(bool withWhiteSpace);
	int32_t findLastEntry(::java::text::PatternEntry* entry, ::java::lang::StringBuffer* excessChars);
	::java::text::PatternEntry* findLastWithNoExtension(int32_t i);
	void fixEntry(::java::text::PatternEntry* newEntry);
	int32_t getCount();
	::java::text::PatternEntry* getItemAt(int32_t index);
	$String* getPattern();
	$String* getPattern(bool withWhiteSpace);
	void setPattern($String* pattern);
	::java::util::ArrayList* patterns = nullptr;
	::java::text::PatternEntry* saveEntry = nullptr;
	::java::text::PatternEntry* lastEntry = nullptr;
	::java::lang::StringBuffer* excess = nullptr;
	$bytes* statusArray = nullptr;
	static const int8_t BITARRAYMASK = (int8_t)1;
	static const int32_t BYTEPOWER = 3;
	static const int32_t BYTEMASK = 7; // (1 << ::java::text::MergeCollation::BYTEPOWER) - 1
};

	} // text
} // java

#pragma pop_macro("BITARRAYMASK")
#pragma pop_macro("BYTEMASK")
#pragma pop_macro("BYTEPOWER")

#endif // _java_text_MergeCollation_h_