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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$3_FieldInfo_[] = {
	{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$3, val$loader)},
	{"val$providerName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$3, val$providerName)},
	{}
};

$MethodInfo _ResourceBundle$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(ResourceBundle$3::*)($String*,$ClassLoader*)>(&ResourceBundle$3::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ResourceBundle$3_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle",
	"getResourceBundleProviderType",
	"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;"
};

$InnerClassInfo _ResourceBundle$3_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ResourceBundle$3_FieldInfo_,
	_ResourceBundle$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<Ljava/util/spi/ResourceBundleProvider;>;>;",
	&_ResourceBundle$3_EnclosingMethodInfo_,
	_ResourceBundle$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$3($Class* clazz) {
	return $of($alloc(ResourceBundle$3));
}

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
	return $of(nullptr);
}

ResourceBundle$3::ResourceBundle$3() {
}

$Class* ResourceBundle$3::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$3, name, initialize, &_ResourceBundle$3_ClassInfo_, allocate$ResourceBundle$3);
	return class$;
}

$Class* ResourceBundle$3::class$ = nullptr;

	} // util
} // java