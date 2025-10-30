#include <sun/launcher/LauncherHelper$JrtFirstComparator.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Comparator.h>
#include <java/util/function/Function.h>
#include <sun/launcher/LauncherHelper.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Comparator = ::java::util::Comparator;
using $Function = ::java::util::function::Function;
using $LauncherHelper = ::sun::launcher::LauncherHelper;

namespace sun {
	namespace launcher {

class LauncherHelper$JrtFirstComparator$$Lambda$descriptor : public $Function {
	$class(LauncherHelper$JrtFirstComparator$$Lambda$descriptor, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleReference, inst$)->descriptor());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LauncherHelper$JrtFirstComparator$$Lambda$descriptor>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LauncherHelper$JrtFirstComparator$$Lambda$descriptor::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LauncherHelper$JrtFirstComparator$$Lambda$descriptor::*)()>(&LauncherHelper$JrtFirstComparator$$Lambda$descriptor::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LauncherHelper$JrtFirstComparator$$Lambda$descriptor::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.launcher.LauncherHelper$JrtFirstComparator$$Lambda$descriptor",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LauncherHelper$JrtFirstComparator$$Lambda$descriptor::load$($String* name, bool initialize) {
	$loadClass(LauncherHelper$JrtFirstComparator$$Lambda$descriptor, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LauncherHelper$JrtFirstComparator$$Lambda$descriptor::class$ = nullptr;

$FieldInfo _LauncherHelper$JrtFirstComparator_FieldInfo_[] = {
	{"real", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(LauncherHelper$JrtFirstComparator, real)},
	{}
};

$MethodInfo _LauncherHelper$JrtFirstComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LauncherHelper$JrtFirstComparator::*)()>(&LauncherHelper$JrtFirstComparator::init$))},
	{"compare", "(Ljava/lang/module/ModuleReference;Ljava/lang/module/ModuleReference;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _LauncherHelper$JrtFirstComparator_InnerClassesInfo_[] = {
	{"sun.launcher.LauncherHelper$JrtFirstComparator", "sun.launcher.LauncherHelper", "JrtFirstComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LauncherHelper$JrtFirstComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.launcher.LauncherHelper$JrtFirstComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_LauncherHelper$JrtFirstComparator_FieldInfo_,
	_LauncherHelper$JrtFirstComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/module/ModuleReference;>;",
	nullptr,
	_LauncherHelper$JrtFirstComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.launcher.LauncherHelper"
};

$Object* allocate$LauncherHelper$JrtFirstComparator($Class* clazz) {
	return $of($alloc(LauncherHelper$JrtFirstComparator));
}

void LauncherHelper$JrtFirstComparator::init$() {
	$set(this, real, $Comparator::comparing(static_cast<$Function*>($$new(LauncherHelper$JrtFirstComparator$$Lambda$descriptor))));
}

int32_t LauncherHelper$JrtFirstComparator::compare($ModuleReference* a, $ModuleReference* b) {
	if ($LauncherHelper::isJrt(a)) {
		return $LauncherHelper::isJrt(b) ? $nc(this->real)->compare(a, b) : -1;
	} else {
		return $LauncherHelper::isJrt(b) ? 1 : $nc(this->real)->compare(a, b);
	}
}

int32_t LauncherHelper$JrtFirstComparator::compare(Object$* a, Object$* b) {
	return this->compare($cast($ModuleReference, a), $cast($ModuleReference, b));
}

LauncherHelper$JrtFirstComparator::LauncherHelper$JrtFirstComparator() {
}

$Class* LauncherHelper$JrtFirstComparator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LauncherHelper$JrtFirstComparator$$Lambda$descriptor::classInfo$.name)) {
			return LauncherHelper$JrtFirstComparator$$Lambda$descriptor::load$(name, initialize);
		}
	}
	$loadClass(LauncherHelper$JrtFirstComparator, name, initialize, &_LauncherHelper$JrtFirstComparator_ClassInfo_, allocate$LauncherHelper$JrtFirstComparator);
	return class$;
}

$Class* LauncherHelper$JrtFirstComparator::class$ = nullptr;

	} // launcher
} // sun