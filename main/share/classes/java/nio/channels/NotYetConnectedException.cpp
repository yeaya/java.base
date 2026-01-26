#include <java/nio/channels/NotYetConnectedException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _NotYetConnectedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotYetConnectedException, serialVersionUID)},
	{}
};

$MethodInfo _NotYetConnectedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NotYetConnectedException, init$, void)},
	{}
};

$ClassInfo _NotYetConnectedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.NotYetConnectedException",
	"java.lang.IllegalStateException",
	nullptr,
	_NotYetConnectedException_FieldInfo_,
	_NotYetConnectedException_MethodInfo_
};

$Object* allocate$NotYetConnectedException($Class* clazz) {
	return $of($alloc(NotYetConnectedException));
}

void NotYetConnectedException::init$() {
	$IllegalStateException::init$();
}

NotYetConnectedException::NotYetConnectedException() {
}

NotYetConnectedException::NotYetConnectedException(const NotYetConnectedException& e) : $IllegalStateException(e) {
}

void NotYetConnectedException::throw$() {
	throw *this;
}

$Class* NotYetConnectedException::load$($String* name, bool initialize) {
	$loadClass(NotYetConnectedException, name, initialize, &_NotYetConnectedException_ClassInfo_, allocate$NotYetConnectedException);
	return class$;
}

$Class* NotYetConnectedException::class$ = nullptr;

		} // channels
	} // nio
} // java