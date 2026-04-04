#include <java/util/spi/CalendarNameProvider.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace util {
		namespace spi {

void CalendarNameProvider::init$() {
	$LocaleServiceProvider::init$();
}

CalendarNameProvider::CalendarNameProvider() {
}

$Class* CalendarNameProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CalendarNameProvider, init$, void)},
		{"getDisplayName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CalendarNameProvider, getDisplayName, $String*, $String*, int32_t, int32_t, int32_t, $Locale*)},
		{"getDisplayNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CalendarNameProvider, getDisplayNames, $Map*, $String*, int32_t, int32_t, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.spi.CalendarNameProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarNameProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarNameProvider);
	});
	return class$;
}

$Class* CalendarNameProvider::class$ = nullptr;

		} // spi
	} // util
} // java