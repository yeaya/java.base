#include <Truncate$3.h>
#include <Truncate.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

void Truncate$3::init$($Callable* val$c) {
	$set(this, val$c, val$c);
}

void Truncate$3::run() {
	try {
		$var($Object, ignore, $nc(this->val$c)->call());
	} catch ($Exception& ignore) {
	}
}

Truncate$3::Truncate$3() {
}

$Class* Truncate$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljava/util/concurrent/Callable;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$3, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Callable;)V", "()V", 0, $method(Truncate$3, init$, void, $Callable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Truncate$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Truncate",
		"execute",
		"(Ljava/util/concurrent/Callable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Truncate$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Truncate$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Truncate"
	};
	$loadClass(Truncate$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Truncate$3);
	});
	return class$;
}

$Class* Truncate$3::class$ = nullptr;