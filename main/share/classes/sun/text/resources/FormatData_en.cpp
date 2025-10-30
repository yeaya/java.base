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

$MethodInfo _FormatData_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_en::*)()>(&FormatData_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.FormatData_en",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_MethodInfo_
};

$Object* allocate$FormatData_en($Class* clazz) {
	return $of($alloc(FormatData_en));
}

void FormatData_en::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"\u00a4#,##0.00;-\u00a4#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_en::FormatData_en() {
}

$Class* FormatData_en::load$($String* name, bool initialize) {
	$loadClass(FormatData_en, name, initialize, &_FormatData_en_ClassInfo_, allocate$FormatData_en);
	return class$;
}

$Class* FormatData_en::class$ = nullptr;

		} // resources
	} // text
} // sun