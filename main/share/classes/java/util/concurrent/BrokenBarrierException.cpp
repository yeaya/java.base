#include <java/util/concurrent/BrokenBarrierException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _BrokenBarrierException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BrokenBarrierException, serialVersionUID)},
	{}
};

$MethodInfo _BrokenBarrierException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BrokenBarrierException::*)()>(&BrokenBarrierException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BrokenBarrierException::*)($String*)>(&BrokenBarrierException::init$))},
	{}
};

$ClassInfo _BrokenBarrierException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.BrokenBarrierException",
	"java.lang.Exception",
	nullptr,
	_BrokenBarrierException_FieldInfo_,
	_BrokenBarrierException_MethodInfo_
};

$Object* allocate$BrokenBarrierException($Class* clazz) {
	return $of($alloc(BrokenBarrierException));
}

void BrokenBarrierException::init$() {
	$Exception::init$();
}

void BrokenBarrierException::init$($String* message) {
	$Exception::init$(message);
}

BrokenBarrierException::BrokenBarrierException() {
}

BrokenBarrierException::BrokenBarrierException(const BrokenBarrierException& e) {
}

BrokenBarrierException BrokenBarrierException::wrapper$() {
	$pendingException(this);
	return *this;
}

void BrokenBarrierException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* BrokenBarrierException::load$($String* name, bool initialize) {
	$loadClass(BrokenBarrierException, name, initialize, &_BrokenBarrierException_ClassInfo_, allocate$BrokenBarrierException);
	return class$;
}

$Class* BrokenBarrierException::class$ = nullptr;

		} // concurrent
	} // util
} // java