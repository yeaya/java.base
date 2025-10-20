#include <Bug6251817.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$MethodInfo _Bug6251817_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6251817::*)()>(&Bug6251817::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6251817::main))},
	{}
};

$ClassInfo _Bug6251817_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6251817",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug6251817_MethodInfo_
};

$Object* allocate$Bug6251817($Class* clazz) {
	return $of($alloc(Bug6251817));
}

void Bug6251817::init$() {
}

void Bug6251817::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, "zzzz"_s, $Locale::US));
	sdf->setTimeZone($($TimeZone::getTimeZone("Australia/Lord_Howe"_s)));
	$var($String, got, sdf->format($$new($Date)));
	bool var$0 = !$nc(got)->equals("Lord Howe Standard Time"_s);
	if (var$0 && !got->equals("Lord Howe Daylight Time"_s)) {
		$throwNew($RuntimeException, $$str({"Timezone display name for Australia/Lord_Howe is incorrect. Got:"_s, got}));
	}
}

Bug6251817::Bug6251817() {
}

$Class* Bug6251817::load$($String* name, bool initialize) {
	$loadClass(Bug6251817, name, initialize, &_Bug6251817_ClassInfo_, allocate$Bug6251817);
	return class$;
}

$Class* Bug6251817::class$ = nullptr;