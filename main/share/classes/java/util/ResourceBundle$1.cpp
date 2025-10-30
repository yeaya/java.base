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
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ResourceBundle$ResourceBundleProviderHelper = ::java::util::ResourceBundle$ResourceBundleProviderHelper;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;

namespace java {
	namespace util {

$MethodInfo _ResourceBundle$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResourceBundle$1::*)()>(&ResourceBundle$1::init$))},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getParent", "(Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"newResourceBundle", "(Ljava/lang/Class;)Ljava/util/ResourceBundle;", "(Ljava/lang/Class<+Ljava/util/ResourceBundle;>;)Ljava/util/ResourceBundle;", $PUBLIC},
	{"setLocale", "(Ljava/util/ResourceBundle;Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/util/ResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljava/util/ResourceBundle;Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ResourceBundle$1_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle",
	nullptr,
	nullptr
};

$InnerClassInfo _ResourceBundle$1_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$1",
	"java.lang.Object",
	"jdk.internal.access.JavaUtilResourceBundleAccess",
	nullptr,
	_ResourceBundle$1_MethodInfo_,
	nullptr,
	&_ResourceBundle$1_EnclosingMethodInfo_,
	_ResourceBundle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$1($Class* clazz) {
	return $of($alloc(ResourceBundle$1));
}

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
	$loadClass(ResourceBundle$1, name, initialize, &_ResourceBundle$1_ClassInfo_, allocate$ResourceBundle$1);
	return class$;
}

$Class* ResourceBundle$1::class$ = nullptr;

	} // util
} // java