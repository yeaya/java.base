#include <Bug7200119.h>
#include <java/text/Collator.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

void Bug7200119::init$() {
}

void Bug7200119::main($StringArray* args) {
	$useLocalObjectStack();
	$var($List, avail, $Arrays::asList($($Collator::getAvailableLocales())));
	$init($Locale);
	if (!$nc(avail)->contains($Locale::US)) {
		$throwNew($RuntimeException, "Failed."_s);
	}
}

Bug7200119::Bug7200119() {
}

$Class* Bug7200119::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug7200119, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug7200119, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug7200119",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug7200119, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug7200119);
	});
	return class$;
}

$Class* Bug7200119::class$ = nullptr;