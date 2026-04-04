#include <java/lang/ref/Reference$1.h>
#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Finalizer = ::java::lang::ref::Finalizer;
using $Reference = ::java::lang::ref::Reference;

namespace java {
	namespace lang {
		namespace ref {

void Reference$1::init$() {
}

bool Reference$1::waitForReferenceProcessing() {
	return $Reference::waitForReferenceProcessing();
}

void Reference$1::runFinalization() {
	$Finalizer::runFinalization();
}

Reference$1::Reference$1() {
}

$Class* Reference$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Reference$1, init$, void)},
		{"runFinalization", "()V", nullptr, $PUBLIC, $virtualMethod(Reference$1, runFinalization, void)},
		{"waitForReferenceProcessing", "()Z", nullptr, $PUBLIC, $virtualMethod(Reference$1, waitForReferenceProcessing, bool), "java.lang.InterruptedException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ref.Reference",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Reference$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Reference$1",
		"java.lang.Object",
		"jdk.internal.access.JavaLangRefAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Reference"
	};
	$loadClass(Reference$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reference$1);
	});
	return class$;
}

$Class* Reference$1::class$ = nullptr;

		} // ref
	} // lang
} // java