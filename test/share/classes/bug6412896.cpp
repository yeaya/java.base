#include <bug6412896.h>
#include <java/text/DateFormatSymbols.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;

$StringArray2* bug6412896::zoneOK = nullptr;
$StringArray2* bug6412896::zoneNG = nullptr;

void bug6412896::init$() {
}

void bug6412896::main($StringArray* args) {
	$init(bug6412896);
	$var($DateFormatSymbols, dfs, $DateFormatSymbols::getInstance());
	$nc(dfs)->setZoneStrings(bug6412896::zoneOK);
	try {
		dfs->setZoneStrings(bug6412896::zoneNG);
		$throwNew($RuntimeException, "should throw an IllegalArgumentException"_s);
	} catch ($IllegalArgumentException& e) {
	}
}

void bug6412896::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(bug6412896::zoneOK, $new($StringArray2, {$$new($StringArray, {
		"America/Los_Angeles"_s,
		"Pacific Standard Time"_s,
		"PST"_s,
		"Pacific Daylight Time"_s,
		"PDT"_s
	})}));
	$assignStatic(bug6412896::zoneNG, $new($StringArray2, {$$new($StringArray, {
		"America/Los_Angeles"_s,
		"Pacific Standard Time"_s,
		"PST"_s,
		"Pacific Daylight Time"_s
	})}));
}

bug6412896::bug6412896() {
}

$Class* bug6412896::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zoneOK", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6412896, zoneOK)},
		{"zoneNG", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6412896, zoneNG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6412896, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6412896, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6412896",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug6412896, name, initialize, &classInfo$$, bug6412896::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6412896);
	});
	return class$;
}

$Class* bug6412896::class$ = nullptr;