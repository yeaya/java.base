#include <sun/security/jca/ProviderList$1.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$1::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

$Provider$Service* ProviderList$1::getService($String* type, $String* algorithm) {
	return nullptr;
}

ProviderList$1::ProviderList$1() {
}

$Class* ProviderList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProviderList$1, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(ProviderList$1, init$, void, $String*, $String*, $String*)},
		{"getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC, $virtualMethod(ProviderList$1, getService, $Provider$Service*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderList",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderList$1",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProviderList$1));
	});
	return class$;
}

$Class* ProviderList$1::class$ = nullptr;

		} // jca
	} // security
} // sun