#include <java/lang/Package.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Math.h>
#include <java/lang/Module.h>
#include <java/lang/NamedPackage.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Package$1PackageInfoProxy.h>
#include <java/lang/Package$VersionInfo.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#undef NULL_VERSION_INFO

using $PackageArray = $Array<::java::lang::Package>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NamedPackage = ::java::lang::NamedPackage;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Package$1PackageInfoProxy = ::java::lang::Package$1PackageInfoProxy;
using $Package$VersionInfo = ::java::lang::Package$VersionInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $IntFunction = ::java::util::function::IntFunction;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace lang {

class Package$$Lambda$lambda$getPackages$0 : public $IntFunction {
	$class(Package$$Lambda$lambda$getPackages$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return Package::lambda$getPackages$0(x$0);
	}
};
$Class* Package$$Lambda$lambda$getPackages$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Package$$Lambda$lambda$getPackages$0, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Package$$Lambda$lambda$getPackages$0, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.Package$$Lambda$lambda$getPackages$0",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Package$$Lambda$lambda$getPackages$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Package$$Lambda$lambda$getPackages$0);
	});
	return class$;
}
$Class* Package$$Lambda$lambda$getPackages$0::class$ = nullptr;

class Package$$Lambda$getClassLoader$1 : public $PrivilegedAction {
	$class(Package$$Lambda$getClassLoader$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getClassLoader();
	}
	$Module* inst$ = nullptr;
};
$Class* Package$$Lambda$getClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Package$$Lambda$getClassLoader$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(Package$$Lambda$getClassLoader$1, init$, void, $Module*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Package$$Lambda$getClassLoader$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.Package$$Lambda$getClassLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Package$$Lambda$getClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Package$$Lambda$getClassLoader$1);
	});
	return class$;
}
$Class* Package$$Lambda$getClassLoader$1::class$ = nullptr;

bool Package::equals(Object$* obj) {
	 return this->$NamedPackage::equals(obj);
}

$Object* Package::clone() {
	 return this->$NamedPackage::clone();
}

void Package::finalize() {
	this->$NamedPackage::finalize();
}

$String* Package::getName() {
	return packageName();
}

$String* Package::getSpecificationTitle() {
	return $nc(this->versionInfo)->specTitle;
}

$String* Package::getSpecificationVersion() {
	return $nc(this->versionInfo)->specVersion;
}

$String* Package::getSpecificationVendor() {
	return $nc(this->versionInfo)->specVendor;
}

$String* Package::getImplementationTitle() {
	return $nc(this->versionInfo)->implTitle;
}

$String* Package::getImplementationVersion() {
	return $nc(this->versionInfo)->implVersion;
}

$String* Package::getImplementationVendor() {
	return $nc(this->versionInfo)->implVendor;
}

bool Package::isSealed() {
	return $$nc(module())->isNamed() || $nc(this->versionInfo)->sealBase != nullptr;
}

bool Package::isSealed($URL* url) {
	$useLocalObjectStack();
	$Objects::requireNonNull(url);
	$var($URL, sealBase, nullptr);
	$init($Package$VersionInfo);
	if (this->versionInfo != $Package$VersionInfo::NULL_VERSION_INFO) {
		$assign(sealBase, $nc(this->versionInfo)->sealBase);
	} else {
		try {
			$var($URI, uri, location());
			$assign(sealBase, uri != nullptr ? uri->toURL() : ($URL*)nullptr);
		} catch ($MalformedURLException& e) {
		}
	}
	return url->equals(sealBase);
}

bool Package::isCompatibleWith($String* desired) {
	$useLocalObjectStack();
	if ($nc(this->versionInfo)->specVersion == nullptr || this->versionInfo->specVersion->length() < 1) {
		$throwNew($NumberFormatException, "Empty version string"_s);
	}
	$var($StringArray, sa, $nc(this->versionInfo->specVersion)->split("\\."_s, -1));
	$var($ints, si, $new($ints, sa->length));
	for (int32_t i = 0; i < sa->length; ++i) {
		si->set(i, $Integer::parseInt(sa->get(i)));
		if (si->get(i) < 0) {
			$throw($($NumberFormatException::forInputString($$str({""_s, $$str(si->get(i))}), 10)));
		}
	}
	$var($StringArray, da, $nc(desired)->split("\\."_s, -1));
	$var($ints, di, $new($ints, da->length));
	for (int32_t i = 0; i < da->length; ++i) {
		di->set(i, $Integer::parseInt(da->get(i)));
		if (di->get(i) < 0) {
			$throw($($NumberFormatException::forInputString($$str({""_s, $$str(di->get(i))}), 10)));
		}
	}
	int32_t len = $Math::max(di->length, si->length);
	for (int32_t i = 0; i < len; ++i) {
		int32_t d = (i < di->length ? di->get(i) : 0);
		int32_t s = (i < si->length ? si->get(i) : 0);
		if (s < d) {
			return false;
		}
		if (s > d) {
			return true;
		}
	}
	return true;
}

