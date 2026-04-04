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

$Class* JavaUtilResourceBundleAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, getBundle, $ResourceBundle*, $String*, $Locale*, $Module*)},
		{"getParent", "(Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, getParent, $ResourceBundle*, $ResourceBundle*)},
		{"newResourceBundle", "(Ljava/lang/Class;)Ljava/util/ResourceBundle;", "(Ljava/lang/Class<+Ljava/util/ResourceBundle;>;)Ljava/util/ResourceBundle;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, newResourceBundle, $ResourceBundle*, $Class*)},
		{"setLocale", "(Ljava/util/ResourceBundle;Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, setLocale, void, $ResourceBundle*, $Locale*)},
		{"setName", "(Ljava/util/ResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, setName, void, $ResourceBundle*, $String*)},
		{"setParent", "(Ljava/util/ResourceBundle;Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilResourceBundleAccess, setParent, void, $ResourceBundle*, $ResourceBundle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaUtilResourceBundleAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaUtilResourceBundleAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaUtilResourceBundleAccess);
	});
	return class$;
}

$Class* JavaUtilResourceBundleAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk