#include <UninitializedParent$1.h>
#include <UninitializedParent.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $UninitializedParent = ::UninitializedParent;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void UninitializedParent$1::init$($ClassLoader* arg0) {
	$ClassLoader::init$(arg0);
}

void UninitializedParent$1::finalize() {
	$init($UninitializedParent);
	$assignStatic($UninitializedParent::loader, this);
}

UninitializedParent$1::UninitializedParent$1() {
}

$Class* UninitializedParent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(UninitializedParent$1, init$, void, $ClassLoader*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(UninitializedParent$1, finalize, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"UninitializedParent",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UninitializedParent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UninitializedParent$1",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"UninitializedParent"
	};
	$loadClass(UninitializedParent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UninitializedParent$1);
	});
	return class$;
}

$Class* UninitializedParent$1::class$ = nullptr;