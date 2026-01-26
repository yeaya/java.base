#include <java/net/SocketAddress.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _SocketAddress_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SocketAddress, serialVersionUID)},
	{}
};

$MethodInfo _SocketAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SocketAddress, init$, void)},
	{}
};

$ClassInfo _SocketAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.SocketAddress",
	"java.lang.Object",
	"java.io.Serializable",
	_SocketAddress_FieldInfo_,
	_SocketAddress_MethodInfo_
};

$Object* allocate$SocketAddress($Class* clazz) {
	return $of($alloc(SocketAddress));
}

void SocketAddress::init$() {
}

SocketAddress::SocketAddress() {
}

$Class* SocketAddress::load$($String* name, bool initialize) {
	$loadClass(SocketAddress, name, initialize, &_SocketAddress_ClassInfo_, allocate$SocketAddress);
	return class$;
}

$Class* SocketAddress::class$ = nullptr;

	} // net
} // java