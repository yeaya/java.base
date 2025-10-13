#include <custom/CustomTimeZoneNameProvider.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _CustomTimeZoneNameProvider_FieldInfo_[] = {
	{"ZONE_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CustomTimeZoneNameProvider, ZONE_ID)},
	{}
};

$MethodInfo _CustomTimeZoneNameProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomTimeZoneNameProvider::*)()>(&CustomTimeZoneNameProvider::init$))},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CustomTimeZoneNameProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"custom.CustomTimeZoneNameProvider",
	"java.util.spi.TimeZoneNameProvider",
	nullptr,
	_CustomTimeZoneNameProvider_FieldInfo_,
	_CustomTimeZoneNameProvider_MethodInfo_
};

$Object* allocate$CustomTimeZoneNameProvider($Class* clazz) {
	return $of($alloc(CustomTimeZoneNameProvider));
}

$String* CustomTimeZoneNameProvider::ZONE_ID = nullptr;

void CustomTimeZoneNameProvider::init$() {
	$TimeZoneNameProvider::init$();
}

$String* CustomTimeZoneNameProvider::getDisplayName($String* ID, bool daylight, int32_t style, $Locale* locale) {
	if ($nc(CustomTimeZoneNameProvider::ZONE_ID)->equals(ID)) {
		switch (style) {
		case $TimeZone::SHORT:
			{
				if (daylight) {
					return "CUST_ST"_s;
				} else {
					return "CUST_WT"_s;
				}
			}
		case $TimeZone::LONG:
			{
				if (daylight) {
					return "Custom Summer Time"_s;
				} else {
					return "Custom Winter Time"_s;
				}
			}
		}
	}
	return nullptr;
}

$String* CustomTimeZoneNameProvider::getGenericDisplayName($String* ID, int32_t style, $Locale* locale) {
	if ($nc(CustomTimeZoneNameProvider::ZONE_ID)->equals(ID)) {
		switch (style) {
		case $TimeZone::SHORT:
			{
				return "Custom Time"_s;
			}
		case $TimeZone::LONG:
			{
				return "Custom Timezone Time"_s;
			}
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

void clinit$CustomTimeZoneNameProvider($Class* class$) {
	$assignStatic(CustomTimeZoneNameProvider::ZONE_ID, "Custom/Timezone"_s);
}

$Class* CustomTimeZoneNameProvider::load$($String* name, bool initialize) {
	$loadClass(CustomTimeZoneNameProvider, name, initialize, &_CustomTimeZoneNameProvider_ClassInfo_, clinit$CustomTimeZoneNameProvider, allocate$CustomTimeZoneNameProvider);
	return class$;
}

$Class* CustomTimeZoneNameProvider::class$ = nullptr;

} // custom