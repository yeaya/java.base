#include <jdk/internal/perf/Perf$GetPerfAction.h>

#include <jdk/internal/perf/Perf.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Perf = ::jdk::internal::perf::Perf;

namespace jdk {
	namespace internal {
		namespace perf {

$MethodInfo _Perf$GetPerfAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Perf$GetPerfAction::*)()>(&Perf$GetPerfAction::init$))},
	{"run", "()Ljdk/internal/perf/Perf;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Perf$GetPerfAction_InnerClassesInfo_[] = {
	{"jdk.internal.perf.Perf$GetPerfAction", "jdk.internal.perf.Perf", "GetPerfAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Perf$GetPerfAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.perf.Perf$GetPerfAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Perf$GetPerfAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/perf/Perf;>;",
	nullptr,
	_Perf$GetPerfAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.perf.Perf"
};

$Object* allocate$Perf$GetPerfAction($Class* clazz) {
	return $of($alloc(Perf$GetPerfAction));
}

void Perf$GetPerfAction::init$() {
}

$Object* Perf$GetPerfAction::run() {
	return $of($Perf::getPerf());
}

Perf$GetPerfAction::Perf$GetPerfAction() {
}

$Class* Perf$GetPerfAction::load$($String* name, bool initialize) {
	$loadClass(Perf$GetPerfAction, name, initialize, &_Perf$GetPerfAction_ClassInfo_, allocate$Perf$GetPerfAction);
	return class$;
}

$Class* Perf$GetPerfAction::class$ = nullptr;

		} // perf
	} // internal
} // jdk