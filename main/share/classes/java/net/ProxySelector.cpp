#include <java/net/ProxySelector.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetPermission.h>
#include <java/net/ProxySelector$StaticProxySelector.h>
#include <java/net/URI.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_PROXYSELECTOR_PERMISSION
#undef SET_PROXYSELECTOR_PERMISSION

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetPermission = ::java::net::NetPermission;
using $ProxySelector$StaticProxySelector = ::java::net::ProxySelector$StaticProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $List = ::java::util::List;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$FieldInfo _ProxySelector_FieldInfo_[] = {
	{"theProxySelector", "Ljava/net/ProxySelector;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ProxySelector, theProxySelector)},
	{}
};

$MethodInfo _ProxySelector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProxySelector::*)()>(&ProxySelector::init$))},
	{"connectFailed", "(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefault", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProxySelector*(*)()>(&ProxySelector::getDefault))},
	{"of", "(Ljava/net/InetSocketAddress;)Ljava/net/ProxySelector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProxySelector*(*)($InetSocketAddress*)>(&ProxySelector::of))},
	{"select", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/Proxy;>;", $PUBLIC | $ABSTRACT},
	{"setDefault", "(Ljava/net/ProxySelector;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(ProxySelector*)>(&ProxySelector::setDefault))},
	{}
};

$InnerClassInfo _ProxySelector_InnerClassesInfo_[] = {
	{"java.net.ProxySelector$StaticProxySelector", "java.net.ProxySelector", "StaticProxySelector", $STATIC},
	{}
};

$ClassInfo _ProxySelector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.ProxySelector",
	"java.lang.Object",
	nullptr,
	_ProxySelector_FieldInfo_,
	_ProxySelector_MethodInfo_,
	nullptr,
	nullptr,
	_ProxySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.ProxySelector$StaticProxySelector"
};

$Object* allocate$ProxySelector($Class* clazz) {
	return $of($alloc(ProxySelector));
}


$volatile(ProxySelector*) ProxySelector::theProxySelector = nullptr;

void ProxySelector::init$() {
}

ProxySelector* ProxySelector::getDefault() {
	$init(ProxySelector);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($SecurityConstants::GET_PROXYSELECTOR_PERMISSION);
	}
	return ProxySelector::theProxySelector;
}

void ProxySelector::setDefault(ProxySelector* ps) {
	$init(ProxySelector);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($SecurityConstants::SET_PROXYSELECTOR_PERMISSION);
	}
	$assignStatic(ProxySelector::theProxySelector, ps);
}

ProxySelector* ProxySelector::of($InetSocketAddress* proxyAddress) {
	$init(ProxySelector);
	return $new($ProxySelector$StaticProxySelector, proxyAddress);
}

void clinit$ProxySelector($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$Class* c = $Class::forName("sun.net.spi.DefaultProxySelector"_s);
			if (c != nullptr && ProxySelector::class$->isAssignableFrom(c)) {
				$var(ProxySelector, tmp, $cast(ProxySelector, c->newInstance()));
				$assignStatic(ProxySelector::theProxySelector, tmp);
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$assignStatic(ProxySelector::theProxySelector, nullptr);
		}
	}
}

ProxySelector::ProxySelector() {
}

$Class* ProxySelector::load$($String* name, bool initialize) {
	$loadClass(ProxySelector, name, initialize, &_ProxySelector_ClassInfo_, clinit$ProxySelector, allocate$ProxySelector);
	return class$;
}

$Class* ProxySelector::class$ = nullptr;

	} // net
} // java