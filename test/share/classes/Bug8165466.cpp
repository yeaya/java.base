#include <Bug8165466.h>
#include <java/text/DecimalFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Locale = ::java::util::Locale;

void Bug8165466::init$() {
}

void Bug8165466::main($StringArray* args) {
	$useLocalObjectStack();
	$init($Locale);
	$var($DecimalFormat, nf, $cast($DecimalFormat, $DecimalFormat::getPercentInstance($Locale::US)));
	$nc(nf)->setMaximumFractionDigits(3);
	nf->setMinimumFractionDigits(0);
	nf->setMultiplier(1);
	double d = 0.005678;
	$var($String, result, nf->format(d));
	if (!$nc(result)->equals("0.006%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 0.006%, Found: "_s, result, "]"_s}));
	}
	d = 0.0;
	$assign(result, nf->format(d));
	if (!$nc(result)->equals("0%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 0%, Found: "_s, result, "]"_s}));
	}
	d = 0.005678;
	$assign(result, nf->format(d));
	if (!$nc(result)->equals("0.006%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 0.006%, Found: "_s, result, "]"_s}));
	}
	d = 0.005678;
	$assign(result, nf->format(d));
	if (!$nc(result)->equals("0.006%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 0.006%, Found: "_s, result, "]"_s}));
	}
	d = 9.0;
	$assign(result, nf->format(d));
	if (!$nc(result)->equals("9%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 9%, Found: "_s, result, "]"_s}));
	}
	d = 0.005678;
	$assign(result, nf->format(d));
	if (!$nc(result)->equals("0.006%"_s)) {
		$throwNew($RuntimeException, $$str({"[Failed while formatting the double value: "_s, $$str(d), " Expected: 0.006%, Found: "_s, result, "]"_s}));
	}
}

Bug8165466::Bug8165466() {
}

$Class* Bug8165466::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8165466, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8165466, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug8165466",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8165466, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8165466);
	});
	return class$;
}

$Class* Bug8165466::class$ = nullptr;