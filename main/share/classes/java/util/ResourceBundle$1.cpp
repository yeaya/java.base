#include <java/util/ResourceBundle$1.h>
#include <java/lang/Module.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle$ResourceBundleProviderHelper.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$ResourceBundleProviderHelper = ::java::util::ResourceBundle$ResourceBundleProviderHelper;

namespace java {
	namespace util {

void ResourceBundle$1::init$() {
}

void ResourceBundle$1::setParent($ResourceBundle* bundle, $ResourceBundle* parent) {
	$nc(bundle)->setParent(parent);
}

$ResourceBundle* ResourceBundle$1::getParent($ResourceBundle* bundle) {
	return $nc(bundle)->parent;
}

void ResourceBundle$1::setLocale($ResourceBundle* bundle, $Locale* locale) {
	$set($nc(bundle), locale, locale);
}

void ResourceBundle$1::setName($ResourceBundle* bundle, $String* name) {
	$set($nc(bundle), name, name);
}

$ResourceBundle* ResourceBundle$1::getBundle($String* baseName, $Locale* locale, $Module* module) {
	return $ResourceBundle::getBundleImpl(module, module, baseName, locale, $($ResourceBundle::getDefaultControl(module, baseName)));
}

$ResourceBundle* ResourceBundle$1::newResourceBundle($Class* bundleClass) {
	return $ResourceBundle$ResourceBundleProviderHelper::newResourceBundle(bundleClass);
}

ResourceBundle$1::ResourceBundle$1() {
}

$Class* ResourceBundle$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResourceBundle$1, init$, void)},
		{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$1, getBundle, $ResourceBundle*, $String*, $Locale*, $Module*)},
		{"getParent", "(Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$1, getParent, $ResourceBundle*, $ResourceBundle*)},
		{"newResourceBundle", "(Ljava/lang/Class;)Ljava/util/ResourceBundle;", "(Ljava/lang/Class<+Ljava/util/ResourceBundle;>;)Ljava/util/ResourceBundle;", $PUBLIC, $virtualMethod(ResourceBundle$1, newResourceBundle, $ResourceBundle*, $Class*)},
		{"setLocale", "(Ljava/util/ResourceBundle;Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$1, setLocale, void, $ResourceBundle*, $Locale*)},
		{"setName", "(Ljava/util/ResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$1, setName, void, $ResourceBundle*, $String*)},
		{"setParent", "(Ljava/util/ResourceBundle;Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$1, setParent, void, $ResourceBundle*, $ResourceBundle*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$1",
		"java.lang.Object",
		"jdk.internal.access.JavaUtilResourceBundleAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$1);
	});
	return class$;
}

$Class* ResourceBundle$1::class$ = nullptr;

	} // util
} // java