#include <sun/util/locale/LocaleUtils.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LocaleUtils::*)()>(&LocaleUtils::init$))},
	{"caseIgnoreCompare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&LocaleUtils::caseIgnoreCompare))},
	{"caseIgnoreMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&LocaleUtils::caseIgnoreMatch))},
	{"isAlpha", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&LocaleUtils::isAlpha))},
	{"isAlphaNumeric", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&LocaleUtils::isAlphaNumeric))},
	{"isAlphaNumericString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&LocaleUtils::isAlphaNumericString))},
	{"isAlphaString", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&LocaleUtils::isAlphaString))},
	{"isEmpty", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&LocaleUtils::isEmpty))},
	{"isEmpty", "(Ljava/util/Set;)Z", "(Ljava/util/Set<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Set*)>(&LocaleUtils::isEmpty))},
	{"isEmpty", "(Ljava/util/Map;)Z", "(Ljava/util/Map<**>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Map*)>(&LocaleUtils::isEmpty))},
	{"isEmpty", "(Ljava/util/List;)Z", "(Ljava/util/List<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($List*)>(&LocaleUtils::isEmpty))},
	{"isLower", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&LocaleUtils::isLower))},
	{"isNumeric", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&LocaleUtils::isNumeric))},
	{"isNumericString", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&LocaleUtils::isNumericString))},
	{"isUpper", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&LocaleUtils::isUpper))},
	{"toLower", "(C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&LocaleUtils::toLower))},
	{"toLowerString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&LocaleUtils::toLowerString))},
	{"toTitleString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&LocaleUtils::toTitleString))},
	{"toUpper", "(C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&LocaleUtils::toUpper))},
	{"toUpperString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&LocaleUtils::toUpperString))},
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
			$nc(buf)->set(i, c);
		} else {
			$nc(buf)->set(i, toLower(c));
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