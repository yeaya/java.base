#include <java/text/spi/BreakIteratorProvider.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

void BreakIteratorProvider::init$() {
	$LocaleServiceProvider::init$();
}

BreakIteratorProvider::BreakIteratorProvider() {
}

$Class* BreakIteratorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(BreakIteratorProvider, init$, void)},
		{"getCharacterInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BreakIteratorProvider, getCharacterInstance, $BreakIterator*, $Locale*)},
		{"getLineInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BreakIteratorProvider, getLineInstance, $BreakIterator*, $Locale*)},
		{"getSentenceInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BreakIteratorProvider, getSentenceInstance, $BreakIterator*, $Locale*)},
		{"getWordInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BreakIteratorProvider, getWordInstance, $BreakIterator*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.spi.BreakIteratorProvider",
		"java.util.spi.LocaleServiceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BreakIteratorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorProvider);
	});
	return class$;
}

$Class* BreakIteratorProvider::class$ = nullptr;

		} // spi
	} // text
} // java