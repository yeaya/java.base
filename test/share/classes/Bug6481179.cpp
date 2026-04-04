#include <Bug6481179.h>
#include <java/text/MessageFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;

void Bug6481179::init$() {
}

void Bug6481179::main($StringArray* args) {
	$useLocalObjectStack();
	bool err = false;
	try {
		$MessageFormat::format("Testdata {1,invalid_format_type}"_s, $$new($ObjectArray, {
			"val0"_s,
			"val1"_s
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6481179, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6481179, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6481179",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug6481179, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6481179);
	});
	return class$;
}

$Class* Bug6481179::class$ = nullptr;