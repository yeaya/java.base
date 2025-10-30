#include <LowLevelException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LowLevelException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LowLevelException::*)()>(&LowLevelException::init$))},
	{}
};

$ClassInfo _LowLevelException_ClassInfo_ = {
	$ACC_SUPER,
	"LowLevelException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_LowLevelException_MethodInfo_
};

$Object* allocate$LowLevelException($Class* clazz) {
	return $of($alloc(LowLevelException));
}

void LowLevelException::init$() {
	$Exception::init$();
}

LowLevelException::LowLevelException() {
}

LowLevelException::LowLevelException(const LowLevelException& e) : $Exception(e) {
}

void LowLevelException::throw$() {
	throw *this;
}

$Class* LowLevelException::load$($String* name, bool initialize) {
	$loadClass(LowLevelException, name, initialize, &_LowLevelException_ClassInfo_, allocate$LowLevelException);
	return class$;
}

$Class* LowLevelException::class$ = nullptr;