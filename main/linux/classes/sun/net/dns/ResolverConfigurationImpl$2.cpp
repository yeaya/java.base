#include <sun/net/dns/ResolverConfigurationImpl$2.h>
#include <java/util/LinkedList.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedList = ::java::util::LinkedList;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

void ResolverConfigurationImpl$2::init$($ResolverConfigurationImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ResolverConfigurationImpl$2::run() {
	$var($LinkedList, ll, nullptr);
	$assign(ll, this->this$0->resolvconf("search"_s, 6, 1));
	if ($nc(ll)->size() > 0) {
		return $of(ll);
	}
	return nullptr;
}

ResolverConfigurationImpl$2::ResolverConfigurationImpl$2() {
}

$Class* ResolverConfigurationImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/dns/ResolverConfigurationImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ResolverConfigurationImpl$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/dns/ResolverConfigurationImpl;)V", nullptr, 0, $method(ResolverConfigurationImpl$2, init$, void, $ResolverConfigurationImpl*)},
		{"run", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResolverConfigurationImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.dns.ResolverConfigurationImpl",
		"getSearchList",
		"()Ljava/util/LinkedList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfigurationImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.dns.ResolverConfigurationImpl$2",
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
	$loadClass(ResolverConfigurationImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfigurationImpl$2);
	});
	return class$;
}

$Class* ResolverConfigurationImpl$2::class$ = nullptr;

		} // dns
	} // net
} // sun