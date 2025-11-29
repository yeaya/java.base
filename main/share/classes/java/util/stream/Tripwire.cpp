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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Tripwire$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Tripwire$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Tripwire$$Lambda$lambda$static$0::*)()>(&Tripwire$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Tripwire$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Tripwire$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Tripwire$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Tripwire$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Tripwire$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Tripwire_FieldInfo_[] = {
	{"TRIPWIRE_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Tripwire, TRIPWIRE_PROPERTY)},
	{"ENABLED", "Z", nullptr, $STATIC | $FINAL, $staticField(Tripwire, ENABLED)},
	{}
};

$MethodInfo _Tripwire_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Tripwire::*)()>(&Tripwire::init$))},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&Tripwire::lambda$static$0))},
	{"trip", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($Class*,$String*)>(&Tripwire::trip))},
	{}
};

$ClassInfo _Tripwire_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Tripwire",
	"java.lang.Object",
	nullptr,
	_Tripwire_FieldInfo_,
	_Tripwire_MethodInfo_
};

$Object* allocate$Tripwire($Class* clazz) {
	return $of($alloc(Tripwire));
}

$String* Tripwire::TRIPWIRE_PROPERTY = nullptr;
bool Tripwire::ENABLED = false;

void Tripwire::init$() {
}

void Tripwire::trip($Class* trippingClass, $String* msg) {
	$init(Tripwire);
	$useLocalCurrentObjectStackCache();
	$nc($($PlatformLogger::getLogger($($nc(trippingClass)->getName()))))->warning(msg, $$new($ObjectArray, {$($of($nc(trippingClass)->getName()))}));
}

$Boolean* Tripwire::lambda$static$0() {
	$init(Tripwire);
	return $Boolean::valueOf($Boolean::getBoolean(Tripwire::TRIPWIRE_PROPERTY));
}

void clinit$Tripwire($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Tripwire::TRIPWIRE_PROPERTY, "org.openjdk.java.util.stream.tripwire"_s);
	$beforeCallerSensitive();
	Tripwire::ENABLED = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Tripwire$$Lambda$lambda$static$0)))))))->booleanValue();
}

Tripwire::Tripwire() {
}

$Class* Tripwire::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Tripwire$$Lambda$lambda$static$0::classInfo$.name)) {
			return Tripwire$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Tripwire, name, initialize, &_Tripwire_ClassInfo_, clinit$Tripwire, allocate$Tripwire);
	return class$;
}

$Class* Tripwire::class$ = nullptr;

		} // stream
	} // util
} // java