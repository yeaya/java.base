#include <Bug4912404.h>
#include <java/text/BreakIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;

void Bug4912404::init$() {
}

void Bug4912404::main($StringArray* args) {
	$var($BreakIterator, b, $BreakIterator::getWordInstance());
	$nc(b)->setText("abc"_s);
	if (b->equals(nullptr)) {
		$throwNew($RuntimeException, "BreakIterator.equals(null) should return false."_s);
	}
}

Bug4912404::Bug4912404() {
}

$Class* Bug4912404::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4912404, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4912404, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4912404",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug4912404, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4912404);
	});
	return class$;
}

$Class* Bug4912404::class$ = nullptr;