#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace sun {
	namespace text {
		namespace spi {

void JavaTimeDateTimePatternProvider::init$() {
	$LocaleServiceProvider::init$();
}

JavaTimeDateTimePatternProvider::JavaTimeDateTimePatternProvider() {
}

$Class* JavaTimeDateTimePatternProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(JavaTimeDateTimePatternProvider, init$, void)},
		{"getJavaTimeDateTimePattern", "(IILjava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaTimeDateTimePatternProvider, getJavaTimeDateTimePattern, $String*, int32_t, int32_t, $String*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.text.spi.JavaTimeDateTimePatternProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeDateTimePatternProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeDateTimePatternProvider);
	});
	return class$;
}

$Class* JavaTimeDateTimePatternProvider::class$ = nullptr;

		} // spi
	} // text
} // sun