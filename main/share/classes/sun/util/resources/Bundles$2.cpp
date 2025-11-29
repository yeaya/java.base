#include <sun/util/resources/Bundles$2.h>

#include <java/lang/SecurityException.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/spi/ResourceBundleProvider.h>
#include <sun/util/resources/Bundles$CacheKey.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;
using $Bundles$CacheKey = ::sun::util::resources::Bundles$CacheKey;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _Bundles$2_FieldInfo_[] = {
	{"val$cacheKey", "Lsun/util/resources/Bundles$CacheKey;", nullptr, $FINAL | $SYNTHETIC, $field(Bundles$2, val$cacheKey)},
	{"val$locale", "Ljava/util/Locale;", nullptr, $FINAL | $SYNTHETIC, $field(Bundles$2, val$locale)},
	{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Bundles$2, val$baseName)},
	{"val$providers", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Bundles$2, val$providers)},
	{}
};

$MethodInfo _Bundles$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;Ljava/lang/String;Ljava/util/Locale;Lsun/util/resources/Bundles$CacheKey;)V", nullptr, 0, $method(static_cast<void(Bundles$2::*)($ServiceLoader*,$String*,$Locale*,$Bundles$CacheKey*)>(&Bundles$2::init$))},
	{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Bundles$2_EnclosingMethodInfo_ = {
	"sun.util.resources.Bundles",
	"loadBundleFromProviders",
	"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader;Lsun/util/resources/Bundles$CacheKey;)Ljava/util/ResourceBundle;"
};

$InnerClassInfo _Bundles$2_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$2", nullptr, nullptr, 0},
	{"sun.util.resources.Bundles$CacheKey", "sun.util.resources.Bundles", "CacheKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Bundles$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.Bundles$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Bundles$2_FieldInfo_,
	_Bundles$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
	&_Bundles$2_EnclosingMethodInfo_,
	_Bundles$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$2($Class* clazz) {
	return $of($alloc(Bundles$2));
}

void Bundles$2::init$($ServiceLoader* val$providers, $String* val$baseName, $Locale* val$locale, $Bundles$CacheKey* val$cacheKey) {
	$set(this, val$providers, val$providers);
	$set(this, val$baseName, val$baseName);
	$set(this, val$locale, val$locale);
	$set(this, val$cacheKey, val$cacheKey);
}

$Object* Bundles$2::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, itr, $nc(this->val$providers)->iterator());
		for (; $nc(itr)->hasNext();) {
			try {
				$var($ResourceBundleProvider, provider, $cast($ResourceBundleProvider, itr->next()));
				$var($ResourceBundle, bundle, $nc(provider)->getBundle(this->val$baseName, this->val$locale));
				if (bundle != nullptr) {
					return $of(bundle);
				}
			} catch ($ServiceConfigurationError& e) {
				if (this->val$cacheKey != nullptr) {
					$nc(this->val$cacheKey)->setCause(e);
				}
			} catch ($SecurityException& e) {
				if (this->val$cacheKey != nullptr) {
					$nc(this->val$cacheKey)->setCause(e);
				}
			}
		}
	}
	return $of(nullptr);
}

Bundles$2::Bundles$2() {
}

$Class* Bundles$2::load$($String* name, bool initialize) {
	$loadClass(Bundles$2, name, initialize, &_Bundles$2_ClassInfo_, allocate$Bundles$2);
	return class$;
}

$Class* Bundles$2::class$ = nullptr;

		} // resources
	} // util
} // sun