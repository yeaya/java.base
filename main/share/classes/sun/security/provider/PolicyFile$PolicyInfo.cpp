#include <sun/security/provider/PolicyFile$PolicyInfo.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <jdk/internal/access/JavaSecurityAccess$ProtectionDomainCache.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $JavaSecurityAccess$ProtectionDomainCacheArray = $Array<::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Random = ::java::util::Random;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $JavaSecurityAccess$ProtectionDomainCache = ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$PolicyInfo::init$(int32_t numCaches) {
	$useLocalObjectStack();
	$set(this, policyEntries, $new($ArrayList));
	$set(this, aliasMapping, $Collections::synchronizedMap($$new($HashMap, 11)));
	$set(this, pdMapping, $new($JavaSecurityAccess$ProtectionDomainCacheArray, numCaches));
	$var($JavaSecurityAccess, jspda, $SharedSecrets::getJavaSecurityAccess());
	for (int32_t i = 0; i < numCaches; ++i) {
		this->pdMapping->set(i, $($nc(jspda)->getProtectionDomainCache()));
	}
	if (numCaches > 1) {
		$set(this, random, $new($Random));
	}
}

$JavaSecurityAccess$ProtectionDomainCache* PolicyFile$PolicyInfo::getPdMapping() {
	if (this->pdMapping->length == 1) {
		return this->pdMapping->get(0);
	} else {
		int32_t i = $Math::abs($mod($nc(this->random)->nextInt(), this->pdMapping->length));
		return this->pdMapping->get(i);
	}
}

PolicyFile$PolicyInfo::PolicyFile$PolicyInfo() {
}

$Class* PolicyFile$PolicyInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"verbose", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PolicyFile$PolicyInfo, verbose)},
		{"policyEntries", "Ljava/util/List;", "Ljava/util/List<Lsun/security/provider/PolicyFile$PolicyEntry;>;", $FINAL, $field(PolicyFile$PolicyInfo, policyEntries)},
		{"aliasMapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $FINAL, $field(PolicyFile$PolicyInfo, aliasMapping)},
		{"pdMapping", "[Ljdk/internal/access/JavaSecurityAccess$ProtectionDomainCache;", nullptr, $PRIVATE | $FINAL, $field(PolicyFile$PolicyInfo, pdMapping)},
		{"random", "Ljava/util/Random;", nullptr, $PRIVATE, $field(PolicyFile$PolicyInfo, random)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(PolicyFile$PolicyInfo, init$, void, int32_t)},
		{"getPdMapping", "()Ljdk/internal/access/JavaSecurityAccess$ProtectionDomainCache;", nullptr, 0, $virtualMethod(PolicyFile$PolicyInfo, getPdMapping, $JavaSecurityAccess$ProtectionDomainCache*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$PolicyInfo", "sun.security.provider.PolicyFile", "PolicyInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$PolicyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$PolicyInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$PolicyInfo);
	});
	return class$;
}

$Class* PolicyFile$PolicyInfo::class$ = nullptr;

		} // provider
	} // security
} // sun