Package* Package::getPackage($String* name) {
	$init(Package);
	$var($ClassLoader, l, $ClassLoader::getClassLoader($Reflection::getCallerClass()));
	return l != nullptr ? l->getPackage(name) : $BootLoader::getDefinedPackage(name);
}

$PackageArray* Package::getPackages() {
	$init(Package);
	$useLocalObjectStack();
	$var($ClassLoader, cl, $ClassLoader::getClassLoader($Reflection::getCallerClass()));
	return cl != nullptr ? cl->getPackages() : $cast($PackageArray, $$nc($BootLoader::packages())->toArray($$new(Package$$Lambda$lambda$getPackages$0)));
}

int32_t Package::hashCode() {
	return $$nc(packageName())->hashCode();
}

$String* Package::toString() {
	$useLocalObjectStack();
	$var($String, spec, $nc(this->versionInfo)->specTitle);
	$var($String, ver, this->versionInfo->specVersion);
	if (spec != nullptr && !spec->isEmpty()) {
		$assign(spec, $str({", "_s, spec}));
	} else {
		$assign(spec, ""_s);
	}
	if (ver != nullptr && !ver->isEmpty()) {
		$assign(ver, $str({", version "_s, ver}));
	} else {
		$assign(ver, ""_s);
	}
	return $str({"package "_s, $(packageName()), spec, ver});
}

$Class* Package::getPackageInfo() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->packageInfo == nullptr) {
		$var($String, cn, $str({$(packageName()), ".package-info"_s}));
		$var($Module, module, this->module());
		$var($PrivilegedAction, pa, $new(Package$$Lambda$getClassLoader$1, $nc(module)));
		$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged(pa)));
		$Class* c = nullptr;
		if (loader != nullptr) {
			c = loader->loadClass(module, cn);
		} else {
			c = $BootLoader::loadClass(module, cn);
		}
		if (c != nullptr) {
			$set(this, packageInfo, c);
		} else {
			{
			}
			$load($Package$1PackageInfoProxy);
			$set(this, packageInfo, $Package$1PackageInfoProxy::class$);
		}
	}
	return this->packageInfo;
}

$Annotation* Package::getAnnotation($Class* annotationClass) {
	return $nc(getPackageInfo())->getAnnotation(annotationClass);
}

bool Package::isAnnotationPresent($Class* annotationClass) {
	return $AnnotatedElement::isAnnotationPresent(annotationClass);
}

$AnnotationArray* Package::getAnnotationsByType($Class* annotationClass) {
	return $nc(getPackageInfo())->getAnnotationsByType(annotationClass);
}

$AnnotationArray* Package::getAnnotations() {
	return $nc(getPackageInfo())->getAnnotations();
}

$Annotation* Package::getDeclaredAnnotation($Class* annotationClass) {
	return $nc(getPackageInfo())->getDeclaredAnnotation(annotationClass);
}

$AnnotationArray* Package::getDeclaredAnnotationsByType($Class* annotationClass) {
	return $nc(getPackageInfo())->getDeclaredAnnotationsByType(annotationClass);
}

$AnnotationArray* Package::getDeclaredAnnotations() {
	return $nc(getPackageInfo())->getDeclaredAnnotations();
}

void Package::init$($String* name, $String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, $URL* sealbase, $ClassLoader* loader) {
	$useLocalObjectStack();
	$var($String, var$0, $cast($String, $Objects::requireNonNull(name)));
	$NamedPackage::init$(var$0, loader != nullptr ? $(loader->getUnnamedModule()) : $($BootLoader::getUnnamedModule()));
	$set(this, versionInfo, $Package$VersionInfo::getInstance(spectitle, specversion, specvendor, impltitle, implversion, implvendor, sealbase));
}

