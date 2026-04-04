#include <LocaleDependentURLTest.h>
#include <java/net/URL.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Locale = ::java::util::Locale;

void LocaleDependentURLTest::init$() {
}

void LocaleDependentURLTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($LocaleArray, arr$, $Locale::getAvailableLocales());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Locale, locale, arr$->get(i$));
		{
			$Locale::setDefault(locale);
			$new($URL, "FILE:///TMP/X"_s);
		}
	}
}

LocaleDependentURLTest::LocaleDependentURLTest() {
}

$Class* LocaleDependentURLTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleDependentURLTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleDependentURLTest, main, void, $StringArray*), "java.net.MalformedURLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LocaleDependentURLTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleDependentURLTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleDependentURLTest);
	});
	return class$;
}

$Class* LocaleDependentURLTest::class$ = nullptr;