#include <java/nio/channels/AsynchronousCloseException.h>

#include <java/nio/channels/ClosedChannelException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AsynchronousCloseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AsynchronousCloseException, serialVersionUID)},
	{}
};

$MethodInfo _AsynchronousCloseException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AsynchronousCloseException, init$, void)},
	{}
};

$ClassInfo _AsynchronousCloseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.AsynchronousCloseException",
	"java.nio.channels.ClosedChannelException",
	nullptr,
	_AsynchronousCloseException_FieldInfo_,
	_AsynchronousCloseException_MethodInfo_
};

$Object* allocate$AsynchronousCloseException($Class* clazz) {
	return $of($alloc(AsynchronousCloseException));
}

void AsynchronousCloseException::init$() {
	$ClosedChannelException::init$();
}

AsynchronousCloseException::AsynchronousCloseException() {
}

AsynchronousCloseException::AsynchronousCloseException(const AsynchronousCloseException& e) : $ClosedChannelException(e) {
}

void AsynchronousCloseException::throw$() {
	throw *this;
}

$Class* AsynchronousCloseException::load$($String* name, bool initialize) {
	$loadClass(AsynchronousCloseException, name, initialize, &_AsynchronousCloseException_ClassInfo_, allocate$AsynchronousCloseException);
	return class$;
}

$Class* AsynchronousCloseException::class$ = nullptr;

		} // channels
	} // nio
} // java