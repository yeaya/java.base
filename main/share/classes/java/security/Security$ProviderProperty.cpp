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

$FieldInfo _Security$ProviderProperty_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, 0, $field(Security$ProviderProperty, className)},
	{"provider", "Ljava/security/Provider;", nullptr, 0, $field(Security$ProviderProperty, provider)},
	{}
};

$MethodInfo _Security$ProviderProperty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Security$ProviderProperty, init$, void)},
	{}
};

$InnerClassInfo _Security$ProviderProperty_InnerClassesInfo_[] = {
	{"java.security.Security$ProviderProperty", "java.security.Security", "ProviderProperty", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Security$ProviderProperty_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Security$ProviderProperty",
	"java.lang.Object",
	nullptr,
	_Security$ProviderProperty_FieldInfo_,
	_Security$ProviderProperty_MethodInfo_,
	nullptr,
	nullptr,
	_Security$ProviderProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Security"
};

$Object* allocate$Security$ProviderProperty($Class* clazz) {
	return $of($alloc(Security$ProviderProperty));
}

void Security$ProviderProperty::init$() {
}

Security$ProviderProperty::Security$ProviderProperty() {
}

$Class* Security$ProviderProperty::load$($String* name, bool initialize) {
	$loadClass(Security$ProviderProperty, name, initialize, &_Security$ProviderProperty_ClassInfo_, allocate$Security$ProviderProperty);
	return class$;
}

$Class* Security$ProviderProperty::class$ = nullptr;

	} // security
} // java