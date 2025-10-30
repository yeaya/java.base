#include <java/util/concurrent/RejectedExecutionException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _RejectedExecutionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RejectedExecutionException, serialVersionUID)},
	{}
};

$MethodInfo _RejectedExecutionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RejectedExecutionException::*)()>(&RejectedExecutionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RejectedExecutionException::*)($String*)>(&RejectedExecutionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(RejectedExecutionException::*)($String*,$Throwable*)>(&RejectedExecutionException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(RejectedExecutionException::*)($Throwable*)>(&RejectedExecutionException::init$))},
	{}
};

$ClassInfo _RejectedExecutionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.RejectedExecutionException",
	"java.lang.RuntimeException",
	nullptr,
	_RejectedExecutionException_FieldInfo_,
	_RejectedExecutionException_MethodInfo_
};

$Object* allocate$RejectedExecutionException($Class* clazz) {
	return $of($alloc(RejectedExecutionException));
}

void RejectedExecutionException::init$() {
	$RuntimeException::init$();
}

void RejectedExecutionException::init$($String* message) {
	$RuntimeException::init$(message);
}

void RejectedExecutionException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void RejectedExecutionException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

RejectedExecutionException::RejectedExecutionException() {
}

RejectedExecutionException::RejectedExecutionException(const RejectedExecutionException& e) : $RuntimeException(e) {
}

void RejectedExecutionException::throw$() {
	throw *this;
}

$Class* RejectedExecutionException::load$($String* name, bool initialize) {
	$loadClass(RejectedExecutionException, name, initialize, &_RejectedExecutionException_ClassInfo_, allocate$RejectedExecutionException);
	return class$;
}

$Class* RejectedExecutionException::class$ = nullptr;

		} // concurrent
	} // util
} // java