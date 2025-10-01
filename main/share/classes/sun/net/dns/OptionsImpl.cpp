#include <sun/net/dns/OptionsImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfiguration$Options = ::sun::net::dns::ResolverConfiguration$Options;

namespace sun {
	namespace net {
		namespace dns {

$MethodInfo _OptionsImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OptionsImpl::*)()>(&OptionsImpl::init$))},
	{}
};

$InnerClassInfo _OptionsImpl_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _OptionsImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.dns.OptionsImpl",
	"sun.net.dns.ResolverConfiguration$Options",
	nullptr,
	nullptr,
	_OptionsImpl_MethodInfo_,
	nullptr,
	nullptr,
	_OptionsImpl_InnerClassesInfo_
};

$Object* allocate$OptionsImpl($Class* clazz) {
	return $of($alloc(OptionsImpl));
}

void OptionsImpl::init$() {
	$ResolverConfiguration$Options::init$();
}

OptionsImpl::OptionsImpl() {
}

$Class* OptionsImpl::load$($String* name, bool initialize) {
	$loadClass(OptionsImpl, name, initialize, &_OptionsImpl_ClassInfo_, allocate$OptionsImpl);
	return class$;
}

$Class* OptionsImpl::class$ = nullptr;

		} // dns
	} // net
} // sun