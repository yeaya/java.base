#include <jdk/internal/ref/Cleaner$1.h>
#include <java/lang/Error.h>
#include <jdk/internal/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::jdk::internal::ref::Cleaner;

namespace jdk {
	namespace internal {
		namespace ref {

void Cleaner$1::init$($Cleaner* this$0, $Throwable* val$x) {
	$set(this, this$0, this$0);
	$set(this, val$x, val$x);
}

$Object* Cleaner$1::run() {
	if ($System::err != nullptr) {
		$$new($Error, "Cleaner terminated abnormally"_s, this->val$x)->printStackTrace();
	}
	$System::exit(1);
	return nullptr;
}

Cleaner$1::Cleaner$1() {
}

$Class* Cleaner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/ref/Cleaner;", nullptr, $FINAL | $SYNTHETIC, $field(Cleaner$1, this$0)},
		{"val$x", "Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(Cleaner$1, val$x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/ref/Cleaner;Ljava/lang/Throwable;)V", nullptr, 0, $method(Cleaner$1, init$, void, $Cleaner*, $Throwable*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Cleaner$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.ref.Cleaner",
		"clean",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.ref.Cleaner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.ref.Cleaner$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.ref.Cleaner"
	};
	$loadClass(Cleaner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cleaner$1);
	});
	return class$;
}

$Class* Cleaner$1::class$ = nullptr;

		} // ref
	} // internal
} // jdk