#include <custom/CustomTimeZoneNameProvider.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <jcpp.h>

#undef ID
#undef LONG
#undef SHORT
#undef ZONE_ID

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;

namespace custom {

$String* CustomTimeZoneNameProvider::ZONE_ID = nullptr;

void CustomTimeZoneNameProvider::init$() {
	$TimeZoneNameProvider::init$();
}

$String* CustomTimeZoneNameProvider::getDisplayName($String* ID, bool daylight, int32_t style, $Locale* locale) {
	if (CustomTimeZoneNameProvider::ZONE_ID->equals(ID)) {
		switch (style) {
		case $TimeZone::SHORT:
			if (daylight) {
				return "CUST_ST"_s;
			} else {
				return "CUST_WT"_s;
			}
		case $TimeZone::LONG:
			if (daylight) {
				return "Custom Summer Time"_s;
			} else {
				return "Custom Winter Time"_s;
			}
		}
	}
	return nullptr;
}

$String* CustomTimeZoneNameProvider::getGenericDisplayName($String* ID, int32_t style, $Locale* locale) {
	if (CustomTimeZoneNameProvider::ZONE_ID->equals(ID)) {
		switch (style) {
		case $TimeZone::SHORT:
			return "Custom Time"_s;
		case $TimeZone::LONG:
			return "Custom Timezone Time"_s;
		}
	}
	return nullptr;
}

bool CustomTimeZoneNameProvider::isSupportedLocale($Locale* locale) {
	return true;
}

$LocaleArray* CustomTimeZoneNameProvider::getAvailableLocales() {
	return $new($LocaleArray, {$($Locale::getDefault())});
}

CustomTimeZoneNameProvider::CustomTimeZoneNameProvider() {
}

void CustomTimeZoneNameProvider::clinit$($Class* clazz) {
	$assignStatic(CustomTimeZoneNameProvider::ZONE_ID, "Custom/Timezone"_s);
}

$Class* CustomTimeZoneNameProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ZONE_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CustomTimeZoneNameProvider, ZONE_ID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CustomTimeZoneNameProvider, init$, void)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(CustomTimeZoneNameProvider, getAvailableLocales, $LocaleArray*)},
		{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CustomTimeZoneNameProvider, getDisplayName, $String*, $String*, bool, int32_t, $Locale*)},
		{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CustomTimeZoneNameProvider, getGenericDisplayName, $String*, $String*, int32_t, $Locale*)},
		{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC, $virtualMethod(CustomTimeZoneNameProvider, isSupportedLocale, bool, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"custom.CustomTimeZoneNameProvider",
		"java.util.spi.TimeZoneNameProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CustomTimeZoneNameProvider, name, initialize, &classInfo$$, CustomTimeZoneNameProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CustomTimeZoneNameProvider);
	});
	return class$;
}

$Class* CustomTimeZoneNameProvider::class$ = nullptr;

} // custom