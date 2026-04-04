#include <sun/text/resources/FormatData_en_US.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void FormatData_en_US::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_US::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NumberPatterns"_s,
		$$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0.00;(¤#,##0.00)"_s,
			"#,##0%"_s
		})
	})});
}

FormatData_en_US::FormatData_en_US() {
}

$Class* FormatData_en_US::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_US, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_US, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.FormatData_en_US",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_en_US, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_en_US);
	});
	return class$;
}

$Class* FormatData_en_US::class$ = nullptr;

		} // resources
	} // text
} // sun