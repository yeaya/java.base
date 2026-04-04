#include <ExecEmptyString.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;

void ExecEmptyString::init$() {
}

void ExecEmptyString::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$$nc($Runtime::getRuntime())->exec(""_s);
		$throwNew($Exception, "Expected IllegalArgumentException not thrown"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$$nc($Runtime::getRuntime())->exec($$new($String));
		$throwNew($Exception, "Expected IllegalArgumentException not thrown"_s);
	} catch ($IllegalArgumentException& e) {
	}
}

ExecEmptyString::ExecEmptyString() {
}

$Class* ExecEmptyString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExecEmptyString, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExecEmptyString, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExecEmptyString",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExecEmptyString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecEmptyString);
	});
	return class$;
}

$Class* ExecEmptyString::class$ = nullptr;