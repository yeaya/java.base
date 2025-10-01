#include <java/security/SecureClassLoader$CodeSourceKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/CodeSource.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {

$FieldInfo _SecureClassLoader$CodeSourceKey_FieldInfo_[] = {
	{"cs", "Ljava/security/CodeSource;", nullptr, $PRIVATE | $FINAL, $field(SecureClassLoader$CodeSourceKey, cs)},
	{}
};

$MethodInfo _SecureClassLoader$CodeSourceKey_MethodInfo_[] = {
	{"<init>", "(Ljava/security/CodeSource;)V", nullptr, 0, $method(static_cast<void(SecureClassLoader$CodeSourceKey::*)($CodeSource*)>(&SecureClassLoader$CodeSourceKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SecureClassLoader$CodeSourceKey_InnerClassesInfo_[] = {
	{"java.security.SecureClassLoader$CodeSourceKey", "java.security.SecureClassLoader", "CodeSourceKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SecureClassLoader$CodeSourceKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.SecureClassLoader$CodeSourceKey",
	"java.lang.Object",
	nullptr,
	_SecureClassLoader$CodeSourceKey_FieldInfo_,
	_SecureClassLoader$CodeSourceKey_MethodInfo_,
	nullptr,
	nullptr,
	_SecureClassLoader$CodeSourceKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.SecureClassLoader"
};

$Object* allocate$SecureClassLoader$CodeSourceKey($Class* clazz) {
	return $of($alloc(SecureClassLoader$CodeSourceKey));
}

void SecureClassLoader$CodeSourceKey::init$($CodeSource* cs) {
	$set(this, cs, cs);
}

int32_t SecureClassLoader$CodeSourceKey::hashCode() {
	$var($String, locationNoFrag, $nc(this->cs)->getLocationNoFragString());
	return locationNoFrag != nullptr ? $nc(locationNoFrag)->hashCode() : 0;
}

bool SecureClassLoader$CodeSourceKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	$var(SecureClassLoader$CodeSourceKey, other, nullptr);
	bool var$2 = $instanceOf(SecureClassLoader$CodeSourceKey, obj);
	if (var$2) {
		$assign(other, $cast(SecureClassLoader$CodeSourceKey, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$3, $of($nc(this->cs)->getLocationNoFragString()));
		var$1 = $Objects::equals(var$3, $($nc($nc(other)->cs)->getLocationNoFragString()));
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->cs)->matchCerts($nc(other)->cs, true);
}

SecureClassLoader$CodeSourceKey::SecureClassLoader$CodeSourceKey() {
}

$Class* SecureClassLoader$CodeSourceKey::load$($String* name, bool initialize) {
	$loadClass(SecureClassLoader$CodeSourceKey, name, initialize, &_SecureClassLoader$CodeSourceKey_ClassInfo_, allocate$SecureClassLoader$CodeSourceKey);
	return class$;
}

$Class* SecureClassLoader$CodeSourceKey::class$ = nullptr;

	} // security
} // java