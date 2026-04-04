#include <sun/nio/ch/DefaultSelectorProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <sun/nio/ch/WEPollSelectorProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;
using $WEPollSelectorProvider = ::sun::nio::ch::WEPollSelectorProvider;

namespace sun {
	namespace nio {
		namespace ch {

class DefaultSelectorProvider$$Lambda$WEPollSelectorProvider : public $PrivilegedAction {
	$class(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $new($WEPollSelectorProvider);
	}
};
$Class* DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.ch.DefaultSelectorProvider$$Lambda$WEPollSelectorProvider",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider);
	});
	return class$;
}
$Class* DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::class$ = nullptr;

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
		$var($PrivilegedAction, pa, $new(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider));
		$assignStatic(DefaultSelectorProvider::INSTANCE, $cast($SelectorProviderImpl, $AccessController::doPrivileged(pa)));
	}
}

DefaultSelectorProvider::DefaultSelectorProvider() {
}

$Class* DefaultSelectorProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.ch.DefaultSelectorProvider$$Lambda$WEPollSelectorProvider")) {
			return DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::load$(name, initialize);
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