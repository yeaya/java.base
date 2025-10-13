#include <jdk/internal/platform/cgroupv1/CgroupV1SubsystemController.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Function.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupSubsystemController.h>
#include <jcpp.h>

#undef DOUBLE_RETVAL_UNLIMITED
#undef LONG_RETVAL_UNLIMITED
#undef MAX_VALUE
#undef UNLIMITED_MIN

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Function = ::java::util::function::Function;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupSubsystemController = ::jdk::internal::platform::CgroupSubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

class CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine : public $Function {
	$class(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(CgroupV1SubsystemController::convertHierachicalLimitLine($cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::*)()>(&CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.cgroupv1.CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::load$($String* name, bool initialize) {
	$loadClass(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::class$ = nullptr;

$FieldInfo _CgroupV1SubsystemController_FieldInfo_[] = {
	{"DOUBLE_RETVAL_UNLIMITED", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV1SubsystemController, DOUBLE_RETVAL_UNLIMITED)},
	{"UNLIMITED_MIN", "J", nullptr, $STATIC, $staticField(CgroupV1SubsystemController, UNLIMITED_MIN)},
	{"root", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, root)},
	{"mountPoint", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, mountPoint)},
	{"path", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, path$)},
	{}
};

$MethodInfo _CgroupV1SubsystemController_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV1SubsystemController::*)($String*,$String*)>(&CgroupV1SubsystemController::init$))},
	{"convertHierachicalLimitLine", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*)>(&CgroupV1SubsystemController::convertHierachicalLimitLine))},
	{"convertStringToLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*)>(&CgroupV1SubsystemController::convertStringToLong))},
	{"getDoubleValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($CgroupSubsystemController*,$String*)>(&CgroupV1SubsystemController::getDoubleValue))},
	{"getLongEntry", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CgroupSubsystemController*,$String*,$String*)>(&CgroupV1SubsystemController::getLongEntry))},
	{"getLongValueMatchingLine", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CgroupSubsystemController*,$String*,$String*)>(&CgroupV1SubsystemController::getLongValueMatchingLine))},
	{"longValOrUnlimited", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&CgroupV1SubsystemController::longValOrUnlimited))},
	{"path", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CgroupV1SubsystemController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.cgroupv1.CgroupV1SubsystemController",
	"java.lang.Object",
	"jdk.internal.platform.CgroupSubsystemController",
	_CgroupV1SubsystemController_FieldInfo_,
	_CgroupV1SubsystemController_MethodInfo_
};

$Object* allocate$CgroupV1SubsystemController($Class* clazz) {
	return $of($alloc(CgroupV1SubsystemController));
}

double CgroupV1SubsystemController::DOUBLE_RETVAL_UNLIMITED = 0.0;
int64_t CgroupV1SubsystemController::UNLIMITED_MIN = 0;

void CgroupV1SubsystemController::init$($String* root, $String* mountPoint) {
	$set(this, root, root);
	$set(this, mountPoint, mountPoint);
}

void CgroupV1SubsystemController::setPath($String* cgroupPath) {
	if (this->root != nullptr && cgroupPath != nullptr) {
		if ($nc(this->root)->equals("/"_s)) {
			if (!cgroupPath->equals("/"_s)) {
				$set(this, path$, $str({this->mountPoint, cgroupPath}));
			} else {
				$set(this, path$, this->mountPoint);
			}
		} else if ($nc(this->root)->equals(cgroupPath)) {
			$set(this, path$, this->mountPoint);
		} else if (cgroupPath->startsWith(this->root)) {
			int32_t var$0 = cgroupPath->length();
			if (var$0 > $nc(this->root)->length()) {
				$var($String, cgroupSubstr, cgroupPath->substring($nc(this->root)->length()));
				$set(this, path$, $str({this->mountPoint, cgroupSubstr}));
			}
		}
	}
}

$String* CgroupV1SubsystemController::path() {
	return this->path$;
}

int64_t CgroupV1SubsystemController::getLongEntry($CgroupSubsystemController* controller, $String* param, $String* entryname) {
	$init(CgroupV1SubsystemController);
	return $CgroupSubsystemController::getLongEntry(controller, param, entryname, $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

double CgroupV1SubsystemController::getDoubleValue($CgroupSubsystemController* controller, $String* parm) {
	$init(CgroupV1SubsystemController);
	return $CgroupSubsystemController::getDoubleValue(controller, parm, CgroupV1SubsystemController::DOUBLE_RETVAL_UNLIMITED);
}

int64_t CgroupV1SubsystemController::convertStringToLong($String* strval) {
	$init(CgroupV1SubsystemController);
	return $CgroupSubsystemController::convertStringToLong(strval, $Long::MAX_VALUE, $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

int64_t CgroupV1SubsystemController::longValOrUnlimited(int64_t value) {
	$init(CgroupV1SubsystemController);
	return value > CgroupV1SubsystemController::UNLIMITED_MIN ? $CgroupSubsystem::LONG_RETVAL_UNLIMITED : value;
}

int64_t CgroupV1SubsystemController::getLongValueMatchingLine($CgroupSubsystemController* controller, $String* param, $String* match) {
	$init(CgroupV1SubsystemController);
	return $CgroupSubsystemController::getLongValueMatchingLine(controller, param, match, static_cast<$Function*>($$new(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine)), $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

int64_t CgroupV1SubsystemController::convertHierachicalLimitLine($String* line) {
	$init(CgroupV1SubsystemController);
	$var($StringArray, tokens, $nc(line)->split("\\s"_s));
	if (tokens->length == 2) {
		$var($String, strVal, tokens->get(1));
		return CgroupV1SubsystemController::convertStringToLong(strVal);
	}
	return CgroupV1SubsystemController::UNLIMITED_MIN + 1;
}

void clinit$CgroupV1SubsystemController($Class* class$) {
	CgroupV1SubsystemController::DOUBLE_RETVAL_UNLIMITED = (double)$CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	CgroupV1SubsystemController::UNLIMITED_MIN = 0x7FFFFFFFFF000000;
}

CgroupV1SubsystemController::CgroupV1SubsystemController() {
}

$Class* CgroupV1SubsystemController::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::classInfo$.name)) {
			return CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::load$(name, initialize);
		}
	}
	$loadClass(CgroupV1SubsystemController, name, initialize, &_CgroupV1SubsystemController_ClassInfo_, clinit$CgroupV1SubsystemController, allocate$CgroupV1SubsystemController);
	return class$;
}

$Class* CgroupV1SubsystemController::class$ = nullptr;

			} // cgroupv1
		} // platform
	} // internal
} // jdk