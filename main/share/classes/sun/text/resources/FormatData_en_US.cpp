#include <sun/text/resources/FormatData_en_US.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

$MethodInfo _FormatData_en_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FormatData_en_US::*)()>(&FormatData_en_US::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _FormatData_en_US_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.FormatData_en_US",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_US_MethodInfo_
};

$Object* allocate$FormatData_en_US($Class* clazz) {
	return $of($alloc(FormatData_en_US));
}

void FormatData_en_US::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_US::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"\u00a4#,##0.00;(\u00a4#,##0.00)"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_en_US::FormatData_en_US() {
}

$Class* FormatData_en_US::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_US, name, initialize, &_FormatData_en_US_ClassInfo_, allocate$FormatData_en_US);
	return class$;
}

$Class* FormatData_en_US::class$ = nullptr;

		} // resources
	} // text
} // sun