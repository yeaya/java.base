#include <java/text/spi/CollatorProvider.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

void CollatorProvider::init$() {
	$LocaleServiceProvider::init$();
}

CollatorProvider::CollatorProvider() {
}

$Class* CollatorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(CollatorProvider, init$, void)},
		{"getInstance", "(Ljava/util/Locale;)Ljava/text/Collator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CollatorProvider, getInstance, $Collator*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.spi.CollatorProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollatorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollatorProvider);
	});
	return class$;
}

$Class* CollatorProvider::class$ = nullptr;

		} // spi
	} // text
} // java