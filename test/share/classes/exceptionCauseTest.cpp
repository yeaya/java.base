#include <exceptionCauseTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/TypeNotPresentException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
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
	$var($Throwable, cause, $new($Throwable, "because"_s));
	$var($Throwable, par, $new($Throwable, cause));
	$var($TypeNotPresentException, cnp, $new($TypeNotPresentException, "test"_s, par));
	try {
		$throw(cnp);
	} catch ($TypeNotPresentException&) {
		$var($TypeNotPresentException, e, $catch());
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