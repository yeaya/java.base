#include <sun/util/locale/provider/TimeZoneNameUtility$TimeZoneNameGetter.h>

#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/util/calendar/ZoneInfo.h>
#include <sun/util/locale/provider/TimeZoneNameUtility.h>
#include <jcpp.h>

#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $ZoneInfo = ::sun::util::calendar::ZoneInfo;
using $TimeZoneNameUtility = ::sun::util::locale::provider::TimeZoneNameUtility;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _TimeZoneNameUtility$TimeZoneNameGetter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeZoneNameUtility$TimeZoneNameGetter, $assertionsDisabled)},
	{"INSTANCE", "Lsun/util/locale/provider/TimeZoneNameUtility$TimeZoneNameGetter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimeZoneNameUtility$TimeZoneNameGetter, INSTANCE)},
	{}
};

$MethodInfo _TimeZoneNameUtility$TimeZoneNameGetter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(TimeZoneNameUtility$TimeZoneNameGetter, init$, void)},
	{"examineAliases", "(Ljava/util/spi/TimeZoneNameProvider;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)Ljava/lang/String;", "(Ljava/util/spi/TimeZoneNameProvider;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/String;ILjava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(TimeZoneNameUtility$TimeZoneNameGetter, examineAliases, $String*, $TimeZoneNameProvider*, $Locale*, $String*, $String*, int32_t, $Map*)},
	{"getName", "(Ljava/util/spi/TimeZoneNameProvider;Ljava/util/Locale;Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(TimeZoneNameUtility$TimeZoneNameGetter, getName, $String*, $TimeZoneNameProvider*, $Locale*, $String*, int32_t, $String*)},
	{"getObject", "(Ljava/util/spi/TimeZoneNameProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(TimeZoneNameUtility$TimeZoneNameGetter, getObject, $String*, $TimeZoneNameProvider*, $Locale*, $String*, $ObjectArray*)},
	{"getObject", "(Ljava/util/spi/LocaleServiceProvider;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TimeZoneNameUtility$TimeZoneNameGetter, getObject, $Object*, $LocaleServiceProvider*, $Locale*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _TimeZoneNameUtility$TimeZoneNameGetter_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.TimeZoneNameUtility$TimeZoneNameGetter", "sun.util.locale.provider.TimeZoneNameUtility", "TimeZoneNameGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter", "sun.util.locale.provider.LocaleServiceProviderPool", "LocalizedObjectGetter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TimeZoneNameUtility$TimeZoneNameGetter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.TimeZoneNameUtility$TimeZoneNameGetter",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleServiceProviderPool$LocalizedObjectGetter",
	_TimeZoneNameUtility$TimeZoneNameGetter_FieldInfo_,
	_TimeZoneNameUtility$TimeZoneNameGetter_MethodInfo_,
	"Ljava/lang/Object;Lsun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter<Ljava/util/spi/TimeZoneNameProvider;Ljava/lang/String;>;",
	nullptr,
	_TimeZoneNameUtility$TimeZoneNameGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.TimeZoneNameUtility"
};

$Object* allocate$TimeZoneNameUtility$TimeZoneNameGetter($Class* clazz) {
	return $of($alloc(TimeZoneNameUtility$TimeZoneNameGetter));
}

bool TimeZoneNameUtility$TimeZoneNameGetter::$assertionsDisabled = false;
TimeZoneNameUtility$TimeZoneNameGetter* TimeZoneNameUtility$TimeZoneNameGetter::INSTANCE = nullptr;

void TimeZoneNameUtility$TimeZoneNameGetter::init$() {
}

$String* TimeZoneNameUtility$TimeZoneNameGetter::getObject($TimeZoneNameProvider* timeZoneNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (!TimeZoneNameUtility$TimeZoneNameGetter::$assertionsDisabled && !($nc(params)->length == 2)) {
		$throwNew($AssertionError);
	}
	int32_t style = $nc(($cast($Integer, $nc(params)->get(0))))->intValue();
	$var($String, tzid, $cast($String, params->get(1)));
	$var($String, value, getName(timeZoneNameProvider, locale, requestID, style, tzid));
	if (value == nullptr) {
		$var($Map, aliases, $ZoneInfo::getAliasTable());
		if (aliases != nullptr) {
			$var($String, canonicalID, $cast($String, aliases->get(tzid)));
			if (canonicalID != nullptr) {
				$assign(value, getName(timeZoneNameProvider, locale, requestID, style, canonicalID));
			}
			if (value == nullptr) {
				$assign(value, examineAliases(timeZoneNameProvider, locale, requestID, canonicalID != nullptr ? canonicalID : tzid, style, aliases));
			}
		}
	}
	return value;
}

$String* TimeZoneNameUtility$TimeZoneNameGetter::examineAliases($TimeZoneNameProvider* tznp, $Locale* locale, $String* requestID, $String* tzid, int32_t style, $Map* aliases) {
	$init(TimeZoneNameUtility$TimeZoneNameGetter);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(aliases)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				if ($nc(($cast($String, $($nc(entry)->getValue()))))->equals(tzid)) {
					$var($String, alias, $cast($String, entry->getKey()));
					$var($String, name, getName(tznp, locale, requestID, style, alias));
					if (name != nullptr) {
						return name;
					}
					$assign(name, examineAliases(tznp, locale, requestID, alias, style, aliases));
					if (name != nullptr) {
						return name;
					}
				}
			}
		}
	}
	return nullptr;
}

