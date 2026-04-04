#include <exceptionCauseTest.h>
#include <java/lang/TypeNotPresentException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TypeNotPresentException = ::java::lang::TypeNotPresentException;

void exceptionCauseTest::init$() {
}

void exceptionCauseTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, cause, $new($Throwable, "because"_s));
	$var($Throwable, par, $new($Throwable, cause));
	$var($TypeNotPresentException, cnp, $new($TypeNotPresentException, "test"_s, par));
	try {
		$throw(cnp);
	} catch ($TypeNotPresentException& e) {
		if (par != e->getCause()) {
			$throwNew($RuntimeException, "Unexpected value of cause."_s);
		}
	}
}

exceptionCauseTest::exceptionCauseTest() {
}

$Class* exceptionCauseTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(exceptionCauseTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(exceptionCauseTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"exceptionCauseTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(exceptionCauseTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(exceptionCauseTest);
	});
	return class$;
}

$Class* exceptionCauseTest::class$ = nullptr;