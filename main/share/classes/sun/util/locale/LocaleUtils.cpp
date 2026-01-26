#include <sun/util/locale/LocaleUtils.h>

#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace sun {
	namespace util {
		namespace locale {

$MethodInfo _LocaleUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(LocaleUtils, init$, void)},
	{"caseIgnoreCompare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(LocaleUtils, caseIgnoreCompare, int32_t, $String*, $String*)},
	{"caseIgnoreMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleUtils, caseIgnoreMatch, bool, $String*, $String*)},
	{"isAlpha", "(C)Z", nullptr, $STATIC, $staticMethod(LocaleUtils, isAlpha, bool, char16_t)},
	{"isAlphaNumeric", "(C)Z", nullptr, $STATIC, $staticMethod(LocaleUtils, isAlphaNumeric, bool, char16_t)},
	{"isAlphaNumericString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleUtils, isAlphaNumericString, bool, $String*)},
	{"isAlphaString", "(Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(LocaleUtils, isAlphaString, bool, $String*)},
	{"isEmpty", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleUtils, isEmpty, bool, $String*)},
	{"isEmpty", "(Ljava/util/Set;)Z", "(Ljava/util/Set<*>;)Z", $PUBLIC | $STATIC, $staticMethod(LocaleUtils, isEmpty, bool, $Set*)},
	{"isEmpty", "(Ljava/util/Map;)Z", "(Ljava/util/Map<**>;)Z", $PUBLIC | $STATIC, $staticMethod(LocaleUtils, isEmpty, bool, $Map*)},
	{"isEmpty", "(Ljava/util/List;)Z", "(Ljava/util/List<*>;)Z", $PUBLIC | $STATIC, $staticMethod(LocaleUtils, isEmpty, bool, $List*)},
	{"isLower", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LocaleUtils, isLower, bool, char16_t)},
	{"isNumeric", "(C)Z", nullptr, $STATIC, $staticMethod(LocaleUtils, isNumeric, bool, char16_t)},
	{"isNumericString", "(Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(LocaleUtils, isNumericString, bool, $String*)},
	{"isUpper", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LocaleUtils, isUpper, bool, char16_t)},
	{"toLower", "(C)C", nullptr, $STATIC, $staticMethod(LocaleUtils, toLower, char16_t, char16_t)},
	{"toLowerString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleUtils, toLowerString, $String*, $String*)},
	{"toTitleString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(LocaleUtils, toTitleString, $String*, $String*)},
	{"toUpper", "(C)C", nullptr, $STATIC, $staticMethod(LocaleUtils, toUpper, char16_t, char16_t)},
	{"toUpperString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(LocaleUtils, toUpperString, $String*, $String*)},
	{}
};

$ClassInfo _LocaleUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.locale.LocaleUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LocaleUtils_MethodInfo_
};

$Object* allocate$LocaleUtils($Class* clazz) {
	return $of($alloc(LocaleUtils));
}

void LocaleUtils::init$() {
}

bool LocaleUtils::caseIgnoreMatch($String* s1, $String* s2) {
	if (s1 == s2) {
		return true;
	}
	int32_t len = $nc(s1)->length();
	if (len != $nc(s2)->length()) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		char16_t c1 = s1->charAt(i);
		char16_t c2 = $nc(s2)->charAt(i);
		bool var$0 = c1 != c2;
		if (var$0) {
			char16_t var$1 = toLower(c1);
			var$0 = var$1 != toLower(c2);
		}
		if (var$0) {
			return false;
		}
	}
	return true;
}

int32_t LocaleUtils::caseIgnoreCompare($String* s1, $String* s2) {
	$useLocalCurrentObjectStackCache();
	if (s1 == s2) {
		return 0;
	}
	return $nc($(toLowerString(s1)))->compareTo($(toLowerString(s2)));
}

char16_t LocaleUtils::toUpper(char16_t c) {
	return isLower(c) ? (char16_t)(c - 32) : c;
}

char16_t LocaleUtils::toLower(char16_t c) {
	return isUpper(c) ? (char16_t)(c + 32) : c;
}

$String* LocaleUtils::toLowerString($String* s) {
	int32_t len = $nc(s)->length();
	int32_t idx = 0;
	for (; idx < len; ++idx) {
		if (isUpper(s->charAt(idx))) {
			break;
		}
	}
	if (idx == len) {
		return s;
	}
	$var($chars, buf, $new($chars, len));
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = s->charAt(i);
		buf->set(i, (i < idx) ? c : toLower(c));
	}
	return $new($String, buf);
}

$String* LocaleUtils::toUpperString($String* s) {
	int32_t len = $nc(s)->length();
	int32_t idx = 0;
	for (; idx < len; ++idx) {
		if (isLower(s->charAt(idx))) {
			break;
		}
	}
	if (idx == len) {
		return s;
	}
	$var($chars, buf, $new($chars, len));
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = s->charAt(i);
		buf->set(i, (i < idx) ? c : toUpper(c));
	}
	return $new($String, buf);
}

$String* LocaleUtils::toTitleString($String* s) {
	int32_t len = 0;
	if ((len = $nc(s)->length()) == 0) {
		return s;
	}
	int32_t idx = 0;
	if (!isLower($nc(s)->charAt(idx))) {
		for (idx = 1; idx < len; ++idx) {
			if (isUpper($nc(s)->charAt(idx))) {
				break;
			}
		}
	}
	if (idx == len) {
		return s;
	}
	$var($chars, buf, $new($chars, len));
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = $nc(s)->charAt(i);
		if (i == 0 && idx == 0) {
			buf->set(i, toUpper(c));
		} else if (i < idx) {
			buf->set(i, c);
		} else {
			buf->set(i, toLower(c));
		}
	}
	return $new($String, buf);
}

bool LocaleUtils::isUpper(char16_t c) {
	return c >= u'A' && c <= u'Z';
}

bool LocaleUtils::isLower(char16_t c) {
	return c >= u'a' && c <= u'z';
}

bool LocaleUtils::isAlpha(char16_t c) {
	return (c >= u'A' && c <= u'Z') || (c >= u'a' && c <= u'z');
}

bool LocaleUtils::isAlphaString($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		if (!isAlpha(s->charAt(i))) {
			return false;
		}
	}
	return true;
}

bool LocaleUtils::isNumeric(char16_t c) {
	return (c >= u'0' && c <= u'9');
}

bool LocaleUtils::isNumericString($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		if (!isNumeric(s->charAt(i))) {
			return false;
		}
	}
	return true;
}

bool LocaleUtils::isAlphaNumeric(char16_t c) {
	bool var$0 = isAlpha(c);
	return var$0 || isNumeric(c);
}

bool LocaleUtils::isAlphaNumericString($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		if (!isAlphaNumeric(s->charAt(i))) {
			return false;
		}
	}
	return true;
}

bool LocaleUtils::isEmpty($String* str) {
	return str == nullptr || $nc(str)->isEmpty();
}

bool LocaleUtils::isEmpty($Set* set) {
	return set == nullptr || $nc(set)->isEmpty();
}

bool LocaleUtils::isEmpty($Map* map) {
	return map == nullptr || $nc(map)->isEmpty();
}

bool LocaleUtils::isEmpty($List* list) {
	return list == nullptr || $nc(list)->isEmpty();
}

LocaleUtils::LocaleUtils() {
}

$Class* LocaleUtils::load$($String* name, bool initialize) {
	$loadClass(LocaleUtils, name, initialize, &_LocaleUtils_ClassInfo_, allocate$LocaleUtils);
	return class$;
}

$Class* LocaleUtils::class$ = nullptr;

		} // locale
	} // util
} // sun