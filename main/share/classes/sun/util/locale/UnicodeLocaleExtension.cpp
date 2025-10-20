#include <sun/util/locale/UnicodeLocaleExtension.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <java/util/StringJoiner.h>
#include <sun/util/locale/Extension.h>
#include <sun/util/locale/LanguageTag.h>
#include <sun/util/locale/LocaleUtils.h>
#include <jcpp.h>

#undef CA_JAPANESE
#undef EMPTY_MAP
#undef EMPTY_SET
#undef NU_THAI
#undef SEP
#undef SINGLETON

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;
using $StringJoiner = ::java::util::StringJoiner;
using $Extension = ::sun::util::locale::Extension;
using $LanguageTag = ::sun::util::locale::LanguageTag;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _UnicodeLocaleExtension_FieldInfo_[] = {
	{"SINGLETON", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeLocaleExtension, SINGLETON)},
	{"attributes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(UnicodeLocaleExtension, attributes)},
	{"keywords", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(UnicodeLocaleExtension, keywords)},
	{"CA_JAPANESE", "Lsun/util/locale/UnicodeLocaleExtension;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UnicodeLocaleExtension, CA_JAPANESE)},
	{"NU_THAI", "Lsun/util/locale/UnicodeLocaleExtension;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UnicodeLocaleExtension, NU_THAI)},
	{}
};

$MethodInfo _UnicodeLocaleExtension_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeLocaleExtension::*)($String*,$String*)>(&UnicodeLocaleExtension::init$))},
	{"<init>", "(Ljava/util/SortedSet;Ljava/util/SortedMap;)V", "(Ljava/util/SortedSet<Ljava/lang/String;>;Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;)V", 0, $method(static_cast<void(UnicodeLocaleExtension::*)($SortedSet*,$SortedMap*)>(&UnicodeLocaleExtension::init$))},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKey", "()C", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getUnicodeLocaleAttributes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getUnicodeLocaleKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&UnicodeLocaleExtension::isAttribute))},
	{"isKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&UnicodeLocaleExtension::isKey))},
	{"isSingletonChar", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&UnicodeLocaleExtension::isSingletonChar))},
	{"isTypeSubtag", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&UnicodeLocaleExtension::isTypeSubtag))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _UnicodeLocaleExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.UnicodeLocaleExtension",
	"sun.util.locale.Extension",
	nullptr,
	_UnicodeLocaleExtension_FieldInfo_,
	_UnicodeLocaleExtension_MethodInfo_
};

$Object* allocate$UnicodeLocaleExtension($Class* clazz) {
	return $of($alloc(UnicodeLocaleExtension));
}

UnicodeLocaleExtension* UnicodeLocaleExtension::CA_JAPANESE = nullptr;
UnicodeLocaleExtension* UnicodeLocaleExtension::NU_THAI = nullptr;

void UnicodeLocaleExtension::init$($String* key, $String* value) {
	$Extension::init$(UnicodeLocaleExtension::SINGLETON, $$str({key, "-"_s, value}));
	$set(this, attributes, $Collections::emptySet());
	$set(this, keywords, $Collections::singletonMap(key, value));
}

void UnicodeLocaleExtension::init$($SortedSet* attributes, $SortedMap* keywords) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$(UnicodeLocaleExtension::SINGLETON);
	if (attributes != nullptr) {
		$set(this, attributes, attributes);
	} else {
		$set(this, attributes, $Collections::emptySet());
	}
	if (keywords != nullptr) {
		$set(this, keywords, keywords);
	} else {
		$set(this, keywords, $Collections::emptyMap());
	}
	bool var$0 = !$nc(this->attributes)->isEmpty();
	if (var$0 || !$nc(this->keywords)->isEmpty()) {
		$init($LanguageTag);
		$var($StringJoiner, sj, $new($StringJoiner, $LanguageTag::SEP));
		{
			$var($Iterator, i$, $nc(this->attributes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, attribute, $cast($String, i$->next()));
				{
					sj->add(attribute);
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(this->keywords)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, keyword, $cast($Map$Entry, i$->next()));
				{
					$var($String, key, $cast($String, $nc(keyword)->getKey()));
					$var($String, value, $cast($String, keyword->getValue()));
					sj->add(key);
					if (!$nc(value)->isEmpty()) {
						sj->add(value);
					}
				}
			}
		}
		setValue($(sj->toString()));
	}
}

$Set* UnicodeLocaleExtension::getUnicodeLocaleAttributes() {
	$init($Collections);
	if (this->attributes == $Collections::EMPTY_SET) {
		return this->attributes;
	}
	return $Collections::unmodifiableSet(this->attributes);
}

$Set* UnicodeLocaleExtension::getUnicodeLocaleKeys() {
	$init($Collections);
	if (this->keywords == $Collections::EMPTY_MAP) {
		return $Collections::emptySet();
	}
	return $Collections::unmodifiableSet($($nc(this->keywords)->keySet()));
}

$String* UnicodeLocaleExtension::getUnicodeLocaleType($String* unicodeLocaleKey) {
	return $cast($String, $nc(this->keywords)->get(unicodeLocaleKey));
}

bool UnicodeLocaleExtension::isSingletonChar(char16_t c) {
	$init(UnicodeLocaleExtension);
	return (UnicodeLocaleExtension::SINGLETON == $LocaleUtils::toLower(c));
}

bool UnicodeLocaleExtension::isAttribute($String* s) {
	$init(UnicodeLocaleExtension);
	int32_t len = $nc(s)->length();
	return (len >= 3) && (len <= 8) && $LocaleUtils::isAlphaNumericString(s);
}

bool UnicodeLocaleExtension::isKey($String* s) {
	$init(UnicodeLocaleExtension);
	bool var$0 = ($nc(s)->length() == 2);
	return var$0 && $LocaleUtils::isAlphaNumericString(s);
}

bool UnicodeLocaleExtension::isTypeSubtag($String* s) {
	$init(UnicodeLocaleExtension);
	int32_t len = $nc(s)->length();
	return (len >= 3) && (len <= 8) && $LocaleUtils::isAlphaNumericString(s);
}

$String* UnicodeLocaleExtension::toString() {
	return $Extension::toString();
}

$String* UnicodeLocaleExtension::getID() {
	return $Extension::getID();
}

$String* UnicodeLocaleExtension::getValue() {
	return $Extension::getValue();
}

char16_t UnicodeLocaleExtension::getKey() {
	return $Extension::getKey();
}

void clinit$UnicodeLocaleExtension($Class* class$) {
	$assignStatic(UnicodeLocaleExtension::CA_JAPANESE, $new(UnicodeLocaleExtension, "ca"_s, "japanese"_s));
	$assignStatic(UnicodeLocaleExtension::NU_THAI, $new(UnicodeLocaleExtension, "nu"_s, "thai"_s));
}

UnicodeLocaleExtension::UnicodeLocaleExtension() {
}

$Class* UnicodeLocaleExtension::load$($String* name, bool initialize) {
	$loadClass(UnicodeLocaleExtension, name, initialize, &_UnicodeLocaleExtension_ClassInfo_, clinit$UnicodeLocaleExtension, allocate$UnicodeLocaleExtension);
	return class$;
}

$Class* UnicodeLocaleExtension::class$ = nullptr;

		} // locale
	} // util
} // sun