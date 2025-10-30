#include <sun/util/cldr/CLDRTimeZoneNameProviderImpl.h>

#include <java/text/MessageFormat.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/ZoneInfo.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <sun/util/cldr/CLDRLocaleProviderAdapter.h>
#include <sun/util/cldr/CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/TimeZoneNameProviderImpl.h>
#include <sun/util/locale/provider/TimeZoneNameUtility.h>
#include <jcpp.h>

#undef CHINA
#undef CLDR
#undef INDEX_DST_LONG
#undef INDEX_DST_SHORT
#undef INDEX_GEN_LONG
#undef INDEX_GEN_SHORT
#undef INDEX_STD_LONG
#undef INDEX_STD_SHORT
#undef INDEX_TZID
#undef INSTANCE
#undef JRE
#undef NO_INHERITANCE_MARKER
#undef TAIWAN

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $ZoneInfo = ::sun::util::calendar::ZoneInfo;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;
using $CLDRLocaleProviderAdapter = ::sun::util::cldr::CLDRLocaleProviderAdapter;
using $CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS = ::sun::util::cldr::CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $TimeZoneNameProviderImpl = ::sun::util::locale::provider::TimeZoneNameProviderImpl;
using $TimeZoneNameUtility = ::sun::util::locale::provider::TimeZoneNameUtility;

