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
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/AbstractList.h>
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
using $InterfaceAddressArray = $Array<::java::net::InterfaceAddress>;
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
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;
using $InterfaceAddress = ::java::net::InterfaceAddress;
using $NetPermission = ::java::net::NetPermission;
using $NetworkInterface$1 = ::java::net::NetworkInterface$1;
using $SocketException = ::java::net::SocketException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AbstractList = ::java::util::AbstractList;
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

$FieldInfo _NetworkInterface_FieldInfo_[] = {
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

$MethodInfo _NetworkInterface_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NetworkInterface::*)()>(&NetworkInterface::init$))},
	{"<init>", "(Ljava/lang/String;I[Ljava/net/InetAddress;)V", nullptr, 0, $method(static_cast<void(NetworkInterface::*)($String*,int32_t,$InetAddressArray*)>(&NetworkInterface::init$))},
	{"boundInetAddress0", "(Ljava/net/InetAddress;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($InetAddress*)>(&NetworkInterface::boundInetAddress0)), "java.net.SocketException"},
	{"enumerationFromArray", "([Ljava/lang/Object;)Ljava/util/Enumeration;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/Enumeration<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Enumeration*(*)($ObjectArray*)>(&NetworkInterface::enumerationFromArray))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAll", "()[Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$NetworkInterfaceArray*(*)()>(&NetworkInterface::getAll)), "java.net.SocketException"},
	{"getByIndex", "(I)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NetworkInterface*(*)(int32_t)>(&NetworkInterface::getByIndex)), "java.net.SocketException"},
	{"getByIndex0", "(I)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<NetworkInterface*(*)(int32_t)>(&NetworkInterface::getByIndex0)), "java.net.SocketException"},
	{"getByInetAddress", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NetworkInterface*(*)($InetAddress*)>(&NetworkInterface::getByInetAddress)), "java.net.SocketException"},
	{"getByInetAddress0", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<NetworkInterface*(*)($InetAddress*)>(&NetworkInterface::getByInetAddress0)), "java.net.SocketException"},
	{"getByName", "(Ljava/lang/String;)Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NetworkInterface*(*)($String*)>(&NetworkInterface::getByName)), "java.net.SocketException"},
	{"getByName0", "(Ljava/lang/String;)Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<NetworkInterface*(*)($String*)>(&NetworkInterface::getByName0)), "java.net.SocketException"},
	{"getCheckedInetAddresses", "()[Ljava/net/InetAddress;", nullptr, $PRIVATE, $method(static_cast<$InetAddressArray*(NetworkInterface::*)()>(&NetworkInterface::getCheckedInetAddresses))},
	{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $method(static_cast<NetworkInterface*(*)()>(&NetworkInterface::getDefault))},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(NetworkInterface::*)()>(&NetworkInterface::getDisplayName))},
	{"getHardwareAddress", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(NetworkInterface::*)()>(&NetworkInterface::getHardwareAddress)), "java.net.SocketException"},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(NetworkInterface::*)()>(&NetworkInterface::getIndex))},
	{"getInetAddresses", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/InetAddress;>;", $PUBLIC, $method(static_cast<$Enumeration*(NetworkInterface::*)()>(&NetworkInterface::getInetAddresses))},
	{"getInterfaceAddresses", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/InterfaceAddress;>;", $PUBLIC, $method(static_cast<$List*(NetworkInterface::*)()>(&NetworkInterface::getInterfaceAddresses))},
	{"getMTU", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(NetworkInterface::*)()>(&NetworkInterface::getMTU)), "java.net.SocketException"},
	{"getMTU0", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*,int32_t)>(&NetworkInterface::getMTU0)), "java.net.SocketException"},
	{"getMacAddr0", "([BLjava/lang/String;I)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$bytes*(*)($bytes*,$String*,int32_t)>(&NetworkInterface::getMacAddr0)), "java.net.SocketException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(NetworkInterface::*)()>(&NetworkInterface::getName))},
	{"getNetworkInterfaces", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC, $method(static_cast<$Enumeration*(*)()>(&NetworkInterface::getNetworkInterfaces)), "java.net.SocketException"},
	{"getParent", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, $method(static_cast<NetworkInterface*(NetworkInterface::*)()>(&NetworkInterface::getParent))},
	{"getSubInterfaces", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;", $PUBLIC, $method(static_cast<$Enumeration*(NetworkInterface::*)()>(&NetworkInterface::getSubInterfaces))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inetAddresses", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/InetAddress;>;", $PUBLIC, $method(static_cast<$Stream*(NetworkInterface::*)()>(&NetworkInterface::inetAddresses))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&NetworkInterface::init))},
	{"isBoundInetAddress", "(Ljava/net/InetAddress;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($InetAddress*)>(&NetworkInterface::isBoundInetAddress)), "java.net.SocketException"},
	{"isLoopback", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NetworkInterface::*)()>(&NetworkInterface::isLoopback)), "java.net.SocketException"},
	{"isLoopback0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,int32_t)>(&NetworkInterface::isLoopback0)), "java.net.SocketException"},
	{"isP2P0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,int32_t)>(&NetworkInterface::isP2P0)), "java.net.SocketException"},
	{"isPointToPoint", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NetworkInterface::*)()>(&NetworkInterface::isPointToPoint)), "java.net.SocketException"},
	{"isUp", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NetworkInterface::*)()>(&NetworkInterface::isUp)), "java.net.SocketException"},
	{"isUp0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,int32_t)>(&NetworkInterface::isUp0)), "java.net.SocketException"},
	{"isVirtual", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NetworkInterface::*)()>(&NetworkInterface::isVirtual))},
	{"networkInterfaces", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)()>(&NetworkInterface::networkInterfaces)), "java.net.SocketException"},
	{"streamFromArray", "([Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/stream/Stream<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Stream*(*)($ObjectArray*)>(&NetworkInterface::streamFromArray))},
	{"subInterfaces", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/net/NetworkInterface;>;", $PUBLIC, $method(static_cast<$Stream*(NetworkInterface::*)()>(&NetworkInterface::subInterfaces))},
	{"supportsMulticast", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NetworkInterface::*)()>(&NetworkInterface::supportsMulticast)), "java.net.SocketException"},
	{"supportsMulticast0", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,int32_t)>(&NetworkInterface::supportsMulticast0)), "java.net.SocketException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_boundInetAddress0 2
