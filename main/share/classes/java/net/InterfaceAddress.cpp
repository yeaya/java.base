#include <java/net/InterfaceAddress.h>

#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $Objects = ::java::util::Objects;

namespace java {
	namespace net {

$FieldInfo _InterfaceAddress_FieldInfo_[] = {
	{"address", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(InterfaceAddress, address)},
	{"broadcast", "Ljava/net/Inet4Address;", nullptr, $PRIVATE, $field(InterfaceAddress, broadcast)},
	{"maskLength", "S", nullptr, $PRIVATE, $field(InterfaceAddress, maskLength)},
	{}
};

$MethodInfo _InterfaceAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InterfaceAddress::*)()>(&InterfaceAddress::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getBroadcast", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getNetworkPrefixLength", "()S", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InterfaceAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.InterfaceAddress",
	"java.lang.Object",
	nullptr,
	_InterfaceAddress_FieldInfo_,
	_InterfaceAddress_MethodInfo_
};

$Object* allocate$InterfaceAddress($Class* clazz) {
	return $of($alloc(InterfaceAddress));
}

void InterfaceAddress::init$() {
	$set(this, address, nullptr);
	$set(this, broadcast, nullptr);
	this->maskLength = (int16_t)0;
}

$InetAddress* InterfaceAddress::getAddress() {
	return this->address;
}

$InetAddress* InterfaceAddress::getBroadcast() {
	return this->broadcast;
}

int16_t InterfaceAddress::getNetworkPrefixLength() {
	return this->maskLength;
}

bool InterfaceAddress::equals(Object$* obj) {
	$var(InterfaceAddress, cmp, nullptr);
	bool var$3 = $instanceOf(InterfaceAddress, obj);
	if (var$3) {
		$assign(cmp, $cast(InterfaceAddress, obj));
		var$3 = true;
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && $Objects::equals(this->address, $nc(cmp)->address);
	bool var$0 = var$1 && $Objects::equals(this->broadcast, $nc(cmp)->broadcast);
	return var$0 && this->maskLength == $nc(cmp)->maskLength;
}

int32_t InterfaceAddress::hashCode() {
	int32_t var$0 = $nc(this->address)->hashCode();
	return var$0 + ((this->broadcast != nullptr) ? $nc(this->broadcast)->hashCode() : 0) + this->maskLength;
}

$String* InterfaceAddress::toString() {
	return $str({this->address, "/"_s, $$str(this->maskLength), " ["_s, this->broadcast, "]"_s});
}

InterfaceAddress::InterfaceAddress() {
}

$Class* InterfaceAddress::load$($String* name, bool initialize) {
	$loadClass(InterfaceAddress, name, initialize, &_InterfaceAddress_ClassInfo_, allocate$InterfaceAddress);
	return class$;
}

$Class* InterfaceAddress::class$ = nullptr;

	} // net
} // java