#include <Bug4396385.h>

#include <java/text/ParsePosition.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParsePosition = ::java::text::ParsePosition;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _Bug4396385_FieldInfo_[] = {
	{"errorCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4396385, errorCount)},
	{"data", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4396385, data)},
	{}
};

$MethodInfo _Bug4396385_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4396385, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4396385, main, void, $StringArray*)},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4396385, test, void, $String*, $String*)},
	{}
};

$ClassInfo _Bug4396385_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4396385",
	"java.lang.Object",
	nullptr,
	_Bug4396385_FieldInfo_,
	_Bug4396385_MethodInfo_
};

$Object* allocate$Bug4396385($Class* clazz) {
	return $of($alloc(Bug4396385));
}

int32_t Bug4396385::errorCount = 0;
$StringArray2* Bug4396385::data = nullptr;

void Bug4396385::init$() {
}

void Bug4396385::main($StringArray* args) {
	$init(Bug4396385);
	$useLocalCurrentObjectStackCache();
	$var($TimeZone, tz, $TimeZone::getDefault());
	$TimeZone::setDefault($($TimeZone::getTimeZone("GMT"_s)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($StringArray2, arr$, Bug4396385::data);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StringArray, item, arr$->get(i$));
					{
						test($nc(item)->get(0), item->get(1));
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$TimeZone::setDefault(tz);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (Bug4396385::errorCount > 0) {
		$throwNew($RuntimeException, $$str({"Failed with "_s, $$str(Bug4396385::errorCount), " error(s)."_s}));
	}
}

void Bug4396385::test($String* pattern, $String* src) {
	$init(Bug4396385);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern, $Locale::US));
	sdf->setLenient(false);
	$var($ParsePosition, pos, $new($ParsePosition, 0));
	$nc($System::out)->printf("parse: \"%s\" with \"%s\""_s, $$new($ObjectArray, {
		$of(src),
		$of(pattern)
	}));
	$var($Date, date, sdf->parse(src, pos));
	$nc($System::out)->printf(": date = %s, errorIndex = %d"_s, $$new($ObjectArray, {
		$of(date),
		$($of($Integer::valueOf(pos->getErrorIndex())))
	}));
	if (date != nullptr || pos->getErrorIndex() == -1) {
		$nc($System::out)->println(": failed"_s);
		++Bug4396385::errorCount;
	} else {
		$nc($System::out)->println(": passed"_s);
	}
}

void clinit$Bug4396385($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Bug4396385::errorCount = 0;
	$assignStatic(Bug4396385::data, $new($StringArray2, {
		$$new($StringArray, {
			"hh:mma"_s,
			"-1:30AM"_s
		}),
		$$new($StringArray, {
			"hh:mma"_s,
			"00:30AM"_s
		}),
		$$new($StringArray, {
			"hh:mma"_s,
			"13:30AM"_s
		}),
		$$new($StringArray, {
			"kk:mm"_s,
			"-1:12"_s
		}),
		$$new($StringArray, {
			"kk:mm"_s,
			"00:12"_s
		}),
		$$new($StringArray, {
			"kk:mm"_s,
			"25:12"_s
		})
	}));
}

Bug4396385::Bug4396385() {
}

$Class* Bug4396385::load$($String* name, bool initialize) {
	$loadClass(Bug4396385, name, initialize, &_Bug4396385_ClassInfo_, clinit$Bug4396385, allocate$Bug4396385);
	return class$;
}

$Class* Bug4396385::class$ = nullptr;