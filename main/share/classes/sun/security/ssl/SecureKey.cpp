#include <sun/security/ssl/SecureKey.h>

#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SecureKey_FieldInfo_[] = {
	{"nullObject", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureKey, nullObject)},
	{"appKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SecureKey, appKey)},
	{"securityCtx", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SecureKey, securityCtx)},
	{}
};

$MethodInfo _SecureKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(SecureKey::*)(Object$*)>(&SecureKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAppKey", "()Ljava/lang/Object;", nullptr, 0},
	{"getCurrentSecurityContext", "()Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)()>(&SecureKey::getCurrentSecurityContext))},
	{"getSecurityContext", "()Ljava/lang/Object;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SecureKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SecureKey",
	"java.lang.Object",
	nullptr,
	_SecureKey_FieldInfo_,
	_SecureKey_MethodInfo_
};

$Object* allocate$SecureKey($Class* clazz) {
	return $of($alloc(SecureKey));
}

$Object* SecureKey::nullObject = nullptr;

$Object* SecureKey::getCurrentSecurityContext() {
	$init(SecureKey);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($Object, context, nullptr);
	if (sm != nullptr) {
		$assign(context, sm->getSecurityContext());
	}
	if (context == nullptr) {
		$assign(context, SecureKey::nullObject);
	}
	return $of(context);
}

void SecureKey::init$(Object$* key) {
	$set(this, appKey, key);
	$set(this, securityCtx, getCurrentSecurityContext());
}

$Object* SecureKey::getAppKey() {
	return $of(this->appKey);
}

$Object* SecureKey::getSecurityContext() {
	return $of(this->securityCtx);
}

int32_t SecureKey::hashCode() {
	int32_t var$0 = $nc($of(this->appKey))->hashCode();
	return var$0 ^ $nc($of(this->securityCtx))->hashCode();
}

bool SecureKey::equals(Object$* o) {
	bool var$0 = $instanceOf(SecureKey, o) && $nc($of($nc(($cast(SecureKey, o)))->appKey))->equals(this->appKey);
	return var$0 && $nc($of(($cast(SecureKey, o))->securityCtx))->equals(this->securityCtx);
}

void clinit$SecureKey($Class* class$) {
	$assignStatic(SecureKey::nullObject, $new($Object));
}

SecureKey::SecureKey() {
}

$Class* SecureKey::load$($String* name, bool initialize) {
	$loadClass(SecureKey, name, initialize, &_SecureKey_ClassInfo_, clinit$SecureKey, allocate$SecureKey);
	return class$;
}

$Class* SecureKey::class$ = nullptr;

		} // ssl
	} // security
} // sun