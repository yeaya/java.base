#include <sun/text/resources/cldr/FormatData_en_US_POSIX.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {

void FormatData_en_US_POSIX::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_US_POSIX::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				"0/00"_s,
				"INF"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"0.######"_s,
				u"¤ 0.00"_s,
				"0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
			})
		})
	}));
	return data;
}

FormatData_en_US_POSIX::FormatData_en_US_POSIX() {
}

$Class* FormatData_en_US_POSIX::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_US_POSIX, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_US_POSIX, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.FormatData_en_US_POSIX",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_en_US_POSIX, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_en_US_POSIX);
	});
	return class$;
}

$Class* FormatData_en_US_POSIX::class$ = nullptr;

			} // cldr
		} // resources
	} // text
} // sun