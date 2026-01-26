#include <Bug8001209.h>

#include <java/lang/Number.h>
#include <java/text/ChoiceFormat.h>
#include <java/text/ParsePosition.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ChoiceFormat = ::java::text::ChoiceFormat;
using $ParsePosition = ::java::text::ParsePosition;

$MethodInfo _Bug8001209_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8001209, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8001209, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug8001209_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8001209",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug8001209_MethodInfo_
};

$Object* allocate$Bug8001209($Class* clazz) {
	return $of($alloc(Bug8001209));
}

void Bug8001209::init$() {
}

void Bug8001209::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool err = false;
	$var($doubles, limits, $new($doubles, {
		(double)1,
		(double)2,
		(double)3,
		(double)4,
		(double)5,
		(double)6,
		(double)7
	}));
	$var($StringArray, dayOfWeekNames, $new($StringArray, {
		"Sun"_s,
		"Mon"_s,
		"Tue"_s,
		"Wed"_s,
		"Thu"_s,
		"Fri"_s,
		"Sat"_s
	}));
	$var($ChoiceFormat, form, $new($ChoiceFormat, limits, dayOfWeekNames));
	$var($ParsePosition, status, $new($ParsePosition, 0));
	$var($StringBuilder, before, $new($StringBuilder));
	for (double i = 1.0; i <= 7.0; ++i) {
		status->setIndex(0);
		$var($String, s, form->format(i));
		before->append(" "_s);
		before->append(s);
		before->append($($of(form->parse($(form->format(i)), status))));
	}
	$var($String, original, before->toString());
	$var($doubles, newLimits, form->getLimits());
	$var($StringArray, newFormats, $fcast($StringArray, form->getFormats()));
	$nc(newFormats)->set(6, "Doyoubi"_s);
	$var($StringBuilder, after, $new($StringBuilder));
	for (double i = 1.0; i <= 7.0; ++i) {
		status->setIndex(0);
		$var($String, s, form->format(i));
		after->append(" "_s);
		after->append(s);
		after->append($($of(form->parse($(form->format(i)), status))));
	}
	if (!$nc(original)->equals($(after->toString()))) {
		err = true;
		$nc($System::err)->println($$str({"  Expected:"_s, before, "\n  Got:     "_s, after}));
	}
	dayOfWeekNames->set(6, "Saturday"_s);
	$assign(after, $new($StringBuilder));
	for (double i = 1.0; i <= 7.0; ++i) {
		status->setIndex(0);
		$var($String, s, form->format(i));
		after->append(" "_s);
		after->append(s);
		after->append($($of(form->parse($(form->format(i)), status))));
	}
	if (!$nc(original)->equals($(after->toString()))) {
		err = true;
		$nc($System::err)->println($$str({"  Expected:"_s, before, "\n  Got:     "_s, after}));
	}
	if (err) {
		$throwNew($RuntimeException, "Failed."_s);
	} else {
		$nc($System::out)->println("Passed."_s);
	}
}

Bug8001209::Bug8001209() {
}

$Class* Bug8001209::load$($String* name, bool initialize) {
	$loadClass(Bug8001209, name, initialize, &_Bug8001209_ClassInfo_, allocate$Bug8001209);
	return class$;
}

$Class* Bug8001209::class$ = nullptr;