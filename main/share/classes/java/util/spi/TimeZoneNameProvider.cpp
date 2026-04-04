#include <java/util/spi/TimeZoneNameProvider.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

#undef ID

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

void TimeZoneNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

$String* TimeZoneNameProvider::getGenericDisplayName($String* ID, int32_t style, $Locale* locale) {
	return nullptr;
}

TimeZoneNameProvider::TimeZoneNameProvider() {
}

$Class* TimeZoneNameProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TimeZoneNameProvider, init$, void)},
		{"getDisplayName", "(Ljava/lang/String;ZILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimeZoneNameProvider, getDisplayName, $String*, $String*, bool, int32_t, $Locale*)},
		{"getGenericDisplayName", "(Ljava/lang/String;ILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TimeZoneNameProvider, getGenericDisplayName, $String*, $String*, int32_t, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.spi.TimeZoneNameProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNameProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNameProvider);
	});
	return class$;
}

$Class* TimeZoneNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java