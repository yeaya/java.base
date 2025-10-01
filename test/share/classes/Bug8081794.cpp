#include <Bug8081794.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParsePosition.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParsePosition = ::java::text::ParsePosition;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

$MethodInfo _Bug8081794_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8081794::*)()>(&Bug8081794::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8081794::main))},
	{}
};

$ClassInfo _Bug8081794_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8081794",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug8081794_MethodInfo_
};

$Object* allocate$Bug8081794($Class* clazz) {
	return $of($alloc(Bug8081794));
}

void Bug8081794::init$() {
}

void Bug8081794::main($StringArray* args) {
	$var($String, date, "13 Jan 2005 21:45:34 ABC"_s);
	$var($String, format, "dd MMM yyyy HH:mm:ss z"_s);
	$var($ParsePosition, pp, $new($ParsePosition, 0));
	pp->setIndex(0);
	$init($Locale);
	$var($SimpleDateFormat, sd, $new($SimpleDateFormat, format, $Locale::ENGLISH));
	$var($Date, d, sd->parse(date, pp));
	int32_t errorIndex = pp->getErrorIndex();
	if (errorIndex == 21) {
		$init($System);
		$nc($System::out)->println(": passed"_s);
	} else {
		$init($System);
		$nc($System::out)->println(": failed"_s);
		$throwNew($RuntimeException, $$str({"Failed with wrong index: "_s, $$str(errorIndex)}));
	}
}

Bug8081794::Bug8081794() {
}

$Class* Bug8081794::load$($String* name, bool initialize) {
	$loadClass(Bug8081794, name, initialize, &_Bug8081794_ClassInfo_, allocate$Bug8081794);
	return class$;
}

$Class* Bug8081794::class$ = nullptr;