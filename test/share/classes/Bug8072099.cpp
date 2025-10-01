#include <Bug8072099.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug8072099_FieldInfo_[] = {
	{"shouldPass", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug8072099, shouldPass)},
	{}
};

$MethodInfo _Bug8072099_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8072099::*)()>(&Bug8072099::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8072099::main))},
	{"parseDateTimeInput", "(Ljava/text/SimpleDateFormat;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SimpleDateFormat*,$String*)>(&Bug8072099::parseDateTimeInput))},
	{}
};

$ClassInfo _Bug8072099_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8072099",
	"java.lang.Object",
	nullptr,
	_Bug8072099_FieldInfo_,
	_Bug8072099_MethodInfo_
};

$Object* allocate$Bug8072099($Class* clazz) {
	return $of($alloc(Bug8072099));
}

$StringArray2* Bug8072099::shouldPass = nullptr;

void Bug8072099::init$() {
}

void Bug8072099::main($StringArray* args) {
	$init(Bug8072099);
	$var($Locale, defaultLocale, $Locale::getDefault());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Locale::setDefault($Locale::US);
			{
				$var($StringArray2, arr$, Bug8072099::shouldPass);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StringArray, pattern, arr$->get(i$));
					{
						$var($SimpleDateFormat, dateTimeFormat, $new($SimpleDateFormat, $nc(pattern)->get(0)));
						parseDateTimeInput(dateTimeFormat, $nc(pattern)->get(1));
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Locale::setDefault(defaultLocale);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Bug8072099::parseDateTimeInput($SimpleDateFormat* format, $String* inputString) {
	$init(Bug8072099);
	try {
		$nc(format)->parse(inputString);
	} catch ($ParseException&) {
		$var($ParseException, ex, $catch());
		$throwNew($RuntimeException, $$str({"[FAILED: Unable to parse date time string "_s, inputString, "]"_s}));
	}
}

void clinit$Bug8072099($Class* class$) {
	$assignStatic(Bug8072099::shouldPass, $new($StringArray2, {
		$$new($StringArray, {
			"ha"_s,
			"11AM"_s
		}),
		$$new($StringArray, {
			"hma"_s,
			"33AM"_s
		}),
		$$new($StringArray, {
			"ka"_s,
			"24AM"_s
		}),
		$$new($StringArray, {
			"yyyMMM"_s,
			"2016May"_s
		}),
		$$new($StringArray, {
			"yyyyDDEEE"_s,
			"2016366Sat"_s
		}),
		$$new($StringArray, {
			"ddmyyyyz"_s,
			"22111980GMT+5:30"_s
		})
	}));
}

Bug8072099::Bug8072099() {
}

$Class* Bug8072099::load$($String* name, bool initialize) {
	$loadClass(Bug8072099, name, initialize, &_Bug8072099_ClassInfo_, clinit$Bug8072099, allocate$Bug8072099);
	return class$;
}

$Class* Bug8072099::class$ = nullptr;