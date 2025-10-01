#include <java/security/Policy$PolicyDelegate.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Policy$Parameters.h>
#include <java/security/Policy.h>
#include <java/security/PolicySpi.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Policy = ::java::security::Policy;
using $Policy$Parameters = ::java::security::Policy$Parameters;
using $PolicySpi = ::java::security::PolicySpi;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Provider = ::java::security::Provider;

namespace java {
	namespace security {

$FieldInfo _Policy$PolicyDelegate_FieldInfo_[] = {
	{"spi", "Ljava/security/PolicySpi;", nullptr, $PRIVATE, $field(Policy$PolicyDelegate, spi)},
	{"p", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(Policy$PolicyDelegate, p)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Policy$PolicyDelegate, type)},
	{"params", "Ljava/security/Policy$Parameters;", nullptr, $PRIVATE, $field(Policy$PolicyDelegate, params)},
	{}
};

$MethodInfo _Policy$PolicyDelegate_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PolicySpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/Policy$Parameters;)V", nullptr, $PRIVATE, $method(static_cast<void(Policy$PolicyDelegate::*)($PolicySpi*,$Provider*,$String*,$Policy$Parameters*)>(&Policy$PolicyDelegate::init$))},
	{"getParameters", "()Ljava/security/Policy$Parameters;", nullptr, $PUBLIC},
	{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"getPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"refresh", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Policy$PolicyDelegate_InnerClassesInfo_[] = {
	{"java.security.Policy$PolicyDelegate", "java.security.Policy", "PolicyDelegate", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Policy$PolicyDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$PolicyDelegate",
	"java.security.Policy",
	nullptr,
	_Policy$PolicyDelegate_FieldInfo_,
	_Policy$PolicyDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_Policy$PolicyDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$PolicyDelegate($Class* clazz) {
	return $of($alloc(Policy$PolicyDelegate));
}

void Policy$PolicyDelegate::init$($PolicySpi* spi, $Provider* p, $String* type, $Policy$Parameters* params) {
	$Policy::init$();
	$set(this, spi, spi);
	$set(this, p, p);
	$set(this, type, type);
	$set(this, params, params);
}

$String* Policy$PolicyDelegate::getType() {
	return this->type;
}

$Policy$Parameters* Policy$PolicyDelegate::getParameters() {
	return this->params;
}

$Provider* Policy$PolicyDelegate::getProvider() {
	return this->p;
}

$PermissionCollection* Policy$PolicyDelegate::getPermissions($CodeSource* codesource) {
	return $nc(this->spi)->engineGetPermissions(codesource);
}

$PermissionCollection* Policy$PolicyDelegate::getPermissions($ProtectionDomain* domain) {
	return $nc(this->spi)->engineGetPermissions(domain);
}

bool Policy$PolicyDelegate::implies($ProtectionDomain* domain, $Permission* perm) {
	return $nc(this->spi)->engineImplies(domain, perm);
}

void Policy$PolicyDelegate::refresh() {
	$nc(this->spi)->engineRefresh();
}

Policy$PolicyDelegate::Policy$PolicyDelegate() {
}

$Class* Policy$PolicyDelegate::load$($String* name, bool initialize) {
	$loadClass(Policy$PolicyDelegate, name, initialize, &_Policy$PolicyDelegate_ClassInfo_, allocate$Policy$PolicyDelegate);
	return class$;
}

$Class* Policy$PolicyDelegate::class$ = nullptr;

	} // security
} // java