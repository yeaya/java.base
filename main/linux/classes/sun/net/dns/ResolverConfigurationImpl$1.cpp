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

void ResolverConfigurationImpl$1::init$($ResolverConfigurationImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ResolverConfigurationImpl$1::run() {
	return $of(this->this$0->resolvconf("nameserver"_s, 1, 5));
}

ResolverConfigurationImpl$1::ResolverConfigurationImpl$1() {
}

$Class* ResolverConfigurationImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/dns/ResolverConfigurationImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ResolverConfigurationImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/dns/ResolverConfigurationImpl;)V", nullptr, 0, $method(ResolverConfigurationImpl$1, init$, void, $ResolverConfigurationImpl*)},
		{"run", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResolverConfigurationImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.dns.ResolverConfigurationImpl",
		"loadConfig",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfigurationImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.dns.ResolverConfigurationImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/LinkedList<Ljava/lang/String;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.dns.ResolverConfigurationImpl"
	};
	$loadClass(ResolverConfigurationImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfigurationImpl$1);
	});
	return class$;
}

$Class* ResolverConfigurationImpl$1::class$ = nullptr;

		} // dns
	} // net
} // sun