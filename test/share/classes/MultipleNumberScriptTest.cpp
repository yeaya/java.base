#include <MultipleNumberScriptTest.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$FieldInfo _MultipleNumberScriptTest_FieldInfo_[] = {
	{"locales", "[Ljava/util/Locale;", nullptr, $STATIC, $staticField(MultipleNumberScriptTest, locales)},
	{"expectedNumSystem", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(MultipleNumberScriptTest, expectedNumSystem)},
	{}
};

$MethodInfo _MultipleNumberScriptTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultipleNumberScriptTest::*)()>(&MultipleNumberScriptTest::init$))},
	{"checkResult", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&MultipleNumberScriptTest::checkResult))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultipleNumberScriptTest::main))},
	{}
};

$ClassInfo _MultipleNumberScriptTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultipleNumberScriptTest",
	"java.lang.Object",
	nullptr,
	_MultipleNumberScriptTest_FieldInfo_,
	_MultipleNumberScriptTest_MethodInfo_
};

$Object* allocate$MultipleNumberScriptTest($Class* clazz) {
	return $of($alloc(MultipleNumberScriptTest));
}

$LocaleArray* MultipleNumberScriptTest::locales = nullptr;
$StringArray* MultipleNumberScriptTest::expectedNumSystem = nullptr;

void MultipleNumberScriptTest::init$() {
}

void MultipleNumberScriptTest::main($StringArray* args) {
	$init(MultipleNumberScriptTest);
	int32_t num = 0x0001E240;
	for (int32_t i = 0; i < $nc(MultipleNumberScriptTest::locales)->length; ++i) {
		$var($NumberFormat, nf, $NumberFormat::getIntegerInstance($nc(MultipleNumberScriptTest::locales)->get(i)));
		$var($String, formatted, $nc(nf)->format((int64_t)num));
		$init($System);
		$nc($System::out)->printf("%s is %s in %s locale (expected in %s script).\n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(num))),
			$of(formatted),
			$of($nc(MultipleNumberScriptTest::locales)->get(i)),
			$of($nc(MultipleNumberScriptTest::expectedNumSystem)->get(i))
		}));
		if (!checkResult(formatted, $nc(MultipleNumberScriptTest::expectedNumSystem)->get(i))) {
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
		case 0x002DD012:
			{
				if (s3161$->equals("arab"_s)) {
					tmp3161$ = 0;
				}
				break;
			}
		case 0x003292AF:
			{
				if (s3161$->equals("latn"_s)) {
					tmp3161$ = 1;
				}
				break;
			}
		case 0x00364D9C:
			{
				if (s3161$->equals("thai"_s)) {
					tmp3161$ = 2;
				}
				break;
			}
		}
		switch (tmp3161$) {
		case 0:
			{
				return $nc(formatted)->charAt(0) == (char16_t)0x661;
			}
		case 1:
			{
				return $nc(formatted)->charAt(0) == u'1';
			}
		case 2:
			{
				return $nc(formatted)->charAt(0) == (char16_t)0xE51;
			}
		default:
			{
				return false;
			}
		}
	}
}

void clinit$MultipleNumberScriptTest($Class* class$) {
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
	$loadClass(MultipleNumberScriptTest, name, initialize, &_MultipleNumberScriptTest_ClassInfo_, clinit$MultipleNumberScriptTest, allocate$MultipleNumberScriptTest);
	return class$;
}

$Class* MultipleNumberScriptTest::class$ = nullptr;