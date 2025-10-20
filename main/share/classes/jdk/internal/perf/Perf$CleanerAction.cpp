#include <jdk/internal/perf/Perf$CleanerAction.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/perf/Perf.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Perf = ::jdk::internal::perf::Perf;

namespace jdk {
	namespace internal {
		namespace perf {

$FieldInfo _Perf$CleanerAction_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Perf$CleanerAction, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Perf$CleanerAction, bb)},
	{"perf", "Ljdk/internal/perf/Perf;", nullptr, $PRIVATE | $FINAL, $field(Perf$CleanerAction, perf)},
	{}
};

$MethodInfo _Perf$CleanerAction_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/perf/Perf;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(Perf$CleanerAction::*)($Perf*,$ByteBuffer*)>(&Perf$CleanerAction::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Perf$CleanerAction_InnerClassesInfo_[] = {
	{"jdk.internal.perf.Perf$CleanerAction", "jdk.internal.perf.Perf", "CleanerAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Perf$CleanerAction_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.perf.Perf$CleanerAction",
	"java.lang.Object",
	"java.lang.Runnable",
	_Perf$CleanerAction_FieldInfo_,
	_Perf$CleanerAction_MethodInfo_,
	nullptr,
	nullptr,
	_Perf$CleanerAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.perf.Perf"
};

$Object* allocate$Perf$CleanerAction($Class* clazz) {
	return $of($alloc(Perf$CleanerAction));
}

bool Perf$CleanerAction::$assertionsDisabled = false;

void Perf$CleanerAction::init$($Perf* perf, $ByteBuffer* bb) {
	$set(this, perf, perf);
	$set(this, bb, bb);
}

void Perf$CleanerAction::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->perf)->detach(this->bb);
	} catch ($Throwable&) {
		$var($Throwable, th, $catch());
		if (!Perf$CleanerAction::$assertionsDisabled) {
			$throwNew($AssertionError, $($of(th->toString())));
		}
	}
}

void clinit$Perf$CleanerAction($Class* class$) {
	$load($Perf);
	Perf$CleanerAction::$assertionsDisabled = !$Perf::class$->desiredAssertionStatus();
}

Perf$CleanerAction::Perf$CleanerAction() {
}

$Class* Perf$CleanerAction::load$($String* name, bool initialize) {
	$loadClass(Perf$CleanerAction, name, initialize, &_Perf$CleanerAction_ClassInfo_, clinit$Perf$CleanerAction, allocate$Perf$CleanerAction);
	return class$;
}

$Class* Perf$CleanerAction::class$ = nullptr;

		} // perf
	} // internal
} // jdk