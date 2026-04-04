#include <java/net/InterfaceAddress.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $Objects = ::java::util::Objects;

namespace java {
	namespace net {

void InterfaceAddress::init$() {
	$set(this, address, nullptr);
	$set(this, broadcast, nullptr);
	this->maskLength = 0;
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
	bool var$0 = var$1 && $Objects::equals(this->broadcast, cmp->broadcast);
	return var$0 && this->maskLength == cmp->maskLength;
}

int32_t InterfaceAddress::hashCode() {
	int32_t var$0 = $nc(this->address)->hashCode();
	return var$0 + ((this->broadcast != nullptr) ? this->broadcast->hashCode() : 0) + this->maskLength;
}

$String* InterfaceAddress::toString() {
	return $str({this->address, "/"_s, $$str(this->maskLength), " ["_s, this->broadcast, "]"_s});
}

InterfaceAddress::InterfaceAddress() {
}

$Class* InterfaceAddress::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"address", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(InterfaceAddress, address)},
		{"broadcast", "Ljava/net/Inet4Address;", nullptr, $PRIVATE, $field(InterfaceAddress, broadcast)},
		{"maskLength", "S", nullptr, $PRIVATE, $field(InterfaceAddress, maskLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InterfaceAddress, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, equals, bool, Object$*)},
		{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, getAddress, $InetAddress*)},
		{"getBroadcast", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, getBroadcast, $InetAddress*)},
		{"getNetworkPrefixLength", "()S", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, getNetworkPrefixLength, int16_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InterfaceAddress, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.InterfaceAddress",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InterfaceAddress, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterfaceAddress);
	});
	return class$;
}

$Class* InterfaceAddress::class$ = nullptr;

	} // net
} // java