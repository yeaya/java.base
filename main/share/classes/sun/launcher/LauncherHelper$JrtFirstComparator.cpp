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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
		 return $sure($ModuleReference, inst$)->descriptor();
	}
};
$Class* LauncherHelper$JrtFirstComparator$$Lambda$descriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LauncherHelper$JrtFirstComparator$$Lambda$descriptor, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LauncherHelper$JrtFirstComparator$$Lambda$descriptor, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.launcher.LauncherHelper$JrtFirstComparator$$Lambda$descriptor",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(LauncherHelper$JrtFirstComparator$$Lambda$descriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherHelper$JrtFirstComparator$$Lambda$descriptor);
	});
	return class$;
}
$Class* LauncherHelper$JrtFirstComparator$$Lambda$descriptor::class$ = nullptr;

void LauncherHelper$JrtFirstComparator::init$() {
	$set(this, real, $Comparator::comparing($$new(LauncherHelper$JrtFirstComparator$$Lambda$descriptor)));
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
		if (name->equals("sun.launcher.LauncherHelper$JrtFirstComparator$$Lambda$descriptor")) {
			return LauncherHelper$JrtFirstComparator$$Lambda$descriptor::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"real", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/module/ModuleReference;>;", $PRIVATE | $FINAL, $field(LauncherHelper$JrtFirstComparator, real)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LauncherHelper$JrtFirstComparator, init$, void)},
		{"compare", "(Ljava/lang/module/ModuleReference;Ljava/lang/module/ModuleReference;)I", nullptr, $PUBLIC, $virtualMethod(LauncherHelper$JrtFirstComparator, compare, int32_t, $ModuleReference*, $ModuleReference*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LauncherHelper$JrtFirstComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.launcher.LauncherHelper$JrtFirstComparator", "sun.launcher.LauncherHelper", "JrtFirstComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.launcher.LauncherHelper$JrtFirstComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/module/ModuleReference;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.launcher.LauncherHelper"
	};
	$loadClass(LauncherHelper$JrtFirstComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LauncherHelper$JrtFirstComparator);
	});
	return class$;
}

$Class* LauncherHelper$JrtFirstComparator::class$ = nullptr;

	} // launcher
} // sun