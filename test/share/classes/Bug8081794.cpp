#include <Bug8081794.h>
#include <java/text/ParsePosition.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParsePosition = ::java::text::ParsePosition;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

void Bug8081794::init$() {
}

void Bug8081794::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, date, "13 Jan 2005 21:45:34 ABC"_s);
	$var($String, format, "dd MMM yyyy HH:mm:ss z"_s);
	$var($ParsePosition, pp, $new($ParsePosition, 0));
	pp->setIndex(0);
	$init($Locale);
	$var($SimpleDateFormat, sd, $new($SimpleDateFormat, format, $Locale::ENGLISH));
	$var($Date, d, sd->parse(date, pp));
	int32_t errorIndex = pp->getErrorIndex();
	if (errorIndex == 21) {
		$nc($System::out)->println(": passed"_s);
	} else {
		$nc($System::out)->println(": failed"_s);
		$throwNew($RuntimeException, $$str({"Failed with wrong index: "_s, $$str(errorIndex)}));
	}
}

Bug8081794::Bug8081794() {
}

$Class* Bug8081794::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8081794, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8081794, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug8081794",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8081794, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8081794);
	});
	return class$;
}

$Class* Bug8081794::class$ = nullptr;