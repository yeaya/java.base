#ifndef _sun_util_locale_LocaleMatcher_h_
#define _sun_util_locale_LocaleMatcher_h_
//$ class sun.util.locale.LocaleMatcher
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class List;
		class Locale;
		class Locale$FilteringMode;
		class Map;
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace locale {

class LocaleMatcher : public ::java::lang::Object {
	$class(LocaleMatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocaleMatcher();
	void init$();
	static bool caseInsensitiveMatch(::java::util::List* list, $String* tag);
	static ::java::util::List* filter(::java::util::List* priorityList, ::java::util::Collection* locales, ::java::util::Locale$FilteringMode* mode);
	static ::java::util::List* filterBasic(::java::util::List* priorityList, ::java::util::Collection* tags);
	static ::java::util::List* filterExtended(::java::util::List* priorityList, ::java::util::Collection* tags);
	static ::java::util::List* filterTags(::java::util::List* priorityList, ::java::util::Collection* tags, ::java::util::Locale$FilteringMode* mode);
	static $String* getEquivalentForRegionAndVariant($String* range);
	static $StringArray* getEquivalentsForLanguage($String* range);
	static int32_t getExtentionKeyIndex($String* s);
	static bool lambda$caseInsensitiveMatch$1($String* tag, $String* element);
	static bool lambda$removeDuplicates$0(::java::util::Set* distinctTags, $String* x);
	static ::java::util::Locale* lookup(::java::util::List* priorityList, ::java::util::Collection* locales);
	static $String* lookupTag(::java::util::List* priorityList, ::java::util::Collection* tags);
	static ::java::util::List* mapEquivalents(::java::util::List* priorityList, ::java::util::Map* map);
	static int32_t matchFilterExtendedSubtags($StringArray* rangeSubtags, $StringArray* tagSubtags);
	static ::java::util::List* parse($String* ranges);
	static ::java::util::Collection* removeDuplicates(::java::util::Collection* tags);
	static ::java::util::Collection* removeTagsMatchingBasicZeroRange(::java::util::List* zeroRange, ::java::util::Collection* tags);
	static ::java::util::Collection* removeTagsMatchingExtendedZeroRange(::java::util::List* zeroRange, ::java::util::Collection* tags);
	static $String* replaceFirstSubStringMatch($String* range, $String* substr, $String* replacement);
	static bool shouldIgnoreFilterBasicMatch(::java::util::List* zeroRange, $String* tag);
	static bool shouldIgnoreFilterExtendedMatch(::java::util::List* zeroRange, $String* tag);
	static bool shouldIgnoreLookupMatch(::java::util::List* zeroRange, $String* tag);
	static int32_t splitRanges(::java::util::List* priorityList);
	static $String* truncateRange($String* rangeForRegex);
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleMatcher_h_