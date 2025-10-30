#include <Bug6481179.h>

#include <java/text/MessageFormat.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;

$MethodInfo _Bug6481179_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug6481179::*)()>(&Bug6481179::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug6481179::main))},
	{}
};

$ClassInfo _Bug6481179_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug6481179",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug6481179_MethodInfo_
};

$Object* allocate$Bug6481179($Class* clazz) {
	return $of($alloc(Bug6481179));
}

void Bug6481179::init$() {
}

void Bug6481179::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool err = false;
	try {
		$MessageFormat::format("Testdata {1,invalid_format_type}"_s, $$new($ObjectArray, {
			$of("val0"_s),
			$of("val1"_s)
		}));
		$nc($System::err)->println("Error: IllegalArgumentException should be thrown."_s);
		err = true;
	} catch ($IllegalArgumentException& e) {
		$var($String, expected, "unknown format type: invalid_format_type"_s);
		$var($String, got, e->getMessage());
		if (!expected->equals(got)) {
			$nc($System::err)->println($$str({"Error: Unexpected error message: "_s, got}));
			err = true;
		}
	} catch ($Exception& e) {
		$nc($System::err)->println($$str({"Error: Unexpected exception was thrown: "_s, e}));
		err = true;
	}
	if (err) {
		$throwNew($RuntimeException, "Failed."_s);
	}
}

Bug6481179::Bug6481179() {
}

$Class* Bug6481179::load$($String* name, bool initialize) {
	$loadClass(Bug6481179, name, initialize, &_Bug6481179_ClassInfo_, allocate$Bug6481179);
	return class$;
}

$Class* Bug6481179::class$ = nullptr;