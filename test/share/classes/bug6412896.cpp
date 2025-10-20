#include <bug6412896.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormatSymbols.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;

$FieldInfo _bug6412896_FieldInfo_[] = {
	{"zoneOK", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6412896, zoneOK)},
	{"zoneNG", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6412896, zoneNG)},
	{}
};

$MethodInfo _bug6412896_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6412896::*)()>(&bug6412896::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6412896::main))},
	{}
};

$ClassInfo _bug6412896_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6412896",
	"java.lang.Object",
	nullptr,
	_bug6412896_FieldInfo_,
	_bug6412896_MethodInfo_
};

$Object* allocate$bug6412896($Class* clazz) {
	return $of($alloc(bug6412896));
}

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
	} catch ($IllegalArgumentException&) {
		$catch();
	}
}

void clinit$bug6412896($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(bug6412896, name, initialize, &_bug6412896_ClassInfo_, clinit$bug6412896, allocate$bug6412896);
	return class$;
}

$Class* bug6412896::class$ = nullptr;