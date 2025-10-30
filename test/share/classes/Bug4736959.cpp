#include <Bug4736959.h>

#include <java/text/ParsePosition.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParsePosition = ::java::text::ParsePosition;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug4736959_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4736959::*)()>(&Bug4736959::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4736959::main))},
	{}
};

$ClassInfo _Bug4736959_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4736959",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug4736959_MethodInfo_
};

$Object* allocate$Bug4736959($Class* clazz) {
	return $of($alloc(Bug4736959));
}

void Bug4736959::init$() {
}

void Bug4736959::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($SimpleDateFormat, f, $new($SimpleDateFormat, "a"_s, $Locale::US));
	$var($Date, d1, f->parse("AM"_s, $$new($ParsePosition, 0)));
	$nc($System::out)->println($$str({"d1: "_s, d1}));
	if ($nc(d1)->getHours() != 0) {
		$throwNew($RuntimeException, $$str({"Parsing \"AM\": expected 0 (midnight), got "_s, $$str(d1->getHours())}));
	}
	$var($Date, d2, f->parse("PM"_s, $$new($ParsePosition, 0)));
	$nc($System::out)->println($$str({"d2: "_s, d2}));
	if ($nc(d2)->getHours() != 12) {
		$throwNew($RuntimeException, $$str({"Parsing \"PM\": expected 12 (noon), got "_s, $$str(d2->getHours())}));
	}
}

Bug4736959::Bug4736959() {
}

$Class* Bug4736959::load$($String* name, bool initialize) {
	$loadClass(Bug4736959, name, initialize, &_Bug4736959_ClassInfo_, allocate$Bug4736959);
	return class$;
}

$Class* Bug4736959::class$ = nullptr;