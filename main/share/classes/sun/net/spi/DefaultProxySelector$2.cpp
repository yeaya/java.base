#include <sun/net/spi/DefaultProxySelector$2.h>

#include <sun/net/NetProperties.h>
#include <sun/net/spi/DefaultProxySelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {
		namespace spi {

$MethodInfo _DefaultProxySelector$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DefaultProxySelector$2, init$, void)},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(DefaultProxySelector$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _DefaultProxySelector$2_EnclosingMethodInfo_ = {
	"sun.net.spi.DefaultProxySelector",
	"socksProxyVersion",
	"()I"
};

$InnerClassInfo _DefaultProxySelector$2_InnerClassesInfo_[] = {
	{"sun.net.spi.DefaultProxySelector$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultProxySelector$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.spi.DefaultProxySelector$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DefaultProxySelector$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_DefaultProxySelector$2_EnclosingMethodInfo_,
	_DefaultProxySelector$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.spi.DefaultProxySelector"
};

$Object* allocate$DefaultProxySelector$2($Class* clazz) {
	return $of($alloc(DefaultProxySelector$2));
}

void DefaultProxySelector$2::init$() {
}

$Object* DefaultProxySelector$2::run() {
	return $of($NetProperties::getInteger("socksProxyVersion"_s, 5));
}

DefaultProxySelector$2::DefaultProxySelector$2() {
}

$Class* DefaultProxySelector$2::load$($String* name, bool initialize) {
	$loadClass(DefaultProxySelector$2, name, initialize, &_DefaultProxySelector$2_ClassInfo_, allocate$DefaultProxySelector$2);
	return class$;
}

$Class* DefaultProxySelector$2::class$ = nullptr;

		} // spi
	} // net
} // sun