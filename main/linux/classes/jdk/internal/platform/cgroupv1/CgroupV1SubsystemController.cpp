#include <jdk/internal/platform/cgroupv1/CgroupV1SubsystemController.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
};
$Class* CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.platform.cgroupv1.CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine);
	});
	return class$;
}
$Class* CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::class$ = nullptr;

double CgroupV1SubsystemController::DOUBLE_RETVAL_UNLIMITED = 0.0;
int64_t CgroupV1SubsystemController::UNLIMITED_MIN = 0;

void CgroupV1SubsystemController::init$($String* root, $String* mountPoint) {
	$set(this, root, root);
	$set(this, mountPoint, mountPoint);
}

void CgroupV1SubsystemController::setPath($String* cgroupPath) {
	if (this->root != nullptr && cgroupPath != nullptr) {
		if (this->root->equals("/"_s)) {
			if (!cgroupPath->equals("/"_s)) {
				$set(this, path$, $str({this->mountPoint, cgroupPath}));
			} else {
				$set(this, path$, this->mountPoint);
			}
		} else if (this->root->equals(cgroupPath)) {
			$set(this, path$, this->mountPoint);
		} else if (cgroupPath->startsWith(this->root)) {
			int32_t var$0 = cgroupPath->length();
			if (var$0 > this->root->length()) {
				$var($String, cgroupSubstr, cgroupPath->substring(this->root->length()));
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
	return $CgroupSubsystemController::getLongValueMatchingLine(controller, param, match, $$new(CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine), $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

int64_t CgroupV1SubsystemController::convertHierachicalLimitLine($String* line) {
	$init(CgroupV1SubsystemController);
	$useLocalObjectStack();
	$var($StringArray, tokens, $nc(line)->split("\\s"_s));
	if (tokens->length == 2) {
		$var($String, strVal, tokens->get(1));
		return CgroupV1SubsystemController::convertStringToLong(strVal);
	}
	return CgroupV1SubsystemController::UNLIMITED_MIN + 1;
}

void CgroupV1SubsystemController::clinit$($Class* clazz) {
	CgroupV1SubsystemController::DOUBLE_RETVAL_UNLIMITED = (double)$CgroupSubsystem::LONG_RETVAL_UNLIMITED;
	CgroupV1SubsystemController::UNLIMITED_MIN = (int64_t)0x7fffffffff000000;
}

CgroupV1SubsystemController::CgroupV1SubsystemController() {
}

$Class* CgroupV1SubsystemController::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.platform.cgroupv1.CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine")) {
			return CgroupV1SubsystemController$$Lambda$convertHierachicalLimitLine::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"DOUBLE_RETVAL_UNLIMITED", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CgroupV1SubsystemController, DOUBLE_RETVAL_UNLIMITED)},
		{"UNLIMITED_MIN", "J", nullptr, $STATIC, $staticField(CgroupV1SubsystemController, UNLIMITED_MIN)},
		{"root", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, root)},
		{"mountPoint", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, mountPoint)},
		{"path", "Ljava/lang/String;", nullptr, 0, $field(CgroupV1SubsystemController, path$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CgroupV1SubsystemController, init$, void, $String*, $String*)},
		{"convertHierachicalLimitLine", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, convertHierachicalLimitLine, int64_t, $String*)},
		{"convertStringToLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, convertStringToLong, int64_t, $String*)},
		{"getDoubleValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, getDoubleValue, double, $CgroupSubsystemController*, $String*)},
		{"getLongEntry", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, getLongEntry, int64_t, $CgroupSubsystemController*, $String*, $String*)},
		{"getLongValueMatchingLine", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, getLongValueMatchingLine, int64_t, $CgroupSubsystemController*, $String*, $String*)},
		{"longValOrUnlimited", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV1SubsystemController, longValOrUnlimited, int64_t, int64_t)},
		{"path", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CgroupV1SubsystemController, path, $String*)},
		{"setPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CgroupV1SubsystemController, setPath, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.platform.cgroupv1.CgroupV1SubsystemController",
		"java.lang.Object",
		"jdk.internal.platform.CgroupSubsystemController",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CgroupV1SubsystemController, name, initialize, &classInfo$$, CgroupV1SubsystemController::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CgroupV1SubsystemController);
	});
	return class$;
}

$Class* CgroupV1SubsystemController::class$ = nullptr;

			} // cgroupv1
		} // platform
	} // internal
} // jdk