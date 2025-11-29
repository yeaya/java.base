#include <Bug6335238.h>

#include <Bug6335238$DateFormatThread.h>
#include <Bug6335238$DateParseThread.h>
#include <java/lang/Math.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef TIME_STRING
#undef US
#undef UTC_LONG

using $Bug6335238$DateFormatThread = ::Bug6335238$DateFormatThread;
using $Bug6335238$DateParseThread = ::Bug6335238$DateParseThread;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _Bug6335238_FieldInfo_[] = {
	{"UTC_LONG", "J", nullptr, $STATIC | $FINAL, $constField(Bug6335238, UTC_LONG)},
	{"TIME_STRING", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Bug6335238, TIME_STRING)},
	{"masterSdf", "Ljava/text/SimpleDateFormat;", nullptr, $STATIC, $staticField(Bug6335238, masterSdf)},
	{"duration", "I", nullptr, $STATIC, $staticField(Bug6335238, duration)},
	{"stopped", "Z", nullptr, $STATIC, $staticField(Bug6335238, stopped)},
	{"err", "Z", nullptr, $STATIC, $staticField(Bug6335238, err)},
	{}
};

$MethodInfo _Bug6335238_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6335238::*)()>(&Bug6335238::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6335238::main))},
	{}
};

$InnerClassInfo _Bug6335238_InnerClassesInfo_[] = {
	{"Bug6335238$DateParseThread", "Bug6335238", "DateParseThread", 0},
	{"Bug6335238$DateFormatThread", "Bug6335238", "DateFormatThread", 0},
	{}
};

$ClassInfo _Bug6335238_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6335238",
	"java.lang.Object",
	nullptr,
	_Bug6335238_FieldInfo_,
	_Bug6335238_MethodInfo_,
	nullptr,
	nullptr,
	_Bug6335238_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Bug6335238$DateParseThread,Bug6335238$DateFormatThread"
};

$Object* allocate$Bug6335238($Class* clazz) {
	return $of($alloc(Bug6335238));
}

$String* Bug6335238::TIME_STRING = nullptr;
$SimpleDateFormat* Bug6335238::masterSdf = nullptr;
int32_t Bug6335238::duration = 0;
bool Bug6335238::stopped = false;
bool Bug6335238::err = false;

void Bug6335238::main($StringArray* args) {
	$init(Bug6335238);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length == 1) {
		Bug6335238::duration = $Math::max(10, $Integer::parseInt(args->get(0)));
	}
	$var($Locale, savedLocale, $Locale::getDefault());
	$var($TimeZone, savedTimeZone, $TimeZone::getDefault());
	$TimeZone::setDefault($($TimeZone::getTimeZone("US/Pacific"_s)));
	$Locale::setDefault($Locale::US);
	$assignStatic(Bug6335238::masterSdf, $new($SimpleDateFormat, "yyyy/MM/dd HH:mm:ss"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($Date, d, $nc(Bug6335238::masterSdf)->parse(Bug6335238::TIME_STRING));
				$new(Bug6335238);
			} catch ($Exception& e) {
				$nc($System::err)->println($of(e));
				Bug6335238::err = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$TimeZone::setDefault(savedTimeZone);
			$Locale::setDefault(savedLocale);
			if (Bug6335238::err) {
				$throwNew($RuntimeException, "Failed: Multiple DateFormat instances didn\'t work correctly."_s);
			} else {
				$nc($System::out)->println("Passed."_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Bug6335238::init$() {
	$useLocalCurrentObjectStackCache();
	Bug6335238::stopped = false;
	$var($Bug6335238$DateParseThread, d1, $new($Bug6335238$DateParseThread, this));
	$var($Bug6335238$DateFormatThread, d2, $new($Bug6335238$DateFormatThread, this));
	$var($Bug6335238$DateParseThread, d3, $new($Bug6335238$DateParseThread, this));
	$var($Bug6335238$DateFormatThread, d4, $new($Bug6335238$DateFormatThread, this));
	d1->start();
	d2->start();
	d3->start();
	d4->start();
	try {
		$Thread::sleep(Bug6335238::duration * 1000);
	} catch ($Exception& e) {
		$nc($System::err)->println($of(e));
		Bug6335238::err = true;
	}
	Bug6335238::stopped = true;
}

void clinit$Bug6335238($Class* class$) {
	$assignStatic(Bug6335238::TIME_STRING, "2000/11/18 00:01:00"_s);
	Bug6335238::duration = 5;
	Bug6335238::stopped = false;
	Bug6335238::err = false;
}

Bug6335238::Bug6335238() {
}

$Class* Bug6335238::load$($String* name, bool initialize) {
	$loadClass(Bug6335238, name, initialize, &_Bug6335238_ClassInfo_, clinit$Bug6335238, allocate$Bug6335238);
	return class$;
}

$Class* Bug6335238::class$ = nullptr;