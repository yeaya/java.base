#include <java/util/stream/Streams$1.h>
#include <java/lang/Runnable.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace util {
		namespace stream {

void Streams$1::init$($Runnable* val$a, $Runnable* val$b) {
	$set(this, val$a, val$a);
	$set(this, val$b, val$b);
}

void Streams$1::run() {
	try {
		$nc(this->val$a)->run();
	} catch ($Throwable& e1) {
		try {
			$nc(this->val$b)->run();
		} catch ($Throwable& e2) {
			try {
				e1->addSuppressed(e2);
			} catch ($Throwable& ignore) {
			}
		}
		$throw(e1);
	}
	$nc(this->val$b)->run();
}

Streams$1::Streams$1() {
}

$Class* Streams$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$b", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$1, val$b)},
		{"val$a", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$1, val$a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Runnable;)V", "()V", 0, $method(Streams$1, init$, void, $Runnable*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Streams$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.Streams",
		"composeWithExceptions",
		"(Ljava/lang/Runnable;Ljava/lang/Runnable;)Ljava/lang/Runnable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Streams$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.Streams$1",
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
		"java.util.stream.Streams"
	};
	$loadClass(Streams$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Streams$1);
	});
	return class$;
}

$Class* Streams$1::class$ = nullptr;

		} // stream
	} // util
} // java