#include <bug6317072.h>

#include <java/text/DateFormat.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef FULL

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Locale = ::java::util::Locale;

$MethodInfo _bug6317072_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6317072::*)()>(&bug6317072::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6317072::main))},
	{}
};

$ClassInfo _bug6317072_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6317072",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6317072_MethodInfo_
};

$Object* allocate$bug6317072($Class* clazz) {
	return $of($alloc(bug6317072));
}

void bug6317072::init$() {
}

void bug6317072::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$new($SimpleDateFormat, "yy"_s, ($Locale*)nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, ($String*)nullptr, $($Locale::getDefault()));
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, "yy"_s, ($DateFormatSymbols*)nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$new($SimpleDateFormat, ($String*)nullptr, $($DateFormatSymbols::getInstance()));
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getTimeInstance($DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getDateInstance($DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$DateFormat::getDateTimeInstance($DateFormat::FULL, $DateFormat::FULL, nullptr);
		$throwNew($RuntimeException, "should thrown a NullPointerException"_s);
	} catch ($NullPointerException& e) {
	}
}

bug6317072::bug6317072() {
}

$Class* bug6317072::load$($String* name, bool initialize) {
	$loadClass(bug6317072, name, initialize, &_bug6317072_ClassInfo_, allocate$bug6317072);
	return class$;
}

$Class* bug6317072::class$ = nullptr;