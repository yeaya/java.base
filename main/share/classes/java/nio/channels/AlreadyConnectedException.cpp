#include <java/nio/channels/AlreadyConnectedException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AlreadyConnectedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlreadyConnectedException, serialVersionUID)},
	{}
};

$MethodInfo _AlreadyConnectedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlreadyConnectedException::*)()>(&AlreadyConnectedException::init$))},
	{}
};

$ClassInfo _AlreadyConnectedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.AlreadyConnectedException",
	"java.lang.IllegalStateException",
	nullptr,
	_AlreadyConnectedException_FieldInfo_,
	_AlreadyConnectedException_MethodInfo_
};

$Object* allocate$AlreadyConnectedException($Class* clazz) {
	return $of($alloc(AlreadyConnectedException));
}

void AlreadyConnectedException::init$() {
	$IllegalStateException::init$();
}

AlreadyConnectedException::AlreadyConnectedException() {
}

AlreadyConnectedException::AlreadyConnectedException(const AlreadyConnectedException& e) : $IllegalStateException(e) {
}

void AlreadyConnectedException::throw$() {
	throw *this;
}

$Class* AlreadyConnectedException::load$($String* name, bool initialize) {
	$loadClass(AlreadyConnectedException, name, initialize, &_AlreadyConnectedException_ClassInfo_, allocate$AlreadyConnectedException);
	return class$;
}

$Class* AlreadyConnectedException::class$ = nullptr;

		} // channels
	} // nio
} // java