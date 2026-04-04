#include <java/net/NetworkInterface.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/DefaultInterface.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/InterfaceAddress.h>
#include <java/net/NetPermission.h>
#include <java/net/NetworkInterface$1.h>
#include <java/net/SocketException.h>
#include <java/security/Permission.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jcpp.h>

#undef DISTINCT
#undef IMMUTABLE
#undef NONNULL

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $NetworkInterfaceArray = $Array<::java::net::NetworkInterface>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $DefaultInterface = ::java::net::DefaultInterface;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetPermission = ::java::net::NetPermission;
using $NetworkInterface$1 = ::java::net::NetworkInterface$1;
using $SocketException = ::java::net::SocketException;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $BootLoader = ::jdk::internal::loader::BootLoader;

namespace java {
	namespace net {

NetworkInterface* NetworkInterface::defaultInterface = nullptr;
int32_t NetworkInterface::defaultIndex = 0;

void NetworkInterface::init$() {
	$set(this, parent, nullptr);
	this->virtual$ = false;
}

void NetworkInterface::init$($String* name, int32_t index, $InetAddressArray* addrs) {
	$set(this, parent, nullptr);
	this->virtual$ = false;
	$set(this, name, name);
	this->index = index;
	$set(this, addrs, addrs);
}

$String* NetworkInterface::getName() {
	return this->name;
}

$Enumeration* NetworkInterface::getInetAddresses() {
	return enumerationFromArray($(getCheckedInetAddresses()));
}

$Stream* NetworkInterface::inetAddresses() {
	return streamFromArray($(getCheckedInetAddresses()));
}

$InetAddressArray* NetworkInterface::getCheckedInetAddresses() {
	$useLocalObjectStack();
	$var($InetAddressArray, local_addrs, $new($InetAddressArray, $nc(this->addrs)->length));
	bool trusted = true;
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		try {
			sec->checkPermission($$new($NetPermission, "getNetworkInformation"_s));
		} catch ($SecurityException& e) {
			trusted = false;
		}
	}
	int32_t i = 0;
	for (int32_t j = 0; j < this->addrs->length; ++j) {
		try {
			if (!trusted) {
				$nc(sec)->checkConnect($($nc(this->addrs->get(j))->getHostAddress()), -1);
			}
			local_addrs->set(i++, this->addrs->get(j));
		} catch ($SecurityException& e) {
		}
	}
	return $cast($InetAddressArray, $Arrays::copyOf(local_addrs, i));
}

$List* NetworkInterface::getInterfaceAddresses() {
	$useLocalObjectStack();
	$var($List, lst, $new($ArrayList, 1));
	if (this->bindings != nullptr) {
		$var($SecurityManager, sec, $System::getSecurityManager());
		for (int32_t j = 0; j < this->bindings->length; ++j) {
			try {
				if (sec != nullptr) {
					sec->checkConnect($($$nc($nc(this->bindings->get(j))->getAddress())->getHostAddress()), -1);
				}
				lst->add(this->bindings->get(j));
			} catch ($SecurityException& e) {
			}
		}
	}
	return lst;
}

$Enumeration* NetworkInterface::getSubInterfaces() {
	return enumerationFromArray(this->childs);
}

$Stream* NetworkInterface::subInterfaces() {
	return streamFromArray(this->childs);
}

NetworkInterface* NetworkInterface::getParent() {
	return this->parent;
}

int32_t NetworkInterface::getIndex() {
	return this->index;
}

$String* NetworkInterface::getDisplayName() {
	return ""_s->equals(this->displayName) ? ($String*)nullptr : this->displayName;
}

NetworkInterface* NetworkInterface::getByName($String* name) {
	$init(NetworkInterface);
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	return getByName0(name);
}

NetworkInterface* NetworkInterface::getByIndex(int32_t index) {
	$init(NetworkInterface);
	if (index < 0) {
		$throwNew($IllegalArgumentException, "Interface index can\'t be negative"_s);
	}
	return getByIndex0(index);
}

NetworkInterface* NetworkInterface::getByInetAddress($InetAddress* addr) {
	$init(NetworkInterface);
	$useLocalObjectStack();
	if (addr == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc($nc(addr)->holder$)->family == $InetAddress::IPv4) {
		if (!($instanceOf($Inet4Address, addr))) {
			$throwNew($IllegalArgumentException, $$str({"invalid family type: "_s, $$str(addr->holder$->family)}));
		}
	} else if (addr->holder$->family == $InetAddress::IPv6) {
		if (!($instanceOf($Inet6Address, addr))) {
			$throwNew($IllegalArgumentException, $$str({"invalid family type: "_s, $$str(addr->holder$->family)}));
		}
	} else {
		$throwNew($IllegalArgumentException, $$str({"invalid address type: "_s, addr}));
	}
	return getByInetAddress0(addr);
}

$Enumeration* NetworkInterface::getNetworkInterfaces() {
	$init(NetworkInterface);
	$var($NetworkInterfaceArray, netifs, getAll());
	if (netifs != nullptr && netifs->length > 0) {
		return enumerationFromArray(netifs);
	} else {
		$throwNew($SocketException, "No network interfaces configured"_s);
	}
}

$Stream* NetworkInterface::networkInterfaces() {
	$init(NetworkInterface);
	$var($NetworkInterfaceArray, netifs, getAll());
	if (netifs != nullptr && netifs->length > 0) {
		return streamFromArray(netifs);
	} else {
		$throwNew($SocketException, "No network interfaces configured"_s);
	}
}

bool NetworkInterface::isBoundInetAddress($InetAddress* addr) {
	$init(NetworkInterface);
	return boundInetAddress0(addr);
}

$Enumeration* NetworkInterface::enumerationFromArray($ObjectArray* a) {
	$init(NetworkInterface);
	return $new($NetworkInterface$1, a);
}

$Stream* NetworkInterface::streamFromArray($ObjectArray* a) {
	$init(NetworkInterface);
	return $StreamSupport::stream($($Spliterators::spliterator(a, ($Spliterator::DISTINCT | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL)), false);
}

$NetworkInterfaceArray* NetworkInterface::getAll() {
	$init(NetworkInterface);
	$prepareNativeStatic(getAll, $NetworkInterfaceArray*);
	$var($NetworkInterfaceArray, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByName0($String* name) {
	$init(NetworkInterface);
	$prepareNativeStatic(getByName0, NetworkInterface*, $String* name);
	$var(NetworkInterface, $ret, $invokeNativeStaticObject(name));
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByIndex0(int32_t index) {
	$init(NetworkInterface);
	$prepareNativeStatic(getByIndex0, NetworkInterface*, int32_t index);
	$var(NetworkInterface, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::boundInetAddress0($InetAddress* addr) {
	$init(NetworkInterface);
	$prepareNativeStatic(boundInetAddress0, bool, $InetAddress* addr);
	bool $ret = $invokeNativeStatic(addr);
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByInetAddress0($InetAddress* addr) {
	$init(NetworkInterface);
	$prepareNativeStatic(getByInetAddress0, NetworkInterface*, $InetAddress* addr);
	$var(NetworkInterface, $ret, $invokeNativeStaticObject(addr));
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::isUp() {
	return isUp0(this->name, this->index);
}

bool NetworkInterface::isLoopback() {
	return isLoopback0(this->name, this->index);
}

bool NetworkInterface::isPointToPoint() {
	return isP2P0(this->name, this->index);
}

bool NetworkInterface::supportsMulticast() {
	return supportsMulticast0(this->name, this->index);
}

$bytes* NetworkInterface::getHardwareAddress() {
	$useLocalObjectStack();
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		try {
			sec->checkPermission($$new($NetPermission, "getNetworkInformation"_s));
		} catch ($SecurityException& e) {
			if (!$$nc(getInetAddresses())->hasMoreElements()) {
				return nullptr;
			}
		}
	}
	if (isLoopback0(this->name, this->index)) {
		return nullptr;
	}
	{
		$var($InetAddressArray, arr$, this->addrs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($InetAddress, addr, arr$->get(i$));
			if ($instanceOf($Inet4Address, addr)) {
				return getMacAddr0($($cast($Inet4Address, addr)->getAddress()), this->name, this->index);
			}
		}
	}
	return getMacAddr0(nullptr, this->name, this->index);
}

int32_t NetworkInterface::getMTU() {
	return getMTU0(this->name, this->index);
}

bool NetworkInterface::isVirtual() {
	return this->virtual$;
}

bool NetworkInterface::isUp0($String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(isUp0, bool, $String* name, int32_t ind);
	bool $ret = $invokeNativeStatic(name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::isLoopback0($String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(isLoopback0, bool, $String* name, int32_t ind);
	bool $ret = $invokeNativeStatic(name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::supportsMulticast0($String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(supportsMulticast0, bool, $String* name, int32_t ind);
	bool $ret = $invokeNativeStatic(name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::isP2P0($String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(isP2P0, bool, $String* name, int32_t ind);
	bool $ret = $invokeNativeStatic(name, ind);
	$finishNativeStatic();
	return $ret;
}

$bytes* NetworkInterface::getMacAddr0($bytes* inAddr, $String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(getMacAddr0, $bytes*, $bytes* inAddr, $String* name, int32_t ind);
	$var($bytes, $ret, $invokeNativeStaticObject(inAddr, name, ind));
	$finishNativeStatic();
	return $ret;
}

int32_t NetworkInterface::getMTU0($String* name, int32_t ind) {
	$init(NetworkInterface);
	$prepareNativeStatic(getMTU0, int32_t, $String* name, int32_t ind);
	int32_t $ret = $invokeNativeStatic(name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::equals(Object$* obj) {
	$useLocalObjectStack();
	$var(NetworkInterface, that, nullptr);
	bool var$0 = $instanceOf(NetworkInterface, obj);
	if (var$0) {
		$assign(that, $cast(NetworkInterface, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if (this->name != nullptr) {
		if (!this->name->equals($nc(that)->name)) {
			return false;
		}
	} else if ($nc(that)->name != nullptr) {
		return false;
	}
	if (this->addrs == nullptr) {
		return $nc(that)->addrs == nullptr;
	} else if ($nc(that)->addrs == nullptr) {
		return false;
	}
	if ($nc(this->addrs)->length != $nc($nc(that)->addrs)->length) {
		return false;
	}
	$var($InetAddressArray, thatAddrs, that->addrs);
	int32_t count = $nc(thatAddrs)->length;
	for (int32_t i = 0; i < count; ++i) {
		bool found = false;
		for (int32_t j = 0; j < count; ++j) {
			if ($nc($nc(this->addrs)->get(i))->equals(thatAddrs->get(j))) {
				found = true;
				break;
			}
		}
		if (!found) {
			return false;
		}
	}
	return true;
}

int32_t NetworkInterface::hashCode() {
	return this->name == nullptr ? 0 : this->name->hashCode();
}

$String* NetworkInterface::toString() {
	$useLocalObjectStack();
	$var($String, result, "name:"_s);
	$plusAssign(result, this->name == nullptr ? "null"_s : this->name);
	if (this->displayName != nullptr) {
		$plusAssign(result, $$str({" ("_s, this->displayName, ")"_s}));
	}
	return result;
}

void NetworkInterface::init() {
	$init(NetworkInterface);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

NetworkInterface* NetworkInterface::getDefault() {
	$init(NetworkInterface);
	return NetworkInterface::defaultInterface;
}

void NetworkInterface::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("net"_s);
		NetworkInterface::init();
		$assignStatic(NetworkInterface::defaultInterface, $DefaultInterface::getDefault());
		if (NetworkInterface::defaultInterface != nullptr) {
			NetworkInterface::defaultIndex = NetworkInterface::defaultInterface->getIndex();
		} else {
			NetworkInterface::defaultIndex = 0;
		}
	}
}

NetworkInterface::NetworkInterface() {
}

$Class* NetworkInterface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NetworkInterface, name)},
		{"displayName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NetworkInterface, displayName)},
		{"index", "I", nullptr, $PRIVATE, $field(NetworkInterface, index)},
		{"addrs", "[Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(NetworkInterface, addrs)},
		{"bindings", "[Ljava/net/InterfaceAddress;", nullptr, $PRIVATE, $field(NetworkInterface, bindings)},
		{"childs", "[Ljava/net/NetworkInterface;", nullptr, $PRIVATE, $field(NetworkInterface, childs)},
		{"parent", "Ljava/net/NetworkInterface;", nullptr, $PRIVATE, $field(NetworkInterface, parent)},
		{"virtual", "Z", nullptr, $PRIVATE, $field(NetworkInterface, virtual$)},
		{"defaultInterface", "Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NetworkInterface, defaultInterface)},
		{"defaultIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NetworkInterface, defaultIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetworkInterface, init$, void)},
		{"<init>", "(Ljava/lang/String;I[Ljava/net/InetAddress;)V", nullptr, 0, $method(NetworkInterface, init$, void, $String*, int32_t, $InetAddressArray*)},
		{"boundInetAddress0", "(Ljava/net/InetAddress;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, boundInetAddress0, bool, $InetAddress*), "java.net.SocketException"},
		{"enumerationFromArray", "([Ljava/lang/Object;)Ljava/util/Enumeration;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/Enumeration<TT;>;", $PRIVATE | $STATIC, $staticMethod(NetworkInterface, enumerationFromArray, $Enumeration*, $ObjectArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NetworkInterface, equals, bool, Object$*)},
		{"getAll", "()[Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getAll, $NetworkInterfaceArray*), "java.net.SocketException"},
		{"getByIndex", "(I)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkInterface, getByIndex, NetworkInterface*, int32_t), "java.net.SocketException"},
		{"getByIndex0", "(I)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getByIndex0, NetworkInterface*, int32_t), "java.net.SocketException"},
		{"getByInetAddress", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkInterface, getByInetAddress, NetworkInterface*, $InetAddress*), "java.net.SocketException"},
		{"getByInetAddress0", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getByInetAddress0, NetworkInterface*, $InetAddress*), "java.net.SocketException"},
		{"getByName", "(Ljava/lang/String;)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkInterface, getByName, NetworkInterface*, $String*), "java.net.SocketException"},
		{"getByName0", "(Ljava/lang/String;)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getByName0, NetworkInterface*, $String*), "java.net.SocketException"},
		{"getCheckedInetAddresses", "()[Ljava/net/InetAddress;", nullptr, $PRIVATE, $method(NetworkInterface, getCheckedInetAddresses, $InetAddressArray*)},
		{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $staticMethod(NetworkInterface, getDefault, NetworkInterface*)},
		{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(NetworkInterface, getDisplayName, $String*)},
		{"getHardwareAddress", "()[B", nullptr, $PUBLIC, $method(NetworkInterface, getHardwareAddress, $bytes*), "java.net.SocketException"},
		{"getIndex", "()I", nullptr, $PUBLIC, $method(NetworkInterface, getIndex, int32_t)},
		{"getInetAddresses", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/InetAddress;>;", $PUBLIC, $method(NetworkInterface, getInetAddresses, $Enumeration*)},
		{"getInterfaceAddresses", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/InterfaceAddress;>;", $PUBLIC, $method(NetworkInterface, getInterfaceAddresses, $List*)},
		{"getMTU", "()I", nullptr, $PUBLIC, $method(NetworkInterface, getMTU, int32_t), "java.net.SocketException"},
		{"getMTU0", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getMTU0, int32_t, $String*, int32_t), "java.net.SocketException"},
		{"getMacAddr0", "([BLjava/lang/String;I)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, getMacAddr0, $bytes*, $bytes*, $String*, int32_t), "java.net.SocketException"},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(NetworkInterface, getName, $String*)},
		{"getNetworkInterfaces", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC, $staticMethod(NetworkInterface, getNetworkInterfaces, $Enumeration*), "java.net.SocketException"},
		{"getParent", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, $method(NetworkInterface, getParent, NetworkInterface*)},
		{"getSubInterfaces", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;", $PUBLIC, $method(NetworkInterface, getSubInterfaces, $Enumeration*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(NetworkInterface, hashCode, int32_t)},
		{"inetAddresses", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/InetAddress;>;", $PUBLIC, $method(NetworkInterface, inetAddresses, $Stream*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, init, void)},
		{"isBoundInetAddress", "(Ljava/net/InetAddress;)Z", nullptr, $STATIC, $staticMethod(NetworkInterface, isBoundInetAddress, bool, $InetAddress*), "java.net.SocketException"},
		{"isLoopback", "()Z", nullptr, $PUBLIC, $method(NetworkInterface, isLoopback, bool), "java.net.SocketException"},
		{"isLoopback0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, isLoopback0, bool, $String*, int32_t), "java.net.SocketException"},
		{"isP2P0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, isP2P0, bool, $String*, int32_t), "java.net.SocketException"},
		{"isPointToPoint", "()Z", nullptr, $PUBLIC, $method(NetworkInterface, isPointToPoint, bool), "java.net.SocketException"},
		{"isUp", "()Z", nullptr, $PUBLIC, $method(NetworkInterface, isUp, bool), "java.net.SocketException"},
		{"isUp0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, isUp0, bool, $String*, int32_t), "java.net.SocketException"},
		{"isVirtual", "()Z", nullptr, $PUBLIC, $method(NetworkInterface, isVirtual, bool)},
		{"networkInterfaces", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC, $staticMethod(NetworkInterface, networkInterfaces, $Stream*), "java.net.SocketException"},
		{"streamFromArray", "([Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/stream/Stream<TT;>;", $PRIVATE | $STATIC, $staticMethod(NetworkInterface, streamFromArray, $Stream*, $ObjectArray*)},
		{"subInterfaces", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/NetworkInterface;>;", $PUBLIC, $method(NetworkInterface, subInterfaces, $Stream*)},
		{"supportsMulticast", "()Z", nullptr, $PUBLIC, $method(NetworkInterface, supportsMulticast, bool), "java.net.SocketException"},
		{"supportsMulticast0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NetworkInterface, supportsMulticast0, bool, $String*, int32_t), "java.net.SocketException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NetworkInterface, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.NetworkInterface$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.NetworkInterface",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.NetworkInterface$1"
	};
	$loadClass(NetworkInterface, name, initialize, &classInfo$$, NetworkInterface::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkInterface);
	});
	return class$;
}

$Class* NetworkInterface::class$ = nullptr;

	} // net
} // java