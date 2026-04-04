#include <bug6317072.h>
#include <java/text/DateFormat.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef FULL

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Locale = ::java::util::Locale;

void bug6317072::init$() {
}

void bug6317072::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$new($SimpleDateFormat, "yy"_s, ($Locale*)nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, ($String*)nullptr, $($Locale::getDefault()));
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, "yy"_s, ($DateFormatSymbols*)nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, ($String*)nullptr, $($DateFormatSymbols::getInstance()));
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getTimeInstance($DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getDateInstance($DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getDateTimeInstance($DateFormat::FULL, $DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
}

bug6317072::bug6317072() {
}

$Class* bug6317072::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6317072, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6317072, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6317072",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6317072, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6317072);
	});
	return class$;
}

$Class* bug6317072::class$ = nullptr;