#include <sun/util/locale/provider/CalendarNameProviderImpl.h>

#include <java/lang/CharSequence.h>
#include <java/util/AbstractMap.h>
#include <java/util/Comparator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <sun/util/calendar/CalendarSystem.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl$LengthBasedComparator.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef CLDR
#undef INSTANCE
#undef JRE
#undef REST_OF_STYLES
#undef ROOT

using $LocaleArray = $Array<::java::util::Locale>;
using $EraArray = $Array<::sun::util::calendar::Era>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Comparator = ::java::util::Comparator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $CalendarSystem = ::sun::util::calendar::CalendarSystem;
using $Era = ::sun::util::calendar::Era;
using $CalendarNameProviderImpl$LengthBasedComparator = ::sun::util::locale::provider::CalendarNameProviderImpl$LengthBasedComparator;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarNameProviderImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PROTECTED | $FINAL, $field(CalendarNameProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(CalendarNameProviderImpl, langtags)},
	{"REST_OF_STYLES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarNameProviderImpl, REST_OF_STYLES)},
	{}
};

$MethodInfo _CalendarNameProviderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(CalendarNameProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&CalendarNameProviderImpl::init$))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getBaseStyle", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&CalendarNameProviderImpl::getBaseStyle))},
	{"getDisplayName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayNameImpl", "(Ljava/lang/String;IIILjava/util/Locale;Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"getDisplayNamesImpl", "(Ljava/lang/String;IILjava/util/Locale;Z)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;Z)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $method(static_cast<$Map*(CalendarNameProviderImpl::*)($String*,int32_t,int32_t,$Locale*,bool)>(&CalendarNameProviderImpl::getDisplayNamesImpl))},
	{"getJavaTimeDisplayName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJavaTimeDisplayNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"getResourceKey", "(Ljava/lang/String;IIZ)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CalendarNameProviderImpl::*)($String*,int32_t,int32_t,bool)>(&CalendarNameProviderImpl::getResourceKey))},
	{"getResourceKeyFor", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/lang/String;IIZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($LocaleProviderAdapter$Type*,$String*,int32_t,int32_t,bool)>(&CalendarNameProviderImpl::getResourceKeyFor))},
	{"hasDuplicates", "([Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CalendarNameProviderImpl::*)($StringArray*)>(&CalendarNameProviderImpl::hasDuplicates))},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toStyleName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&CalendarNameProviderImpl::toStyleName))},
	{}
};

$InnerClassInfo _CalendarNameProviderImpl_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator", "sun.util.locale.provider.CalendarNameProviderImpl", "LengthBasedComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CalendarNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.CalendarNameProviderImpl",
	"java.util.spi.CalendarNameProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_CalendarNameProviderImpl_FieldInfo_,
	_CalendarNameProviderImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CalendarNameProviderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator"
};

$Object* allocate$CalendarNameProviderImpl($Class* clazz) {
	return $of($alloc(CalendarNameProviderImpl));
}

int32_t CalendarNameProviderImpl::hashCode() {
	 return this->$CalendarNameProvider::hashCode();
}

bool CalendarNameProviderImpl::equals(Object$* obj) {
	 return this->$CalendarNameProvider::equals(obj);
}

$Object* CalendarNameProviderImpl::clone() {
	 return this->$CalendarNameProvider::clone();
}

$String* CalendarNameProviderImpl::toString() {
	 return this->$CalendarNameProvider::toString();
}

void CalendarNameProviderImpl::finalize() {
	this->$CalendarNameProvider::finalize();
}

$ints* CalendarNameProviderImpl::REST_OF_STYLES = nullptr;

void CalendarNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CalendarNameProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$String* CalendarNameProviderImpl::getDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, $Locale* locale) {
	return getDisplayNameImpl(calendarType, field, value, style, locale, false);
}

$String* CalendarNameProviderImpl::getJavaTimeDisplayName($String* calendarType, int32_t field, int32_t value, int32_t style, $Locale* locale) {
	return getDisplayNameImpl(calendarType, field, value, style, locale, true);
}

