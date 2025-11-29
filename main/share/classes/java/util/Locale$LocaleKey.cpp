#include <java/util/Locale$LocaleKey.h>

#include <java/util/Locale.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/LocaleExtensions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $LocaleExtensions = ::sun::util::locale::LocaleExtensions;

namespace java {
	namespace util {

$FieldInfo _Locale$LocaleKey_FieldInfo_[] = {
	{"base", "Lsun/util/locale/BaseLocale;", nullptr, $PRIVATE | $FINAL, $field(Locale$LocaleKey, base)},
	{"exts", "Lsun/util/locale/LocaleExtensions;", nullptr, $PRIVATE | $FINAL, $field(Locale$LocaleKey, exts)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(Locale$LocaleKey, hash)},
	{}
};

$MethodInfo _Locale$LocaleKey_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/BaseLocale;Lsun/util/locale/LocaleExtensions;)V", nullptr, $PRIVATE, $method(static_cast<void(Locale$LocaleKey::*)($BaseLocale*,$LocaleExtensions*)>(&Locale$LocaleKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Locale$LocaleKey_InnerClassesInfo_[] = {
	{"java.util.Locale$LocaleKey", "java.util.Locale", "LocaleKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Locale$LocaleKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Locale$LocaleKey",
	"java.lang.Object",
	nullptr,
	_Locale$LocaleKey_FieldInfo_,
	_Locale$LocaleKey_MethodInfo_,
	nullptr,
	nullptr,
	_Locale$LocaleKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$LocaleKey($Class* clazz) {
	return $of($alloc(Locale$LocaleKey));
}

void Locale$LocaleKey::init$($BaseLocale* baseLocale, $LocaleExtensions* extensions) {
	$set(this, base, baseLocale);
	$set(this, exts, extensions);
	int32_t h = $nc(this->base)->hashCode();
	if (this->exts != nullptr) {
		h ^= $nc(this->exts)->hashCode();
	}
	this->hash = h;
}

bool Locale$LocaleKey::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Locale$LocaleKey, other, nullptr);
	bool var$0 = $instanceOf(Locale$LocaleKey, obj);
	if (var$0) {
		$assign(other, $cast(Locale$LocaleKey, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if (this->hash != $nc(other)->hash || !$nc(this->base)->equals($nc(other)->base)) {
		return false;
	}
	if (this->exts == nullptr) {
		return $nc(other)->exts == nullptr;
	}
	return $nc(this->exts)->equals($nc(other)->exts);
}

int32_t Locale$LocaleKey::hashCode() {
	return this->hash;
}

Locale$LocaleKey::Locale$LocaleKey() {
}

$Class* Locale$LocaleKey::load$($String* name, bool initialize) {
	$loadClass(Locale$LocaleKey, name, initialize, &_Locale$LocaleKey_ClassInfo_, allocate$Locale$LocaleKey);
	return class$;
}

$Class* Locale$LocaleKey::class$ = nullptr;

	} // util
} // java