$String* TimeZoneNameUtility$TimeZoneNameGetter::getName($TimeZoneNameProvider* timeZoneNameProvider, $Locale* locale, $String* requestID, int32_t style, $String* tzid) {
	$init(TimeZoneNameUtility$TimeZoneNameGetter);
	$useLocalCurrentObjectStackCache();
	$var($String, value, nullptr);
	{
		$var($String, s10415$, requestID);
		int32_t tmp10415$ = -1;
		switch ($nc(s10415$)->hashCode()) {
		case 0x0001BE23:
			{
				if (s10415$->equals("std"_s)) {
					tmp10415$ = 0;
				}
				break;
			}
		case 0x000185C5:
			{
				if (s10415$->equals("dst"_s)) {
					tmp10415$ = 1;
				}
				break;
			}
		case (int32_t)0xFB3909D7:
			{
				if (s10415$->equals("generic"_s)) {
					tmp10415$ = 2;
				}
				break;
			}
		}
		switch (tmp10415$) {
		case 0:
			{
				$assign(value, $nc(timeZoneNameProvider)->getDisplayName(tzid, false, style, locale));
				break;
			}
		case 1:
			{
				$assign(value, $nc(timeZoneNameProvider)->getDisplayName(tzid, true, style, locale));
				break;
			}
		case 2:
			{
				$assign(value, $nc(timeZoneNameProvider)->getGenericDisplayName(tzid, style, locale));
				break;
			}
		}
	}
	return value;
}

$Object* TimeZoneNameUtility$TimeZoneNameGetter::getObject($LocaleServiceProvider* timeZoneNameProvider, $Locale* locale, $String* requestID, $ObjectArray* params) {
	return $of(this->getObject($cast($TimeZoneNameProvider, timeZoneNameProvider), locale, requestID, params));
}

void clinit$TimeZoneNameUtility$TimeZoneNameGetter($Class* class$) {
	$load($TimeZoneNameUtility);
	TimeZoneNameUtility$TimeZoneNameGetter::$assertionsDisabled = !$TimeZoneNameUtility::class$->desiredAssertionStatus();
	$assignStatic(TimeZoneNameUtility$TimeZoneNameGetter::INSTANCE, $new(TimeZoneNameUtility$TimeZoneNameGetter));
}

TimeZoneNameUtility$TimeZoneNameGetter::TimeZoneNameUtility$TimeZoneNameGetter() {
}

$Class* TimeZoneNameUtility$TimeZoneNameGetter::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNameUtility$TimeZoneNameGetter, name, initialize, &_TimeZoneNameUtility$TimeZoneNameGetter_ClassInfo_, clinit$TimeZoneNameUtility$TimeZoneNameGetter, allocate$TimeZoneNameUtility$TimeZoneNameGetter);
	return class$;
}

$Class* TimeZoneNameUtility$TimeZoneNameGetter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun