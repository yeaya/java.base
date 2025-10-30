#include <java/nio/channels/AlreadyBoundException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AlreadyBoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlreadyBoundException, serialVersionUID)},
	{}
};

$MethodInfo _AlreadyBoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlreadyBoundException::*)()>(&AlreadyBoundException::init$))},
	{}
};

$ClassInfo _AlreadyBoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.AlreadyBoundException",
	"java.lang.IllegalStateException",
	nullptr,
	_AlreadyBoundException_FieldInfo_,
	_AlreadyBoundException_MethodInfo_
};

$Object* allocate$AlreadyBoundException($Class* clazz) {
	return $of($alloc(AlreadyBoundException));
}

void AlreadyBoundException::init$() {
	$IllegalStateException::init$();
}

AlreadyBoundException::AlreadyBoundException() {
}

AlreadyBoundException::AlreadyBoundException(const AlreadyBoundException& e) : $IllegalStateException(e) {
}

void AlreadyBoundException::throw$() {
	throw *this;
}

$Class* AlreadyBoundException::load$($String* name, bool initialize) {
	$loadClass(AlreadyBoundException, name, initialize, &_AlreadyBoundException_ClassInfo_, allocate$AlreadyBoundException);
	return class$;
}

$Class* AlreadyBoundException::class$ = nullptr;

		} // channels
	} // nio
} // java