#define _METHOD_INDEX_getAll 5
#define _METHOD_INDEX_getByIndex0 7
#define _METHOD_INDEX_getByInetAddress0 9
#define _METHOD_INDEX_getByName0 11
#define _METHOD_INDEX_getMTU0 20
#define _METHOD_INDEX_getMacAddr0 21
#define _METHOD_INDEX_init 28
#define _METHOD_INDEX_isLoopback0 31
#define _METHOD_INDEX_isP2P0 32
#define _METHOD_INDEX_isUp0 35
#define _METHOD_INDEX_supportsMulticast0 41

$InnerClassInfo _NetworkInterface_InnerClassesInfo_[] = {
	{"java.net.NetworkInterface$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkInterface_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.NetworkInterface",
	"java.lang.Object",
	nullptr,
	_NetworkInterface_FieldInfo_,
	_NetworkInterface_MethodInfo_,
	nullptr,
	nullptr,
	_NetworkInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.NetworkInterface$1"
};

$Object* allocate$NetworkInterface($Class* clazz) {
	return $of($alloc(NetworkInterface));
}

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
	$useLocalCurrentObjectStackCache();
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
	for (int32_t j = 0; j < $nc(this->addrs)->length; ++j) {
		try {
			if (!trusted) {
				$nc(sec)->checkConnect($($nc($nc(this->addrs)->get(j))->getHostAddress()), -1);
			}
			local_addrs->set(i++, $nc(this->addrs)->get(j));
		} catch ($SecurityException& e) {
		}
	}
	return $fcast($InetAddressArray, $Arrays::copyOf(local_addrs, i));
}

