#include <MultipleNumberScriptTest.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$LocaleArray* MultipleNumberScriptTest::locales = nullptr;
$StringArray* MultipleNumberScriptTest::expectedNumSystem = nullptr;

void MultipleNumberScriptTest::init$() {
}

void MultipleNumberScriptTest::main($StringArray* args) {
	$init(MultipleNumberScriptTest);
	$useLocalObjectStack();
	int32_t num = 0x0001e240;
	for (int32_t i = 0; i < $nc(MultipleNumberScriptTest::locales)->length; ++i) {
		$var($NumberFormat, nf, $NumberFormat::getIntegerInstance(MultipleNumberScriptTest::locales->get(i)));
		$var($String, formatted, $nc(nf)->format((int64_t)num));
		$nc($System::out)->printf("%s is %s in %s locale (expected in %s script).\n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(num)),
			formatted,
			MultipleNumberScriptTest::locales->get(i),
			$nc(MultipleNumberScriptTest::expectedNumSystem)->get(i)
		}));
		if (!checkResult(formatted, MultipleNumberScriptTest::expectedNumSystem->get(i))) {
			$throwNew($RuntimeException, "test failed. expected number system was not returned."_s);
		}
	}
}

bool MultipleNumberScriptTest::checkResult($String* formatted, $String* numSystem) {
	$init(MultipleNumberScriptTest);
	{
		$var($String, s3161$, numSystem);
		int32_t tmp3161$ = -1;
		switch ($nc(s3161$)->hashCode()) {
		case 0x002dd012:
			if (s3161$->equals("arab"_s)) {
				tmp3161$ = 0;
			}
			break;
		case 0x003292af:
			if (s3161$->equals("latn"_s)) {
				tmp3161$ = 1;
			}
			break;
		case 0x00364d9c:
			if (s3161$->equals("thai"_s)) {
				tmp3161$ = 2;
			}
			break;
		}
		switch (tmp3161$) {
		case 0:
			return $nc(formatted)->charAt(0) == (char16_t)0x0661;
		case 1:
			return $nc(formatted)->charAt(0) == u'1';
		case 2:
			return $nc(formatted)->charAt(0) == (char16_t)0x0e51;
		default:
			return false;
		}
	}
}

void MultipleNumberScriptTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MultipleNumberScriptTest::locales, $new($LocaleArray, {
		$$new($Locale, "ar"_s),
		$$new($Locale, "ar"_s, "EG"_s),
		$$new($Locale, "ar"_s, "DZ"_s),
		$($Locale::forLanguageTag("ar-EG-u-nu-arab"_s)),
		$($Locale::forLanguageTag("ar-EG-u-nu-latn"_s)),
		$($Locale::forLanguageTag("ar-DZ-u-nu-arab"_s)),
		$($Locale::forLanguageTag("ar-DZ-u-nu-latn"_s)),
		$($Locale::forLanguageTag("ee"_s)),
		$($Locale::forLanguageTag("ee-GH"_s)),
		$($Locale::forLanguageTag("ee-GH-u-nu-latn"_s)),
		$$new($Locale, "th"_s, "TH"_s, "TH"_s),
		$($Locale::forLanguageTag("th-TH"_s)),
		$($Locale::forLanguageTag("th-TH-u-nu-thai"_s)),
		$($Locale::forLanguageTag("th-TH-u-nu-hoge"_s))
	}));
	$assignStatic(MultipleNumberScriptTest::expectedNumSystem, $new($StringArray, {
		"latn"_s,
		"latn"_s,
		"latn"_s,
		"arab"_s,
		"latn"_s,
		"arab"_s,
		"latn"_s,
		"latn"_s,
		"latn"_s,
		"latn"_s,
		"thai"_s,
		"latn"_s,
		"thai"_s,
		"latn"_s
	}));
}

MultipleNumberScriptTest::MultipleNumberScriptTest() {
}

$Class* MultipleNumberScriptTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"locales", "[Ljava/util/Locale;", nullptr, $STATIC, $staticField(MultipleNumberScriptTest, locales)},
		{"expectedNumSystem", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(MultipleNumberScriptTest, expectedNumSystem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultipleNumberScriptTest, init$, void)},
		{"checkResult", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(MultipleNumberScriptTest, checkResult, bool, $String*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleNumberScriptTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultipleNumberScriptTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MultipleNumberScriptTest, name, initialize, &classInfo$$, MultipleNumberScriptTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultipleNumberScriptTest);
	});
	return class$;
}

$Class* MultipleNumberScriptTest::class$ = nullptr;