#include <jdk/internal/loader/ArchivedClassLoaders.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/Map.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/misc/CDS.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

using $ServicesCatalogArray = $Array<::jdk::internal::module::ServicesCatalog>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $Map = ::java::util::Map;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $CDS = ::jdk::internal::misc::CDS;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _ArchivedClassLoaders_FieldInfo_[] = {
	{"archivedClassLoaders", "Ljdk/internal/loader/ArchivedClassLoaders;", nullptr, $PRIVATE | $STATIC, $staticField(ArchivedClassLoaders, archivedClassLoaders)},
	{"bootLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(ArchivedClassLoaders, bootLoader$)},
	{"platformLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(ArchivedClassLoaders, platformLoader$)},
	{"appLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(ArchivedClassLoaders, appLoader$)},
	{"servicesCatalogs", "[Ljdk/internal/module/ServicesCatalog;", nullptr, $PRIVATE | $FINAL, $field(ArchivedClassLoaders, servicesCatalogs)},
	{"packageToModule", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;*>;", $PRIVATE | $FINAL, $field(ArchivedClassLoaders, packageToModule$)},
	{}
};

$MethodInfo _ArchivedClassLoaders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArchivedClassLoaders::*)()>(&ArchivedClassLoaders::init$))},
	{"appLoader", "()Ljava/lang/ClassLoader;", nullptr, 0},
	{"archive", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ArchivedClassLoaders::archive))},
	{"bootLoader", "()Ljava/lang/ClassLoader;", nullptr, 0},
	{"get", "()Ljdk/internal/loader/ArchivedClassLoaders;", nullptr, $STATIC, $method(static_cast<ArchivedClassLoaders*(*)()>(&ArchivedClassLoaders::get))},
	{"packageToModule", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;*>;", 0},
	{"platformLoader", "()Ljava/lang/ClassLoader;", nullptr, 0},
	{"servicesCatalog", "(Ljava/lang/ClassLoader;)Ljdk/internal/module/ServicesCatalog;", nullptr, 0},
	{}
};

$ClassInfo _ArchivedClassLoaders_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.ArchivedClassLoaders",
	"java.lang.Object",
	nullptr,
	_ArchivedClassLoaders_FieldInfo_,
	_ArchivedClassLoaders_MethodInfo_
};

$Object* allocate$ArchivedClassLoaders($Class* clazz) {
	return $of($alloc(ArchivedClassLoaders));
}

ArchivedClassLoaders* ArchivedClassLoaders::archivedClassLoaders = nullptr;

void ArchivedClassLoaders::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, bootLoader$, $ClassLoaders::bootLoader());
	$set(this, platformLoader$, $ClassLoaders::platformClassLoader());
	$set(this, appLoader$, $ClassLoaders::appClassLoader());
	$set(this, servicesCatalogs, $new($ServicesCatalogArray, 3));
	$nc(this->servicesCatalogs)->set(0, $($ServicesCatalog::getServicesCatalog(this->bootLoader$)));
	$nc(this->servicesCatalogs)->set(1, $($ServicesCatalog::getServicesCatalog(this->platformLoader$)));
	$nc(this->servicesCatalogs)->set(2, $($ServicesCatalog::getServicesCatalog(this->appLoader$)));
	$set(this, packageToModule$, $BuiltinClassLoader::packageToModule());
}

$ClassLoader* ArchivedClassLoaders::bootLoader() {
	return this->bootLoader$;
}

$ClassLoader* ArchivedClassLoaders::platformLoader() {
	return this->platformLoader$;
}

$ClassLoader* ArchivedClassLoaders::appLoader() {
	return this->appLoader$;
}

$ServicesCatalog* ArchivedClassLoaders::servicesCatalog($ClassLoader* loader) {
	if (loader == this->bootLoader$) {
		return $nc(this->servicesCatalogs)->get(0);
	} else if (loader == this->platformLoader$) {
		return $nc(this->servicesCatalogs)->get(1);
	} else if (loader == this->appLoader$) {
		return $nc(this->servicesCatalogs)->get(2);
	} else {
		$throwNew($InternalError);
	}
}

$Map* ArchivedClassLoaders::packageToModule() {
	return this->packageToModule$;
}

void ArchivedClassLoaders::archive() {
	$init(ArchivedClassLoaders);
	$assignStatic(ArchivedClassLoaders::archivedClassLoaders, $new(ArchivedClassLoaders));
}

ArchivedClassLoaders* ArchivedClassLoaders::get() {
	$init(ArchivedClassLoaders);
	return ArchivedClassLoaders::archivedClassLoaders;
}

void clinit$ArchivedClassLoaders($Class* class$) {
	{
		$CDS::initializeFromArchive(ArchivedClassLoaders::class$);
	}
}

ArchivedClassLoaders::ArchivedClassLoaders() {
}

$Class* ArchivedClassLoaders::load$($String* name, bool initialize) {
	$loadClass(ArchivedClassLoaders, name, initialize, &_ArchivedClassLoaders_ClassInfo_, clinit$ArchivedClassLoaders, allocate$ArchivedClassLoaders);
	return class$;
}

$Class* ArchivedClassLoaders::class$ = nullptr;

		} // loader
	} // internal
} // jdk