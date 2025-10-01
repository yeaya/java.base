#include <java/net/InetSocketAddress$InetSocketAddressHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;
using $InetSocketAddress = ::java::net::InetSocketAddress;

namespace java {
	namespace net {

$FieldInfo _InetSocketAddress$InetSocketAddressHolder_FieldInfo_[] = {
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, hostname)},
	{"addr", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, addr)},
	{"port", "I", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, port)},
	{}
};

$MethodInfo _InetSocketAddress$InetSocketAddressHolder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;I)V", nullptr, $PRIVATE, $method(static_cast<void(InetSocketAddress$InetSocketAddressHolder::*)($String*,$InetAddress*,int32_t)>(&InetSocketAddress$InetSocketAddressHolder::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PRIVATE, $method(static_cast<$InetAddress*(InetSocketAddress$InetSocketAddressHolder::*)()>(&InetSocketAddress$InetSocketAddressHolder::getAddress))},
	{"getHostName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(InetSocketAddress$InetSocketAddressHolder::*)()>(&InetSocketAddress$InetSocketAddressHolder::getHostName))},
	{"getHostString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(InetSocketAddress$InetSocketAddressHolder::*)()>(&InetSocketAddress$InetSocketAddressHolder::getHostString))},
	{"getPort", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(InetSocketAddress$InetSocketAddressHolder::*)()>(&InetSocketAddress$InetSocketAddressHolder::getPort))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"isUnresolved", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(InetSocketAddress$InetSocketAddressHolder::*)()>(&InetSocketAddress$InetSocketAddressHolder::isUnresolved))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InetSocketAddress$InetSocketAddressHolder_InnerClassesInfo_[] = {
	{"java.net.InetSocketAddress$InetSocketAddressHolder", "java.net.InetSocketAddress", "InetSocketAddressHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _InetSocketAddress$InetSocketAddressHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.InetSocketAddress$InetSocketAddressHolder",
	"java.lang.Object",
	nullptr,
	_InetSocketAddress$InetSocketAddressHolder_FieldInfo_,
	_InetSocketAddress$InetSocketAddressHolder_MethodInfo_,
	nullptr,
	nullptr,
	_InetSocketAddress$InetSocketAddressHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetSocketAddress"
};

$Object* allocate$InetSocketAddress$InetSocketAddressHolder($Class* clazz) {
	return $of($alloc(InetSocketAddress$InetSocketAddressHolder));
}

void InetSocketAddress$InetSocketAddressHolder::init$($String* hostname, $InetAddress* addr, int32_t port) {
	$set(this, hostname, hostname);
	$set(this, addr, addr);
	this->port = port;
}

int32_t InetSocketAddress$InetSocketAddressHolder::getPort() {
	return this->port;
}

$InetAddress* InetSocketAddress$InetSocketAddressHolder::getAddress() {
	return this->addr;
}

$String* InetSocketAddress$InetSocketAddressHolder::getHostName() {
	if (this->hostname != nullptr) {
		return this->hostname;
	}
	if (this->addr != nullptr) {
		return $nc(this->addr)->getHostName();
	}
	return nullptr;
}

$String* InetSocketAddress$InetSocketAddressHolder::getHostString() {
	if (this->hostname != nullptr) {
		return this->hostname;
	}
	if (this->addr != nullptr) {
		if ($nc($($nc(this->addr)->holder()))->getHostName() != nullptr) {
			return $nc($($nc(this->addr)->holder()))->getHostName();
		} else {
			return $nc(this->addr)->getHostAddress();
		}
	}
	return nullptr;
}

bool InetSocketAddress$InetSocketAddressHolder::isUnresolved() {
	return this->addr == nullptr;
}

$String* InetSocketAddress$InetSocketAddressHolder::toString() {
	$var($String, formatted, nullptr);
	if (isUnresolved()) {
		$assign(formatted, $str({this->hostname, "/<unresolved>"_s}));
	} else {
		$assign(formatted, $nc(this->addr)->toString());
		if ($instanceOf($Inet6Address, this->addr)) {
			int32_t i = $nc(formatted)->lastIndexOf("/"_s);
			$var($String, var$1, $$str({$(formatted->substring(0, i + 1)), "["_s}));
			$var($String, var$0, $$concat(var$1, $(formatted->substring(i + 1))));
			$assign(formatted, $concat(var$0, "]"));
		}
	}
	return $str({formatted, ":"_s, $$str(this->port)});
}

bool InetSocketAddress$InetSocketAddressHolder::equals(Object$* obj) {
	$var(InetSocketAddress$InetSocketAddressHolder, that, nullptr);
	bool var$0 = $instanceOf(InetSocketAddress$InetSocketAddressHolder, obj);
	if (var$0) {
		$assign(that, $cast(InetSocketAddress$InetSocketAddressHolder, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	bool sameIP = false;
	if (this->addr != nullptr) {
		sameIP = $nc(this->addr)->equals($nc(that)->addr);
	} else if (this->hostname != nullptr) {
		sameIP = ($nc(that)->addr == nullptr) && $nc(this->hostname)->equalsIgnoreCase(that->hostname);
	} else {
		sameIP = ($nc(that)->addr == nullptr) && (that->hostname == nullptr);
	}
	return sameIP && (this->port == $nc(that)->port);
}

int32_t InetSocketAddress$InetSocketAddressHolder::hashCode() {
	if (this->addr != nullptr) {
		return $nc(this->addr)->hashCode() + this->port;
	}
	if (this->hostname != nullptr) {
		return $($nc(this->hostname)->toLowerCase())->hashCode() + this->port;
	}
	return this->port;
}

InetSocketAddress$InetSocketAddressHolder::InetSocketAddress$InetSocketAddressHolder() {
}

$Class* InetSocketAddress$InetSocketAddressHolder::load$($String* name, bool initialize) {
	$loadClass(InetSocketAddress$InetSocketAddressHolder, name, initialize, &_InetSocketAddress$InetSocketAddressHolder_ClassInfo_, allocate$InetSocketAddress$InetSocketAddressHolder);
	return class$;
}

$Class* InetSocketAddress$InetSocketAddressHolder::class$ = nullptr;

	} // net
} // java