#include <jdk/internal/perf/PerfCounter.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/perf/Perf$GetPerfAction.h>
#include <jdk/internal/perf/Perf.h>
#include <jdk/internal/perf/PerfCounter$CoreCounters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Perf = ::jdk::internal::perf::Perf;
using $Perf$GetPerfAction = ::jdk::internal::perf::Perf$GetPerfAction;
using $PerfCounter$CoreCounters = ::jdk::internal::perf::PerfCounter$CoreCounters;

namespace jdk {
	namespace internal {
		namespace perf {

$FieldInfo _PerfCounter_FieldInfo_[] = {
	{"perf", "Ljdk/internal/perf/Perf;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PerfCounter, perf)},
	{"V_Constant", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfCounter, V_Constant)},
	{"V_Monotonic", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfCounter, V_Monotonic)},
	{"V_Variable", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfCounter, V_Variable)},
	{"U_None", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfCounter, U_None)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PerfCounter, name)},
	{"lb", "Ljava/nio/LongBuffer;", nullptr, $PRIVATE | $FINAL, $field(PerfCounter, lb)},
	{}
};

$MethodInfo _PerfCounter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(PerfCounter, init$, void, $String*, int32_t)},
	{"add", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PerfCounter, add, void, int64_t)},
	{"addElapsedTimeFrom", "(J)V", nullptr, $PUBLIC, $virtualMethod(PerfCounter, addElapsedTimeFrom, void, int64_t)},
	{"addTime", "(J)V", nullptr, $PUBLIC, $virtualMethod(PerfCounter, addTime, void, int64_t)},
	{"get", "()J", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PerfCounter, get, int64_t)},
	{"getFindClassTime", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getFindClassTime, PerfCounter*)},
	{"getFindClasses", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getFindClasses, PerfCounter*)},
	{"getParentDelegationTime", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getParentDelegationTime, PerfCounter*)},
	{"getReadClassBytesTime", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getReadClassBytesTime, PerfCounter*)},
	{"getZipFileCount", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getZipFileCount, PerfCounter*)},
	{"getZipFileOpenTime", "()Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, getZipFileOpenTime, PerfCounter*)},
	{"increment", "()V", nullptr, $PUBLIC, $virtualMethod(PerfCounter, increment, void)},
	{"newConstantPerfCounter", "(Ljava/lang/String;)Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, newConstantPerfCounter, PerfCounter*, $String*)},
	{"newPerfCounter", "(Ljava/lang/String;)Ljdk/internal/perf/PerfCounter;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerfCounter, newPerfCounter, PerfCounter*, $String*)},
	{"set", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PerfCounter, set, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PerfCounter, toString, $String*)},
	{}
};

$InnerClassInfo _PerfCounter_InnerClassesInfo_[] = {
	{"jdk.internal.perf.PerfCounter$CoreCounters", "jdk.internal.perf.PerfCounter", "CoreCounters", $STATIC},
	{}
};

$ClassInfo _PerfCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.perf.PerfCounter",
	"java.lang.Object",
	nullptr,
	_PerfCounter_FieldInfo_,
	_PerfCounter_MethodInfo_,
	nullptr,
	nullptr,
	_PerfCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.perf.PerfCounter$CoreCounters"
};

$Object* allocate$PerfCounter($Class* clazz) {
	return $of($alloc(PerfCounter));
}

$Perf* PerfCounter::perf = nullptr;

void PerfCounter::init$($String* name, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$set(this, name, name);
	$var($ByteBuffer, bb, $nc(PerfCounter::perf)->createLong(name, type, PerfCounter::U_None, 0));
	$nc(bb)->order($($ByteOrder::nativeOrder()));
	$set(this, lb, bb->asLongBuffer());
}

PerfCounter* PerfCounter::newPerfCounter($String* name) {
	$init(PerfCounter);
	return $new(PerfCounter, name, PerfCounter::V_Variable);
}

PerfCounter* PerfCounter::newConstantPerfCounter($String* name) {
	$init(PerfCounter);
	$var(PerfCounter, c, $new(PerfCounter, name, PerfCounter::V_Constant));
	return c;
}

int64_t PerfCounter::get() {
	$synchronized(this) {
		return $nc(this->lb)->get(0);
	}
}

void PerfCounter::set(int64_t newValue) {
	$synchronized(this) {
		$nc(this->lb)->put(0, newValue);
	}
}

void PerfCounter::add(int64_t value) {
	$synchronized(this) {
		int64_t res = get() + value;
		$nc(this->lb)->put(0, res);
	}
}

void PerfCounter::increment() {
	add(1);
}

void PerfCounter::addTime(int64_t interval) {
	add(interval);
}

void PerfCounter::addElapsedTimeFrom(int64_t startTime) {
	add($System::nanoTime() - startTime);
}

$String* PerfCounter::toString() {
	return $str({this->name, " = "_s, $$str(get())});
}

PerfCounter* PerfCounter::getFindClasses() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::lc;
}

PerfCounter* PerfCounter::getFindClassTime() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::lct;
}

PerfCounter* PerfCounter::getReadClassBytesTime() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::rcbt;
}

PerfCounter* PerfCounter::getParentDelegationTime() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::pdt;
}

PerfCounter* PerfCounter::getZipFileCount() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::zfc;
}

PerfCounter* PerfCounter::getZipFileOpenTime() {
	$init(PerfCounter);
	$init($PerfCounter$CoreCounters);
	return $PerfCounter$CoreCounters::zfot;
}

void clinit$PerfCounter($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(PerfCounter::perf, $cast($Perf, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Perf$GetPerfAction)))));
}

PerfCounter::PerfCounter() {
}

$Class* PerfCounter::load$($String* name, bool initialize) {
	$loadClass(PerfCounter, name, initialize, &_PerfCounter_ClassInfo_, clinit$PerfCounter, allocate$PerfCounter);
	return class$;
}

$Class* PerfCounter::class$ = nullptr;

		} // perf
	} // internal
} // jdk