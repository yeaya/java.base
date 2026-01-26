#include <LocaleDependentURLTest.h>

#include <java/net/URL.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Locale = ::java::util::Locale;

$MethodInfo _LocaleDependentURLTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleDependentURLTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LocaleDependentURLTest, main, void, $StringArray*), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _LocaleDependentURLTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LocaleDependentURLTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LocaleDependentURLTest_MethodInfo_
};

$Object* allocate$LocaleDependentURLTest($Class* clazz) {
	return $of($alloc(LocaleDependentURLTest));
}

void LocaleDependentURLTest::init$() {
}

void LocaleDependentURLTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			{
				$Locale::setDefault(locale);
				$new($URL, "FILE:///TMP/X"_s);
			}
		}
	}
}

LocaleDependentURLTest::LocaleDependentURLTest() {
}

$Class* LocaleDependentURLTest::load$($String* name, bool initialize) {
	$loadClass(LocaleDependentURLTest, name, initialize, &_LocaleDependentURLTest_ClassInfo_, allocate$LocaleDependentURLTest);
	return class$;
}

$Class* LocaleDependentURLTest::class$ = nullptr;