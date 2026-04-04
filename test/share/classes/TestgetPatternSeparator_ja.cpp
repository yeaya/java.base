#include <TestgetPatternSeparator_ja.h>
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

void TestgetPatternSeparator_ja::init$() {
}

void TestgetPatternSeparator_ja::main($StringArray* argv) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestgetPatternSeparator_ja, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestgetPatternSeparator_ja, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestgetPatternSeparator_ja",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestgetPatternSeparator_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestgetPatternSeparator_ja);
	});
	return class$;
}

$Class* TestgetPatternSeparator_ja::class$ = nullptr;