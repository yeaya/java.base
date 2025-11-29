#include <exceptionCauseTest.h>

#include <java/lang/TypeNotPresentException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TypeNotPresentException = ::java::lang::TypeNotPresentException;

$MethodInfo _exceptionCauseTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(exceptionCauseTest::*)()>(&exceptionCauseTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&exceptionCauseTest::main))},
	{}
};

$ClassInfo _exceptionCauseTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"exceptionCauseTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_exceptionCauseTest_MethodInfo_
};

$Object* allocate$exceptionCauseTest($Class* clazz) {
	return $of($alloc(exceptionCauseTest));
}

void exceptionCauseTest::init$() {
}

void exceptionCauseTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(exceptionCauseTest, name, initialize, &_exceptionCauseTest_ClassInfo_, allocate$exceptionCauseTest);
	return class$;
}

$Class* exceptionCauseTest::class$ = nullptr;