#include <java/security/Security$ProviderProperty.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

void Security$ProviderProperty::init$() {
}

Security$ProviderProperty::Security$ProviderProperty() {
}

$Class* Security$ProviderProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, 0, $field(Security$ProviderProperty, className)},
		{"provider", "Ljava/security/Provider;", nullptr, 0, $field(Security$ProviderProperty, provider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Security$ProviderProperty, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Security$ProviderProperty", "java.security.Security", "ProviderProperty", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Security$ProviderProperty",
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
		"java.security.Security"
	};
	$loadClass(Security$ProviderProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Security$ProviderProperty);
	});
	return class$;
}

$Class* Security$ProviderProperty::class$ = nullptr;

	} // security
} // java