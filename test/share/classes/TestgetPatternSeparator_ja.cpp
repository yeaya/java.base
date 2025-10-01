#include <TestgetPatternSeparator_ja.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$MethodInfo _TestgetPatternSeparator_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestgetPatternSeparator_ja::*)()>(&TestgetPatternSeparator_ja::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestgetPatternSeparator_ja::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestgetPatternSeparator_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestgetPatternSeparator_ja",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestgetPatternSeparator_ja_MethodInfo_
};

$Object* allocate$TestgetPatternSeparator_ja($Class* clazz) {
	return $of($alloc(TestgetPatternSeparator_ja));
}

void TestgetPatternSeparator_ja::init$() {
}

void TestgetPatternSeparator_ja::main($StringArray* argv) {
	$init($Locale);
	$var($DecimalFormat, df, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::JAPAN)));
	$var($DecimalFormatSymbols, dfs, $nc(df)->getDecimalFormatSymbols());
	if ($nc(dfs)->getPatternSeparator() != u';') {
		$throwNew($Exception, "DecimalFormatSymbols.getPatternSeparator doesn\'t return \';\' in ja locale"_s);
	}
}

TestgetPatternSeparator_ja::TestgetPatternSeparator_ja() {
}

$Class* TestgetPatternSeparator_ja::load$($String* name, bool initialize) {
	$loadClass(TestgetPatternSeparator_ja, name, initialize, &_TestgetPatternSeparator_ja_ClassInfo_, allocate$TestgetPatternSeparator_ja);
	return class$;
}

$Class* TestgetPatternSeparator_ja::class$ = nullptr;