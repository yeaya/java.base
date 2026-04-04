#include <Bug4944439.h>
#include <java/lang/Number.h>
#include <java/text/DecimalFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Locale = ::java::util::Locale;

bool Bug4944439::err = false;
$DecimalFormat* Bug4944439::df = nullptr;

void Bug4944439::init$() {
}

void Bug4944439::main($StringArray* args) {
	$init(Bug4944439);
	$useLocalObjectStack();
	$var($Locale, defaultLoc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$assignStatic(Bug4944439::df, $new($DecimalFormat));
	$var($String, s, "-9223372036854775809"_s);
	check_Double(s);
	test($Long::MIN_VALUE, $Long::MIN_VALUE + 10);
	test(-10, 10);
	test($Long::MAX_VALUE - 10, $Long::MAX_VALUE - 1);
	$assign(s, "9223372036854775807.00"_s);
	check_Long(s);
	$assign(s, "9223372036854775808"_s);
	check_Double(s);
	$assign(s, "-0.0"_s);
	check_Double(s);
	$assign(s, "0.0"_s);
	check_Long(s);
	$Locale::setDefault(defaultLoc);
	if (Bug4944439::err) {
		$throwNew($RuntimeException, "Wrong parsing with DecimalFormat"_s);
	}
}

void Bug4944439::test(int64_t from, int64_t to) {
	$init(Bug4944439);
	$useLocalObjectStack();
	for (int64_t l = from; l <= to; ++l) {
		check_Long($$str({$($Long::toString(l)), ".00"_s}));
	}
}

void Bug4944439::check_Long($String* s) {
	$init(Bug4944439);
	$useLocalObjectStack();
	$var($Number, number, $nc(Bug4944439::df)->parse(s));
	if (!($instanceOf($Long, number))) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse(\""_s, s, "\") should return a Long, but returned a "_s, $($nc(number)->getClass()->getName())}));
	}
	int32_t index = $nc(s)->indexOf(u'.');
	$var($Long, l, $Long::valueOf($(s->substring(0, index))));
	if (!l->equals(number)) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse("_s, s, ") should return a Long("_s, l, "), but returned "_s, number}));
	}
}

void Bug4944439::check_Double($String* s) {
	$init(Bug4944439);
	$useLocalObjectStack();
	$var($Number, number, $nc(Bug4944439::df)->parse(s));
	if (!($instanceOf($Double, number))) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse(\""_s, s, "\") should return a Double, but returned a "_s, $($nc(number)->getClass()->getName())}));
	}
	$var($Double, d, $Double::valueOf(s));
	if (!d->equals(number)) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse("_s, s, ") should return a Double("_s, d, "), but returned "_s, number}));
	}
}

void Bug4944439::clinit$($Class* clazz) {
	Bug4944439::err = false;
}

Bug4944439::Bug4944439() {
}

$Class* Bug4944439::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"err", "Z", nullptr, $STATIC, $staticField(Bug4944439, err)},
		{"df", "Ljava/text/DecimalFormat;", nullptr, $STATIC, $staticField(Bug4944439, df)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4944439, init$, void)},
		{"check_Double", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4944439, check_Double, void, $String*), "java.lang.Exception"},
		{"check_Long", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4944439, check_Long, void, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4944439, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(JJ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4944439, test, void, int64_t, int64_t), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4944439",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug4944439, name, initialize, &classInfo$$, Bug4944439::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4944439);
	});
	return class$;
}

$Class* Bug4944439::class$ = nullptr;