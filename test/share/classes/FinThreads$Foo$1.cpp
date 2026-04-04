#include <FinThreads$Foo$1.h>
#include <FinThreads$Foo.h>
#include <jcpp.h>

using $FinThreads$Foo = ::FinThreads$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinThreads$Foo$1::init$(bool val$catchFinalizer) {
	this->val$catchFinalizer = val$catchFinalizer;
}

void FinThreads$Foo$1::run() {
	$new($FinThreads$Foo, this->val$catchFinalizer);
}

FinThreads$Foo$1::FinThreads$Foo$1() {
}

$Class* FinThreads$Foo$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$catchFinalizer", "Z", nullptr, $FINAL | $SYNTHETIC, $field(FinThreads$Foo$1, val$catchFinalizer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", "()V", 0, $method(FinThreads$Foo$1, init$, void, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FinThreads$Foo$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FinThreads$Foo",
		"create",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
		{"FinThreads$Foo$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinThreads$Foo$1",
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
		"FinThreads"
	};
	$loadClass(FinThreads$Foo$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinThreads$Foo$1);
	});
	return class$;
}

$Class* FinThreads$Foo$1::class$ = nullptr;