#include <java/nio/channels/IllegalBlockingModeException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _IllegalBlockingModeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalBlockingModeException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalBlockingModeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalBlockingModeException, init$, void)},
	{}
};

$ClassInfo _IllegalBlockingModeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.IllegalBlockingModeException",
	"java.lang.IllegalStateException",
	nullptr,
	_IllegalBlockingModeException_FieldInfo_,
	_IllegalBlockingModeException_MethodInfo_
};

$Object* allocate$IllegalBlockingModeException($Class* clazz) {
	return $of($alloc(IllegalBlockingModeException));
}

void IllegalBlockingModeException::init$() {
	$IllegalStateException::init$();
}

IllegalBlockingModeException::IllegalBlockingModeException() {
}

IllegalBlockingModeException::IllegalBlockingModeException(const IllegalBlockingModeException& e) : $IllegalStateException(e) {
}

void IllegalBlockingModeException::throw$() {
	throw *this;
}

$Class* IllegalBlockingModeException::load$($String* name, bool initialize) {
	$loadClass(IllegalBlockingModeException, name, initialize, &_IllegalBlockingModeException_ClassInfo_, allocate$IllegalBlockingModeException);
	return class$;
}

$Class* IllegalBlockingModeException::class$ = nullptr;

		} // channels
	} // nio
} // java