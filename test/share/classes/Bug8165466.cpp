#include <Bug8165466.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug8165466_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8165466::*)()>(&Bug8165466::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8165466::main))},
	{}
};

$ClassInfo _Bug8165466_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8165466",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug8165466_MethodInfo_
};

$Object* allocate$Bug8165466($Class* clazz) {
	return $of($alloc(Bug8165466));
}

void Bug8165466::init$() {
}

void Bug8165466::main($StringArray* args) {
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
	$loadClass(Bug8165466, name, initialize, &_Bug8165466_ClassInfo_, allocate$Bug8165466);
	return class$;
}

$Class* Bug8165466::class$ = nullptr;