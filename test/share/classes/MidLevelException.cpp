#include <MidLevelException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MidLevelException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(MidLevelException::*)($Throwable*)>(&MidLevelException::init$))},
	{}
};

$ClassInfo _MidLevelException_ClassInfo_ = {
	$ACC_SUPER,
	"MidLevelException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_MidLevelException_MethodInfo_
};

$Object* allocate$MidLevelException($Class* clazz) {
	return $of($alloc(MidLevelException));
}

void MidLevelException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

MidLevelException::MidLevelException() {
}

MidLevelException::MidLevelException(const MidLevelException& e) : $Exception(e) {
}

void MidLevelException::throw$() {
	throw *this;
}

$Class* MidLevelException::load$($String* name, bool initialize) {
	$loadClass(MidLevelException, name, initialize, &_MidLevelException_ClassInfo_, allocate$MidLevelException);
	return class$;
}

$Class* MidLevelException::class$ = nullptr;