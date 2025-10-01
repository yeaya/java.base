#include <java/text/spi/BreakIteratorProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BreakIteratorProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BreakIteratorProvider::*)()>(&BreakIteratorProvider::init$))},
	{"getCharacterInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSentenceInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWordInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BreakIteratorProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.spi.BreakIteratorProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_BreakIteratorProvider_MethodInfo_
};

$Object* allocate$BreakIteratorProvider($Class* clazz) {
	return $of($alloc(BreakIteratorProvider));
}

void BreakIteratorProvider::init$() {
	$LocaleServiceProvider::init$();
}

BreakIteratorProvider::BreakIteratorProvider() {
}

$Class* BreakIteratorProvider::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorProvider, name, initialize, &_BreakIteratorProvider_ClassInfo_, allocate$BreakIteratorProvider);
	return class$;
}

$Class* BreakIteratorProvider::class$ = nullptr;

		} // spi
	} // text
} // java