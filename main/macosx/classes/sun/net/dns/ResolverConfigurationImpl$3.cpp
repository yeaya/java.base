#include <sun/net/dns/ResolverConfigurationImpl$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/LinkedList.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $LinkedList = ::java::util::LinkedList;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

$FieldInfo _ResolverConfigurationImpl$3_FieldInfo_[] = {
	{"this$0", "Lsun/net/dns/ResolverConfigurationImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ResolverConfigurationImpl$3, this$0)},
	{}
};

$MethodInfo _ResolverConfigurationImpl$3_MethodInfo_[] = {
	{"<init>", "(Lsun/net/dns/ResolverConfigurationImpl;)V", nullptr, 0, $method(static_cast<void(ResolverConfigurationImpl$3::*)($ResolverConfigurationImpl*)>(&ResolverConfigurationImpl$3::init$))},
	{"run", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ResolverConfigurationImpl$3_EnclosingMethodInfo_ = {
	"sun.net.dns.ResolverConfigurationImpl",
	"getSearchList",
	"()Ljava/util/LinkedList;"
};

$InnerClassInfo _ResolverConfigurationImpl$3_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfigurationImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResolverConfigurationImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.dns.ResolverConfigurationImpl$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ResolverConfigurationImpl$3_FieldInfo_,
	_ResolverConfigurationImpl$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/LinkedList<Ljava/lang/String;>;>;",
	&_ResolverConfigurationImpl$3_EnclosingMethodInfo_,
	_ResolverConfigurationImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfigurationImpl"
};

$Object* allocate$ResolverConfigurationImpl$3($Class* clazz) {
	return $of($alloc(ResolverConfigurationImpl$3));
}

void ResolverConfigurationImpl$3::init$($ResolverConfigurationImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ResolverConfigurationImpl$3::run() {
	$var($LinkedList, ll, nullptr);
	$assign(ll, this->this$0->resolvconf("domain"_s, 1, 1));
	if ($nc(ll)->size() > 0) {
		return $of(ll);
	}
	return $of(nullptr);
}

ResolverConfigurationImpl$3::ResolverConfigurationImpl$3() {
}

$Class* ResolverConfigurationImpl$3::load$($String* name, bool initialize) {
	$loadClass(ResolverConfigurationImpl$3, name, initialize, &_ResolverConfigurationImpl$3_ClassInfo_, allocate$ResolverConfigurationImpl$3);
	return class$;
}

$Class* ResolverConfigurationImpl$3::class$ = nullptr;

		} // dns
	} // net
} // sun