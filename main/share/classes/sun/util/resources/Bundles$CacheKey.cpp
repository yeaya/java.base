#include <sun/util/resources/Bundles$CacheKey.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <java/util/Locale.h>
#include <java/util/ServiceLoader.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _Bundles$CacheKey_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Bundles$CacheKey, name)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(Bundles$CacheKey, locale)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(Bundles$CacheKey, cause)},
	{"hashCodeCache", "I", nullptr, $PRIVATE, $field(Bundles$CacheKey, hashCodeCache)},
	{"providers", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;", $PRIVATE, $field(Bundles$CacheKey, providers)},
	{}
};

$MethodInfo _Bundles$CacheKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, 0, $method(static_cast<void(Bundles$CacheKey::*)($String*,$Locale*)>(&Bundles$CacheKey::init$))},
	{"calculateHashCode", "()V", nullptr, $PRIVATE, $method(static_cast<void(Bundles$CacheKey::*)()>(&Bundles$CacheKey::calculateHashCode))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PRIVATE, $method(static_cast<$Throwable*(Bundles$CacheKey::*)()>(&Bundles$CacheKey::getCause))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getProviders", "()Ljava/util/ServiceLoader;", "()Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;", 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setCause", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(static_cast<void(Bundles$CacheKey::*)($Throwable*)>(&Bundles$CacheKey::setCause))},
	{"setLocale", "(Ljava/util/Locale;)Lsun/util/resources/Bundles$CacheKey;", nullptr, 0},
	{"setName", "(Ljava/lang/String;)Lsun/util/resources/Bundles$CacheKey;", nullptr, 0},
	{"setProviders", "(Ljava/util/ServiceLoader;)V", "(Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;)V", 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Bundles$CacheKey_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$CacheKey", "sun.util.resources.Bundles", "CacheKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Bundles$CacheKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.Bundles$CacheKey",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Bundles$CacheKey_FieldInfo_,
	_Bundles$CacheKey_MethodInfo_,
	nullptr,
	nullptr,
	_Bundles$CacheKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$CacheKey($Class* clazz) {
	return $of($alloc(Bundles$CacheKey));
}

void Bundles$CacheKey::init$($String* baseName, $Locale* locale) {
	$set(this, name, baseName);
	$set(this, locale, locale);
	calculateHashCode();
}

$String* Bundles$CacheKey::getName() {
	return this->name;
}

Bundles$CacheKey* Bundles$CacheKey::setName($String* baseName) {
	if (!$nc(this->name)->equals(baseName)) {
		$set(this, name, baseName);
		calculateHashCode();
	}
	return this;
}

$Locale* Bundles$CacheKey::getLocale() {
	return this->locale;
}

Bundles$CacheKey* Bundles$CacheKey::setLocale($Locale* locale) {
	if (!$nc(this->locale)->equals(locale)) {
		$set(this, locale, locale);
		calculateHashCode();
	}
	return this;
}

$ServiceLoader* Bundles$CacheKey::getProviders() {
	return this->providers;
}

void Bundles$CacheKey::setProviders($ServiceLoader* providers) {
	$set(this, providers, providers);
}

bool Bundles$CacheKey::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	try {
		$var(Bundles$CacheKey, otherEntry, $cast(Bundles$CacheKey, other));
		if (this->hashCodeCache != $nc(otherEntry)->hashCodeCache) {
			return false;
		}
		bool var$0 = $nc(this->locale)->equals($nc(otherEntry)->locale);
		return var$0 && $nc(this->name)->equals($nc(otherEntry)->name);
	} catch ($NullPointerException& e) {
	} catch ($ClassCastException& e) {
	}
	return false;
}

int32_t Bundles$CacheKey::hashCode() {
	return this->hashCodeCache;
}

void Bundles$CacheKey::calculateHashCode() {
	this->hashCodeCache = $nc(this->name)->hashCode() << 3;
	this->hashCodeCache ^= $nc(this->locale)->hashCode();
}

$Object* Bundles$CacheKey::clone() {
	try {
		$var(Bundles$CacheKey, clone, $cast(Bundles$CacheKey, $Cloneable::clone()));
		$set($nc(clone), cause, nullptr);
		$set(clone, providers, nullptr);
		return $of(clone);
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void Bundles$CacheKey::setCause($Throwable* cause) {
	if (this->cause == nullptr) {
		$set(this, cause, cause);
	} else if ($instanceOf($ClassNotFoundException, this->cause)) {
		$set(this, cause, cause);
	}
}

$Throwable* Bundles$CacheKey::getCause() {
	return this->cause;
}

$String* Bundles$CacheKey::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, l, $nc(this->locale)->toString());
	if ($nc(l)->isEmpty()) {
		if (!$nc($($nc(this->locale)->getVariant()))->isEmpty()) {
			$assign(l, $str({"__"_s, $($nc(this->locale)->getVariant())}));
		} else {
			$assign(l, "\"\""_s);
		}
	}
	return $str({"CacheKey["_s, this->name, ", lc="_s, l, ")]"_s});
}

Bundles$CacheKey::Bundles$CacheKey() {
}

$Class* Bundles$CacheKey::load$($String* name, bool initialize) {
	$loadClass(Bundles$CacheKey, name, initialize, &_Bundles$CacheKey_ClassInfo_, allocate$Bundles$CacheKey);
	return class$;
}

$Class* Bundles$CacheKey::class$ = nullptr;

		} // resources
	} // util
} // sun