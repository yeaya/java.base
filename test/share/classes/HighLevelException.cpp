#include <HighLevelException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HighLevelException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(HighLevelException::*)($Throwable*)>(&HighLevelException::init$))},
	{}
};

$ClassInfo _HighLevelException_ClassInfo_ = {
	$ACC_SUPER,
	"HighLevelException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_HighLevelException_MethodInfo_
};

$Object* allocate$HighLevelException($Class* clazz) {
	return $of($alloc(HighLevelException));
}

void HighLevelException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

HighLevelException::HighLevelException() {
}

HighLevelException::HighLevelException(const HighLevelException& e) : $Exception(e) {
}

void HighLevelException::throw$() {
	throw *this;
}

$Class* HighLevelException::load$($String* name, bool initialize) {
	$loadClass(HighLevelException, name, initialize, &_HighLevelException_ClassInfo_, allocate$HighLevelException);
	return class$;
}

$Class* HighLevelException::class$ = nullptr;