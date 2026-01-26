#include <bug4099975.h>

#include <java/text/DateFormatSymbols.h>
#include <java/text/SimpleDateFormat.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;

$MethodInfo _bug4099975_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(bug4099975, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4099975, main, void, $StringArray*)},
	{}
};

$ClassInfo _bug4099975_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4099975",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4099975_MethodInfo_
};

$Object* allocate$bug4099975($Class* clazz) {
	return $of($alloc(bug4099975));
}

void bug4099975::init$() {
}

void bug4099975::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DateFormatSymbols, symbols, $new($DateFormatSymbols));
	$var($SimpleDateFormat, df, $new($SimpleDateFormat, "E hh:mm"_s, symbols));
	$nc($System::out)->println($(df->toLocalizedPattern()));
	symbols->setLocalPatternChars("abcdefghijklmonpqr"_s);
	$nc($System::out)->println($(df->toLocalizedPattern()));
}

bug4099975::bug4099975() {
}

$Class* bug4099975::load$($String* name, bool initialize) {
	$loadClass(bug4099975, name, initialize, &_bug4099975_ClassInfo_, allocate$bug4099975);
	return class$;
}

$Class* bug4099975::class$ = nullptr;