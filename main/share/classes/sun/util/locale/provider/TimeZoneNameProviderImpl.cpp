#include <sun/util/locale/provider/TimeZoneNameProviderImpl.h>

#include <java/lang/AssertionError.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef LONG
#undef SHORT

using $LocaleArray = $Array<::java::util::Locale>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _TimeZoneNameProviderImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeZoneNameProviderImpl, $assertionsDisabled)},
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(TimeZoneNameProviderImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(TimeZoneNameProviderImpl, langtags)},
	{}
};

$MethodInfo _TimeZoneNameProviderImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PROTECTED, $method(TimeZoneNameProviderImpl, init$, void, $LocaleProviderAdapter$Type*, $Set*)},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(TimeZoneNameProviderImpl, getAvailableLocales, $LocaleArray*)},
	{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TimeZoneNameProviderImpl, getDisplayName, $String*, $String*, bool, int32_t, $Locale*)},
	{"getDisplayNameArray", "(Ljava/lang/String;Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TimeZoneNameProviderImpl, getDisplayNameArray, $StringArray*, $String*, $Locale*)},
	{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TimeZoneNameProviderImpl, getGenericDisplayName, $String*, $String*, int32_t, $Locale*)},
	{"getZoneStrings", "(Ljava/util/Locale;)[[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TimeZoneNameProviderImpl, getZoneStrings, $StringArray2*, $Locale*)},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(TimeZoneNameProviderImpl, isSupportedLocale, bool, $Locale*)},
	{}
};

$ClassInfo _TimeZoneNameProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.TimeZoneNameProviderImpl",
	"java.util.spi.TimeZoneNameProvider",
	nullptr,
	_TimeZoneNameProviderImpl_FieldInfo_,
	_TimeZoneNameProviderImpl_MethodInfo_
};

$Object* allocate$TimeZoneNameProviderImpl($Class* clazz) {
	return $of($alloc(TimeZoneNameProviderImpl));
}

bool TimeZoneNameProviderImpl::$assertionsDisabled = false;

void TimeZoneNameProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$TimeZoneNameProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* TimeZoneNameProviderImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool TimeZoneNameProviderImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$String* TimeZoneNameProviderImpl::getDisplayName($String* id, bool daylight, int32_t style, $Locale* locale) {
	$var($StringArray, names, getDisplayNameArray(id, locale));
	if ($Objects::nonNull(names)) {
		if (!TimeZoneNameProviderImpl::$assertionsDisabled && !($nc(names)->length >= 7)) {
			$throwNew($AssertionError);
		}
		int32_t index = daylight ? 3 : 1;
		if (style == $TimeZone::SHORT) {
			++index;
		}
		return $nc(names)->get(index);
	}
	return nullptr;
}

$String* TimeZoneNameProviderImpl::getGenericDisplayName($String* id, int32_t style, $Locale* locale) {
	$var($StringArray, names, getDisplayNameArray(id, locale));
	if ($Objects::nonNull(names)) {
		if (!TimeZoneNameProviderImpl::$assertionsDisabled && !($nc(names)->length >= 7)) {
			$throwNew($AssertionError);
		}
		return $nc(names)->get((style == $TimeZone::LONG) ? 5 : 6);
	}
	return nullptr;
}

$StringArray* TimeZoneNameProviderImpl::getDisplayNameArray($String* id, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(id);
	$Objects::requireNonNull(locale);
	return $cast($StringArray, $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getTimeZoneNames(id));
}

$StringArray2* TimeZoneNameProviderImpl::getZoneStrings($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($LocaleProviderAdapter::forType(this->type)))->getLocaleResources(locale)))->getZoneStrings();
}

void clinit$TimeZoneNameProviderImpl($Class* class$) {
	TimeZoneNameProviderImpl::$assertionsDisabled = !TimeZoneNameProviderImpl::class$->desiredAssertionStatus();
}

TimeZoneNameProviderImpl::TimeZoneNameProviderImpl() {
}

$Class* TimeZoneNameProviderImpl::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNameProviderImpl, name, initialize, &_TimeZoneNameProviderImpl_ClassInfo_, clinit$TimeZoneNameProviderImpl, allocate$TimeZoneNameProviderImpl);
	return class$;
}

$Class* TimeZoneNameProviderImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun