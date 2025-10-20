#include <java/lang/ConditionalSpecialCasing.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ConditionalSpecialCasing$Entry.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/BreakIterator.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <sun/text/Normalizer.h>
#include <jcpp.h>

#undef AFTER_I
#undef AFTER_SOFT_DOTTED
#undef COMBINING_CLASS_ABOVE
#undef ERROR
#undef FINAL_CASED
#undef LOWERCASE_LETTER
#undef MORE_ABOVE
#undef NOT_BEFORE_DOT
#undef TITLECASE_LETTER
#undef UPPERCASE_LETTER

using $ConditionalSpecialCasing$EntryArray = $Array<::java::lang::ConditionalSpecialCasing$Entry>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ConditionalSpecialCasing$Entry = ::java::lang::ConditionalSpecialCasing$Entry;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Normalizer = ::sun::text::Normalizer;

namespace java {
	namespace lang {

$FieldInfo _ConditionalSpecialCasing_FieldInfo_[] = {
	{"FINAL_CASED", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, FINAL_CASED)},
	{"AFTER_SOFT_DOTTED", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, AFTER_SOFT_DOTTED)},
	{"MORE_ABOVE", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, MORE_ABOVE)},
	{"AFTER_I", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, AFTER_I)},
	{"NOT_BEFORE_DOT", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, NOT_BEFORE_DOT)},
	{"COMBINING_CLASS_ABOVE", "I", nullptr, $STATIC | $FINAL, $constField(ConditionalSpecialCasing, COMBINING_CLASS_ABOVE)},
	{"entry", "[Ljava/lang/ConditionalSpecialCasing$Entry;", nullptr, $STATIC, $staticField(ConditionalSpecialCasing, entry)},
	{"entryTable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Integer;Ljava/util/HashSet<Ljava/lang/ConditionalSpecialCasing$Entry;>;>;", $STATIC, $staticField(ConditionalSpecialCasing, entryTable)},
	{}
};

$MethodInfo _ConditionalSpecialCasing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ConditionalSpecialCasing::*)()>(&ConditionalSpecialCasing::init$))},
	{"isAfterI", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t)>(&ConditionalSpecialCasing::isAfterI))},
	{"isAfterSoftDotted", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t)>(&ConditionalSpecialCasing::isAfterSoftDotted))},
	{"isBeforeDot", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t)>(&ConditionalSpecialCasing::isBeforeDot))},
	{"isCased", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ConditionalSpecialCasing::isCased))},
	{"isConditionMet", "(Ljava/lang/String;ILjava/util/Locale;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t,$Locale*,int32_t)>(&ConditionalSpecialCasing::isConditionMet))},
	{"isFinalCased", "(Ljava/lang/String;ILjava/util/Locale;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t,$Locale*)>(&ConditionalSpecialCasing::isFinalCased))},
	{"isMoreAbove", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t)>(&ConditionalSpecialCasing::isMoreAbove))},
	{"isSoftDotted", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ConditionalSpecialCasing::isSoftDotted))},
	{"lookUpTable", "(Ljava/lang/String;ILjava/util/Locale;Z)[C", nullptr, $PRIVATE | $STATIC, $method(static_cast<$chars*(*)($String*,int32_t,$Locale*,bool)>(&ConditionalSpecialCasing::lookUpTable))},
	{"toLowerCaseCharArray", "(Ljava/lang/String;ILjava/util/Locale;)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)($String*,int32_t,$Locale*)>(&ConditionalSpecialCasing::toLowerCaseCharArray))},
	{"toLowerCaseEx", "(Ljava/lang/String;ILjava/util/Locale;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,$Locale*)>(&ConditionalSpecialCasing::toLowerCaseEx))},
	{"toUpperCaseCharArray", "(Ljava/lang/String;ILjava/util/Locale;)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)($String*,int32_t,$Locale*)>(&ConditionalSpecialCasing::toUpperCaseCharArray))},
	{"toUpperCaseEx", "(Ljava/lang/String;ILjava/util/Locale;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,$Locale*)>(&ConditionalSpecialCasing::toUpperCaseEx))},
	{}
};

$InnerClassInfo _ConditionalSpecialCasing_InnerClassesInfo_[] = {
	{"java.lang.ConditionalSpecialCasing$Entry", "java.lang.ConditionalSpecialCasing", "Entry", $STATIC},
	{}
};

$ClassInfo _ConditionalSpecialCasing_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ConditionalSpecialCasing",
	"java.lang.Object",
	nullptr,
	_ConditionalSpecialCasing_FieldInfo_,
	_ConditionalSpecialCasing_MethodInfo_,
	nullptr,
	nullptr,
	_ConditionalSpecialCasing_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ConditionalSpecialCasing$Entry"
};

$Object* allocate$ConditionalSpecialCasing($Class* clazz) {
	return $of($alloc(ConditionalSpecialCasing));
}

$ConditionalSpecialCasing$EntryArray* ConditionalSpecialCasing::entry = nullptr;
$Hashtable* ConditionalSpecialCasing::entryTable = nullptr;

void ConditionalSpecialCasing::init$() {
}

int32_t ConditionalSpecialCasing::toLowerCaseEx($String* src, int32_t index, $Locale* locale) {
	$init(ConditionalSpecialCasing);
	$var($chars, result, lookUpTable(src, index, locale, true));
	if (result != nullptr) {
		if (result->length == 1) {
			return result->get(0);
		} else {
			return $Character::ERROR;
		}
	} else {
		return $Character::toLowerCase($nc(src)->codePointAt(index));
	}
}

int32_t ConditionalSpecialCasing::toUpperCaseEx($String* src, int32_t index, $Locale* locale) {
	$init(ConditionalSpecialCasing);
	$var($chars, result, lookUpTable(src, index, locale, false));
	if (result != nullptr) {
		if (result->length == 1) {
			return result->get(0);
		} else {
			return $Character::ERROR;
		}
	} else {
		return $Character::toUpperCaseEx($nc(src)->codePointAt(index));
	}
}

$chars* ConditionalSpecialCasing::toLowerCaseCharArray($String* src, int32_t index, $Locale* locale) {
	$init(ConditionalSpecialCasing);
	return lookUpTable(src, index, locale, true);
}

$chars* ConditionalSpecialCasing::toUpperCaseCharArray($String* src, int32_t index, $Locale* locale) {
	$init(ConditionalSpecialCasing);
	$var($chars, result, lookUpTable(src, index, locale, false));
	if (result != nullptr) {
		return result;
	} else {
		return $Character::toUpperCaseCharArray($nc(src)->codePointAt(index));
	}
}

$chars* ConditionalSpecialCasing::lookUpTable($String* src, int32_t index, $Locale* locale, bool bLowerCasing) {
	$init(ConditionalSpecialCasing);
	$useLocalCurrentObjectStackCache();
	$var($HashSet, set, $cast($HashSet, $nc(ConditionalSpecialCasing::entryTable)->get($($Integer::valueOf($nc(src)->codePointAt(index))))));
	$var($chars, ret, nullptr);
	if (set != nullptr) {
		$var($Iterator, iter, set->iterator());
		$var($String, currentLang, $nc(locale)->getLanguage());
		while ($nc(iter)->hasNext()) {
			$var($ConditionalSpecialCasing$Entry, entry, $cast($ConditionalSpecialCasing$Entry, iter->next()));
			$var($String, conditionLang, $nc(entry)->getLanguage());
			bool var$0 = ((conditionLang == nullptr) || ($nc(conditionLang)->equals(currentLang)));
			if (var$0 && isConditionMet(src, index, locale, entry->getCondition())) {
				$assign(ret, bLowerCasing ? entry->getLowerCase() : entry->getUpperCase());
				if (conditionLang != nullptr) {
					break;
				}
			}
		}
	}
	return ret;
}

bool ConditionalSpecialCasing::isConditionMet($String* src, int32_t index, $Locale* locale, int32_t condition) {
	$init(ConditionalSpecialCasing);

	bool var$0 = false;
	switch (condition) {
	case ConditionalSpecialCasing::FINAL_CASED:
		{
			var$0 = isFinalCased(src, index, locale);
			break;
		}
	case ConditionalSpecialCasing::AFTER_SOFT_DOTTED:
		{
			var$0 = isAfterSoftDotted(src, index);
			break;
		}
	case ConditionalSpecialCasing::MORE_ABOVE:
		{
			var$0 = isMoreAbove(src, index);
			break;
		}
	case ConditionalSpecialCasing::AFTER_I:
		{
			var$0 = isAfterI(src, index);
			break;
		}
	case ConditionalSpecialCasing::NOT_BEFORE_DOT:
		{
			var$0 = !isBeforeDot(src, index);
			break;
		}
	default:
		{
			var$0 = true;
			break;
		}
	}
	return var$0;
}

bool ConditionalSpecialCasing::isFinalCased($String* src, int32_t index, $Locale* locale) {
	$init(ConditionalSpecialCasing);
	$var($BreakIterator, wordBoundary, $BreakIterator::getWordInstance(locale));
	$nc(wordBoundary)->setText(src);
	int32_t ch = 0;
	for (int32_t i = index; (i >= 0) && !wordBoundary->isBoundary(i); i -= $Character::charCount(ch)) {
		ch = $nc(src)->codePointBefore(i);
		if (isCased(ch)) {
			int32_t len = src->length();
			for (i = index + $Character::charCount(src->codePointAt(index)); (i < len) && !wordBoundary->isBoundary(i); i += $Character::charCount(ch)) {
				ch = src->codePointAt(i);
				if (isCased(ch)) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool ConditionalSpecialCasing::isAfterI($String* src, int32_t index) {
	$init(ConditionalSpecialCasing);
	int32_t ch = 0;
	int32_t cc = 0;
	for (int32_t i = index; i > 0; i -= $Character::charCount(ch)) {
		ch = $nc(src)->codePointBefore(i);
		if (ch == u'I') {
			return true;
		} else {
			cc = $Normalizer::getCombiningClass(ch);
			if ((cc == 0) || (cc == ConditionalSpecialCasing::COMBINING_CLASS_ABOVE)) {
				return false;
			}
		}
	}
	return false;
}

bool ConditionalSpecialCasing::isAfterSoftDotted($String* src, int32_t index) {
	$init(ConditionalSpecialCasing);
	int32_t ch = 0;
	int32_t cc = 0;
	for (int32_t i = index; i > 0; i -= $Character::charCount(ch)) {
		ch = $nc(src)->codePointBefore(i);
		if (isSoftDotted(ch)) {
			return true;
		} else {
			cc = $Normalizer::getCombiningClass(ch);
			if ((cc == 0) || (cc == ConditionalSpecialCasing::COMBINING_CLASS_ABOVE)) {
				return false;
			}
		}
	}
	return false;
}

bool ConditionalSpecialCasing::isMoreAbove($String* src, int32_t index) {
	$init(ConditionalSpecialCasing);
	int32_t ch = 0;
	int32_t cc = 0;
	int32_t len = $nc(src)->length();
	for (int32_t i = index + $Character::charCount(src->codePointAt(index)); i < len; i += $Character::charCount(ch)) {
		ch = src->codePointAt(i);
		cc = $Normalizer::getCombiningClass(ch);
		if (cc == ConditionalSpecialCasing::COMBINING_CLASS_ABOVE) {
			return true;
		} else if (cc == 0) {
			return false;
		}
	}
	return false;
}

bool ConditionalSpecialCasing::isBeforeDot($String* src, int32_t index) {
	$init(ConditionalSpecialCasing);
	int32_t ch = 0;
	int32_t cc = 0;
	int32_t len = $nc(src)->length();
	for (int32_t i = index + $Character::charCount(src->codePointAt(index)); i < len; i += $Character::charCount(ch)) {
		ch = src->codePointAt(i);
		if (ch == (char16_t)0x307) {
			return true;
		} else {
			cc = $Normalizer::getCombiningClass(ch);
			if ((cc == 0) || (cc == ConditionalSpecialCasing::COMBINING_CLASS_ABOVE)) {
				return false;
			}
		}
	}
	return false;
}

bool ConditionalSpecialCasing::isCased(int32_t ch) {
	$init(ConditionalSpecialCasing);
	int32_t type = $Character::getType(ch);
	if (type == $Character::LOWERCASE_LETTER || type == $Character::UPPERCASE_LETTER || type == $Character::TITLECASE_LETTER) {
		return true;
	} else if ((ch >= 688) && (ch <= 696)) {
		return true;
	} else if ((ch >= 704) && (ch <= 705)) {
		return true;
	} else if ((ch >= 736) && (ch <= 740)) {
		return true;
	} else if (ch == 837) {
		return true;
	} else if (ch == 890) {
		return true;
	} else if ((ch >= 7468) && (ch <= 7521)) {
		return true;
	} else if ((ch >= 8544) && (ch <= 8575)) {
		return true;
	} else if ((ch >= 9398) && (ch <= 9449)) {
		return true;
	} else {
		return false;
	}
}

bool ConditionalSpecialCasing::isSoftDotted(int32_t ch) {
	$init(ConditionalSpecialCasing);
	switch (ch) {
	case 105:
		{}
	case 106:
		{}
	case 303:
		{}
	case 616:
		{}
	case 1110:
		{}
	case 1112:
		{}
	case 7522:
		{}
	case 7725:
		{}
	case 7883:
		{}
	case 8305:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$ConditionalSpecialCasing($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ConditionalSpecialCasing::entry, $new($ConditionalSpecialCasing$EntryArray, {
		$$new($ConditionalSpecialCasing$Entry, 931, $$new($chars, {(char16_t)962}), $$new($chars, {(char16_t)931}), nullptr, ConditionalSpecialCasing::FINAL_CASED),
		$$new($ConditionalSpecialCasing$Entry, 304, $$new($chars, {
			(char16_t)105,
			(char16_t)775
		}), $$new($chars, {(char16_t)304}), nullptr, 0),
		$$new($ConditionalSpecialCasing$Entry, 775, $$new($chars, {(char16_t)775}), $$new($chars, 0), "lt"_s, ConditionalSpecialCasing::AFTER_SOFT_DOTTED),
		$$new($ConditionalSpecialCasing$Entry, 73, $$new($chars, {
			(char16_t)105,
			(char16_t)775
		}), $$new($chars, {(char16_t)73}), "lt"_s, ConditionalSpecialCasing::MORE_ABOVE),
		$$new($ConditionalSpecialCasing$Entry, 74, $$new($chars, {
			(char16_t)106,
			(char16_t)775
		}), $$new($chars, {(char16_t)74}), "lt"_s, ConditionalSpecialCasing::MORE_ABOVE),
		$$new($ConditionalSpecialCasing$Entry, 302, $$new($chars, {
			(char16_t)303,
			(char16_t)775
		}), $$new($chars, {(char16_t)302}), "lt"_s, ConditionalSpecialCasing::MORE_ABOVE),
		$$new($ConditionalSpecialCasing$Entry, 204, $$new($chars, {
			(char16_t)105,
			(char16_t)775,
			(char16_t)768
		}), $$new($chars, {(char16_t)204}), "lt"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 205, $$new($chars, {
			(char16_t)105,
			(char16_t)775,
			(char16_t)769
		}), $$new($chars, {(char16_t)205}), "lt"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 296, $$new($chars, {
			(char16_t)105,
			(char16_t)775,
			(char16_t)771
		}), $$new($chars, {(char16_t)296}), "lt"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 304, $$new($chars, {(char16_t)105}), $$new($chars, {(char16_t)304}), "tr"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 304, $$new($chars, {(char16_t)105}), $$new($chars, {(char16_t)304}), "az"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 775, $$new($chars, 0), $$new($chars, {(char16_t)775}), "tr"_s, ConditionalSpecialCasing::AFTER_I),
		$$new($ConditionalSpecialCasing$Entry, 775, $$new($chars, 0), $$new($chars, {(char16_t)775}), "az"_s, ConditionalSpecialCasing::AFTER_I),
		$$new($ConditionalSpecialCasing$Entry, 73, $$new($chars, {(char16_t)305}), $$new($chars, {(char16_t)73}), "tr"_s, ConditionalSpecialCasing::NOT_BEFORE_DOT),
		$$new($ConditionalSpecialCasing$Entry, 73, $$new($chars, {(char16_t)305}), $$new($chars, {(char16_t)73}), "az"_s, ConditionalSpecialCasing::NOT_BEFORE_DOT),
		$$new($ConditionalSpecialCasing$Entry, 105, $$new($chars, {(char16_t)105}), $$new($chars, {(char16_t)304}), "tr"_s, 0),
		$$new($ConditionalSpecialCasing$Entry, 105, $$new($chars, {(char16_t)105}), $$new($chars, {(char16_t)304}), "az"_s, 0)
	}));
	$assignStatic(ConditionalSpecialCasing::entryTable, $new($Hashtable));
	{
		{
			$var($ConditionalSpecialCasing$EntryArray, arr$, ConditionalSpecialCasing::entry);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ConditionalSpecialCasing$Entry, cur, arr$->get(i$));
				{
					$var($Integer, cp, $Integer::valueOf($nc(cur)->getCodePoint()));
					$var($HashSet, set, $cast($HashSet, $nc(ConditionalSpecialCasing::entryTable)->get(cp)));
					if (set == nullptr) {
						$assign(set, $new($HashSet));
						$nc(ConditionalSpecialCasing::entryTable)->put(cp, set);
					}
					$nc(set)->add(cur);
				}
			}
		}
	}
}

ConditionalSpecialCasing::ConditionalSpecialCasing() {
}

$Class* ConditionalSpecialCasing::load$($String* name, bool initialize) {
	$loadClass(ConditionalSpecialCasing, name, initialize, &_ConditionalSpecialCasing_ClassInfo_, clinit$ConditionalSpecialCasing, allocate$ConditionalSpecialCasing);
	return class$;
}

$Class* ConditionalSpecialCasing::class$ = nullptr;

	} // lang
} // java