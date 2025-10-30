#include <ErrorInInvoke.h>

#include <java/lang/AbstractMethodError.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _ErrorInInvoke_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorInInvoke::*)()>(&ErrorInInvoke::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ErrorInInvoke::main))},
	{"run", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ErrorInInvoke::run))},
	{}
};

$ClassInfo _ErrorInInvoke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ErrorInInvoke",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ErrorInInvoke_MethodInfo_
};

$Object* allocate$ErrorInInvoke($Class* clazz) {
	return $of($alloc(ErrorInInvoke));
}

void ErrorInInvoke::init$() {
}

void ErrorInInvoke::run() {
	$throwNew($AbstractMethodError, "Not really, just testing"_s);
}

void ErrorInInvoke::main($StringArray* args) {
	$load(ErrorInInvoke);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, m, nullptr);
	try {
		$assign(m, ErrorInInvoke::class$->getMethod("run"_s, $$new($ClassArray, 0)));
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, "Test failed (getMethod() failed"_s);
	}
	try {
		$nc(m)->invoke(nullptr, nullptr);
	} catch ($AbstractMethodError& e) {
		$throwNew($RuntimeException, "Test failed (AbstractMethodError passed through)"_s);
	} catch ($InvocationTargetException& e) {
		$var($Throwable, t, e->getTargetException());
		if (!($instanceOf($AbstractMethodError, t))) {
			$throwNew($RuntimeException, "Test failed (InvocationTargetException didn\'t wrap AbstractMethodError)"_s);
		}
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, "Test failed (Unexpected exception)"_s);
	}
}

ErrorInInvoke::ErrorInInvoke() {
}

$Class* ErrorInInvoke::load$($String* name, bool initialize) {
	$loadClass(ErrorInInvoke, name, initialize, &_ErrorInInvoke_ClassInfo_, allocate$ErrorInInvoke);
	return class$;
}

$Class* ErrorInInvoke::class$ = nullptr;