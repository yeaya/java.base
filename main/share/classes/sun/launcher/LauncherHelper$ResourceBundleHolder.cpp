#include <sun/launcher/LauncherHelper$ResourceBundleHolder.h>
#include <java/util/ResourceBundle.h>
#include <sun/launcher/LauncherHelper.h>
#include <jcpp.h>

#undef RB

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace launcher {

$ResourceBundle* LauncherHelper$ResourceBundleHolder::RB = nullptr;

void LauncherHelper$ResourceBundleHolder::init$() {
}

void LauncherHelper$ResourceBundleHolder::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(LauncherHelper$ResourceBundleHolder::RB, $ResourceBundle::getBundle("sun.launcher.resources.launcher"_s));
}

LauncherHelper$ResourceBundleHolder::LauncherHelper$ResourceBundleHolder() {
}

$Class* LauncherHelper$ResourceBundleHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LauncherHelper$ResourceBundleHolder, RB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LauncherHelper$ResourceBundleHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.launcher.LauncherHelper$ResourceBundleHolder", "sun.launcher.LauncherHelper", "ResourceBundleHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.launcher.LauncherHelper$ResourceBundleHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.launcher.LauncherHelper"
	};
	$loadClass(LauncherHelper$ResourceBundleHolder, name, initialize, &classInfo$$, LauncherHelper$ResourceBundleHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherHelper$ResourceBundleHolder);
	});
	return class$;
}

$Class* LauncherHelper$ResourceBundleHolder::class$ = nullptr;

	} // launcher
} // sun