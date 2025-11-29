#include <sun/net/dns/ResolverConfiguration.h>

#include <java/util/List.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

$FieldInfo _ResolverConfiguration_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverConfiguration, lock)},
	{"provider", "Lsun/net/dns/ResolverConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfiguration, provider)},
	{}
};

$MethodInfo _ResolverConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ResolverConfiguration::*)()>(&ResolverConfiguration::init$))},
	{"nameservers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"open", "()Lsun/net/dns/ResolverConfiguration;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResolverConfiguration*(*)()>(&ResolverConfiguration::open))},
	{"options", "()Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PUBLIC | $ABSTRACT},
	{"searchlist", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ResolverConfiguration_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ResolverConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.dns.ResolverConfiguration",
	"java.lang.Object",
	nullptr,
	_ResolverConfiguration_FieldInfo_,
	_ResolverConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_ResolverConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfiguration$Options"
};

$Object* allocate$ResolverConfiguration($Class* clazz) {
	return $of($alloc(ResolverConfiguration));
}

$Object* ResolverConfiguration::lock = nullptr;
ResolverConfiguration* ResolverConfiguration::provider = nullptr;

void ResolverConfiguration::init$() {
}

ResolverConfiguration* ResolverConfiguration::open() {
	$init(ResolverConfiguration);
	$synchronized(ResolverConfiguration::lock) {
		if (ResolverConfiguration::provider == nullptr) {
			$assignStatic(ResolverConfiguration::provider, $new($ResolverConfigurationImpl));
		}
		return ResolverConfiguration::provider;
	}
}

void clinit$ResolverConfiguration($Class* class$) {
	$assignStatic(ResolverConfiguration::lock, $new($Object));
}

ResolverConfiguration::ResolverConfiguration() {
}

$Class* ResolverConfiguration::load$($String* name, bool initialize) {
	$loadClass(ResolverConfiguration, name, initialize, &_ResolverConfiguration_ClassInfo_, clinit$ResolverConfiguration, allocate$ResolverConfiguration);
	return class$;
}

$Class* ResolverConfiguration::class$ = nullptr;

		} // dns
	} // net
} // sun