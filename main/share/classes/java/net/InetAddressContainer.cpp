#include <java/net/InetAddressContainer.h>

#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _InetAddressContainer_FieldInfo_[] = {
	{"addr", "Ljava/net/InetAddress;", nullptr, 0, $field(InetAddressContainer, addr)},
	{}
};

$MethodInfo _InetAddressContainer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InetAddressContainer::*)()>(&InetAddressContainer::init$))},
	{}
};

$ClassInfo _InetAddressContainer_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.InetAddressContainer",
	"java.lang.Object",
	nullptr,
	_InetAddressContainer_FieldInfo_,
	_InetAddressContainer_MethodInfo_
};

$Object* allocate$InetAddressContainer($Class* clazz) {
	return $of($alloc(InetAddressContainer));
}

void InetAddressContainer::init$() {
}

InetAddressContainer::InetAddressContainer() {
}

$Class* InetAddressContainer::load$($String* name, bool initialize) {
	$loadClass(InetAddressContainer, name, initialize, &_InetAddressContainer_ClassInfo_, allocate$InetAddressContainer);
	return class$;
}

$Class* InetAddressContainer::class$ = nullptr;

	} // net
} // java