$List* NetworkInterface::getInterfaceAddresses() {
	$useLocalCurrentObjectStackCache();
	$var($List, lst, $new($ArrayList, 1));
	if (this->bindings != nullptr) {
		$var($SecurityManager, sec, $System::getSecurityManager());
		for (int32_t j = 0; j < $nc(this->bindings)->length; ++j) {
			try {
				if (sec != nullptr) {
					sec->checkConnect($($nc($($nc($nc(this->bindings)->get(j))->getAddress()))->getHostAddress()), -1);
				}
				lst->add($nc(this->bindings)->get(j));
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
	$useLocalCurrentObjectStackCache();
	if (addr == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc($nc(addr)->holder$)->family == $InetAddress::IPv4) {
		if (!($instanceOf($Inet4Address, addr))) {
			$throwNew($IllegalArgumentException, $$str({"invalid family type: "_s, $$str($nc(addr->holder$)->family)}));
		}
	} else if ($nc(addr->holder$)->family == $InetAddress::IPv6) {
		if (!($instanceOf($Inet6Address, addr))) {
			$throwNew($IllegalArgumentException, $$str({"invalid family type: "_s, $$str($nc(addr->holder$)->family)}));
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
	$var($NetworkInterfaceArray, $ret, nullptr);
	$prepareNativeStatic(NetworkInterface, getAll, $NetworkInterfaceArray*);
	$assign($ret, $invokeNativeStatic(NetworkInterface, getAll));
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByName0($String* name) {
	$init(NetworkInterface);
	$var(NetworkInterface, $ret, nullptr);
	$prepareNativeStatic(NetworkInterface, getByName0, NetworkInterface*, $String* name);
	$assign($ret, $invokeNativeStatic(NetworkInterface, getByName0, name));
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByIndex0(int32_t index) {
	$init(NetworkInterface);
	$var(NetworkInterface, $ret, nullptr);
	$prepareNativeStatic(NetworkInterface, getByIndex0, NetworkInterface*, int32_t index);
	$assign($ret, $invokeNativeStatic(NetworkInterface, getByIndex0, index));
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::boundInetAddress0($InetAddress* addr) {
	$init(NetworkInterface);
	bool $ret = false;
	$prepareNativeStatic(NetworkInterface, boundInetAddress0, bool, $InetAddress* addr);
	$ret = $invokeNativeStatic(NetworkInterface, boundInetAddress0, addr);
	$finishNativeStatic();
	return $ret;
}

NetworkInterface* NetworkInterface::getByInetAddress0($InetAddress* addr) {
	$init(NetworkInterface);
	$var(NetworkInterface, $ret, nullptr);
	$prepareNativeStatic(NetworkInterface, getByInetAddress0, NetworkInterface*, $InetAddress* addr);
	$assign($ret, $invokeNativeStatic(NetworkInterface, getByInetAddress0, addr));
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
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		try {
			sec->checkPermission($$new($NetPermission, "getNetworkInformation"_s));
		} catch ($SecurityException& e) {
			if (!$nc($(getInetAddresses()))->hasMoreElements()) {
				return nullptr;
			}
		}
	}
	if (isLoopback0(this->name, this->index)) {
		return nullptr;
	}
	{
		$var($InetAddressArray, arr$, this->addrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InetAddress, addr, arr$->get(i$));
			{
				if ($instanceOf($Inet4Address, addr)) {
					return getMacAddr0($($nc(($cast($Inet4Address, addr)))->getAddress()), this->name, this->index);
				}
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
	bool $ret = false;
	$prepareNativeStatic(NetworkInterface, isUp0, bool, $String* name, int32_t ind);
	$ret = $invokeNativeStatic(NetworkInterface, isUp0, name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::isLoopback0($String* name, int32_t ind) {
	$init(NetworkInterface);
	bool $ret = false;
	$prepareNativeStatic(NetworkInterface, isLoopback0, bool, $String* name, int32_t ind);
	$ret = $invokeNativeStatic(NetworkInterface, isLoopback0, name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::supportsMulticast0($String* name, int32_t ind) {
	$init(NetworkInterface);
	bool $ret = false;
	$prepareNativeStatic(NetworkInterface, supportsMulticast0, bool, $String* name, int32_t ind);
	$ret = $invokeNativeStatic(NetworkInterface, supportsMulticast0, name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::isP2P0($String* name, int32_t ind) {
	$init(NetworkInterface);
	bool $ret = false;
	$prepareNativeStatic(NetworkInterface, isP2P0, bool, $String* name, int32_t ind);
	$ret = $invokeNativeStatic(NetworkInterface, isP2P0, name, ind);
	$finishNativeStatic();
	return $ret;
}

$bytes* NetworkInterface::getMacAddr0($bytes* inAddr, $String* name, int32_t ind) {
	$init(NetworkInterface);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(NetworkInterface, getMacAddr0, $bytes*, $bytes* inAddr, $String* name, int32_t ind);
	$assign($ret, $invokeNativeStatic(NetworkInterface, getMacAddr0, inAddr, name, ind));
	$finishNativeStatic();
	return $ret;
}

int32_t NetworkInterface::getMTU0($String* name, int32_t ind) {
	$init(NetworkInterface);
	int32_t $ret = 0;
	$prepareNativeStatic(NetworkInterface, getMTU0, int32_t, $String* name, int32_t ind);
	$ret = $invokeNativeStatic(NetworkInterface, getMTU0, name, ind);
	$finishNativeStatic();
	return $ret;
}

bool NetworkInterface::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
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
		if (!$nc(this->name)->equals($nc(that)->name)) {
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
	$var($InetAddressArray, thatAddrs, $nc(that)->addrs);
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
	return this->name == nullptr ? 0 : $nc(this->name)->hashCode();
}

$String* NetworkInterface::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, "name:"_s);
	$plusAssign(result, this->name == nullptr ? "null"_s : this->name);
	if (this->displayName != nullptr) {
		$plusAssign(result, $$str({" ("_s, this->displayName, ")"_s}));
	}
	return result;
}

void NetworkInterface::init() {
	$init(NetworkInterface);
	$prepareNativeStatic(NetworkInterface, init, void);
	$invokeNativeStatic(NetworkInterface, init);
	$finishNativeStatic();
}

NetworkInterface* NetworkInterface::getDefault() {
	$init(NetworkInterface);
	return NetworkInterface::defaultInterface;
}

void clinit$NetworkInterface($Class* class$) {
	{
		$BootLoader::loadLibrary("net"_s);
		NetworkInterface::init();
		$assignStatic(NetworkInterface::defaultInterface, $DefaultInterface::getDefault());
		if (NetworkInterface::defaultInterface != nullptr) {
			NetworkInterface::defaultIndex = $nc(NetworkInterface::defaultInterface)->getIndex();
		} else {
			NetworkInterface::defaultIndex = 0;
		}
	}
}

NetworkInterface::NetworkInterface() {
}

$Class* NetworkInterface::load$($String* name, bool initialize) {
	$loadClass(NetworkInterface, name, initialize, &_NetworkInterface_ClassInfo_, clinit$NetworkInterface, allocate$NetworkInterface);
	return class$;
}

$Class* NetworkInterface::class$ = nullptr;

	} // net
} // java