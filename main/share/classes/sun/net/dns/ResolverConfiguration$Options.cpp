#include <sun/net/dns/ResolverConfiguration$Options.h>

#include <sun/net/dns/ResolverConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace dns {

$MethodInfo _ResolverConfiguration$Options_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ResolverConfiguration$Options, init$, void)},
	{"attempts", "()I", nullptr, $PUBLIC, $virtualMethod(ResolverConfiguration$Options, attempts, int32_t)},
	{"retrans", "()I", nullptr, $PUBLIC, $virtualMethod(ResolverConfiguration$Options, retrans, int32_t)},
	{}
};

$InnerClassInfo _ResolverConfiguration$Options_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ResolverConfiguration$Options_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.dns.ResolverConfiguration$Options",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ResolverConfiguration$Options_MethodInfo_,
	nullptr,
	nullptr,
	_ResolverConfiguration$Options_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfiguration"
};

$Object* allocate$ResolverConfiguration$Options($Class* clazz) {
	return $of($alloc(ResolverConfiguration$Options));
}

void ResolverConfiguration$Options::init$() {
}

int32_t ResolverConfiguration$Options::attempts() {
	return -1;
}

int32_t ResolverConfiguration$Options::retrans() {
	return -1;
}

ResolverConfiguration$Options::ResolverConfiguration$Options() {
}

$Class* ResolverConfiguration$Options::load$($String* name, bool initialize) {
	$loadClass(ResolverConfiguration$Options, name, initialize, &_ResolverConfiguration$Options_ClassInfo_, allocate$ResolverConfiguration$Options);
	return class$;
}

$Class* ResolverConfiguration$Options::class$ = nullptr;

		} // dns
	} // net
} // sun