$String* CalendarNameProviderImpl::getDisplayNameImpl($String* calendarType, int32_t field, int32_t value, int32_t style, $Locale* locale, bool javatime) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, nullptr);
	$var($String, key, getResourceKey(calendarType, field, style, javatime));
	if (key != nullptr) {
		$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale));
		$var($StringArray, strings, javatime ? $nc(lr)->getJavaTimeNames(key) : lr->getCalendarNames(key));
		if (strings == nullptr && key->contains("standalone."_s)) {
			$assign(key, key->replaceFirst("standalone."_s, ""_s));
			$assign(strings, javatime ? lr->getJavaTimeNames(key) : lr->getCalendarNames(key));
		}
		if (strings != nullptr && strings->length > 0) {
			if (field == 7 || field == 1) {
				--value;
			}
			if (value < 0) {
				return nullptr;
			} else if (value >= strings->length) {
				if (field == 0 && "japanese"_s->equals(calendarType)) {
					$var($EraArray, jeras, $nc($($CalendarSystem::forName("japanese"_s)))->getEras());
					if (value <= $nc(jeras)->length) {
						$init($LocaleProviderAdapter$Type);
						if (this->type == $LocaleProviderAdapter$Type::CLDR) {
							$assign(lr, $nc($($LocaleProviderAdapter::forJRE()))->getLocaleResources(locale));
							$assign(key, getResourceKeyFor($LocaleProviderAdapter$Type::JRE, calendarType, field, style, javatime));
							$assign(strings, javatime ? $nc(lr)->getJavaTimeNames(key) : lr->getCalendarNames(key));
						}
						if (strings == nullptr || value >= strings->length) {
							$var($Era, supEra, jeras->get(value - 1));
							if (javatime) {
								return getBaseStyle(style) == 4 ? $nc(supEra)->getAbbreviation() : supEra->getName();
							} else {
								return ((int32_t)(style & (uint32_t)2)) != 0 ? $nc(supEra)->getName() : supEra->getAbbreviation();
							}
						}
					} else {
						return nullptr;
					}
				} else {
					return nullptr;
				}
			}
			$assign(name, strings->get(value));
			if ($nc(name)->isEmpty() && (style == 0x00008001 || style == 0x00008002 || style == 0x00008004)) {
				$assign(name, getDisplayName(calendarType, field, value, getBaseStyle(style), locale));
			}
		}
	}
	return name;
}

$Map* CalendarNameProviderImpl::getDisplayNames($String* calendarType, int32_t field, int32_t style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Map, names, nullptr);
	if (style == 0) {
		$assign(names, getDisplayNamesImpl(calendarType, field, 1, locale, false));
		{
			$var($ints, arr$, CalendarNameProviderImpl::REST_OF_STYLES);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t st = arr$->get(i$);
				{
					$nc(names)->putAll($(getDisplayNamesImpl(calendarType, field, st, locale, false)));
				}
			}
		}
	} else {
		$assign(names, getDisplayNamesImpl(calendarType, field, style, locale, false));
	}
	return $nc(names)->isEmpty() ? ($Map*)nullptr : names;
}

$Map* CalendarNameProviderImpl::getJavaTimeDisplayNames($String* calendarType, int32_t field, int32_t style, $Locale* locale) {
	$var($Map, names, nullptr);
	$assign(names, getDisplayNamesImpl(calendarType, field, style, locale, true));
	return $nc(names)->isEmpty() ? ($Map*)nullptr : names;
}

$Map* CalendarNameProviderImpl::getDisplayNamesImpl($String* calendarType, int32_t field, int32_t style, $Locale* locale, bool javatime) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, getResourceKey(calendarType, field, style, javatime));
	$init($CalendarNameProviderImpl$LengthBasedComparator);
	$var($Map, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, static_cast<$Comparator*>($CalendarNameProviderImpl$LengthBasedComparator::INSTANCE)))));
	if (key != nullptr) {
		$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale));
		$var($StringArray, strings, javatime ? $nc(lr)->getJavaTimeNames(key) : lr->getCalendarNames(key));
		if (strings == nullptr && key->contains("standalone."_s)) {
			$assign(key, key->replaceFirst("standalone."_s, ""_s));
			$assign(strings, javatime ? lr->getJavaTimeNames(key) : lr->getCalendarNames(key));
		}
		if (strings != nullptr) {
			if (!hasDuplicates(strings) || field == 9) {
				if (field == 1) {
					if (strings->length > 0) {
						map->put(strings->get(0), $($Integer::valueOf(1)));
					}
				} else {
					int32_t base = (field == 7) ? 1 : 0;
					for (int32_t i = strings->length - 1; i >= 0; --i) {
						$var($String, name, strings->get(i));
						if ($nc(name)->isEmpty()) {
							continue;
						}
						if (field == 9 && !javatime && i > 1) {
							continue;
						} else {
							map->put(name, $($Integer::valueOf(base + i)));
						}
					}
				}
			}
		}
	}
	return map;
}

int32_t CalendarNameProviderImpl::getBaseStyle(int32_t style) {
	$init(CalendarNameProviderImpl);
	return (int32_t)(style & (uint32_t)~(0x00008001 - 1));
}

