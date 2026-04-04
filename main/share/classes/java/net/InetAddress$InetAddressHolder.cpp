#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

void InetAddress$InetAddressHolder::init$() {
}

void InetAddress$InetAddressHolder::init$($String* hostName, int32_t address, int32_t family) {
	$set(this, originalHostName, hostName);
	$set(this, hostName, hostName);
	this->address = address;
	this->family = family;
}

void InetAddress$InetAddressHolder::init($String* hostName, int32_t family) {
	$set(this, originalHostName, hostName);
	$set(this, hostName, hostName);
	if (family != -1) {
		this->family = family;
	}
}

$String* InetAddress$InetAddressHolder::getHostName() {
	return this->hostName;
}

$String* InetAddress$InetAddressHolder::getOriginalHostName() {
	return this->originalHostName;
}

int32_t InetAddress$InetAddressHolder::getAddress() {
	return this->address;
}

int32_t InetAddress$InetAddressHolder::getFamily() {
	return this->family;
}

InetAddress$InetAddressHolder::InetAddress$InetAddressHolder() {
}

$Class* InetAddress$InetAddressHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"originalHostName", "Ljava/lang/String;", nullptr, 0, $field(InetAddress$InetAddressHolder, originalHostName)},
		{"hostName", "Ljava/lang/String;", nullptr, 0, $field(InetAddress$InetAddressHolder, hostName)},
		{"address", "I", nullptr, 0, $field(InetAddress$InetAddressHolder, address)},
		{"family", "I", nullptr, 0, $field(InetAddress$InetAddressHolder, family)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddress$InetAddressHolder, init$, void)},
		{"<init>", "(Ljava/lang/String;II)V", nullptr, 0, $method(InetAddress$InetAddressHolder, init$, void, $String*, int32_t, int32_t)},
		{"getAddress", "()I", nullptr, 0, $virtualMethod(InetAddress$InetAddressHolder, getAddress, int32_t)},
		{"getFamily", "()I", nullptr, 0, $virtualMethod(InetAddress$InetAddressHolder, getFamily, int32_t)},
		{"getHostName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(InetAddress$InetAddressHolder, getHostName, $String*)},
		{"getOriginalHostName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(InetAddress$InetAddressHolder, getOriginalHostName, $String*)},
		{"init", "(Ljava/lang/String;I)V", nullptr, 0, $virtualMethod(InetAddress$InetAddressHolder, init, void, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$InetAddressHolder", "java.net.InetAddress", "InetAddressHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.InetAddress$InetAddressHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetAddress"
	};
	$loadClass(InetAddress$InetAddressHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$InetAddressHolder);
	});
	return class$;
}

$Class* InetAddress$InetAddressHolder::class$ = nullptr;

	} // net
} // java