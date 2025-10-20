#include <jdk/internal/platform/cgroupv2/CgroupV2Subsystem.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/function/Function.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/platform/CgroupInfo.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupSubsystemController.h>
#include <jdk/internal/platform/CgroupUtil.h>
#include <jdk/internal/platform/cgroupv2/CgroupV2SubsystemController.h>
#include <jcpp.h>

#undef EMPTY_STR
#undef INSTANCE
#undef INT_ARRAY_UNAVAILABLE
#undef LONG_ARRAY_NOT_SUPPORTED
#undef LONG_RETVAL_UNLIMITED
#undef MAX_VAL
#undef MICROSECONDS
#undef NO_SWAP
#undef PER_CPU_SHARES
#undef PROVIDER_NAME

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runtime = ::java::lang::Runtime;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Function = ::java::util::function::Function;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $CgroupInfo = ::jdk::internal::platform::CgroupInfo;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupSubsystemController = ::jdk::internal::platform::CgroupSubsystemController;
using $CgroupUtil = ::jdk::internal::platform::CgroupUtil;
using $CgroupV2SubsystemController = ::jdk::internal::platform::cgroupv2::CgroupV2SubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv2 {

class CgroupV2Subsystem$$Lambda$convertStringToLong : public $Function {
	$class(CgroupV2Subsystem$$Lambda$convertStringToLong, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* strval) override {
		 return $of($CgroupV2SubsystemController::convertStringToLong($cast($String, strval)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV2Subsystem$$Lambda$convertStringToLong>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV2Subsystem$$Lambda$convertStringToLong::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV2Subsystem$$Lambda$convertStringToLong::*)()>(&CgroupV2Subsystem$$Lambda$convertStringToLong::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupV2Subsystem$$Lambda$convertStringToLong::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv2.CgroupV2Subsystem$$Lambda$convertStringToLong",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupV2Subsystem$$Lambda$convertStringToLong::load$($String* name, bool initialize) {
	$loadClass(CgroupV2Subsystem$$Lambda$convertStringToLong, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV2Subsystem$$Lambda$convertStringToLong::class$ = nullptr;

class CgroupV2Subsystem$$Lambda$lineToRandWIOs$1 : public $Function {
	$class(CgroupV2Subsystem$$Lambda$lineToRandWIOs$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(CgroupV2Subsystem::lineToRandWIOs($cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV2Subsystem$$Lambda$lineToRandWIOs$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::*)()>(&CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv2.CgroupV2Subsystem$$Lambda$lineToRandWIOs$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::load$($String* name, bool initialize) {
	$loadClass(CgroupV2Subsystem$$Lambda$lineToRandWIOs$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::class$ = nullptr;

class CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2 : public $Function {
	$class(CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(CgroupV2Subsystem::lineToRBytesAndWBytesIO($cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::*)()>(&CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv2.CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::load$($String* name, bool initialize) {
	$loadClass(CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::class$ = nullptr;

class CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3 : public $ToLongFunction {
	$class(CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3, $NO_CLASS_INIT, $ToLongFunction)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(Object$* e) override {
		 return CgroupV2Subsystem::lambda$sumTokensIOStat$0($cast($Long, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::*)()>(&CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::init$))},
	{"applyAsLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv2.CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3",
	"java.lang.Object",
	"java.util.function.ToLongFunction",
	nullptr,
	methodInfos
};
$Class* CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::load$($String* name, bool initialize) {
	$loadClass(CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::class$ = nullptr;

$FieldInfo _CgroupV2Subsystem_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CgroupV2Subsystem, $assertionsDisabled)},
	{"INSTANCE", "Ljdk/internal/platform/cgroupv2/CgroupV2Subsystem;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CgroupV2Subsystem, INSTANCE)},
	{"LONG_ARRAY_NOT_SUPPORTED", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV2Subsystem, LONG_ARRAY_NOT_SUPPORTED)},
	{"INT_ARRAY_UNAVAILABLE", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV2Subsystem, INT_ARRAY_UNAVAILABLE)},
	{"unified", "Ljdk/internal/platform/CgroupSubsystemController;", nullptr, $PRIVATE | $FINAL, $field(CgroupV2Subsystem, unified)},
	{"PROVIDER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV2Subsystem, PROVIDER_NAME)},
	{"PER_CPU_SHARES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CgroupV2Subsystem, PER_CPU_SHARES)},
	{"MAX_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV2Subsystem, MAX_VAL)},
	{"EMPTY_STR", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV2Subsystem, EMPTY_STR)},
	{"NO_SWAP", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CgroupV2Subsystem, NO_SWAP)},
	{}
};

$MethodInfo _CgroupV2Subsystem_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/platform/CgroupSubsystemController;)V", nullptr, $PRIVATE, $method(static_cast<void(CgroupV2Subsystem::*)($CgroupSubsystemController*)>(&CgroupV2Subsystem::init$))},
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC},
	{"getCpuQuota", "()J", nullptr, $PUBLIC},
	{"getCpuSet", "(Ljava/lang/String;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(CgroupV2Subsystem::*)($String*)>(&CgroupV2Subsystem::getCpuSet))},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"getCpuShares", "()J", nullptr, $PUBLIC},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC},
	{"getCpuUsage", "()J", nullptr, $PUBLIC},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"getFromCpuMax", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(CgroupV2Subsystem::*)(int32_t)>(&CgroupV2Subsystem::getFromCpuMax))},
	{"getInstance", "(Ljdk/internal/platform/CgroupInfo;)Ljdk/internal/platform/CgroupSubsystem;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CgroupSubsystem*(*)($CgroupInfo*)>(&CgroupV2Subsystem::getInstance))},
	{"getLongVal", "(Ljava/lang/String;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(CgroupV2Subsystem::*)($String*,int64_t)>(&CgroupV2Subsystem::getLongVal))},
	{"getLongVal", "(Ljava/lang/String;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(CgroupV2Subsystem::*)($String*)>(&CgroupV2Subsystem::getLongVal))},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRWBytesIOMatchTokenNames", "()[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)()>(&CgroupV2Subsystem::getRWBytesIOMatchTokenNames))},
	{"getRWIOMatchTokenNames", "()[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)()>(&CgroupV2Subsystem::getRWIOMatchTokenNames))},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC},
	{"ioStatLineToLong", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Long*(*)($String*,$StringArray*)>(&CgroupV2Subsystem::ioStatLineToLong))},
	{"lambda$sumTokensIOStat$0", "(Ljava/lang/Long;)J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int64_t(*)($Long*)>(&CgroupV2Subsystem::lambda$sumTokensIOStat$0))},
	{"limitFromString", "(Ljava/lang/String;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(CgroupV2Subsystem::*)($String*)>(&CgroupV2Subsystem::limitFromString))},
	{"lineToRBytesAndWBytesIO", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Long*(*)($String*)>(&CgroupV2Subsystem::lineToRBytesAndWBytesIO))},
	{"lineToRandWIOs", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Long*(*)($String*)>(&CgroupV2Subsystem::lineToRandWIOs))},
	{"longOrZero", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($String*)>(&CgroupV2Subsystem::longOrZero))},
	{"sumTokensIOStat", "(Ljava/util/function/Function;)J", "(Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/Long;>;)J", $PRIVATE, $method(static_cast<int64_t(CgroupV2Subsystem::*)($Function*)>(&CgroupV2Subsystem::sumTokensIOStat))},
	{}
};

$ClassInfo _CgroupV2Subsystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.cgroupv2.CgroupV2Subsystem",
	"java.lang.Object",
	"jdk.internal.platform.CgroupSubsystem",
	_CgroupV2Subsystem_FieldInfo_,
	_CgroupV2Subsystem_MethodInfo_
};

$Object* allocate$CgroupV2Subsystem($Class* clazz) {
	return $of($alloc(CgroupV2Subsystem));
}

bool CgroupV2Subsystem::$assertionsDisabled = false;
$volatile(CgroupV2Subsystem*) CgroupV2Subsystem::INSTANCE = nullptr;
$longs* CgroupV2Subsystem::LONG_ARRAY_NOT_SUPPORTED = nullptr;
$ints* CgroupV2Subsystem::INT_ARRAY_UNAVAILABLE = nullptr;
$String* CgroupV2Subsystem::PROVIDER_NAME = nullptr;
$String* CgroupV2Subsystem::MAX_VAL = nullptr;
$Object* CgroupV2Subsystem::EMPTY_STR = nullptr;

void CgroupV2Subsystem::init$($CgroupSubsystemController* unified) {
	$set(this, unified, unified);
}

int64_t CgroupV2Subsystem::getLongVal($String* file, int64_t defaultValue) {
	return $CgroupSubsystemController::getLongValue(this->unified, file, static_cast<$Function*>($$new(CgroupV2Subsystem$$Lambda$convertStringToLong)), defaultValue);
}

int64_t CgroupV2Subsystem::getLongVal($String* file) {
	return getLongVal(file, $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

$CgroupSubsystem* CgroupV2Subsystem::getInstance($CgroupInfo* anyController) {
	$init(CgroupV2Subsystem);
	$useLocalCurrentObjectStackCache();
	if (CgroupV2Subsystem::INSTANCE == nullptr) {
		$var($String, var$0, $nc(anyController)->getMountPoint());
		$var($CgroupSubsystemController, unified, $new($CgroupV2SubsystemController, var$0, $(anyController->getCgroupPath())));
		$var(CgroupV2Subsystem, tmpCgroupSystem, $new(CgroupV2Subsystem, unified));
		$synchronized(CgroupV2Subsystem::class$) {
			if (CgroupV2Subsystem::INSTANCE == nullptr) {
				$assignStatic(CgroupV2Subsystem::INSTANCE, tmpCgroupSystem);
			}
		}
	}
	return CgroupV2Subsystem::INSTANCE;
}

$String* CgroupV2Subsystem::getProvider() {
	return CgroupV2Subsystem::PROVIDER_NAME;
}

int64_t CgroupV2Subsystem::getCpuUsage() {
	int64_t micros = $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "usage_usec"_s);
	if (micros < 0) {
		return micros;
	}
	$init($TimeUnit);
	return $TimeUnit::MICROSECONDS->toNanos(micros);
}

$longs* CgroupV2Subsystem::getPerCpuUsage() {
	return CgroupV2Subsystem::LONG_ARRAY_NOT_SUPPORTED;
}

int64_t CgroupV2Subsystem::getCpuUserUsage() {
	int64_t micros = $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "user_usec"_s);
	if (micros < 0) {
		return micros;
	}
	$init($TimeUnit);
	return $TimeUnit::MICROSECONDS->toNanos(micros);
}

int64_t CgroupV2Subsystem::getCpuSystemUsage() {
	int64_t micros = $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "system_usec"_s);
	if (micros < 0) {
		return micros;
	}
	$init($TimeUnit);
	return $TimeUnit::MICROSECONDS->toNanos(micros);
}

int64_t CgroupV2Subsystem::getCpuPeriod() {
	return getFromCpuMax(1);
}

int64_t CgroupV2Subsystem::getCpuQuota() {
	return getFromCpuMax(0);
}

int64_t CgroupV2Subsystem::getFromCpuMax(int32_t tokenIdx) {
	$useLocalCurrentObjectStackCache();
	$var($String, cpuMaxRaw, $CgroupSubsystemController::getStringValue(this->unified, "cpu.max"_s));
	if (cpuMaxRaw == nullptr) {
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	}
	$var($StringArray, tokens, $nc(cpuMaxRaw)->split("\\s+"_s));
	if (tokens->length != 2) {
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	}
	$var($String, quota, tokens->get(tokenIdx));
	return limitFromString(quota);
}

int64_t CgroupV2Subsystem::limitFromString($String* strVal) {
	if (strVal == nullptr || $nc(CgroupV2Subsystem::MAX_VAL)->equals(strVal)) {
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	}
	return $Long::parseLong(strVal);
}

int64_t CgroupV2Subsystem::getCpuShares() {
	int64_t sharesRaw = getLongVal("cpu.weight"_s);
	if (sharesRaw == 100 || sharesRaw <= 0) {
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	}
	int32_t shares = (int32_t)sharesRaw;
	int32_t x = 0x0003FFFE * shares - 1;
	double frac = x / 9999.0;
	x = ($cast(int32_t, frac)) + 2;
	if (x <= CgroupV2Subsystem::PER_CPU_SHARES) {
		return CgroupV2Subsystem::PER_CPU_SHARES;
	}
	int32_t f = $div(x, CgroupV2Subsystem::PER_CPU_SHARES);
	int32_t lower_multiple = f * CgroupV2Subsystem::PER_CPU_SHARES;
	int32_t upper_multiple = (f + 1) * CgroupV2Subsystem::PER_CPU_SHARES;
	int32_t var$0 = $Math::max(lower_multiple, x);
	int32_t distance_lower = var$0 - $Math::min(lower_multiple, x);
	int32_t var$1 = $Math::max(upper_multiple, x);
	int32_t distance_upper = var$1 - $Math::min(upper_multiple, x);
	x = distance_lower <= distance_upper ? lower_multiple : upper_multiple;
	return x;
}

int64_t CgroupV2Subsystem::getCpuNumPeriods() {
	return $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "nr_periods"_s);
}

int64_t CgroupV2Subsystem::getCpuNumThrottled() {
	return $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "nr_throttled"_s);
}

int64_t CgroupV2Subsystem::getCpuThrottledTime() {
	int64_t micros = $CgroupV2SubsystemController::getLongEntry(this->unified, "cpu.stat"_s, "throttled_usec"_s);
	if (micros < 0) {
		return micros;
	}
	$init($TimeUnit);
	return $TimeUnit::MICROSECONDS->toNanos(micros);
}

int64_t CgroupV2Subsystem::getEffectiveCpuCount() {
	return $nc($($Runtime::getRuntime()))->availableProcessors();
}

$ints* CgroupV2Subsystem::getCpuSetCpus() {
	$var($String, cpuSetVal, $CgroupSubsystemController::getStringValue(this->unified, "cpuset.cpus"_s));
	return getCpuSet(cpuSetVal);
}

$ints* CgroupV2Subsystem::getEffectiveCpuSetCpus() {
	$var($String, effCpuSetVal, $CgroupSubsystemController::getStringValue(this->unified, "cpuset.cpus.effective"_s));
	return getCpuSet(effCpuSetVal);
}

$ints* CgroupV2Subsystem::getCpuSetMems() {
	$var($String, cpuSetMems, $CgroupSubsystemController::getStringValue(this->unified, "cpuset.mems"_s));
	return getCpuSet(cpuSetMems);
}

$ints* CgroupV2Subsystem::getEffectiveCpuSetMems() {
	$var($String, effCpuSetMems, $CgroupSubsystemController::getStringValue(this->unified, "cpuset.mems.effective"_s));
	return getCpuSet(effCpuSetMems);
}

$ints* CgroupV2Subsystem::getCpuSet($String* cpuSetVal) {
	if (cpuSetVal == nullptr || $nc($of(CgroupV2Subsystem::EMPTY_STR))->equals(cpuSetVal)) {
		return CgroupV2Subsystem::INT_ARRAY_UNAVAILABLE;
	}
	return $CgroupSubsystemController::stringRangeToIntArray(cpuSetVal);
}

int64_t CgroupV2Subsystem::getMemoryFailCount() {
	return $CgroupV2SubsystemController::getLongEntry(this->unified, "memory.events"_s, "max"_s);
}

int64_t CgroupV2Subsystem::getMemoryLimit() {
	$var($String, strVal, $CgroupSubsystemController::getStringValue(this->unified, "memory.max"_s));
	return limitFromString(strVal);
}

int64_t CgroupV2Subsystem::getMemoryUsage() {
	return getLongVal("memory.current"_s);
}

int64_t CgroupV2Subsystem::getTcpMemoryUsage() {
	return $CgroupV2SubsystemController::getLongEntry(this->unified, "memory.stat"_s, "sock"_s);
}

int64_t CgroupV2Subsystem::getMemoryAndSwapLimit() {
	$var($String, strVal, $CgroupSubsystemController::getStringValue(this->unified, "memory.swap.max"_s));
	if (strVal == nullptr) {
		return getMemoryLimit();
	}
	int64_t swapLimit = limitFromString(strVal);
	if (swapLimit >= 0) {
		int64_t memoryLimit = getMemoryLimit();
		if (!CgroupV2Subsystem::$assertionsDisabled && !(memoryLimit >= 0)) {
			$throwNew($AssertionError);
		}
		return memoryLimit + swapLimit;
	}
	return swapLimit;
}

int64_t CgroupV2Subsystem::getMemoryAndSwapUsage() {
	int64_t memoryUsage = getMemoryUsage();
	if (memoryUsage >= 0) {
		int64_t swapUsage = getLongVal("memory.swap.current"_s, CgroupV2Subsystem::NO_SWAP);
		return memoryUsage + swapUsage;
	}
	return memoryUsage;
}

int64_t CgroupV2Subsystem::getMemorySoftLimit() {
	$var($String, softLimitStr, $CgroupSubsystemController::getStringValue(this->unified, "memory.low"_s));
	return limitFromString(softLimitStr);
}

int64_t CgroupV2Subsystem::getBlkIOServiceCount() {
	return sumTokensIOStat(static_cast<$Function*>($$new(CgroupV2Subsystem$$Lambda$lineToRandWIOs$1)));
}

int64_t CgroupV2Subsystem::getBlkIOServiced() {
	return sumTokensIOStat(static_cast<$Function*>($$new(CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2)));
}

int64_t CgroupV2Subsystem::sumTokensIOStat($Function* mapFunc) {
	$useLocalCurrentObjectStackCache();
	try {
		return $nc(($cast($Long, $($nc($($nc($($CgroupUtil::readFilePrivileged($($Paths::get($($nc(this->unified)->path()), $$new($StringArray, {"io.stat"_s}))))))->map(mapFunc)))->collect($($Collectors::summingLong(static_cast<$ToLongFunction*>($$new(CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3)))))))))->longValue();
	} catch ($UncheckedIOException&) {
		$var($UncheckedIOException, e, $catch());
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	}
	$shouldNotReachHere();
}

$StringArray* CgroupV2Subsystem::getRWIOMatchTokenNames() {
	$init(CgroupV2Subsystem);
	return $new($StringArray, {
		"rios"_s,
		"wios"_s
	});
}

$StringArray* CgroupV2Subsystem::getRWBytesIOMatchTokenNames() {
	$init(CgroupV2Subsystem);
	return $new($StringArray, {
		"rbytes"_s,
		"wbytes"_s
	});
}

$Long* CgroupV2Subsystem::lineToRandWIOs($String* line) {
	$init(CgroupV2Subsystem);
	$var($StringArray, matchNames, getRWIOMatchTokenNames());
	return ioStatLineToLong(line, matchNames);
}

$Long* CgroupV2Subsystem::lineToRBytesAndWBytesIO($String* line) {
	$init(CgroupV2Subsystem);
	$var($StringArray, matchNames, getRWBytesIOMatchTokenNames());
	return ioStatLineToLong(line, matchNames);
}

$Long* CgroupV2Subsystem::ioStatLineToLong($String* line, $StringArray* matchNames) {
	$init(CgroupV2Subsystem);
	$useLocalCurrentObjectStackCache();
	if (line == nullptr || $nc($of(CgroupV2Subsystem::EMPTY_STR))->equals(line)) {
		return $Long::valueOf((int64_t)0);
	}
	$var($StringArray, tokens, $nc(line)->split("\\s+"_s));
	int64_t retval = 0;
	{
		$var($StringArray, arr$, tokens);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, t, arr$->get(i$));
			{
				$var($StringArray, valKeys, $nc(t)->split("="_s));
				if (valKeys->length != 2) {
					continue;
				}
				{
					$var($StringArray, arr$, matchNames);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($String, match, arr$->get(i$));
						{
							if ($nc(match)->equals(valKeys->get(0))) {
								retval += longOrZero(valKeys->get(1));
							}
						}
					}
				}
			}
		}
	}
	return $Long::valueOf(retval);
}

int64_t CgroupV2Subsystem::longOrZero($String* val) {
	$init(CgroupV2Subsystem);
	int64_t lVal = 0;
	try {
		lVal = $Long::parseLong(val);
	} catch ($NumberFormatException&) {
		$catch();
	}
	return lVal;
}

int64_t CgroupV2Subsystem::lambda$sumTokensIOStat$0($Long* e) {
	$init(CgroupV2Subsystem);
	return $nc(e)->longValue();
}

void clinit$CgroupV2Subsystem($Class* class$) {
	$assignStatic(CgroupV2Subsystem::PROVIDER_NAME, "cgroupv2"_s);
	$assignStatic(CgroupV2Subsystem::MAX_VAL, "max"_s);
	CgroupV2Subsystem::$assertionsDisabled = !CgroupV2Subsystem::class$->desiredAssertionStatus();
	$assignStatic(CgroupV2Subsystem::LONG_ARRAY_NOT_SUPPORTED, nullptr);
	$assignStatic(CgroupV2Subsystem::INT_ARRAY_UNAVAILABLE, nullptr);
	$assignStatic(CgroupV2Subsystem::EMPTY_STR, ""_s);
}

CgroupV2Subsystem::CgroupV2Subsystem() {
}

$Class* CgroupV2Subsystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CgroupV2Subsystem$$Lambda$convertStringToLong::classInfo$.name)) {
			return CgroupV2Subsystem$$Lambda$convertStringToLong::load$(name, initialize);
		}
		if (name->equals(CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::classInfo$.name)) {
			return CgroupV2Subsystem$$Lambda$lineToRandWIOs$1::load$(name, initialize);
		}
		if (name->equals(CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::classInfo$.name)) {
			return CgroupV2Subsystem$$Lambda$lineToRBytesAndWBytesIO$2::load$(name, initialize);
		}
		if (name->equals(CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::classInfo$.name)) {
			return CgroupV2Subsystem$$Lambda$lambda$sumTokensIOStat$0$3::load$(name, initialize);
		}
	}
	$loadClass(CgroupV2Subsystem, name, initialize, &_CgroupV2Subsystem_ClassInfo_, clinit$CgroupV2Subsystem, allocate$CgroupV2Subsystem);
	return class$;
}

$Class* CgroupV2Subsystem::class$ = nullptr;

			} // cgroupv2
		} // platform
	} // internal
} // jdk