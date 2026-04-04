#include <javax/crypto/JceSecurity$IdentityWrapper.h>
#include <java/security/Provider.h>
#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace javax {
	namespace crypto {

void JceSecurity$IdentityWrapper::init$($Provider* obj) {
	$set(this, obj, obj);
}

bool JceSecurity$IdentityWrapper::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(JceSecurity$IdentityWrapper, o))) {
		return false;
	}
	return this->obj == $nc($cast(JceSecurity$IdentityWrapper, o))->obj;
}

int32_t JceSecurity$IdentityWrapper::hashCode() {
	return $System::identityHashCode(this->obj);
}

JceSecurity$IdentityWrapper::JceSecurity$IdentityWrapper() {
}

$Class* JceSecurity$IdentityWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/security/Provider;", nullptr, $FINAL, $field(JceSecurity$IdentityWrapper, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Provider;)V", nullptr, 0, $method(JceSecurity$IdentityWrapper, init$, void, $Provider*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JceSecurity$IdentityWrapper, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JceSecurity$IdentityWrapper, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.JceSecurity$IdentityWrapper", "javax.crypto.JceSecurity", "IdentityWrapper", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.crypto.JceSecurity$IdentityWrapper",
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
		"javax.crypto.JceSecurity"
	};
	$loadClass(JceSecurity$IdentityWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceSecurity$IdentityWrapper);
	});
	return class$;
}

$Class* JceSecurity$IdentityWrapper::class$ = nullptr;

	} // crypto
} // javax