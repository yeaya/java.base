#include <java/util/stream/Tripwire.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ENABLED
#undef TRIPWIRE_PROPERTY

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace stream {

class Tripwire$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Tripwire$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Tripwire::lambda$static$0());
	}
};
$Class* Tripwire$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Tripwire$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Tripwire$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Tripwire$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Tripwire$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tripwire$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* Tripwire$$Lambda$lambda$static$0::class$ = nullptr;

$String* Tripwire::TRIPWIRE_PROPERTY = nullptr;
bool Tripwire::ENABLED = false;

void Tripwire::init$() {
}

void Tripwire::trip($Class* trippingClass, $String* msg) {
	$init(Tripwire);
	$useLocalObjectStack();
	$$nc($PlatformLogger::getLogger($($nc(trippingClass)->getName())))->warning(msg, $$new($ObjectArray, {$($nc(trippingClass)->getName())}));
}

$Boolean* Tripwire::lambda$static$0() {
	$init(Tripwire);
	return $Boolean::valueOf($Boolean::getBoolean(Tripwire::TRIPWIRE_PROPERTY));
}

void Tripwire::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Tripwire::TRIPWIRE_PROPERTY, "org.openjdk.java.util.stream.tripwire"_s);
	$beforeCallerSensitive();
	Tripwire::ENABLED = $$sure($Boolean, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Tripwire$$Lambda$lambda$static$0))))->booleanValue();
}

Tripwire::Tripwire() {
}

$Class* Tripwire::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Tripwire$$Lambda$lambda$static$0")) {
			return Tripwire$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TRIPWIRE_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Tripwire, TRIPWIRE_PROPERTY)},
		{"ENABLED", "Z", nullptr, $STATIC | $FINAL, $staticField(Tripwire, ENABLED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Tripwire, init$, void)},
		{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Tripwire, lambda$static$0, $Boolean*)},
		{"trip", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $STATIC, $staticMethod(Tripwire, trip, void, $Class*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Tripwire",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Tripwire, name, initialize, &classInfo$$, Tripwire::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Tripwire);
	});
	return class$;
}

$Class* Tripwire::class$ = nullptr;

		} // stream
	} // util
} // java