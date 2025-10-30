#include <java/nio/channels/ConnectionPendingException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ConnectionPendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectionPendingException, serialVersionUID)},
	{}
};

$MethodInfo _ConnectionPendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConnectionPendingException::*)()>(&ConnectionPendingException::init$))},
	{}
};

$ClassInfo _ConnectionPendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ConnectionPendingException",
	"java.lang.IllegalStateException",
	nullptr,
	_ConnectionPendingException_FieldInfo_,
	_ConnectionPendingException_MethodInfo_
};

$Object* allocate$ConnectionPendingException($Class* clazz) {
	return $of($alloc(ConnectionPendingException));
}

void ConnectionPendingException::init$() {
	$IllegalStateException::init$();
}

ConnectionPendingException::ConnectionPendingException() {
}

ConnectionPendingException::ConnectionPendingException(const ConnectionPendingException& e) : $IllegalStateException(e) {
}

void ConnectionPendingException::throw$() {
	throw *this;
}

$Class* ConnectionPendingException::load$($String* name, bool initialize) {
	$loadClass(ConnectionPendingException, name, initialize, &_ConnectionPendingException_ClassInfo_, allocate$ConnectionPendingException);
	return class$;
}

$Class* ConnectionPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java