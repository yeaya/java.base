#include <sun/text/resources/FormatData_en.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void FormatData_en::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;-¤#,##0.00"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_en::FormatData_en() {
}

$Class* FormatData_en::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.FormatData_en",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_en, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_en);
	});
	return class$;
}

$Class* FormatData_en::class$ = nullptr;

		} // resources
	} // text
} // sun