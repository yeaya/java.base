#include <sun/launcher/LauncherHelper$StdArg.h>
#include <sun/launcher/LauncherHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace launcher {

void LauncherHelper$StdArg::init$($String* arg, bool expand) {
	$set(this, arg, arg);
	this->needsExpansion = expand;
}

void LauncherHelper$StdArg::init$($String* in) {
	$set(this, arg, $nc(in)->substring(1));
	this->needsExpansion = in->charAt(0) == u'T';
}

$String* LauncherHelper$StdArg::toString() {
	$useLocalObjectStack();
	return $str({"StdArg{arg="_s, this->arg, ", needsExpansion="_s, $$str(this->needsExpansion), $$str(u'}')});
}

LauncherHelper$StdArg::LauncherHelper$StdArg() {
}

$Class* LauncherHelper$StdArg::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arg", "Ljava/lang/String;", nullptr, $FINAL, $field(LauncherHelper$StdArg, arg)},
		{"needsExpansion", "Z", nullptr, $FINAL, $field(LauncherHelper$StdArg, needsExpansion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(LauncherHelper$StdArg, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LauncherHelper$StdArg, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LauncherHelper$StdArg, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.launcher.LauncherHelper$StdArg", "sun.launcher.LauncherHelper", "StdArg", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.launcher.LauncherHelper$StdArg",
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
	$loadClass(LauncherHelper$StdArg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherHelper$StdArg);
	});
	return class$;
}

$Class* LauncherHelper$StdArg::class$ = nullptr;

	} // launcher
} // sun