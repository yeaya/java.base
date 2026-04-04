#include <sun/nio/ch/DefaultSelectorProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/ch/EPollSelectorProvider.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EPollSelectorProvider = ::sun::nio::ch::EPollSelectorProvider;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;

namespace sun {
	namespace nio {
		namespace ch {

class DefaultSelectorProvider$$Lambda$EPollSelectorProvider : public $PrivilegedAction {
	$class(DefaultSelectorProvider$$Lambda$EPollSelectorProvider, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $new($EPollSelectorProvider);
	}
};
$Class* DefaultSelectorProvider$$Lambda$EPollSelectorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultSelectorProvider$$Lambda$EPollSelectorProvider, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultSelectorProvider$$Lambda$EPollSelectorProvider, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.ch.DefaultSelectorProvider$$Lambda$EPollSelectorProvider",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultSelectorProvider$$Lambda$EPollSelectorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSelectorProvider$$Lambda$EPollSelectorProvider);
	});
	return class$;
}
$Class* DefaultSelectorProvider$$Lambda$EPollSelectorProvider::class$ = nullptr;

$SelectorProviderImpl* DefaultSelectorProvider::INSTANCE = nullptr;

void DefaultSelectorProvider::init$() {
}

$SelectorProviderImpl* DefaultSelectorProvider::get() {
	$init(DefaultSelectorProvider);
	return DefaultSelectorProvider::INSTANCE;
}

void DefaultSelectorProvider::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, pa, $new(DefaultSelectorProvider$$Lambda$EPollSelectorProvider));
		$assignStatic(DefaultSelectorProvider::INSTANCE, $cast($SelectorProviderImpl, $AccessController::doPrivileged(pa)));
	}
}

DefaultSelectorProvider::DefaultSelectorProvider() {
}

$Class* DefaultSelectorProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.ch.DefaultSelectorProvider$$Lambda$EPollSelectorProvider")) {
			return DefaultSelectorProvider$$Lambda$EPollSelectorProvider::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/nio/ch/SelectorProviderImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultSelectorProvider, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultSelectorProvider, init$, void)},
		{"get", "()Lsun/nio/ch/SelectorProviderImpl;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultSelectorProvider, get, $SelectorProviderImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.DefaultSelectorProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultSelectorProvider, name, initialize, &classInfo$$, DefaultSelectorProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSelectorProvider);
	});
	return class$;
}

$Class* DefaultSelectorProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun