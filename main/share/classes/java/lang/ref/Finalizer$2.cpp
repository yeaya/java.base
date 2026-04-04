#include <java/lang/ref/Finalizer$2.h>
#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Finalizer = ::java::lang::ref::Finalizer;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace lang {
		namespace ref {

void Finalizer$2::init$() {
}

void Finalizer$2::run() {
	$useLocalObjectStack();
	if (this->running) {
		return;
	}
	$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
	this->running = true;
	{
		$init($Finalizer);
		$var($Finalizer, f, nullptr);
		for (; ($assign(f, $cast($Finalizer, $nc($Finalizer::queue)->poll()))) != nullptr;) {
			$nc(f)->runFinalizer(jla);
		}
	}
}

Finalizer$2::Finalizer$2() {
}

$Class* Finalizer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Finalizer$2, running)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Finalizer$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Finalizer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ref.Finalizer",
		"runFinalization",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Finalizer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Finalizer$2",
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
		"java.lang.ref.Finalizer"
	};
	$loadClass(Finalizer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finalizer$2);
	});
	return class$;
}

$Class* Finalizer$2::class$ = nullptr;

		} // ref
	} // lang
} // java