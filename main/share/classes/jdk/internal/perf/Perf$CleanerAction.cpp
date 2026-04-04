#include <jdk/internal/perf/Perf$CleanerAction.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/perf/Perf.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Perf = ::jdk::internal::perf::Perf;

namespace jdk {
	namespace internal {
		namespace perf {

bool Perf$CleanerAction::$assertionsDisabled = false;

void Perf$CleanerAction::init$($Perf* perf, $ByteBuffer* bb) {
	$set(this, perf, perf);
	$set(this, bb, bb);
}

void Perf$CleanerAction::run() {
	try {
		$nc(this->perf)->detach(this->bb);
	} catch ($Throwable& th) {
		if (!Perf$CleanerAction::$assertionsDisabled) {
			$throwNew($AssertionError, $$of(th->toString()));
		}
	}
}

void Perf$CleanerAction::clinit$($Class* clazz) {
	$load($Perf);
	Perf$CleanerAction::$assertionsDisabled = !$Perf::class$->desiredAssertionStatus();
}

Perf$CleanerAction::Perf$CleanerAction() {
}

$Class* Perf$CleanerAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Perf$CleanerAction, $assertionsDisabled)},
		{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Perf$CleanerAction, bb)},
		{"perf", "Ljdk/internal/perf/Perf;", nullptr, $PRIVATE | $FINAL, $field(Perf$CleanerAction, perf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/perf/Perf;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(Perf$CleanerAction, init$, void, $Perf*, $ByteBuffer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Perf$CleanerAction, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.perf.Perf$CleanerAction", "jdk.internal.perf.Perf", "CleanerAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.perf.Perf$CleanerAction",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.perf.Perf"
	};
	$loadClass(Perf$CleanerAction, name, initialize, &classInfo$$, Perf$CleanerAction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Perf$CleanerAction);
	});
	return class$;
}

$Class* Perf$CleanerAction::class$ = nullptr;

		} // perf
	} // internal
} // jdk