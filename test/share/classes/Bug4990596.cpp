#include <Bug4990596.h>
#include <Bug4990596$MutableInteger.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $Bug4990596$MutableInteger = ::Bug4990596$MutableInteger;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;

void Bug4990596::init$() {
}

void Bug4990596::main($StringArray* args) {
	$useLocalObjectStack();
	$$new($DecimalFormat)->format($$new($Bug4990596$MutableInteger, 0));
}

Bug4990596::Bug4990596() {
}

$Class* Bug4990596::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4990596, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4990596, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bug4990596$MutableInteger", "Bug4990596", "MutableInteger", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4990596",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Bug4990596$MutableInteger"
	};
	$loadClass(Bug4990596, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4990596);
	});
	return class$;
}

$Class* Bug4990596::class$ = nullptr;