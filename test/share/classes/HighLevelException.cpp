#include <HighLevelException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

HighLevelException::HighLevelException(const HighLevelException& e) {
}

HighLevelException HighLevelException::wrapper$() {
	$pendingException(this);
	return *this;
}

void HighLevelException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* HighLevelException::load$($String* name, bool initialize) {
	$loadClass(HighLevelException, name, initialize, &_HighLevelException_ClassInfo_, allocate$HighLevelException);
	return class$;
}

$Class* HighLevelException::class$ = nullptr;