#include <jdk/internal/module/SystemModuleFinders$1.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$1$$Lambda$lambda$find$0 : public $PrivilegedAction {
	$class(SystemModuleFinders$1$$Lambda$lambda$find$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ModuleFinder* f, $String* name) {
		$set(this, f, f);
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return SystemModuleFinders$1::lambda$find$0(f, name);
	}
	$ModuleFinder* f = nullptr;
	$String* name = nullptr;
};
$Class* SystemModuleFinders$1$$Lambda$lambda$find$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC, $field(SystemModuleFinders$1$$Lambda$lambda$find$0, f)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SystemModuleFinders$1$$Lambda$lambda$find$0, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SystemModuleFinders$1$$Lambda$lambda$find$0, init$, void, $ModuleFinder*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SystemModuleFinders$1$$Lambda$lambda$find$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.SystemModuleFinders$1$$Lambda$lambda$find$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SystemModuleFinders$1$$Lambda$lambda$find$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$1$$Lambda$lambda$find$0);
	});
	return class$;
}
$Class* SystemModuleFinders$1$$Lambda$lambda$find$0::class$ = nullptr;

class SystemModuleFinders$1$$Lambda$findAll$1 : public $PrivilegedAction {
	$class(SystemModuleFinders$1$$Lambda$findAll$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ModuleFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->findAll();
	}
	$ModuleFinder* inst$ = nullptr;
};
$Class* SystemModuleFinders$1$$Lambda$findAll$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SystemModuleFinders$1$$Lambda$findAll$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder;)V", nullptr, $PUBLIC, $method(SystemModuleFinders$1$$Lambda$findAll$1, init$, void, $ModuleFinder*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SystemModuleFinders$1$$Lambda$findAll$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.SystemModuleFinders$1$$Lambda$findAll$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SystemModuleFinders$1$$Lambda$findAll$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$1$$Lambda$findAll$1);
	});
	return class$;
}
$Class* SystemModuleFinders$1$$Lambda$findAll$1::class$ = nullptr;

void SystemModuleFinders$1::init$($ModuleFinder* val$f) {
	$set(this, val$f, val$f);
}

$Optional* SystemModuleFinders$1::find($String* name) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(SystemModuleFinders$1$$Lambda$lambda$find$0, this->val$f, name));
	return $cast($Optional, $AccessController::doPrivileged(pa));
}

$Set* SystemModuleFinders$1::findAll() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(SystemModuleFinders$1$$Lambda$findAll$1, $nc(this->val$f)));
	return $cast($Set, $AccessController::doPrivileged(pa));
}

$Optional* SystemModuleFinders$1::lambda$find$0($ModuleFinder* f, $String* name) {
	$init(SystemModuleFinders$1);
	return $nc(f)->find(name);
}

SystemModuleFinders$1::SystemModuleFinders$1() {
}

$Class* SystemModuleFinders$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.SystemModuleFinders$1$$Lambda$lambda$find$0")) {
			return SystemModuleFinders$1$$Lambda$lambda$find$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.SystemModuleFinders$1$$Lambda$findAll$1")) {
			return SystemModuleFinders$1$$Lambda$findAll$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"val$f", "Ljava/lang/module/ModuleFinder;", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$1, val$f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/ModuleFinder;)V", "()V", 0, $method(SystemModuleFinders$1, init$, void, $ModuleFinder*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(SystemModuleFinders$1, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(SystemModuleFinders$1, findAll, $Set*)},
		{"lambda$find$0", "(Ljava/lang/module/ModuleFinder;Ljava/lang/String;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SystemModuleFinders$1, lambda$find$0, $Optional*, $ModuleFinder*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.SystemModuleFinders",
		"ofSystem",
		"()Ljava/lang/module/ModuleFinder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.SystemModuleFinders$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.SystemModuleFinders$1",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.SystemModuleFinders"
	};
	$loadClass(SystemModuleFinders$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$1);
	});
	return class$;
}

$Class* SystemModuleFinders$1::class$ = nullptr;

		} // module
	} // internal
} // jdk