namespace sun {
	namespace util {
		namespace cldr {

$FieldInfo _CLDRTimeZoneNameProviderImpl_FieldInfo_[] = {
	{"NO_INHERITANCE_MARKER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CLDRTimeZoneNameProviderImpl, NO_INHERITANCE_MARKER)},
	{"INDEX_TZID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_TZID)},
	{"INDEX_STD_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_STD_LONG)},
	{"INDEX_STD_SHORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_STD_SHORT)},
	{"INDEX_DST_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_DST_LONG)},
	{"INDEX_DST_SHORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_DST_SHORT)},
	{"INDEX_GEN_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_GEN_LONG)},
	{"INDEX_GEN_SHORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CLDRTimeZoneNameProviderImpl, INDEX_GEN_SHORT)},
	{}
};

$MethodInfo _CLDRTimeZoneNameProviderImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(CLDRTimeZoneNameProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&CLDRTimeZoneNameProviderImpl::init$))},
	{"deriveFallbackName", "([Ljava/lang/String;ILjava/util/Locale;Z)V", nullptr, $PRIVATE, $method(static_cast<void(CLDRTimeZoneNameProviderImpl::*)($StringArray*,int32_t,$Locale*,bool)>(&CLDRTimeZoneNameProviderImpl::deriveFallbackName))},
	{"deriveFallbackNames", "([Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PRIVATE, $method(static_cast<void(CLDRTimeZoneNameProviderImpl::*)($StringArray*,$Locale*)>(&CLDRTimeZoneNameProviderImpl::deriveFallbackNames))},
	{"exists", "([Ljava/lang/String;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(CLDRTimeZoneNameProviderImpl::*)($StringArray*,int32_t)>(&CLDRTimeZoneNameProviderImpl::exists))},
	{"getDisplayNameArray", "(Ljava/lang/String;Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getZoneStrings", "(Ljava/util/Locale;)[[Ljava/lang/String;", nullptr, $PROTECTED},
	{"mapChineseLocale", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE, $method(static_cast<$Locale*(CLDRTimeZoneNameProviderImpl::*)($Locale*)>(&CLDRTimeZoneNameProviderImpl::mapChineseLocale))},
	{"regionFormatFallback", "([Ljava/lang/String;ILjava/util/Locale;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CLDRTimeZoneNameProviderImpl::*)($StringArray*,int32_t,$Locale*)>(&CLDRTimeZoneNameProviderImpl::regionFormatFallback))},
	{"toGMTFormat", "(Ljava/lang/String;ZLjava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CLDRTimeZoneNameProviderImpl::*)($String*,bool,$Locale*)>(&CLDRTimeZoneNameProviderImpl::toGMTFormat))},
	{"typeFallback", "([Ljava/lang/String;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(CLDRTimeZoneNameProviderImpl::*)($StringArray*,int32_t)>(&CLDRTimeZoneNameProviderImpl::typeFallback))},
	{}
};

$InnerClassInfo _CLDRTimeZoneNameProviderImpl_InnerClassesInfo_[] = {
	{"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS", "sun.util.cldr.CLDRTimeZoneNameProviderImpl", "AVAILABLE_IDS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CLDRTimeZoneNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.cldr.CLDRTimeZoneNameProviderImpl",
	"sun.util.locale.provider.TimeZoneNameProviderImpl",
	nullptr,
	_CLDRTimeZoneNameProviderImpl_FieldInfo_,
	_CLDRTimeZoneNameProviderImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CLDRTimeZoneNameProviderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS"
};

$Object* allocate$CLDRTimeZoneNameProviderImpl($Class* clazz) {
	return $of($alloc(CLDRTimeZoneNameProviderImpl));
}

$String* CLDRTimeZoneNameProviderImpl::NO_INHERITANCE_MARKER = nullptr;

void CLDRTimeZoneNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$TimeZoneNameProviderImpl::init$(type, langtags);
}

$StringArray* CLDRTimeZoneNameProviderImpl::getDisplayNameArray($String* id, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, namesSuper, $TimeZoneNameProviderImpl::getDisplayNameArray(id, locale));
	if (namesSuper == nullptr) {
		$assign(namesSuper, $TimeZoneNameProviderImpl::getDisplayNameArray($cast($String, $($nc($($TimeZoneNameUtility::canonicalTZID(id)))->orElse(id))), locale));
	}
	if (namesSuper != nullptr) {
		namesSuper->set(CLDRTimeZoneNameProviderImpl::INDEX_TZID, id);
		for (int32_t i = CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG; i < namesSuper->length; ++i) {
			{
				$var($String, s3536$, namesSuper->get(i));
				int32_t tmp3536$ = -1;
				switch ($nc(s3536$)->hashCode()) {
				case 0:
					{
						if (s3536$->equals(""_s)) {
							tmp3536$ = 0;
						}
						break;
					}
				case 0x0083F565:
					{
						if (s3536$->equals(u"\u2205\u2205\u2205"_s)) {
							tmp3536$ = 1;
						}
						break;
					}
				}
				switch (tmp3536$) {
				case 0:
					{
						deriveFallbackName(namesSuper, i, locale, !$nc($($TimeZone::getTimeZone(id)))->useDaylightTime());
						break;
					}
				case 1:
					{
						namesSuper->set(i, $(toGMTFormat(id, i == CLDRTimeZoneNameProviderImpl::INDEX_DST_LONG || i == CLDRTimeZoneNameProviderImpl::INDEX_DST_SHORT, locale)));
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
		return namesSuper;
	} else {
		$init($CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS);
		if ($Arrays::binarySearch($CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::INSTANCE, $of(id)) >= 0) {
			$var($StringArray, names, $new($StringArray, CLDRTimeZoneNameProviderImpl::INDEX_GEN_SHORT + 1));
			names->set(CLDRTimeZoneNameProviderImpl::INDEX_TZID, id);
			deriveFallbackNames(names, locale);
			return names;
		}
	}
	return nullptr;
}

$StringArray2* CLDRTimeZoneNameProviderImpl::getZoneStrings($Locale* locale) {
	$var($StringArray2, ret, $TimeZoneNameProviderImpl::getZoneStrings(locale));
	for (int32_t zoneIndex = 0; zoneIndex < $nc(ret)->length; ++zoneIndex) {
		deriveFallbackNames(ret->get(zoneIndex), locale);
	}
	return ret;
}

void CLDRTimeZoneNameProviderImpl::deriveFallbackNames($StringArray* names, $Locale* locale) {
	bool noDST = !$nc($($TimeZone::getTimeZone($nc(names)->get(0))))->useDaylightTime();
	for (int32_t i = CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG; i <= CLDRTimeZoneNameProviderImpl::INDEX_GEN_SHORT; ++i) {
		deriveFallbackName(names, i, locale, noDST);
	}
}

void CLDRTimeZoneNameProviderImpl::deriveFallbackName($StringArray* names, int32_t index, $Locale* locale, bool noDST) {
	$useLocalCurrentObjectStackCache();
	$var($String, id, $nc(names)->get(CLDRTimeZoneNameProviderImpl::INDEX_TZID));
	if (exists(names, index)) {
		if ($nc(names->get(index))->equals(CLDRTimeZoneNameProviderImpl::NO_INHERITANCE_MARKER)) {
			names->set(index, $(toGMTFormat(id, index == CLDRTimeZoneNameProviderImpl::INDEX_DST_LONG || index == CLDRTimeZoneNameProviderImpl::INDEX_DST_SHORT, locale)));
		}
		return;
	}
	if (!exists(names, index)) {
		$init($LocaleProviderAdapter$Type);
		$var($CLDRLocaleProviderAdapter, clpa, $cast($CLDRLocaleProviderAdapter, $LocaleProviderAdapter::forType($LocaleProviderAdapter$Type::CLDR)));
		$var($List, cands, $nc(clpa)->getCandidateLocales(""_s, locale));
		if ($nc(cands)->size() > 1) {
			$var($Locale, parentLoc, $cast($Locale, cands->get(1)));
			$var($StringArray, parentNames, $TimeZoneNameProviderImpl::getDisplayNameArray(id, parentLoc));
			if (parentNames != nullptr && !$nc(parentNames->get(index))->isEmpty()) {
				names->set(index, parentNames->get(index));
				return;
			}
		}
	}
	$init($LocaleProviderAdapter$Type);
	if ($nc($($LocaleProviderAdapter::getAdapterPreference()))->contains($LocaleProviderAdapter$Type::JRE)) {
		$var($StringArray, compatNames, $cast($StringArray, $nc($($nc($($LocaleProviderAdapter::forJRE()))->getLocaleResources($(mapChineseLocale(locale)))))->getTimeZoneNames(id)));
		if (compatNames != nullptr) {
			for (int32_t i = CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG; i <= CLDRTimeZoneNameProviderImpl::INDEX_GEN_SHORT; ++i) {
				if (i == index || !exists(names, i)) {
					names->set(i, compatNames->get(i));
				}
			}
			return;
		}
	}
	if (regionFormatFallback(names, index, locale)) {
		return;
	}
	if (noDST && typeFallback(names, index)) {
		return;
	}
	names->set(index, $(toGMTFormat(id, index == CLDRTimeZoneNameProviderImpl::INDEX_DST_LONG || index == CLDRTimeZoneNameProviderImpl::INDEX_DST_SHORT, locale)));
	bool var$0 = (exists(names, CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG));
	if (var$0) {
		bool var$2 = $nc(id)->startsWith("Etc/"_s);
		bool var$1 = var$2 || $nc(id)->startsWith("GMT"_s);
		var$0 = (var$1 || $nc(id)->startsWith("Greenwich"_s));
	}
	if (var$0) {
		{
			$var($String, s7718$, id);
			int32_t tmp7718$ = -1;
			switch (s7718$->hashCode()) {
			case 0x0D89A913:
				{
					if (s7718$->equals("Etc/GMT"_s)) {
						tmp7718$ = 0;
					}
					break;
				}
			case (int32_t)0xD1C3B5F6:
				{
					if (s7718$->equals("Etc/GMT-0"_s)) {
						tmp7718$ = 1;
					}
					break;
				}
			case (int32_t)0xD1C3B5B8:
				{
					if (s7718$->equals("Etc/GMT+0"_s)) {
						tmp7718$ = 2;
					}
					break;
				}
			case (int32_t)0xA3AB797D:
				{
					if (s7718$->equals("Etc/GMT0"_s)) {
						tmp7718$ = 3;
					}
					break;
				}
			case 0x040CC613:
				{
					if (s7718$->equals("GMT+0"_s)) {
						tmp7718$ = 4;
					}
					break;
				}
			case 0x040CC651:
				{
					if (s7718$->equals("GMT-0"_s)) {
						tmp7718$ = 5;
					}
					break;
				}
			case 0x002171C2:
				{
					if (s7718$->equals("GMT0"_s)) {
						tmp7718$ = 6;
					}
					break;
				}
			case (int32_t)0xF2B5641A:
				{
					if (s7718$->equals("Greenwich"_s)) {
						tmp7718$ = 7;
					}
					break;
				}
			}
			switch (tmp7718$) {
			case 0:
				{}
			case 1:
				{}
			case 2:
				{}
			case 3:
				{}
			case 4:
				{}
			case 5:
				{}
			case 6:
				{}
			case 7:
				{
					names->set(CLDRTimeZoneNameProviderImpl::INDEX_DST_LONG, names->set(CLDRTimeZoneNameProviderImpl::INDEX_GEN_LONG, names->get(CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG)));
					break;
				}
			}
		}
	}
}

bool CLDRTimeZoneNameProviderImpl::exists($StringArray* names, int32_t index) {
	bool var$1 = $Objects::nonNull(names);
	bool var$0 = var$1 && $Objects::nonNull($nc(names)->get(index));
	return var$0 && !$nc($nc(names)->get(index))->isEmpty();
}

bool CLDRTimeZoneNameProviderImpl::typeFallback($StringArray* names, int32_t index) {
	int32_t genIndex = CLDRTimeZoneNameProviderImpl::INDEX_GEN_SHORT - index % 2;
	bool var$1 = !exists(names, index);
	bool var$0 = var$1 && exists(names, genIndex);
	if (var$0 && !$nc($nc(names)->get(genIndex))->startsWith("GMT"_s)) {
		names->set(index, names->get(genIndex));
	} else {
		int32_t stdIndex = CLDRTimeZoneNameProviderImpl::INDEX_STD_SHORT - index % 2;
		bool var$3 = !exists(names, index);
		bool var$2 = var$3 && exists(names, stdIndex);
		if (var$2 && !$nc(names->get(stdIndex))->startsWith("GMT"_s)) {
			names->set(index, names->get(stdIndex));
		}
	}
	return exists(names, index);
}

bool CLDRTimeZoneNameProviderImpl::regionFormatFallback($StringArray* names, int32_t index, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($String, id, $nc(names)->get(CLDRTimeZoneNameProviderImpl::INDEX_TZID));
	$init($LocaleProviderAdapter$Type);
	$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::forType($LocaleProviderAdapter$Type::CLDR)))->getLocaleResources(l));
	$var($ResourceBundle, fd, $nc(lr)->getJavaTimeFormatData());
	$assign(id, $cast($String, $nc($($TimeZoneNameUtility::canonicalTZID(id)))->orElse(id)));
	$var($String, rgn, $cast($String, lr->getTimeZoneNames($$str({"timezone.excity."_s, id}))));
	bool var$0 = rgn == nullptr && !$nc(id)->startsWith("Etc"_s);
	if (var$0 && !id->startsWith("SystemV"_s)) {
		int32_t slash = id->lastIndexOf((int32_t)u'/');
		if (slash > 0) {
			$assign(rgn, $(id->substring(slash + 1))->replaceAll("_"_s, " "_s));
		}
	}
	if (rgn != nullptr) {
		$var($String, fmt, ""_s);
		switch (index) {
		case CLDRTimeZoneNameProviderImpl::INDEX_STD_LONG:
			{
				$assign(fmt, $nc(fd)->getString("timezone.regionFormat.standard"_s));
				break;
			}
		case CLDRTimeZoneNameProviderImpl::INDEX_DST_LONG:
			{
				$assign(fmt, $nc(fd)->getString("timezone.regionFormat.daylight"_s));
				break;
			}
		case CLDRTimeZoneNameProviderImpl::INDEX_GEN_LONG:
			{
				$assign(fmt, $nc(fd)->getString("timezone.regionFormat"_s));
				break;
			}
		}
		if (!fmt->isEmpty()) {
			names->set(index, $($MessageFormat::format(fmt, $$new($ObjectArray, {$of(rgn)}))));
		}
	}
	return exists(names, index);
}

$String* CLDRTimeZoneNameProviderImpl::toGMTFormat($String* id, bool daylight, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($TimeZone, tz, $ZoneInfoFile::getZoneInfo(id));
	int32_t var$0 = $nc(tz)->getRawOffset();
	int32_t offset = (var$0 + (daylight ? tz->getDSTSavings() : 0)) / 0x0000EA60;
	$init($LocaleProviderAdapter$Type);
	$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::forType($LocaleProviderAdapter$Type::CLDR)))->getLocaleResources(l));
	$var($ResourceBundle, fd, $nc(lr)->getJavaTimeFormatData());
	if (offset == 0) {
		return $nc(fd)->getString("timezone.gmtZeroFormat"_s);
	} else {
		$var($String, gmtFormat, $nc(fd)->getString("timezone.gmtFormat"_s));
		$var($String, hourFormat, fd->getString("timezone.hourFormat"_s));
		if (offset > 0) {
			$assign(hourFormat, $nc(hourFormat)->substring(0, hourFormat->indexOf(";"_s)));
		} else {
			$assign(hourFormat, $nc(hourFormat)->substring(hourFormat->indexOf(";"_s) + 1));
			offset = -offset;
		}
		$assign(hourFormat, $($nc(hourFormat)->replaceFirst("H+"_s, "\\%1\\$02d"_s))->replaceFirst("m+"_s, "\\%2\\$02d"_s));
		return $MessageFormat::format(gmtFormat, $$new($ObjectArray, {$($of($String::format(l, hourFormat, $$new($ObjectArray, {
			$($of($Integer::valueOf(offset / 60))),
			$($of($Integer::valueOf(offset % 60)))
		}))))}));
	}
}

$Locale* CLDRTimeZoneNameProviderImpl::mapChineseLocale($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if ($nc(locale)->getLanguage() == "zh"_s) {
		{
			$var($String, s11534$, locale->getScript());
			int32_t tmp11534$ = -1;
			switch ($nc(s11534$)->hashCode()) {
			case 0x0022349E:
				{
					if (s11534$->equals("Hans"_s)) {
						tmp11534$ = 0;
					}
					break;
				}
			case 0x0022349F:
				{
					if (s11534$->equals("Hant"_s)) {
						tmp11534$ = 1;
					}
					break;
				}
			case 0:
				{
					if (s11534$->equals(""_s)) {
						tmp11534$ = 2;
					}
					break;
				}
			}
			switch (tmp11534$) {
			case 0:
				{
					return $Locale::CHINA;
				}
			case 1:
				{
					return $Locale::TAIWAN;
				}
			case 2:
				{
					{
						$var($String, s11809$, locale->getCountry());
						int32_t tmp11809$ = -1;
						switch ($nc(s11809$)->hashCode()) {
						case 0:
							{
								if (s11809$->equals(""_s)) {
									tmp11809$ = 0;
								}
								break;
							}
						case 2155:
							{
								if (s11809$->equals("CN"_s)) {
									tmp11809$ = 1;
								}
								break;
							}
						case 2644:
							{
								if (s11809$->equals("SG"_s)) {
									tmp11809$ = 2;
								}
								break;
							}
						case 2307:
							{
								if (s11809$->equals("HK"_s)) {
									tmp11809$ = 3;
								}
								break;
							}
						case 2466:
							{
								if (s11809$->equals("MO"_s)) {
									tmp11809$ = 4;
								}
								break;
							}
						case 2691:
							{
								if (s11809$->equals("TW"_s)) {
									tmp11809$ = 5;
								}
								break;
							}
						}
						switch (tmp11809$) {
						case 0:
							{}
						case 1:
							{}
						case 2:
							{
								return $Locale::CHINA;
							}
						case 3:
							{}
						case 4:
							{}
						case 5:
							{
								return $Locale::TAIWAN;
							}
						}
					}
					break;
				}
			}
		}
	}
	return locale;
}

CLDRTimeZoneNameProviderImpl::CLDRTimeZoneNameProviderImpl() {
}

void clinit$CLDRTimeZoneNameProviderImpl($Class* class$) {
	$assignStatic(CLDRTimeZoneNameProviderImpl::NO_INHERITANCE_MARKER, u"\u2205\u2205\u2205"_s);
}

$Class* CLDRTimeZoneNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CLDRTimeZoneNameProviderImpl, name, initialize, &_CLDRTimeZoneNameProviderImpl_ClassInfo_, clinit$CLDRTimeZoneNameProviderImpl, allocate$CLDRTimeZoneNameProviderImpl);
	return class$;
}

$Class* CLDRTimeZoneNameProviderImpl::class$ = nullptr;

		} // cldr
	} // util
} // sun