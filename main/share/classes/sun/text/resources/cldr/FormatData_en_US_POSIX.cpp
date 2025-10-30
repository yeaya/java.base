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

$MethodInfo _FormatData_en_US_POSIX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_en_US_POSIX::*)()>(&FormatData_en_US_POSIX::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_en_US_POSIX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.FormatData_en_US_POSIX",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_US_POSIX_MethodInfo_
};

$Object* allocate$FormatData_en_US_POSIX($Class* clazz) {
	return $of($alloc(FormatData_en_US_POSIX));
}

void FormatData_en_US_POSIX::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_US_POSIX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"0.######"_s,
				u"\u00a4\u00a00.00"_s,
				"0%"_s,
				u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s
			}))
		})
	}));
	return data;
}

FormatData_en_US_POSIX::FormatData_en_US_POSIX() {
}

$Class* FormatData_en_US_POSIX::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_US_POSIX, name, initialize, &_FormatData_en_US_POSIX_ClassInfo_, allocate$FormatData_en_US_POSIX);
	return class$;
}

$Class* FormatData_en_US_POSIX::class$ = nullptr;

			} // cldr
		} // resources
	} // text
} // sun