#include <java/util/ResourceBundle$3.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/util/ResourceBundle.h>
#include <java/util/spi/ResourceBundleProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace java {
	namespace util {

void ResourceBundle$3::init$($String* val$providerName, $ClassLoader* val$loader) {
	$set(this, val$providerName, val$providerName);
	$set(this, val$loader, val$loader);
}

$Object* ResourceBundle$3::run() {
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(this->val$providerName, false, this->val$loader);
		$load($ResourceBundleProvider);
		if ($ResourceBundleProvider::class$->isAssignableFrom(c)) {
			$Class* s = c;
			return $of(s);
		}
	} catch ($ClassNotFoundException& e) {
	}
	return nullptr;
}

ResourceBundle$3::ResourceBundle$3() {
}

$Class* ResourceBundle$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$3, val$loader)},
		{"val$providerName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$3, val$providerName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(ResourceBundle$3, init$, void, $String*, $ClassLoader*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC, $virtualMethod(ResourceBundle$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle",
		"getResourceBundleProviderType",
		"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<Ljava/util/spi/ResourceBundleProvider;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$3);
	});
	return class$;
}

$Class* ResourceBundle$3::class$ = nullptr;

	} // util
} // java