#include <jdk/internal/platform/cgroupv1/CgroupV1Subsystem.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <jdk/internal/platform/CgroupInfo.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupSubsystemController.h>
#include <jdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController.h>
#include <jdk/internal/platform/cgroupv1/CgroupV1SubsystemController.h>
#include <jcpp.h>

#undef INSTANCE
#undef LONG_RETVAL_UNLIMITED
#undef PROVIDER_NAME
#undef UNLIMITED_MIN

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $CgroupInfo = ::jdk::internal::platform::CgroupInfo;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupSubsystemController = ::jdk::internal::platform::CgroupSubsystemController;
using $CgroupV1MemorySubSystemController = ::jdk::internal::platform::cgroupv1::CgroupV1MemorySubSystemController;
using $CgroupV1SubsystemController = ::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

class CgroupV1Subsystem$$Lambda$convertStringToLong : public $Function {
	$class(CgroupV1Subsystem$$Lambda$convertStringToLong, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* strval) override {
		 return $of($CgroupV1SubsystemController::convertStringToLong($cast($String, strval)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV1Subsystem$$Lambda$convertStringToLong>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV1Subsystem$$Lambda$convertStringToLong::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CgroupV1Subsystem$$Lambda$convertStringToLong, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem$$Lambda$convertStringToLong, apply, $Object*, Object$*)},
	{}
};
$ClassInfo CgroupV1Subsystem$$Lambda$convertStringToLong::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv1.CgroupV1Subsystem$$Lambda$convertStringToLong",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupV1Subsystem$$Lambda$convertStringToLong::load$($String* name, bool initialize) {
	$loadClass(CgroupV1Subsystem$$Lambda$convertStringToLong, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV1Subsystem$$Lambda$convertStringToLong::class$ = nullptr;

$FieldInfo _CgroupV1Subsystem_FieldInfo_[] = {
	{"memory", "Ljdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController;", nullptr, $PRIVATE, $field(CgroupV1Subsystem, memory)},
	{"cpu", "Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;", nullptr, $PRIVATE, $field(CgroupV1Subsystem, cpu)},
	{"cpuacct", "Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;", nullptr, $PRIVATE, $field(CgroupV1Subsystem, cpuacct)},
	{"cpuset", "Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;", nullptr, $PRIVATE, $field(CgroupV1Subsystem, cpuset)},
	{"blkio", "Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;", nullptr, $PRIVATE, $field(CgroupV1Subsystem, blkio)},
	{"INSTANCE", "Ljdk/internal/platform/cgroupv1/CgroupV1Subsystem;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CgroupV1Subsystem, INSTANCE)},
	{"PROVIDER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV1Subsystem, PROVIDER_NAME)},
	{}
};

$MethodInfo _CgroupV1Subsystem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, init$, void)},
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getBlkIOServiceCount, int64_t)},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getBlkIOServiced, int64_t)},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuNumPeriods, int64_t)},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuNumThrottled, int64_t)},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuPeriod, int64_t)},
	{"getCpuQuota", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuQuota, int64_t)},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuSetCpus, $ints*)},
	{"getCpuSetMemoryPressure", "()D", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuSetMemoryPressure, double)},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuSetMems, $ints*)},
	{"getCpuShares", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuShares, int64_t)},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuSystemUsage, int64_t)},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuThrottledTime, int64_t)},
	{"getCpuUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuUsage, int64_t)},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getCpuUserUsage, int64_t)},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getEffectiveCpuCount, int64_t)},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getEffectiveCpuSetCpus, $ints*)},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getEffectiveCpuSetMems, $ints*)},
	{"getHierarchical", "(Ljdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CgroupV1Subsystem, getHierarchical, bool, $CgroupV1MemorySubSystemController*)},
	{"getInstance", "(Ljava/util/Map;)Ljdk/internal/platform/cgroupv1/CgroupV1Subsystem;", "(Ljava/util/Map<Ljava/lang/String;Ljdk/internal/platform/CgroupInfo;>;)Ljdk/internal/platform/cgroupv1/CgroupV1Subsystem;", $PUBLIC | $STATIC, $staticMethod(CgroupV1Subsystem, getInstance, CgroupV1Subsystem*, $Map*)},
	{"getKernelMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getKernelMemoryFailCount, int64_t)},
	{"getKernelMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getKernelMemoryLimit, int64_t)},
	{"getKernelMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getKernelMemoryMaxUsage, int64_t)},
	{"getKernelMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getKernelMemoryUsage, int64_t)},
	{"getLongValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(CgroupV1Subsystem, getLongValue, int64_t, $CgroupSubsystemController*, $String*)},
	{"getMemoryAndSwapFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryAndSwapFailCount, int64_t)},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryAndSwapLimit, int64_t)},
	{"getMemoryAndSwapMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryAndSwapMaxUsage, int64_t)},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryAndSwapUsage, int64_t)},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryFailCount, int64_t)},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryLimit, int64_t)},
	{"getMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryMaxUsage, int64_t)},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemorySoftLimit, int64_t)},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getMemoryUsage, int64_t)},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getPerCpuUsage, $longs*)},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getProvider, $String*)},
	{"getSwapEnabled", "(Ljdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CgroupV1Subsystem, getSwapEnabled, bool, $CgroupV1MemorySubSystemController*)},
	{"getTcpMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getTcpMemoryFailCount, int64_t)},
	{"getTcpMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getTcpMemoryLimit, int64_t)},
	{"getTcpMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getTcpMemoryMaxUsage, int64_t)},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, getTcpMemoryUsage, int64_t)},
	{"initSubSystem", "(Ljava/util/Map;)Ljdk/internal/platform/cgroupv1/CgroupV1Subsystem;", "(Ljava/util/Map<Ljava/lang/String;Ljdk/internal/platform/CgroupInfo;>;)Ljdk/internal/platform/cgroupv1/CgroupV1Subsystem;", $PRIVATE | $STATIC, $staticMethod(CgroupV1Subsystem, initSubSystem, CgroupV1Subsystem*, $Map*)},
	{"isCpuSetMemoryPressureEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, isCpuSetMemoryPressureEnabled, $Boolean*)},
	{"isMemoryOOMKillEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CgroupV1Subsystem, isMemoryOOMKillEnabled, $Boolean*)},
	{"setBlkIOController", "(Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;)V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, setBlkIOController, void, $CgroupV1SubsystemController*)},
	{"setCpuAcctController", "(Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;)V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, setCpuAcctController, void, $CgroupV1SubsystemController*)},
	{"setCpuController", "(Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;)V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, setCpuController, void, $CgroupV1SubsystemController*)},
	{"setCpuSetController", "(Ljdk/internal/platform/cgroupv1/CgroupV1SubsystemController;)V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, setCpuSetController, void, $CgroupV1SubsystemController*)},
	{"setMemorySubSystem", "(Ljdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController;)V", nullptr, $PRIVATE, $method(CgroupV1Subsystem, setMemorySubSystem, void, $CgroupV1MemorySubSystemController*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CgroupV1Subsystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.cgroupv1.CgroupV1Subsystem",
	"java.lang.Object",
	"jdk.internal.platform.CgroupSubsystem,jdk.internal.platform.CgroupV1Metrics",
	_CgroupV1Subsystem_FieldInfo_,
	_CgroupV1Subsystem_MethodInfo_
};

$Object* allocate$CgroupV1Subsystem($Class* clazz) {
	return $of($alloc(CgroupV1Subsystem));
}

int32_t CgroupV1Subsystem::hashCode() {
	 return this->$CgroupSubsystem::hashCode();
}

bool CgroupV1Subsystem::equals(Object$* obj) {
	 return this->$CgroupSubsystem::equals(obj);
}

$Object* CgroupV1Subsystem::clone() {
	 return this->$CgroupSubsystem::clone();
}

$String* CgroupV1Subsystem::toString() {
	 return this->$CgroupSubsystem::toString();
}

void CgroupV1Subsystem::finalize() {
	this->$CgroupSubsystem::finalize();
}

$volatile(CgroupV1Subsystem*) CgroupV1Subsystem::INSTANCE = nullptr;
$String* CgroupV1Subsystem::PROVIDER_NAME = nullptr;

void CgroupV1Subsystem::init$() {
}

CgroupV1Subsystem* CgroupV1Subsystem::getInstance($Map* infos) {
	$init(CgroupV1Subsystem);
	if (CgroupV1Subsystem::INSTANCE == nullptr) {
		$var(CgroupV1Subsystem, tmpSubsystem, initSubSystem(infos));
		$synchronized(CgroupV1Subsystem::class$) {
			if (CgroupV1Subsystem::INSTANCE == nullptr) {
				$assignStatic(CgroupV1Subsystem::INSTANCE, tmpSubsystem);
			}
		}
	}
	return CgroupV1Subsystem::INSTANCE;
}

CgroupV1Subsystem* CgroupV1Subsystem::initSubSystem($Map* infos) {
	$init(CgroupV1Subsystem);
	$useLocalCurrentObjectStackCache();
	$var(CgroupV1Subsystem, subsystem, $new(CgroupV1Subsystem));
	bool anyActiveControllers = false;
	{
		$var($Iterator, i$, $nc($($nc(infos)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CgroupInfo, info, $cast($CgroupInfo, i$->next()));
			{
				{
					$var($String, s3150$, $nc(info)->getName());
					int32_t tmp3150$ = -1;
					switch ($nc(s3150$)->hashCode()) {
					case (int32_t)0xBFC2BD01:
						{
							if (s3150$->equals("memory"_s)) {
								tmp3150$ = 0;
							}
							break;
						}
					case (int32_t)0xAF50F9BA:
						{
							if (s3150$->equals("cpuset"_s)) {
								tmp3150$ = 1;
							}
							break;
						}
					case 0x3AC605BB:
						{
							if (s3150$->equals("cpuacct"_s)) {
								tmp3150$ = 2;
							}
							break;
						}
					case 0x000181A8:
						{
							if (s3150$->equals("cpu"_s)) {
								tmp3150$ = 3;
							}
							break;
						}
					case 0x0597B647:
						{
							if (s3150$->equals("blkio"_s)) {
								tmp3150$ = 4;
							}
							break;
						}
					}
					switch (tmp3150$) {
					case 0:
						{
							{
								bool var$0 = info->getMountRoot() != nullptr;
								if (var$0 && info->getMountPoint() != nullptr) {
									$var($String, var$1, info->getMountRoot());
									$var($CgroupV1MemorySubSystemController, controller, $new($CgroupV1MemorySubSystemController, var$1, $(info->getMountPoint())));
									controller->setPath($(info->getCgroupPath()));
									bool isHierarchial = getHierarchical(controller);
									controller->setHierarchical(isHierarchial);
									bool isSwapEnabled = getSwapEnabled(controller);
									controller->setSwapEnabled(isSwapEnabled);
									subsystem->setMemorySubSystem(controller);
									anyActiveControllers = true;
								}
								break;
							}
						}
					case 1:
						{
							{
								bool var$2 = info->getMountRoot() != nullptr;
								if (var$2 && info->getMountPoint() != nullptr) {
									$var($String, var$3, info->getMountRoot());
									$var($CgroupV1SubsystemController, controller, $new($CgroupV1SubsystemController, var$3, $(info->getMountPoint())));
									controller->setPath($(info->getCgroupPath()));
									subsystem->setCpuSetController(controller);
									anyActiveControllers = true;
								}
								break;
							}
						}
					case 2:
						{
							{
								bool var$4 = info->getMountRoot() != nullptr;
								if (var$4 && info->getMountPoint() != nullptr) {
									$var($String, var$5, info->getMountRoot());
									$var($CgroupV1SubsystemController, controller, $new($CgroupV1SubsystemController, var$5, $(info->getMountPoint())));
									controller->setPath($(info->getCgroupPath()));
									subsystem->setCpuAcctController(controller);
									anyActiveControllers = true;
								}
								break;
							}
						}
					case 3:
						{
							{
								bool var$6 = info->getMountRoot() != nullptr;
								if (var$6 && info->getMountPoint() != nullptr) {
									$var($String, var$7, info->getMountRoot());
									$var($CgroupV1SubsystemController, controller, $new($CgroupV1SubsystemController, var$7, $(info->getMountPoint())));
									controller->setPath($(info->getCgroupPath()));
									subsystem->setCpuController(controller);
									anyActiveControllers = true;
								}
								break;
							}
						}
					case 4:
						{
							{
								bool var$8 = info->getMountRoot() != nullptr;
								if (var$8 && info->getMountPoint() != nullptr) {
									$var($String, var$9, info->getMountRoot());
									$var($CgroupV1SubsystemController, controller, $new($CgroupV1SubsystemController, var$9, $(info->getMountPoint())));
									controller->setPath($(info->getCgroupPath()));
									subsystem->setBlkIOController(controller);
									anyActiveControllers = true;
								}
								break;
							}
						}
					default:
						{
							$throwNew($AssertionError, $of($$str({"Unrecognized controller in infos: "_s, $(info->getName())})));
						}
					}
				}
			}
		}
	}
	if (anyActiveControllers) {
		return subsystem;
	}
	return nullptr;
}

bool CgroupV1Subsystem::getSwapEnabled($CgroupV1MemorySubSystemController* controller) {
	$init(CgroupV1Subsystem);
	int64_t retval = getLongValue(controller, "memory.memsw.limit_in_bytes"_s);
	return retval > 0;
}

bool CgroupV1Subsystem::getHierarchical($CgroupV1MemorySubSystemController* controller) {
	$init(CgroupV1Subsystem);
	int64_t hierarchical = getLongValue(controller, "memory.use_hierarchy"_s);
	return hierarchical > 0;
}

void CgroupV1Subsystem::setMemorySubSystem($CgroupV1MemorySubSystemController* memory) {
	$set(this, memory, memory);
}

void CgroupV1Subsystem::setCpuController($CgroupV1SubsystemController* cpu) {
	$set(this, cpu, cpu);
}

void CgroupV1Subsystem::setCpuAcctController($CgroupV1SubsystemController* cpuacct) {
	$set(this, cpuacct, cpuacct);
}

void CgroupV1Subsystem::setCpuSetController($CgroupV1SubsystemController* cpuset) {
	$set(this, cpuset, cpuset);
}

void CgroupV1Subsystem::setBlkIOController($CgroupV1SubsystemController* blkio) {
	$set(this, blkio, blkio);
}

int64_t CgroupV1Subsystem::getLongValue($CgroupSubsystemController* controller, $String* parm) {
	$init(CgroupV1Subsystem);
	return $CgroupSubsystemController::getLongValue(controller, parm, static_cast<$Function*>($$new(CgroupV1Subsystem$$Lambda$convertStringToLong)), $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

$String* CgroupV1Subsystem::getProvider() {
	return CgroupV1Subsystem::PROVIDER_NAME;
}

int64_t CgroupV1Subsystem::getCpuUsage() {
	return getLongValue(this->cpuacct, "cpuacct.usage"_s);
}

$longs* CgroupV1Subsystem::getPerCpuUsage() {
	$useLocalCurrentObjectStackCache();
	$var($String, usagelist, $CgroupSubsystemController::getStringValue(this->cpuacct, "cpuacct.usage_percpu"_s));
	if (usagelist == nullptr) {
		return nullptr;
	}
	$var($StringArray, list, $nc(usagelist)->split(" "_s));
	$var($longs, percpu, $new($longs, list->length));
	for (int32_t i = 0; i < list->length; ++i) {
		percpu->set(i, $Long::parseLong(list->get(i)));
	}
	return percpu;
}

int64_t CgroupV1Subsystem::getCpuUserUsage() {
	return $CgroupV1SubsystemController::getLongEntry(this->cpuacct, "cpuacct.stat"_s, "user"_s);
}

int64_t CgroupV1Subsystem::getCpuSystemUsage() {
	return $CgroupV1SubsystemController::getLongEntry(this->cpuacct, "cpuacct.stat"_s, "system"_s);
}

int64_t CgroupV1Subsystem::getCpuPeriod() {
	return getLongValue(this->cpu, "cpu.cfs_period_us"_s);
}

int64_t CgroupV1Subsystem::getCpuQuota() {
	return getLongValue(this->cpu, "cpu.cfs_quota_us"_s);
}

int64_t CgroupV1Subsystem::getCpuShares() {
	int64_t retval = getLongValue(this->cpu, "cpu.shares"_s);
	if (retval == 0 || retval == 1024) {
		return $CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	} else {
		return retval;
	}
}

int64_t CgroupV1Subsystem::getCpuNumPeriods() {
	return $CgroupV1SubsystemController::getLongEntry(this->cpu, "cpu.stat"_s, "nr_periods"_s);
}

int64_t CgroupV1Subsystem::getCpuNumThrottled() {
	return $CgroupV1SubsystemController::getLongEntry(this->cpu, "cpu.stat"_s, "nr_throttled"_s);
}

int64_t CgroupV1Subsystem::getCpuThrottledTime() {
	return $CgroupV1SubsystemController::getLongEntry(this->cpu, "cpu.stat"_s, "throttled_time"_s);
}

int64_t CgroupV1Subsystem::getEffectiveCpuCount() {
	return $nc($($Runtime::getRuntime()))->availableProcessors();
}

$ints* CgroupV1Subsystem::getCpuSetCpus() {
	return $CgroupSubsystemController::stringRangeToIntArray($($CgroupSubsystemController::getStringValue(this->cpuset, "cpuset.cpus"_s)));
}

$ints* CgroupV1Subsystem::getEffectiveCpuSetCpus() {
	return $CgroupSubsystemController::stringRangeToIntArray($($CgroupSubsystemController::getStringValue(this->cpuset, "cpuset.effective_cpus"_s)));
}

$ints* CgroupV1Subsystem::getCpuSetMems() {
	return $CgroupSubsystemController::stringRangeToIntArray($($CgroupSubsystemController::getStringValue(this->cpuset, "cpuset.mems"_s)));
}

$ints* CgroupV1Subsystem::getEffectiveCpuSetMems() {
	return $CgroupSubsystemController::stringRangeToIntArray($($CgroupSubsystemController::getStringValue(this->cpuset, "cpuset.effective_mems"_s)));
}

double CgroupV1Subsystem::getCpuSetMemoryPressure() {
	return $CgroupV1SubsystemController::getDoubleValue(this->cpuset, "cpuset.memory_pressure"_s);
}

$Boolean* CgroupV1Subsystem::isCpuSetMemoryPressureEnabled() {
	int64_t val = getLongValue(this->cpuset, "cpuset.memory_pressure_enabled"_s);
	return $Boolean::valueOf((val == 1));
}

int64_t CgroupV1Subsystem::getMemoryFailCount() {
	return getLongValue(this->memory, "memory.failcnt"_s);
}

int64_t CgroupV1Subsystem::getMemoryLimit() {
	int64_t retval = getLongValue(this->memory, "memory.limit_in_bytes"_s);
	$init($CgroupV1SubsystemController);
	if (retval > $CgroupV1SubsystemController::UNLIMITED_MIN) {
		if ($nc(this->memory)->isHierarchical()) {
			$var($String, match, "hierarchical_memory_limit"_s);
			retval = $CgroupV1SubsystemController::getLongValueMatchingLine(this->memory, "memory.stat"_s, match);
		}
	}
	return $CgroupV1SubsystemController::longValOrUnlimited(retval);
}

int64_t CgroupV1Subsystem::getMemoryMaxUsage() {
	return getLongValue(this->memory, "memory.max_usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getMemoryUsage() {
	return getLongValue(this->memory, "memory.usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getKernelMemoryFailCount() {
	return getLongValue(this->memory, "memory.kmem.failcnt"_s);
}

int64_t CgroupV1Subsystem::getKernelMemoryLimit() {
	return $CgroupV1SubsystemController::longValOrUnlimited(getLongValue(this->memory, "memory.kmem.limit_in_bytes"_s));
}

int64_t CgroupV1Subsystem::getKernelMemoryMaxUsage() {
	return getLongValue(this->memory, "memory.kmem.max_usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getKernelMemoryUsage() {
	return getLongValue(this->memory, "memory.kmem.usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getTcpMemoryFailCount() {
	return getLongValue(this->memory, "memory.kmem.tcp.failcnt"_s);
}

int64_t CgroupV1Subsystem::getTcpMemoryLimit() {
	return $CgroupV1SubsystemController::longValOrUnlimited(getLongValue(this->memory, "memory.kmem.tcp.limit_in_bytes"_s));
}

int64_t CgroupV1Subsystem::getTcpMemoryMaxUsage() {
	return getLongValue(this->memory, "memory.kmem.tcp.max_usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getTcpMemoryUsage() {
	return getLongValue(this->memory, "memory.kmem.tcp.usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getMemoryAndSwapFailCount() {
	if (this->memory != nullptr && !$nc(this->memory)->isSwapEnabled()) {
		return getMemoryFailCount();
	}
	return getLongValue(this->memory, "memory.memsw.failcnt"_s);
}

int64_t CgroupV1Subsystem::getMemoryAndSwapLimit() {
	if (this->memory != nullptr && !$nc(this->memory)->isSwapEnabled()) {
		return getMemoryLimit();
	}
	int64_t retval = getLongValue(this->memory, "memory.memsw.limit_in_bytes"_s);
	$init($CgroupV1SubsystemController);
	if (retval > $CgroupV1SubsystemController::UNLIMITED_MIN) {
		if ($nc(this->memory)->isHierarchical()) {
			$var($String, match, "hierarchical_memsw_limit"_s);
			retval = $CgroupV1SubsystemController::getLongValueMatchingLine(this->memory, "memory.stat"_s, match);
		}
	}
	return $CgroupV1SubsystemController::longValOrUnlimited(retval);
}

int64_t CgroupV1Subsystem::getMemoryAndSwapMaxUsage() {
	if (this->memory != nullptr && !$nc(this->memory)->isSwapEnabled()) {
		return getMemoryMaxUsage();
	}
	return getLongValue(this->memory, "memory.memsw.max_usage_in_bytes"_s);
}

int64_t CgroupV1Subsystem::getMemoryAndSwapUsage() {
	if (this->memory != nullptr && !$nc(this->memory)->isSwapEnabled()) {
		return getMemoryUsage();
	}
	return getLongValue(this->memory, "memory.memsw.usage_in_bytes"_s);
}

$Boolean* CgroupV1Subsystem::isMemoryOOMKillEnabled() {
	int64_t val = $CgroupV1SubsystemController::getLongEntry(this->memory, "memory.oom_control"_s, "oom_kill_disable"_s);
	return $Boolean::valueOf((val == 0));
}

int64_t CgroupV1Subsystem::getMemorySoftLimit() {
	return $CgroupV1SubsystemController::longValOrUnlimited(getLongValue(this->memory, "memory.soft_limit_in_bytes"_s));
}

int64_t CgroupV1Subsystem::getBlkIOServiceCount() {
	return $CgroupV1SubsystemController::getLongEntry(this->blkio, "blkio.throttle.io_service_bytes"_s, "Total"_s);
}

int64_t CgroupV1Subsystem::getBlkIOServiced() {
	return $CgroupV1SubsystemController::getLongEntry(this->blkio, "blkio.throttle.io_serviced"_s, "Total"_s);
}

CgroupV1Subsystem::CgroupV1Subsystem() {
}

void clinit$CgroupV1Subsystem($Class* class$) {
	$assignStatic(CgroupV1Subsystem::PROVIDER_NAME, "cgroupv1"_s);
}

$Class* CgroupV1Subsystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CgroupV1Subsystem$$Lambda$convertStringToLong::classInfo$.name)) {
			return CgroupV1Subsystem$$Lambda$convertStringToLong::load$(name, initialize);
		}
	}
	$loadClass(CgroupV1Subsystem, name, initialize, &_CgroupV1Subsystem_ClassInfo_, clinit$CgroupV1Subsystem, allocate$CgroupV1Subsystem);
	return class$;
}

$Class* CgroupV1Subsystem::class$ = nullptr;

			} // cgroupv1
		} // platform
	} // internal
} // jdk