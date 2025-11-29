#include <Bug4944439.h>

#include <java/lang/Number.h>
#include <java/text/DecimalFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef US

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug4944439_FieldInfo_[] = {
	{"err", "Z", nullptr, $STATIC, $staticField(Bug4944439, err)},
	{"df", "Ljava/text/DecimalFormat;", nullptr, $STATIC, $staticField(Bug4944439, df)},
	{}
};

$MethodInfo _Bug4944439_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4944439::*)()>(&Bug4944439::init$))},
	{"check_Double", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Bug4944439::check_Double)), "java.lang.Exception"},
	{"check_Long", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Bug4944439::check_Long)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4944439::main)), "java.lang.Exception"},
	{"test", "(JJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Bug4944439::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug4944439_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4944439",
	"java.lang.Object",
	nullptr,
	_Bug4944439_FieldInfo_,
	_Bug4944439_MethodInfo_
};

$Object* allocate$Bug4944439($Class* clazz) {
	return $of($alloc(Bug4944439));
}

bool Bug4944439::err = false;
$DecimalFormat* Bug4944439::df = nullptr;

void Bug4944439::init$() {
}

void Bug4944439::main($StringArray* args) {
	$init(Bug4944439);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	for (int64_t l = from; l <= to; ++l) {
		check_Long($$str({$($Long::toString(l)), ".00"_s}));
	}
}

void Bug4944439::check_Long($String* s) {
	$init(Bug4944439);
	$useLocalCurrentObjectStackCache();
	$var($Number, number, $nc(Bug4944439::df)->parse(s));
	if (!($instanceOf($Long, number))) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse(\""_s, s, "\") should return a Long, but returned a "_s, $($nc($of(number))->getClass()->getName())}));
	}
	int32_t index = $nc(s)->indexOf((int32_t)u'.');
	$var($Long, l, $Long::valueOf($(s->substring(0, index))));
	if (!$nc(l)->equals(number)) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse("_s, s, ") should return a Long("_s, l, "), but returned "_s, number}));
	}
}

void Bug4944439::check_Double($String* s) {
	$init(Bug4944439);
	$useLocalCurrentObjectStackCache();
	$var($Number, number, $nc(Bug4944439::df)->parse(s));
	if (!($instanceOf($Double, number))) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse(\""_s, s, "\") should return a Double, but returned a "_s, $($nc($of(number))->getClass()->getName())}));
	}
	$var($Double, d, $Double::valueOf(s));
	if (!$nc(d)->equals(number)) {
		Bug4944439::err = true;
		$nc($System::err)->println($$str({"Failed: DecimalFormat.parse("_s, s, ") should return a Double("_s, d, "), but returned "_s, number}));
	}
}

void clinit$Bug4944439($Class* class$) {
	Bug4944439::err = false;
}

Bug4944439::Bug4944439() {
}

$Class* Bug4944439::load$($String* name, bool initialize) {
	$loadClass(Bug4944439, name, initialize, &_Bug4944439_ClassInfo_, clinit$Bug4944439, allocate$Bug4944439);
	return class$;
}

$Class* Bug4944439::class$ = nullptr;