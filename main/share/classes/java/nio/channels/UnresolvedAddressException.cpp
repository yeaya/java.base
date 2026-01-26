#include <java/nio/channels/UnresolvedAddressException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _UnresolvedAddressException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnresolvedAddressException, serialVersionUID)},
	{}
};

$MethodInfo _UnresolvedAddressException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnresolvedAddressException, init$, void)},
	{}
};

$ClassInfo _UnresolvedAddressException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.UnresolvedAddressException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_UnresolvedAddressException_FieldInfo_,
	_UnresolvedAddressException_MethodInfo_
};

$Object* allocate$UnresolvedAddressException($Class* clazz) {
	return $of($alloc(UnresolvedAddressException));
}

void UnresolvedAddressException::init$() {
	$IllegalArgumentException::init$();
}

UnresolvedAddressException::UnresolvedAddressException() {
}

UnresolvedAddressException::UnresolvedAddressException(const UnresolvedAddressException& e) : $IllegalArgumentException(e) {
}

void UnresolvedAddressException::throw$() {
	throw *this;
}

$Class* UnresolvedAddressException::load$($String* name, bool initialize) {
	$loadClass(UnresolvedAddressException, name, initialize, &_UnresolvedAddressException_ClassInfo_, allocate$UnresolvedAddressException);
	return class$;
}

$Class* UnresolvedAddressException::class$ = nullptr;

		} // channels
	} // nio
} // java