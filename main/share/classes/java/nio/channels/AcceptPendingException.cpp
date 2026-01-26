#include <java/nio/channels/AcceptPendingException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AcceptPendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AcceptPendingException, serialVersionUID)},
	{}
};

$MethodInfo _AcceptPendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AcceptPendingException, init$, void)},
	{}
};

$ClassInfo _AcceptPendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.AcceptPendingException",
	"java.lang.IllegalStateException",
	nullptr,
	_AcceptPendingException_FieldInfo_,
	_AcceptPendingException_MethodInfo_
};

$Object* allocate$AcceptPendingException($Class* clazz) {
	return $of($alloc(AcceptPendingException));
}

void AcceptPendingException::init$() {
	$IllegalStateException::init$();
}

AcceptPendingException::AcceptPendingException() {
}

AcceptPendingException::AcceptPendingException(const AcceptPendingException& e) : $IllegalStateException(e) {
}

void AcceptPendingException::throw$() {
	throw *this;
}

$Class* AcceptPendingException::load$($String* name, bool initialize) {
	$loadClass(AcceptPendingException, name, initialize, &_AcceptPendingException_ClassInfo_, allocate$AcceptPendingException);
	return class$;
}

$Class* AcceptPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java