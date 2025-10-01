#include <java/nio/channels/NoConnectionPendingException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _NoConnectionPendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoConnectionPendingException, serialVersionUID)},
	{}
};

$MethodInfo _NoConnectionPendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoConnectionPendingException::*)()>(&NoConnectionPendingException::init$))},
	{}
};

$ClassInfo _NoConnectionPendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.NoConnectionPendingException",
	"java.lang.IllegalStateException",
	nullptr,
	_NoConnectionPendingException_FieldInfo_,
	_NoConnectionPendingException_MethodInfo_
};

$Object* allocate$NoConnectionPendingException($Class* clazz) {
	return $of($alloc(NoConnectionPendingException));
}

void NoConnectionPendingException::init$() {
	$IllegalStateException::init$();
}

NoConnectionPendingException::NoConnectionPendingException() {
}

NoConnectionPendingException::NoConnectionPendingException(const NoConnectionPendingException& e) {
}

NoConnectionPendingException NoConnectionPendingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoConnectionPendingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoConnectionPendingException::load$($String* name, bool initialize) {
	$loadClass(NoConnectionPendingException, name, initialize, &_NoConnectionPendingException_ClassInfo_, allocate$NoConnectionPendingException);
	return class$;
}

$Class* NoConnectionPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java