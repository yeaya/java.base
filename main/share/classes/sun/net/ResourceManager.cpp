#include <sun/net/ResourceManager.h>

#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/SocketException.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DEFAULT_MAX_SOCKETS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SocketException = ::java::net::SocketException;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {

$FieldInfo _ResourceManager_FieldInfo_[] = {
	{"DEFAULT_MAX_SOCKETS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResourceManager, DEFAULT_MAX_SOCKETS)},
	{"maxSockets", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, maxSockets)},
	{"numSockets", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, numSockets)},
	{}
};

$MethodInfo _ResourceManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceManager::*)()>(&ResourceManager::init$))},
	{"afterUdpClose", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ResourceManager::afterUdpClose))},
	{"beforeUdpCreate", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ResourceManager::beforeUdpCreate)), "java.net.SocketException"},
	{}
};

$ClassInfo _ResourceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ResourceManager",
	"java.lang.Object",
	nullptr,
	_ResourceManager_FieldInfo_,
	_ResourceManager_MethodInfo_
};

$Object* allocate$ResourceManager($Class* clazz) {
	return $of($alloc(ResourceManager));
}

int32_t ResourceManager::maxSockets = 0;
$AtomicInteger* ResourceManager::numSockets = nullptr;

void ResourceManager::init$() {
}

void ResourceManager::beforeUdpCreate() {
	$init(ResourceManager);
	if ($System::getSecurityManager() != nullptr) {
		if ($nc(ResourceManager::numSockets)->incrementAndGet() > ResourceManager::maxSockets) {
			$nc(ResourceManager::numSockets)->decrementAndGet();
			$throwNew($SocketException, "maximum number of DatagramSockets reached"_s);
		}
	}
}

void ResourceManager::afterUdpClose() {
	$init(ResourceManager);
	if ($System::getSecurityManager() != nullptr) {
		$nc(ResourceManager::numSockets)->decrementAndGet();
	}
}

void clinit$ResourceManager($Class* class$) {
	{
		$var($String, prop, $GetPropertyAction::privilegedGetProperty("sun.net.maxDatagramSockets"_s));
		int32_t defmax = ResourceManager::DEFAULT_MAX_SOCKETS;
		try {
			if (prop != nullptr) {
				defmax = $Integer::parseInt(prop);
			}
		} catch ($NumberFormatException& e) {
		}
		ResourceManager::maxSockets = defmax;
		$assignStatic(ResourceManager::numSockets, $new($AtomicInteger));
	}
}

ResourceManager::ResourceManager() {
}

$Class* ResourceManager::load$($String* name, bool initialize) {
	$loadClass(ResourceManager, name, initialize, &_ResourceManager_ClassInfo_, clinit$ResourceManager, allocate$ResourceManager);
	return class$;
}

$Class* ResourceManager::class$ = nullptr;

	} // net
} // sun