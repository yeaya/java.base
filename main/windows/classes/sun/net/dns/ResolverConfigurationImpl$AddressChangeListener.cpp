#include <sun/net/dns/ResolverConfigurationImpl$AddressChangeListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

$MethodInfo _ResolverConfigurationImpl$AddressChangeListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResolverConfigurationImpl$AddressChangeListener::*)()>(&ResolverConfigurationImpl$AddressChangeListener::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ResolverConfigurationImpl$AddressChangeListener_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener", "sun.net.dns.ResolverConfigurationImpl", "AddressChangeListener", $STATIC},
	{}
};

$ClassInfo _ResolverConfigurationImpl$AddressChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_ResolverConfigurationImpl$AddressChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_ResolverConfigurationImpl$AddressChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfigurationImpl"
};

$Object* allocate$ResolverConfigurationImpl$AddressChangeListener($Class* clazz) {
	return $of($alloc(ResolverConfigurationImpl$AddressChangeListener));
}

void ResolverConfigurationImpl$AddressChangeListener::init$() {
	$Thread::init$();
}

void ResolverConfigurationImpl$AddressChangeListener::run() {
	for (;;) {
		if ($ResolverConfigurationImpl::notifyAddrChange0() != 0) {
			return;
		}
		$synchronized($ResolverConfigurationImpl::lock) {
			$ResolverConfigurationImpl::changed = true;
		}
	}
}

ResolverConfigurationImpl$AddressChangeListener::ResolverConfigurationImpl$AddressChangeListener() {
}

$Class* ResolverConfigurationImpl$AddressChangeListener::load$($String* name, bool initialize) {
	$loadClass(ResolverConfigurationImpl$AddressChangeListener, name, initialize, &_ResolverConfigurationImpl$AddressChangeListener_ClassInfo_, allocate$ResolverConfigurationImpl$AddressChangeListener);
	return class$;
}

$Class* ResolverConfigurationImpl$AddressChangeListener::class$ = nullptr;

		} // dns
	} // net
} // sun