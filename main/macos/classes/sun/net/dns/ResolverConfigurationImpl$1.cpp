#include <sun/net/dns/ResolverConfigurationImpl$1.h>

#include <java/util/LinkedList.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

$FieldInfo _ResolverConfigurationImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/dns/ResolverConfigurationImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ResolverConfigurationImpl$1, this$0)},
	{}
};

$MethodInfo _ResolverConfigurationImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/dns/ResolverConfigurationImpl;)V", nullptr, 0, $method(ResolverConfigurationImpl$1, init$, void, $ResolverConfigurationImpl*)},
	{"run", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResolverConfigurationImpl$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _ResolverConfigurationImpl$1_EnclosingMethodInfo_ = {
	"sun.net.dns.ResolverConfigurationImpl",
	"loadConfig",
	"()V"
};

$InnerClassInfo _ResolverConfigurationImpl$1_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfigurationImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResolverConfigurationImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.dns.ResolverConfigurationImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ResolverConfigurationImpl$1_FieldInfo_,
	_ResolverConfigurationImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/LinkedList<Ljava/lang/String;>;>;",
	&_ResolverConfigurationImpl$1_EnclosingMethodInfo_,
	_ResolverConfigurationImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfigurationImpl"
};

$Object* allocate$ResolverConfigurationImpl$1($Class* clazz) {
	return $of($alloc(ResolverConfigurationImpl$1));
}

void ResolverConfigurationImpl$1::init$($ResolverConfigurationImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ResolverConfigurationImpl$1::run() {
	return $of(this->this$0->resolvconf("nameserver"_s, 1, 5));
}

ResolverConfigurationImpl$1::ResolverConfigurationImpl$1() {
}

$Class* ResolverConfigurationImpl$1::load$($String* name, bool initialize) {
	$loadClass(ResolverConfigurationImpl$1, name, initialize, &_ResolverConfigurationImpl$1_ClassInfo_, allocate$ResolverConfigurationImpl$1);
	return class$;
}

$Class* ResolverConfigurationImpl$1::class$ = nullptr;

		} // dns
	} // net
} // sun