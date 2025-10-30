#include <sun/net/spi/DefaultProxySelector$1.h>

#include <sun/net/NetProperties.h>
#include <sun/net/spi/DefaultProxySelector.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetProperties = ::sun::net::NetProperties;
using $DefaultProxySelector = ::sun::net::spi::DefaultProxySelector;

namespace sun {
	namespace net {
		namespace spi {

$MethodInfo _DefaultProxySelector$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultProxySelector$1::*)()>(&DefaultProxySelector$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultProxySelector$1_EnclosingMethodInfo_ = {
	"sun.net.spi.DefaultProxySelector",
	nullptr,
	nullptr
};

$InnerClassInfo _DefaultProxySelector$1_InnerClassesInfo_[] = {
	{"sun.net.spi.DefaultProxySelector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultProxySelector$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.spi.DefaultProxySelector$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DefaultProxySelector$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_DefaultProxySelector$1_EnclosingMethodInfo_,
	_DefaultProxySelector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.spi.DefaultProxySelector"
};

$Object* allocate$DefaultProxySelector$1($Class* clazz) {
	return $of($alloc(DefaultProxySelector$1));
}

void DefaultProxySelector$1::init$() {
}

$Object* DefaultProxySelector$1::run() {
	return $of($NetProperties::getBoolean("java.net.useSystemProxies"_s));
}

DefaultProxySelector$1::DefaultProxySelector$1() {
}

$Class* DefaultProxySelector$1::load$($String* name, bool initialize) {
	$loadClass(DefaultProxySelector$1, name, initialize, &_DefaultProxySelector$1_ClassInfo_, allocate$DefaultProxySelector$1);
	return class$;
}

$Class* DefaultProxySelector$1::class$ = nullptr;

		} // spi
	} // net
} // sun