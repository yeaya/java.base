#include <java/lang/NamedPackage.h>

#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/Package.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/net/URI.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $Package = ::java::lang::Package;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $URI = ::java::net::URI;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$FieldInfo _NamedPackage_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedPackage, name)},
	{"module", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(NamedPackage, module$)},
	{}
};

$MethodInfo _NamedPackage_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Module;)V", nullptr, 0, $method(NamedPackage, init$, void, $String*, $Module*)},
	{"location", "()Ljava/net/URI;", nullptr, 0, $virtualMethod(NamedPackage, location, $URI*)},
	{"module", "()Ljava/lang/Module;", nullptr, 0, $virtualMethod(NamedPackage, module, $Module*)},
	{"packageName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(NamedPackage, packageName, $String*)},
	{"toPackage", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Package;", nullptr, $STATIC, $staticMethod(NamedPackage, toPackage, $Package*, $String*, $Module*)},
	{}
};

$ClassInfo _NamedPackage_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.NamedPackage",
	"java.lang.Object",
	nullptr,
	_NamedPackage_FieldInfo_,
	_NamedPackage_MethodInfo_
};

$Object* allocate$NamedPackage($Class* clazz) {
	return $of($alloc(NamedPackage));
}

void NamedPackage::init$($String* pn, $Module* module) {
	bool var$0 = $nc(pn)->isEmpty();
	if (var$0 && $nc(module)->isNamed()) {
		$throwNew($InternalError, $$str({"unnamed package in  "_s, module}));
	}
	$set(this, name, $nc(pn)->intern());
	$set(this, module$, module);
}

$String* NamedPackage::packageName() {
	return this->name;
}

$Module* NamedPackage::module() {
	return this->module$;
}

$URI* NamedPackage::location() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->module$)->isNamed();
	if (var$0 && $nc(this->module$)->getLayer() != nullptr) {
		$var($Configuration, cf, $nc($($nc(this->module$)->getLayer()))->configuration());
		$var($ModuleReference, mref, $nc(($cast($ResolvedModule, $($nc($($nc(cf)->findModule($($nc(this->module$)->getName()))))->get()))))->reference());
		return $cast($URI, $nc($($nc(mref)->location()))->orElse(nullptr));
	}
	return nullptr;
}

$Package* NamedPackage::toPackage($String* name, $Module* module) {
	return $new($Package, name, module);
}

NamedPackage::NamedPackage() {
}

$Class* NamedPackage::load$($String* name, bool initialize) {
	$loadClass(NamedPackage, name, initialize, &_NamedPackage_ClassInfo_, allocate$NamedPackage);
	return class$;
}

$Class* NamedPackage::class$ = nullptr;

	} // lang
} // java