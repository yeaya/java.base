#include <java/nio/channels/NotYetBoundException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _NotYetBoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotYetBoundException, serialVersionUID)},
	{}
};

$MethodInfo _NotYetBoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NotYetBoundException, init$, void)},
	{}
};

$ClassInfo _NotYetBoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.NotYetBoundException",
	"java.lang.IllegalStateException",
	nullptr,
	_NotYetBoundException_FieldInfo_,
	_NotYetBoundException_MethodInfo_
};

$Object* allocate$NotYetBoundException($Class* clazz) {
	return $of($alloc(NotYetBoundException));
}

void NotYetBoundException::init$() {
	$IllegalStateException::init$();
}

NotYetBoundException::NotYetBoundException() {
}

NotYetBoundException::NotYetBoundException(const NotYetBoundException& e) : $IllegalStateException(e) {
}

void NotYetBoundException::throw$() {
	throw *this;
}

$Class* NotYetBoundException::load$($String* name, bool initialize) {
	$loadClass(NotYetBoundException, name, initialize, &_NotYetBoundException_ClassInfo_, allocate$NotYetBoundException);
	return class$;
}

$Class* NotYetBoundException::class$ = nullptr;

		} // channels
	} // nio
} // java