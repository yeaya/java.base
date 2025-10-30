#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>

#include <java/lang/Module.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaUtilResourceBundleAccess_MethodInfo_[] = {
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "(Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT},
	{"newResourceBundle", "(Ljava/lang/Class;)Ljava/util/ResourceBundle;", "(Ljava/lang/Class<+Ljava/util/ResourceBundle;>;)Ljava/util/ResourceBundle;", $PUBLIC | $ABSTRACT},
	{"setLocale", "(Ljava/util/ResourceBundle;Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setName", "(Ljava/util/ResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setParent", "(Ljava/util/ResourceBundle;Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaUtilResourceBundleAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaUtilResourceBundleAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaUtilResourceBundleAccess_MethodInfo_
};

$Object* allocate$JavaUtilResourceBundleAccess($Class* clazz) {
	return $of($alloc(JavaUtilResourceBundleAccess));
}

$Class* JavaUtilResourceBundleAccess::load$($String* name, bool initialize) {
	$loadClass(JavaUtilResourceBundleAccess, name, initialize, &_JavaUtilResourceBundleAccess_ClassInfo_, allocate$JavaUtilResourceBundleAccess);
	return class$;
}

$Class* JavaUtilResourceBundleAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk