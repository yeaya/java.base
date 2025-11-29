#include <java/security/Provider$ServiceKey.h>

#include <java/security/Provider.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace security {

$FieldInfo _Provider$ServiceKey_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Provider$ServiceKey, type)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Provider$ServiceKey, algorithm)},
	{"originalAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Provider$ServiceKey, originalAlgorithm)},
	{}
};

$MethodInfo _Provider$ServiceKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Provider$ServiceKey::*)($String*,$String*,bool)>(&Provider$ServiceKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Provider$ServiceKey_InnerClassesInfo_[] = {
	{"java.security.Provider$ServiceKey", "java.security.Provider", "ServiceKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Provider$ServiceKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Provider$ServiceKey",
	"java.lang.Object",
	nullptr,
	_Provider$ServiceKey_FieldInfo_,
	_Provider$ServiceKey_MethodInfo_,
	nullptr,
	nullptr,
	_Provider$ServiceKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Provider"
};

$Object* allocate$Provider$ServiceKey($Class* clazz) {
	return $of($alloc(Provider$ServiceKey));
}

void Provider$ServiceKey::init$($String* type, $String* algorithm$renamed, bool intern) {
	$var($String, algorithm, algorithm$renamed);
	$set(this, type, type);
	$set(this, originalAlgorithm, algorithm);
	$init($Locale);
	$assign(algorithm, $nc(algorithm)->toUpperCase($Locale::ENGLISH));
	$set(this, algorithm, intern ? algorithm->intern() : algorithm);
}

int32_t Provider$ServiceKey::hashCode() {
	int32_t var$0 = $nc(this->type)->hashCode() * 31;
	return var$0 + $nc(this->algorithm)->hashCode();
}

bool Provider$ServiceKey::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Provider$ServiceKey, other, nullptr);
	bool var$2 = $instanceOf(Provider$ServiceKey, obj);
	if (var$2) {
		$assign(other, $cast(Provider$ServiceKey, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->type)->equals($nc(other)->type);
	return var$0 && $nc(this->algorithm)->equals($nc(other)->algorithm);
}

bool Provider$ServiceKey::matches($String* type, $String* algorithm) {
	return (this->type == type) && (this->originalAlgorithm == algorithm);
}

Provider$ServiceKey::Provider$ServiceKey() {
}

$Class* Provider$ServiceKey::load$($String* name, bool initialize) {
	$loadClass(Provider$ServiceKey, name, initialize, &_Provider$ServiceKey_ClassInfo_, allocate$Provider$ServiceKey);
	return class$;
}

$Class* Provider$ServiceKey::class$ = nullptr;

	} // security
} // java