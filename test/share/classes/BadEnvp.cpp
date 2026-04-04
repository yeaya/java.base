#include <BadEnvp.h>
#include <java/io/File.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;

void BadEnvp::init$() {
}

void BadEnvp::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Runtime, r, $Runtime::getRuntime());
	$var($File, dir, $new($File, "."_s));
	$var($StringArray, envpWithNull, $new($StringArray, {
		"FOO=BAR"_s,
		nullptr
	}));
	try {
		$nc(r)->exec("echo"_s, envpWithNull);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$nc(r)->exec("echo"_s, envpWithNull, dir);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$nc(r)->exec($$new($StringArray, {"echo"_s}), envpWithNull);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
	try {
		$nc(r)->exec($$new($StringArray, {"echo"_s}), envpWithNull, dir);
		$throwNew($Exception, "Expected NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
}

BadEnvp::BadEnvp() {
}

$Class* BadEnvp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BadEnvp, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BadEnvp, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BadEnvp",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BadEnvp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadEnvp);
	});
	return class$;
}

$Class* BadEnvp::class$ = nullptr;