#include <jdk/internal/logger/AbstractLoggerWrapper.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge = ::sun::util::logging::PlatformLogger$ConfigurableBridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

class AbstractLoggerWrapper$$Lambda$lambda$logp$0 : public $Supplier {
	$class(AbstractLoggerWrapper$$Lambda$lambda$logp$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* sClass, $String* sMethod, $Supplier* msgSupplier) {
		$set(this, sClass, sClass);
		$set(this, sMethod, sMethod);
		$set(this, msgSupplier, msgSupplier);
	}
	virtual $Object* get() override {
		 return $of(AbstractLoggerWrapper::lambda$logp$0(sClass, sMethod, msgSupplier));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractLoggerWrapper$$Lambda$lambda$logp$0>());
	}
	$String* sClass = nullptr;
	$String* sMethod = nullptr;
	$Supplier* msgSupplier = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractLoggerWrapper$$Lambda$lambda$logp$0::fieldInfos[4] = {
	{"sClass", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractLoggerWrapper$$Lambda$lambda$logp$0, sClass)},
	{"sMethod", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractLoggerWrapper$$Lambda$lambda$logp$0, sMethod)},
	{"msgSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(AbstractLoggerWrapper$$Lambda$lambda$logp$0, msgSupplier)},
	{}
};
$MethodInfo AbstractLoggerWrapper$$Lambda$lambda$logp$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractLoggerWrapper$$Lambda$lambda$logp$0::*)($String*,$String*,$Supplier*)>(&AbstractLoggerWrapper$$Lambda$lambda$logp$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractLoggerWrapper$$Lambda$lambda$logp$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.AbstractLoggerWrapper$$Lambda$lambda$logp$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AbstractLoggerWrapper$$Lambda$lambda$logp$0::load$($String* name, bool initialize) {
	$loadClass(AbstractLoggerWrapper$$Lambda$lambda$logp$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractLoggerWrapper$$Lambda$lambda$logp$0::class$ = nullptr;

$MethodInfo _AbstractLoggerWrapper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractLoggerWrapper::*)()>(&AbstractLoggerWrapper::init$))},
	{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getWrapped", "()Ljava/lang/System$Logger;", "()TL;", 0},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC},
	{"lambda$logp$0", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*,$Supplier*)>(&AbstractLoggerWrapper::lambda$logp$0))},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)V", $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"platformProxy", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrapped", "()Ljava/lang/System$Logger;", "()TL;", $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractLoggerWrapper_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$Bridge", "sun.util.logging.PlatformLogger", "Bridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractLoggerWrapper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.logger.AbstractLoggerWrapper",
	"java.lang.Object",
	"java.lang.System$Logger,sun.util.logging.PlatformLogger$Bridge,sun.util.logging.PlatformLogger$ConfigurableBridge",
	nullptr,
	_AbstractLoggerWrapper_MethodInfo_,
	"<L::Ljava/lang/System$Logger;>Ljava/lang/Object;Ljava/lang/System$Logger;Lsun/util/logging/PlatformLogger$Bridge;Lsun/util/logging/PlatformLogger$ConfigurableBridge;",
	nullptr,
	_AbstractLoggerWrapper_InnerClassesInfo_
};

$Object* allocate$AbstractLoggerWrapper($Class* clazz) {
	return $of($alloc(AbstractLoggerWrapper));
}

int32_t AbstractLoggerWrapper::hashCode() {
	 return this->$System$Logger::hashCode();
}

bool AbstractLoggerWrapper::equals(Object$* obj) {
	 return this->$System$Logger::equals(obj);
}

$Object* AbstractLoggerWrapper::clone() {
	 return this->$System$Logger::clone();
}

$String* AbstractLoggerWrapper::toString() {
	 return this->$System$Logger::toString();
}

void AbstractLoggerWrapper::finalize() {
	this->$System$Logger::finalize();
}

void AbstractLoggerWrapper::init$() {
}

$System$Logger* AbstractLoggerWrapper::getWrapped() {
	return wrapped();
}

$String* AbstractLoggerWrapper::getName() {
	return $nc($(wrapped()))->getName();
}

bool AbstractLoggerWrapper::isLoggable($System$Logger$Level* level) {
	return $nc($(wrapped()))->isLoggable(level);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $String* msg) {
	$nc($(wrapped()))->log(level, msg);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier) {
	$nc($(wrapped()))->log(level, msgSupplier);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, Object$* obj) {
	$nc($(wrapped()))->log(level, obj);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $String* msg, $Throwable* thrown) {
	$nc($(wrapped()))->log(level, msg, thrown);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$nc($(wrapped()))->log(level, msgSupplier, thrown);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $String* format, $ObjectArray* params) {
	$nc($(wrapped()))->log(level, format, params);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$nc($(wrapped()))->log(level, bundle, key, thrown);
}

void AbstractLoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* format, $ObjectArray* params) {
	$nc($(wrapped()))->log(level, bundle, format, params);
}

bool AbstractLoggerWrapper::isLoggable($PlatformLogger$Level* level) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		return isLoggable($($nc(level)->systemLevel()));
	} else {
		return $nc(platformProxy)->isLoggable(level);
	}
}

bool AbstractLoggerWrapper::isEnabled() {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	return platformProxy == nullptr || $nc(platformProxy)->isEnabled();
}

void AbstractLoggerWrapper::log($PlatformLogger$Level* level, $String* msg) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), msg);
	} else {
		$nc(platformProxy)->log(level, msg);
	}
}

void AbstractLoggerWrapper::log($PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), msg, thrown);
	} else {
		$nc(platformProxy)->log(level, msg, thrown);
	}
}

void AbstractLoggerWrapper::log($PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), msg, params);
	} else {
		$nc(platformProxy)->log(level, msg, params);
	}
}

void AbstractLoggerWrapper::log($PlatformLogger$Level* level, $Supplier* msgSupplier) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), msgSupplier);
	} else {
		$nc(platformProxy)->log(level, msgSupplier);
	}
}

void AbstractLoggerWrapper::log($PlatformLogger$Level* level, $Throwable* thrown, $Supplier* msgSupplier) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), msgSupplier, thrown);
	} else {
		$nc(platformProxy)->log(level, thrown, msgSupplier);
	}
}

void AbstractLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass$renamed, $String* sourceMethod$renamed, $String* msg$renamed) {
	$var($String, msg, msg$renamed);
	$var($String, sourceMethod, sourceMethod$renamed);
	$var($String, sourceClass, sourceClass$renamed);
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), msg);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$assign(sourceClass, sourceClass == nullptr ? ""_s : sourceClass);
				$assign(sourceMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				$assign(msg, msg == nullptr ? ""_s : msg);
				wrapped->log(systemLevel, $($String::format("[%s %s] %s"_s, $$new($ObjectArray, {
					$of(sourceClass),
					$of(sourceMethod),
					$of(msg)
				}))));
			}
		}
	} else {
		$nc(platformProxy)->logp(level, sourceClass, sourceMethod, msg);
	}
}

void AbstractLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), msgSupplier);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$var($String, sClass, sourceClass == nullptr ? ""_s : sourceClass);
				$var($String, sMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				wrapped->log(systemLevel, static_cast<$Supplier*>($$new(AbstractLoggerWrapper$$Lambda$lambda$logp$0, sClass, sMethod, msgSupplier)));
			}
		}
	} else {
		$nc(platformProxy)->logp(level, sourceClass, sourceMethod, msgSupplier);
	}
}

void AbstractLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass$renamed, $String* sourceMethod$renamed, $String* msg$renamed, $ObjectArray* params) {
	$var($String, msg, msg$renamed);
	$var($String, sourceMethod, sourceMethod$renamed);
	$var($String, sourceClass, sourceClass$renamed);
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), msg, params);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$assign(sourceClass, sourceClass == nullptr ? ""_s : sourceClass);
				$assign(sourceMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				$assign(msg, msg == nullptr ? ""_s : msg);
				wrapped->log(systemLevel, $($String::format("[%s %s] %s"_s, $$new($ObjectArray, {
					$of(sourceClass),
					$of(sourceMethod),
					$of(msg)
				}))), params);
			}
		}
	} else {
		$nc(platformProxy)->logp(level, sourceClass, sourceMethod, msg, params);
	}
}

void AbstractLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass$renamed, $String* sourceMethod$renamed, $String* msg$renamed, $Throwable* thrown) {
	$var($String, msg, msg$renamed);
	$var($String, sourceMethod, sourceMethod$renamed);
	$var($String, sourceClass, sourceClass$renamed);
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), msg, thrown);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$assign(sourceClass, sourceClass == nullptr ? ""_s : sourceClass);
				$assign(sourceMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				$assign(msg, msg == nullptr ? ""_s : msg);
				wrapped->log(systemLevel, $($String::format("[%s %s] %s"_s, $$new($ObjectArray, {
					$of(sourceClass),
					$of(sourceMethod),
					$of(msg)
				}))), thrown);
			}
		}
	} else {
		$nc(platformProxy)->logp(level, sourceClass, sourceMethod, msg, thrown);
	}
}

void AbstractLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, $Supplier* msgSupplier) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), msgSupplier, thrown);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$var($String, sClass, sourceClass == nullptr ? ""_s : sourceClass);
				$var($String, sMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				wrapped->log(systemLevel, static_cast<$Supplier*>($$new(AbstractLoggerWrapper$$Lambda$lambda$logp$0, sClass, sMethod, msgSupplier)), thrown);
			}
		}
	} else {
		$nc(platformProxy)->logp(level, sourceClass, sourceMethod, thrown, msgSupplier);
	}
}

void AbstractLoggerWrapper::logrb($PlatformLogger$Level* level, $String* sourceClass$renamed, $String* sourceMethod$renamed, $ResourceBundle* bundle, $String* msg$renamed, $ObjectArray* params) {
	$var($String, msg, msg$renamed);
	$var($String, sourceMethod, sourceMethod$renamed);
	$var($String, sourceClass, sourceClass$renamed);
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (bundle != nullptr || sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), bundle, msg, params);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$assign(sourceClass, sourceClass == nullptr ? ""_s : sourceClass);
				$assign(sourceMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				$assign(msg, msg == nullptr ? ""_s : msg);
				wrapped->log(systemLevel, bundle, $($String::format("[%s %s] %s"_s, $$new($ObjectArray, {
					$of(sourceClass),
					$of(sourceMethod),
					$of(msg)
				}))), params);
			}
		}
	} else {
		$nc(platformProxy)->logrb(level, sourceClass, sourceMethod, bundle, msg, params);
	}
}

void AbstractLoggerWrapper::logrb($PlatformLogger$Level* level, $String* sourceClass$renamed, $String* sourceMethod$renamed, $ResourceBundle* bundle, $String* msg$renamed, $Throwable* thrown) {
	$var($String, msg, msg$renamed);
	$var($String, sourceMethod, sourceMethod$renamed);
	$var($String, sourceClass, sourceClass$renamed);
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		if (bundle != nullptr || sourceClass == nullptr && sourceMethod == nullptr) {
			$nc($(this->wrapped()))->log($($nc(level)->systemLevel()), bundle, msg, thrown);
		} else {
			$System$Logger$Level* systemLevel = $nc(level)->systemLevel();
			$var($System$Logger, wrapped, this->wrapped());
			if ($nc(wrapped)->isLoggable(systemLevel)) {
				$assign(sourceClass, sourceClass == nullptr ? ""_s : sourceClass);
				$assign(sourceMethod, sourceMethod == nullptr ? ""_s : sourceMethod);
				$assign(msg, msg == nullptr ? ""_s : msg);
				wrapped->log(systemLevel, bundle, $($String::format("[%s %s] %s"_s, $$new($ObjectArray, {
					$of(sourceClass),
					$of(sourceMethod),
					$of(msg)
				}))), thrown);
			}
		}
	} else {
		$nc(platformProxy)->logrb(level, sourceClass, sourceMethod, bundle, msg, thrown);
	}
}

void AbstractLoggerWrapper::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* msg, $Throwable* thrown) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), bundle, msg, thrown);
	} else {
		$nc(platformProxy)->logrb(level, bundle, msg, thrown);
	}
}

void AbstractLoggerWrapper::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* msg, $ObjectArray* params) {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	if (platformProxy == nullptr) {
		$nc($(wrapped()))->log($($nc(level)->systemLevel()), bundle, msg, params);
	} else {
		$nc(platformProxy)->logrb(level, bundle, msg, params);
	}
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* AbstractLoggerWrapper::getLoggerConfiguration() {
	$var($PlatformLogger$Bridge, platformProxy, this->platformProxy());
	return platformProxy == nullptr ? ($PlatformLogger$ConfigurableBridge$LoggerConfiguration*)nullptr : $PlatformLogger$ConfigurableBridge::getLoggerConfiguration(platformProxy);
}

$String* AbstractLoggerWrapper::lambda$logp$0($String* sClass, $String* sMethod, $Supplier* msgSupplier) {
	$init(AbstractLoggerWrapper);
	return $String::format("[%s %s] %s"_s, $$new($ObjectArray, {
		$of(sClass),
		$of(sMethod),
		$($nc(msgSupplier)->get())
	}));
}

AbstractLoggerWrapper::AbstractLoggerWrapper() {
}

$Class* AbstractLoggerWrapper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractLoggerWrapper$$Lambda$lambda$logp$0::classInfo$.name)) {
			return AbstractLoggerWrapper$$Lambda$lambda$logp$0::load$(name, initialize);
		}
	}
	$loadClass(AbstractLoggerWrapper, name, initialize, &_AbstractLoggerWrapper_ClassInfo_, allocate$AbstractLoggerWrapper);
	return class$;
}

$Class* AbstractLoggerWrapper::class$ = nullptr;

		} // logger
	} // internal
} // jdk