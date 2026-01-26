#include <java/nio/channels/CancelledKeyException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _CancelledKeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CancelledKeyException, serialVersionUID)},
	{}
};

$MethodInfo _CancelledKeyException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CancelledKeyException, init$, void)},
	{}
};

$ClassInfo _CancelledKeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.CancelledKeyException",
	"java.lang.IllegalStateException",
	nullptr,
	_CancelledKeyException_FieldInfo_,
	_CancelledKeyException_MethodInfo_
};

$Object* allocate$CancelledKeyException($Class* clazz) {
	return $of($alloc(CancelledKeyException));
}

void CancelledKeyException::init$() {
	$IllegalStateException::init$();
}

CancelledKeyException::CancelledKeyException() {
}

CancelledKeyException::CancelledKeyException(const CancelledKeyException& e) : $IllegalStateException(e) {
}

void CancelledKeyException::throw$() {
	throw *this;
}

$Class* CancelledKeyException::load$($String* name, bool initialize) {
	$loadClass(CancelledKeyException, name, initialize, &_CancelledKeyException_ClassInfo_, allocate$CancelledKeyException);
	return class$;
}

$Class* CancelledKeyException::class$ = nullptr;

		} // channels
	} // nio
} // java