$LocaleArray* CalendarNameProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool CalendarNameProviderImpl::isSupportedLocale($Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$init($Locale);
	if ($nc($Locale::ROOT)->equals(locale)) {
		return true;
	}
	$var($String, calendarType, nullptr);
	if ($nc(locale)->hasExtensions()) {
		$assign(calendarType, locale->getUnicodeLocaleType("ca"_s));
		$assign(locale, locale->stripExtensions());
	}
	if (calendarType != nullptr) {
		{
			$var($String, s11094$, calendarType);
			int32_t tmp11094$ = -1;
			switch (s11094$->hashCode()) {
			case (int32_t)0xA1C2EDB5:
				{
					if (s11094$->equals("buddhist"_s)) {
						tmp11094$ = 0;
					}
					break;
				}
			case (int32_t)0xD3223FB1:
				{
					if (s11094$->equals("japanese"_s)) {
						tmp11094$ = 1;
					}
					break;
				}
			case 0x10EA1509:
				{
					if (s11094$->equals("gregory"_s)) {
						tmp11094$ = 2;
					}
					break;
				}
			case 0x7CCB45C8:
				{
					if (s11094$->equals("islamic"_s)) {
						tmp11094$ = 3;
					}
					break;
				}
			case 0x0001B9C6:
				{
					if (s11094$->equals("roc"_s)) {
						tmp11094$ = 4;
					}
					break;
				}
			}
			switch (tmp11094$) {
			case 0:
				{}
			case 1:
				{}
			case 2:
				{}
			case 3:
				{}
			case 4:
				{
					break;
				}
			default:
				{
					return false;
				}
			}
		}
	}
	if ($nc(this->langtags)->contains($($nc(locale)->toLanguageTag()))) {
		return true;
	}
	$var($String, oldname, $nc($($nc(locale)->toString()))->replace(u'_', u'-'));
	return $nc(this->langtags)->contains(oldname);
}

$Set* CalendarNameProviderImpl::getAvailableLanguageTags() {
	return this->langtags;
}

bool CalendarNameProviderImpl::hasDuplicates($StringArray* strings) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(strings)->length;
	for (int32_t i = 0; i < len - 1; ++i) {
		$var($String, a, strings->get(i));
		if (a != nullptr && !a->isEmpty()) {
			for (int32_t j = i + 1; j < len; ++j) {
				if (a->equals(strings->get(j))) {
					return true;
				}
			}
		}
	}
	return false;
}

$String* CalendarNameProviderImpl::getResourceKey($String* type, int32_t field, int32_t style, bool javatime) {
	return getResourceKeyFor(this->type, type, field, style, javatime);
}

$String* CalendarNameProviderImpl::getResourceKeyFor($LocaleProviderAdapter$Type* adapterType, $String* type$renamed, int32_t field, int32_t style, bool javatime) {
	$init(CalendarNameProviderImpl);
	$useLocalCurrentObjectStackCache();
	$var($String, type, type$renamed);
	int32_t baseStyle = getBaseStyle(style);
	bool isStandalone = (style != baseStyle);
	if ("gregory"_s->equals(type)) {
		$assign(type, nullptr);
	}
	bool isNarrow = (baseStyle == 4);
	$var($StringBuilder, key, $new($StringBuilder));
	if (javatime) {
		key->append("java.time."_s);
	}
	switch (field) {
	case 0:
		{
			if (type != nullptr) {
				key->append(type)->append(u'.');
			}
			if (isNarrow) {
				key->append("narrow."_s);
			} else {
				$init($LocaleProviderAdapter$Type);
				if (adapterType == $LocaleProviderAdapter$Type::JRE) {
					if (javatime) {
						if (baseStyle == 2) {
							key->append("long."_s);
						}
					}
					if (baseStyle == 1) {
						key->append("short."_s);
					}
				} else if (baseStyle == 2) {
					key->append("long."_s);
				}
			}
			key->append("Eras"_s);
			break;
		}
	case 1:
		{
			if (!isNarrow) {
				key->append(type)->append(".FirstYear"_s);
			}
			break;
		}
	case 2:
		{
			if ("islamic"_s->equals(type)) {
				key->append(type)->append(u'.');
			}
			if (isStandalone) {
				key->append("standalone."_s);
			}
			key->append("Month"_s)->append($(toStyleName(baseStyle)));
			break;
		}
	case 7:
		{
			if (isStandalone) {
				key->append("standalone."_s);
			}
			key->append("Day"_s)->append($(toStyleName(baseStyle)));
			break;
		}
	case 9:
		{
			if (isNarrow) {
				key->append("narrow."_s);
			}
			key->append("AmPmMarkers"_s);
			break;
		}
	}
	return key->length() > 0 ? key->toString() : ($String*)nullptr;
}

$String* CalendarNameProviderImpl::toStyleName(int32_t baseStyle) {
	$init(CalendarNameProviderImpl);
	switch (baseStyle) {
	case 1:
		{
			return "Abbreviations"_s;
		}
	case 4:
		{
			return "Narrows"_s;
		}
	}
	return "Names"_s;
}

void clinit$CalendarNameProviderImpl($Class* class$) {
	$assignStatic(CalendarNameProviderImpl::REST_OF_STYLES, $new($ints, {
		0x00008001,
		2,
		0x00008002,
		4,
		0x00008004
	}));
}

CalendarNameProviderImpl::CalendarNameProviderImpl() {
}

$Class* CalendarNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CalendarNameProviderImpl, name, initialize, &_CalendarNameProviderImpl_ClassInfo_, clinit$CalendarNameProviderImpl, allocate$CalendarNameProviderImpl);
	return class$;
}

$Class* CalendarNameProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun