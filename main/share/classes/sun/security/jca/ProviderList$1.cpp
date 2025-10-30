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

$FieldInfo _ProviderList$1_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProviderList$1, serialVersionUID)},
	{}
};

$MethodInfo _ProviderList$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ProviderList$1::*)($String*,$String*,$String*)>(&ProviderList$1::init$))},
	{"getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProviderList$1_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderList",
	nullptr,
	nullptr
};

$InnerClassInfo _ProviderList$1_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderList$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderList$1",
	"java.security.Provider",
	nullptr,
	_ProviderList$1_FieldInfo_,
	_ProviderList$1_MethodInfo_,
	nullptr,
	&_ProviderList$1_EnclosingMethodInfo_,
	_ProviderList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderList"
};

$Object* allocate$ProviderList$1($Class* clazz) {
	return $of($alloc(ProviderList$1));
}

void ProviderList$1::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

$Provider$Service* ProviderList$1::getService($String* type, $String* algorithm) {
	return nullptr;
}

ProviderList$1::ProviderList$1() {
}

$Class* ProviderList$1::load$($String* name, bool initialize) {
	$loadClass(ProviderList$1, name, initialize, &_ProviderList$1_ClassInfo_, allocate$ProviderList$1);
	return class$;
}

$Class* ProviderList$1::class$ = nullptr;

		} // jca
	} // security
} // sun