void Package::init$($String* name, $Module* module) {
	$NamedPackage::init$(name, module);
	$init($Package$VersionInfo);
	$set(this, versionInfo, $Package$VersionInfo::NULL_VERSION_INFO);
}

$PackageArray* Package::lambda$getPackages$0(int32_t x$0) {
	$init(Package);
	return $new($PackageArray, x$0);
}

Package::Package() {
}

$Class* Package::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.Package$$Lambda$lambda$getPackages$0")) {
			return Package$$Lambda$lambda$getPackages$0::load$(name, initialize);
		}
		if (name->equals("java.lang.Package$$Lambda$getClassLoader$1")) {
			return Package$$Lambda$getClassLoader$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"versionInfo", "Ljava/lang/Package$VersionInfo;", nullptr, $PRIVATE | $FINAL, $field(Package, versionInfo)},
		{"packageInfo", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(Package, packageInfo)},
		{}
	};
	$NamedAttribute getPackagemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute getPackagemethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{"Ljava/lang/Deprecated;", getPackagemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getPackagesmethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(Package, init$, void, $String*, $String*, $String*, $String*, $String*, $String*, $String*, $URL*, $ClassLoader*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Module;)V", nullptr, 0, $method(Package, init$, void, $String*, $Module*)},
		{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)TA;", $PUBLIC, $virtualMethod(Package, getAnnotation, $Annotation*, $Class*)},
		{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(Package, getAnnotations, $AnnotationArray*)},
		{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PUBLIC, $virtualMethod(Package, getAnnotationsByType, $AnnotationArray*, $Class*)},
		{"getDeclaredAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)TA;", $PUBLIC, $virtualMethod(Package, getDeclaredAnnotation, $Annotation*, $Class*)},
		{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(Package, getDeclaredAnnotations, $AnnotationArray*)},
		{"getDeclaredAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PUBLIC, $virtualMethod(Package, getDeclaredAnnotationsByType, $AnnotationArray*, $Class*)},
		{"getImplementationTitle", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getImplementationTitle, $String*)},
		{"getImplementationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getImplementationVendor, $String*)},
		{"getImplementationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getImplementationVersion, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getName, $String*)},
		{"getPackage", "(Ljava/lang/String;)Ljava/lang/Package;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Package, getPackage, Package*, $String*), nullptr, nullptr, getPackagemethodAnnotations$$},
		{"getPackageInfo", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE, $method(Package, getPackageInfo, $Class*)},
		{"getPackages", "()[Ljava/lang/Package;", nullptr, $PUBLIC | $STATIC, $staticMethod(Package, getPackages, $PackageArray*), nullptr, nullptr, getPackagesmethodAnnotations$$},
		{"getSpecificationTitle", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getSpecificationTitle, $String*)},
		{"getSpecificationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getSpecificationVendor, $String*)},
		{"getSpecificationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, getSpecificationVersion, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Package, hashCode, int32_t)},
		{"isAnnotationPresent", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Z", $PUBLIC, $virtualMethod(Package, isAnnotationPresent, bool, $Class*)},
		{"isCompatibleWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Package, isCompatibleWith, bool, $String*), "java.lang.NumberFormatException"},
		{"isSealed", "()Z", nullptr, $PUBLIC, $virtualMethod(Package, isSealed, bool)},
		{"isSealed", "(Ljava/net/URL;)Z", nullptr, $PUBLIC, $virtualMethod(Package, isSealed, bool, $URL*)},
		{"lambda$getPackages$0", "(I)[Ljava/lang/Package;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Package, lambda$getPackages$0, $PackageArray*, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Package, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Package$VersionInfo", "java.lang.Package", "VersionInfo", $STATIC},
		{"java.lang.Package$1PackageInfoProxy", nullptr, "PackageInfoProxy", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.Package",
		"java.lang.NamedPackage",
		"java.lang.reflect.AnnotatedElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.Package$VersionInfo,java.lang.Package$1PackageInfoProxy"
	};
	$loadClass(Package, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Package));
	});
	return class$;
}

$Class* Package::class$ = nullptr;

	} // lang
} // java