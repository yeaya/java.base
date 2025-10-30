#include <sun/launcher/LauncherHelper$StdArg.h>

#include <sun/launcher/LauncherHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LauncherHelper = ::sun::launcher::LauncherHelper;

namespace sun {
	namespace launcher {

$FieldInfo _LauncherHelper$StdArg_FieldInfo_[] = {
	{"arg", "Ljava/lang/String;", nullptr, $FINAL, $field(LauncherHelper$StdArg, arg)},
	{"needsExpansion", "Z", nullptr, $FINAL, $field(LauncherHelper$StdArg, needsExpansion)},
	{}
};

$MethodInfo _LauncherHelper$StdArg_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(LauncherHelper$StdArg::*)($String*,bool)>(&LauncherHelper$StdArg::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LauncherHelper$StdArg::*)($String*)>(&LauncherHelper$StdArg::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LauncherHelper$StdArg_InnerClassesInfo_[] = {
	{"sun.launcher.LauncherHelper$StdArg", "sun.launcher.LauncherHelper", "StdArg", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LauncherHelper$StdArg_ClassInfo_ = {
	$ACC_SUPER,
	"sun.launcher.LauncherHelper$StdArg",
	"java.lang.Object",
	nullptr,
	_LauncherHelper$StdArg_FieldInfo_,
	_LauncherHelper$StdArg_MethodInfo_,
	nullptr,
	nullptr,
	_LauncherHelper$StdArg_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.launcher.LauncherHelper"
};

$Object* allocate$LauncherHelper$StdArg($Class* clazz) {
	return $of($alloc(LauncherHelper$StdArg));
}

void LauncherHelper$StdArg::init$($String* arg, bool expand) {
	$set(this, arg, arg);
	this->needsExpansion = expand;
}

void LauncherHelper$StdArg::init$($String* in) {
	$set(this, arg, $nc(in)->substring(1));
	this->needsExpansion = in->charAt(0) == u'T';
}

$String* LauncherHelper$StdArg::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"StdArg{arg="_s, this->arg, ", needsExpansion="_s, $$str(this->needsExpansion), $$str(u'}')});
}

LauncherHelper$StdArg::LauncherHelper$StdArg() {
}

$Class* LauncherHelper$StdArg::load$($String* name, bool initialize) {
	$loadClass(LauncherHelper$StdArg, name, initialize, &_LauncherHelper$StdArg_ClassInfo_, allocate$LauncherHelper$StdArg);
	return class$;
}

$Class* LauncherHelper$StdArg::class$ = nullptr;

	} // launcher
} // sun