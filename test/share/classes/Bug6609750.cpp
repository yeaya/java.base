#include <Bug6609750.h>

#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JUNE
#undef US

using $DateArray = $Array<::java::util::Date>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug6609750_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6609750::*)()>(&Bug6609750::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6609750::main))},
	{}
};

$ClassInfo _Bug6609750_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6609750",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug6609750_MethodInfo_
};

$Object* allocate$Bug6609750($Class* clazz) {
	return $of($alloc(Bug6609750));
}

void Bug6609750::init$() {
}

void Bug6609750::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool error = false;
	$var($Locale, defaultLocale, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$var($DateArray, dates, $new($DateArray, {
		$$new($Date, 9 - 1900, $Calendar::JUNE, 12),
		$$new($Date, 99 - 1900, $Calendar::JUNE, 12),
		$$new($Date, 999 - 1900, $Calendar::JUNE, 12),
		$$new($Date, 2009 - 1900, $Calendar::JUNE, 12),
		$$new($Date, 30009 - 1900, $Calendar::JUNE, 12)
	}));
	$var($StringArray, patterns, $new($StringArray, {
		"y"_s,
		"yy"_s,
		"yyy"_s,
		"yyyy"_s,
		"yyyyy"_s,
		"yyyyyy"_s
	}));
	$var($StringArray2, expectedResults, $new($StringArray2, {
		$$new($StringArray, {
			"9"_s,
			"09"_s,
			"009"_s,
			"0009"_s,
			"00009"_s,
			"000009"_s
		}),
		$$new($StringArray, {
			"99"_s,
			"99"_s,
			"099"_s,
			"0099"_s,
			"00099"_s,
			"000099"_s
		}),
		$$new($StringArray, {
			"999"_s,
			"99"_s,
			"999"_s,
			"0999"_s,
			"00999"_s,
			"000999"_s
		}),
		$$new($StringArray, {
			"2009"_s,
			"09"_s,
			"2009"_s,
			"2009"_s,
			"02009"_s,
			"002009"_s
		}),
		$$new($StringArray, {
			"30009"_s,
			"09"_s,
			"30009"_s,
			"30009"_s,
			"30009"_s,
			"030009"_s
		})
	}));
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat));
	for (int32_t dateNo = 0; dateNo < dates->length; ++dateNo) {
		$var($Date, date, dates->get(dateNo));
		for (int32_t patternNo = 0; patternNo < patterns->length; ++patternNo) {
			sdf->applyPattern(patterns->get(patternNo));
			$var($String, got, sdf->format(date));
			if (!$nc($nc(expectedResults->get(dateNo))->get(patternNo))->equals(got)) {
				error = true;
				$nc($System::err)->println($$str({"Failed: Unexpected format result: Expected: \""_s, $nc(expectedResults->get(dateNo))->get(patternNo), "\", Got: \""_s, got, "\" for date "_s, date, " with pattern \""_s, patterns->get(patternNo), "\""_s}));
			}
		}
	}
	$Locale::setDefault(defaultLocale);
	if (error) {
		$throwNew($RuntimeException, "SimpleDateFormat.format() error."_s);
	}
}

Bug6609750::Bug6609750() {
}

$Class* Bug6609750::load$($String* name, bool initialize) {
	$loadClass(Bug6609750, name, initialize, &_Bug6609750_ClassInfo_, allocate$Bug6609750);
	return class$;
}

$Class* Bug6609750::class$ = nullptr;