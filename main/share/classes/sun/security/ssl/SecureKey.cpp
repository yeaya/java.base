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

$Object* SecureKey::nullObject = nullptr;

$Object* SecureKey::getCurrentSecurityContext() {
	$init(SecureKey);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($Object, context, nullptr);
	if (sm != nullptr) {
		$assign(context, sm->getSecurityContext());
	}
	if (context == nullptr) {
		$assign(context, SecureKey::nullObject);
	}
	return context;
}

void SecureKey::init$(Object$* key) {
	$set(this, appKey, key);
	$set(this, securityCtx, getCurrentSecurityContext());
}

$Object* SecureKey::getAppKey() {
	return this->appKey;
}

$Object* SecureKey::getSecurityContext() {
	return this->securityCtx;
}

int32_t SecureKey::hashCode() {
	int32_t var$0 = $nc(this->appKey)->hashCode();
	return var$0 ^ $nc(this->securityCtx)->hashCode();
}

bool SecureKey::equals(Object$* o) {
	bool var$0 = $instanceOf(SecureKey, o) && $nc($cast(SecureKey, o)->appKey)->equals(this->appKey);
	return var$0 && $nc($cast(SecureKey, o)->securityCtx)->equals(this->securityCtx);
}

void SecureKey::clinit$($Class* clazz) {
	$assignStatic(SecureKey::nullObject, $new($Object));
}

SecureKey::SecureKey() {
}

$Class* SecureKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nullObject", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureKey, nullObject)},
		{"appKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SecureKey, appKey)},
		{"securityCtx", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SecureKey, securityCtx)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(SecureKey, init$, void, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SecureKey, equals, bool, Object$*)},
		{"getAppKey", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(SecureKey, getAppKey, $Object*)},
		{"getCurrentSecurityContext", "()Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(SecureKey, getCurrentSecurityContext, $Object*)},
		{"getSecurityContext", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(SecureKey, getSecurityContext, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SecureKey, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SecureKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecureKey, name, initialize, &classInfo$$, SecureKey::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecureKey);
	});
	return class$;
}

$Class* SecureKey::class$ = nullptr;

		} // ssl
	} // security
} // sun