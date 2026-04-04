#include <Basic4ref$1.h>
#include <Basic4ref.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4ref$1::init$() {
}

void Basic4ref$1::run() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("References: W "_s);
	$init($Basic4ref);
	var$0->append($($nc($Basic4ref::rw)->get()));
	var$0->append(", W2 "_s);
	var$0->append($($nc($Basic4ref::rw2)->get()));
	var$0->append(", P "_s);
	var$0->append($($nc($Basic4ref::rp)->get()));
	var$0->append(", P2 "_s);
	var$0->append($($nc($Basic4ref::rp2)->get()));
	$nc($System::err)->println($$str(var$0));
}

Basic4ref$1::Basic4ref$1() {
}

$Class* Basic4ref$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4ref$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ref$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4ref",
		"showReferences",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ref$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4ref$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4ref"
	};
	$loadClass(Basic4ref$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ref$1);
	});
	return class$;
}

$Class* Basic4ref$1::class$ = nullptr;