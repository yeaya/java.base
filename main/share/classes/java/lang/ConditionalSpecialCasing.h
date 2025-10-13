#ifndef _java_lang_ConditionalSpecialCasing_h_
#define _java_lang_ConditionalSpecialCasing_h_
//$ class java.lang.ConditionalSpecialCasing
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AFTER_I")
#undef AFTER_I
#pragma push_macro("AFTER_SOFT_DOTTED")
#undef AFTER_SOFT_DOTTED
#pragma push_macro("COMBINING_CLASS_ABOVE")
#undef COMBINING_CLASS_ABOVE
#pragma push_macro("FINAL_CASED")
#undef FINAL_CASED
#pragma push_macro("MORE_ABOVE")
#undef MORE_ABOVE
#pragma push_macro("NOT_BEFORE_DOT")
#undef NOT_BEFORE_DOT

namespace java {
	namespace lang {
		class ConditionalSpecialCasing$Entry;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Locale;
	}
}

namespace java {
	namespace lang {

class ConditionalSpecialCasing : public ::java::lang::Object {
	$class(ConditionalSpecialCasing, 0, ::java::lang::Object)
public:
	ConditionalSpecialCasing();
	void init$();
	static bool isAfterI($String* src, int32_t index);
	static bool isAfterSoftDotted($String* src, int32_t index);
	static bool isBeforeDot($String* src, int32_t index);
	static bool isCased(int32_t ch);
	static bool isConditionMet($String* src, int32_t index, ::java::util::Locale* locale, int32_t condition);
	static bool isFinalCased($String* src, int32_t index, ::java::util::Locale* locale);
	static bool isMoreAbove($String* src, int32_t index);
	static bool isSoftDotted(int32_t ch);
	static $chars* lookUpTable($String* src, int32_t index, ::java::util::Locale* locale, bool bLowerCasing);
	static $chars* toLowerCaseCharArray($String* src, int32_t index, ::java::util::Locale* locale);
	static int32_t toLowerCaseEx($String* src, int32_t index, ::java::util::Locale* locale);
	static $chars* toUpperCaseCharArray($String* src, int32_t index, ::java::util::Locale* locale);
	static int32_t toUpperCaseEx($String* src, int32_t index, ::java::util::Locale* locale);
	static const int32_t FINAL_CASED = 1;
	static const int32_t AFTER_SOFT_DOTTED = 2;
	static const int32_t MORE_ABOVE = 3;
	static const int32_t AFTER_I = 4;
	static const int32_t NOT_BEFORE_DOT = 5;
	static const int32_t COMBINING_CLASS_ABOVE = 230;
	static $Array<::java::lang::ConditionalSpecialCasing$Entry>* entry;
	static ::java::util::Hashtable* entryTable;
};

	} // lang
} // java

#pragma pop_macro("AFTER_I")
#pragma pop_macro("AFTER_SOFT_DOTTED")
#pragma pop_macro("COMBINING_CLASS_ABOVE")
#pragma pop_macro("FINAL_CASED")
#pragma pop_macro("MORE_ABOVE")
#pragma pop_macro("NOT_BEFORE_DOT")

#endif // _java_lang_ConditionalSpecialCasing_h_