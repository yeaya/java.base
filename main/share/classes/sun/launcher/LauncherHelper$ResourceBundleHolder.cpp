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

$FieldInfo _LauncherHelper$ResourceBundleHolder_FieldInfo_[] = {
	{"RB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LauncherHelper$ResourceBundleHolder, RB)},
	{}
};

$MethodInfo _LauncherHelper$ResourceBundleHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LauncherHelper$ResourceBundleHolder::*)()>(&LauncherHelper$ResourceBundleHolder::init$))},
	{}
};

$InnerClassInfo _LauncherHelper$ResourceBundleHolder_InnerClassesInfo_[] = {
	{"sun.launcher.LauncherHelper$ResourceBundleHolder", "sun.launcher.LauncherHelper", "ResourceBundleHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LauncherHelper$ResourceBundleHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.launcher.LauncherHelper$ResourceBundleHolder",
	"java.lang.Object",
	nullptr,
	_LauncherHelper$ResourceBundleHolder_FieldInfo_,
	_LauncherHelper$ResourceBundleHolder_MethodInfo_,
	nullptr,
	nullptr,
	_LauncherHelper$ResourceBundleHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.launcher.LauncherHelper"
};

$Object* allocate$LauncherHelper$ResourceBundleHolder($Class* clazz) {
	return $of($alloc(LauncherHelper$ResourceBundleHolder));
}

$ResourceBundle* LauncherHelper$ResourceBundleHolder::RB = nullptr;

void LauncherHelper$ResourceBundleHolder::init$() {
}

void clinit$LauncherHelper$ResourceBundleHolder($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(LauncherHelper$ResourceBundleHolder::RB, $ResourceBundle::getBundle("sun.launcher.resources.launcher"_s));
}

LauncherHelper$ResourceBundleHolder::LauncherHelper$ResourceBundleHolder() {
}

$Class* LauncherHelper$ResourceBundleHolder::load$($String* name, bool initialize) {
	$loadClass(LauncherHelper$ResourceBundleHolder, name, initialize, &_LauncherHelper$ResourceBundleHolder_ClassInfo_, clinit$LauncherHelper$ResourceBundleHolder, allocate$LauncherHelper$ResourceBundleHolder);
	return class$;
}

$Class* LauncherHelper$ResourceBundleHolder::class$ = nullptr;

	} // launcher
} // sun