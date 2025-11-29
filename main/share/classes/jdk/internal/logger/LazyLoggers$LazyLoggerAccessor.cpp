#include <jdk/internal/logger/LazyLoggers$LazyLoggerAccessor.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Module.h>
#include <java/lang/System$Logger.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Objects.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerFactories.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <jdk/internal/logger/SimpleConsoleLogger.h>
#include <jdk/internal/misc/VM.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $System$Logger = ::java::lang::System$Logger;
using $Void = ::java::lang::Void;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;
using $BootstrapLogger = ::jdk::internal::logger::BootstrapLogger;
using $LazyLoggers = ::jdk::internal::logger::LazyLoggers;
using $LazyLoggers$LazyLoggerFactories = ::jdk::internal::logger::LazyLoggers$LazyLoggerFactories;
using $SimpleConsoleLogger = ::jdk::internal::logger::SimpleConsoleLogger;
using $VM = ::jdk::internal::misc::VM;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge = ::sun::util::logging::PlatformLogger$ConfigurableBridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LazyLoggers$LazyLoggerAccessor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LazyLoggers$LazyLoggerAccessor, $assertionsDisabled)},
	{"factories", "Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories;", "Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories<+Ljava/lang/System$Logger;>;", $FINAL, $field(LazyLoggers$LazyLoggerAccessor, factories)},
	{"moduleRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Module;>;", $PRIVATE | $FINAL, $field(LazyLoggers$LazyLoggerAccessor, moduleRef)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(LazyLoggers$LazyLoggerAccessor, name)},
	{"w", "Ljava/lang/System$Logger;", nullptr, $PRIVATE | $VOLATILE, $field(LazyLoggers$LazyLoggerAccessor, w)},
	{"p", "Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PRIVATE | $VOLATILE, $field(LazyLoggers$LazyLoggerAccessor, p)},
	{}
};

$MethodInfo _LazyLoggers$LazyLoggerAccessor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories;Ljava/lang/Module;)V", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories<+Ljava/lang/System$Logger;>;Ljava/lang/Module;)V", $PRIVATE, $method(static_cast<void(LazyLoggers$LazyLoggerAccessor::*)($String*,$LazyLoggers$LazyLoggerFactories*,$Module*)>(&LazyLoggers$LazyLoggerAccessor::init$))},
	{"<init>", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories;Ljava/lang/Module;Ljava/lang/Void;)V", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories<+Ljava/lang/System$Logger;>;Ljava/lang/Module;Ljava/lang/Void;)V", $PRIVATE, $method(static_cast<void(LazyLoggers$LazyLoggerAccessor::*)($String*,$LazyLoggers$LazyLoggerFactories*,$Module*,$Void*)>(&LazyLoggers$LazyLoggerAccessor::init$))},
	{"createLogger", "()Ljava/lang/System$Logger;", nullptr, 0, $method(static_cast<$System$Logger*(LazyLoggers$LazyLoggerAccessor::*)()>(&LazyLoggers$LazyLoggerAccessor::createLogger))},
	{"getConcreteLogger", "(Ljdk/internal/logger/BootstrapLogger;)Ljava/lang/System$Logger;", nullptr, 0, $method(static_cast<$System$Logger*(LazyLoggers$LazyLoggerAccessor::*)($BootstrapLogger*)>(&LazyLoggers$LazyLoggerAccessor::getConcreteLogger))},
	{"getConcretePlatformLogger", "(Ljdk/internal/logger/BootstrapLogger;)Lsun/util/logging/PlatformLogger$Bridge;", nullptr, 0, $method(static_cast<$PlatformLogger$Bridge*(LazyLoggers$LazyLoggerAccessor::*)($BootstrapLogger*)>(&LazyLoggers$LazyLoggerAccessor::getConcretePlatformLogger))},
	{"getLoggerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"makeAccessor", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories;Ljava/lang/Module;)Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;", "(Ljava/lang/String;Ljdk/internal/logger/LazyLoggers$LazyLoggerFactories<+Ljava/lang/System$Logger;>;Ljava/lang/Module;)Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;", $PUBLIC | $STATIC, $method(static_cast<LazyLoggers$LazyLoggerAccessor*(*)($String*,$LazyLoggers$LazyLoggerFactories*,$Module*)>(&LazyLoggers$LazyLoggerAccessor::makeAccessor))},
	{"platform", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC},
	{"release", "(Ljdk/internal/logger/SimpleConsoleLogger;Z)V", nullptr, 0, $method(static_cast<void(LazyLoggers$LazyLoggerAccessor::*)($SimpleConsoleLogger*,bool)>(&LazyLoggers$LazyLoggerAccessor::release))},
	{"setWrappedIfNotSet", "(Ljava/lang/System$Logger;)V", nullptr, $PRIVATE, $method(static_cast<void(LazyLoggers$LazyLoggerAccessor::*)($System$Logger*)>(&LazyLoggers$LazyLoggerAccessor::setWrappedIfNotSet))},
	{"wrapped", "()Ljava/lang/System$Logger;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LazyLoggers$LazyLoggerAccessor_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LazyLoggers$LazyLoggerAccessor", "jdk.internal.logger.LazyLoggers", "LazyLoggerAccessor", $STATIC | $FINAL},
	{"jdk.internal.logger.LazyLoggers$LoggerAccessor", "jdk.internal.logger.LazyLoggers", "LoggerAccessor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LazyLoggers$LazyLoggerAccessor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.logger.LazyLoggers$LazyLoggerAccessor",
	"java.lang.Object",
	"jdk.internal.logger.LazyLoggers$LoggerAccessor",
	_LazyLoggers$LazyLoggerAccessor_FieldInfo_,
	_LazyLoggers$LazyLoggerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_LazyLoggers$LazyLoggerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LazyLoggers"
};

$Object* allocate$LazyLoggers$LazyLoggerAccessor($Class* clazz) {
	return $of($alloc(LazyLoggers$LazyLoggerAccessor));
}

bool LazyLoggers$LazyLoggerAccessor::$assertionsDisabled = false;

void LazyLoggers$LazyLoggerAccessor::init$($String* name, $LazyLoggers$LazyLoggerFactories* factories, $Module* module) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $cast($String, $Objects::requireNonNull(name)));
	$var($LazyLoggers$LazyLoggerFactories, var$1, $cast($LazyLoggers$LazyLoggerFactories, $Objects::requireNonNull(factories)));
	LazyLoggers$LazyLoggerAccessor::init$(var$0, var$1, $cast($Module, $Objects::requireNonNull(module)), nullptr);
}

void LazyLoggers$LazyLoggerAccessor::init$($String* name, $LazyLoggers$LazyLoggerFactories* factories, $Module* module, $Void* unused) {
	$set(this, name, name);
	$set(this, factories, factories);
	$set(this, moduleRef, $new($WeakReference, module));
}

$String* LazyLoggers$LazyLoggerAccessor::getLoggerName() {
	return this->name;
}

void LazyLoggers$LazyLoggerAccessor::setWrappedIfNotSet($System$Logger* wrapped) {
	if (this->w == nullptr) {
		$set(this, w, wrapped);
	}
}

$System$Logger* LazyLoggers$LazyLoggerAccessor::wrapped() {
	$var($System$Logger, wrapped, this->w);
	if (wrapped != nullptr) {
		return wrapped;
	}
	$assign(wrapped, $BootstrapLogger::getLogger(this));
	$synchronized(this) {
		setWrappedIfNotSet(wrapped);
		return this->w;
	}
}

$PlatformLogger$Bridge* LazyLoggers$LazyLoggerAccessor::platform() {
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger$Bridge, platform, this->p);
	if (platform != nullptr) {
		return platform;
	}
	$synchronized(this) {
		if (this->w != nullptr) {
			if (this->p == nullptr) {
				$set(this, p, $PlatformLogger$Bridge::convert(this->w));
			}
			return this->p;
		}
	}
	$var($System$Logger, wrapped, $BootstrapLogger::getLogger(this));
	$synchronized(this) {
		setWrappedIfNotSet(wrapped);
		if (this->p == nullptr) {
			$set(this, p, $PlatformLogger$Bridge::convert(this->w));
		}
		return this->p;
	}
}

void LazyLoggers$LazyLoggerAccessor::release($SimpleConsoleLogger* temporary, bool replace) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger$ConfigurableBridge$LoggerConfiguration, conf, $PlatformLogger$ConfigurableBridge::getLoggerConfiguration(temporary));
	$PlatformLogger$Level* level = conf != nullptr ? $nc(conf)->getPlatformLevel() : ($PlatformLogger$Level*)nullptr;
	$synchronized(this) {
		if ($equals(this->w, temporary)) {
			$set(this, w, nullptr);
			$set(this, p, nullptr);
		}
	}
	$var($PlatformLogger$Bridge, platform, replace || level != nullptr ? this->platform() : ($PlatformLogger$Bridge*)nullptr);
	if (level != nullptr) {
		$assign(conf, (platform != nullptr && !$equals(platform, temporary)) ? $PlatformLogger$ConfigurableBridge::getLoggerConfiguration(platform) : ($PlatformLogger$ConfigurableBridge$LoggerConfiguration*)nullptr);
		if (conf != nullptr) {
			conf->setPlatformLevel(level);
		}
	}
}

$System$Logger* LazyLoggers$LazyLoggerAccessor::getConcreteLogger($BootstrapLogger* bootstrap) {
	if (!LazyLoggers$LazyLoggerAccessor::$assertionsDisabled && !$VM::isBooted()) {
		$throwNew($AssertionError);
	}
	$synchronized(this) {
		if ($equals(this->w, bootstrap)) {
			$set(this, w, nullptr);
			$set(this, p, nullptr);
		}
	}
	return this->wrapped();
}

$PlatformLogger$Bridge* LazyLoggers$LazyLoggerAccessor::getConcretePlatformLogger($BootstrapLogger* bootstrap) {
	if (!LazyLoggers$LazyLoggerAccessor::$assertionsDisabled && !$VM::isBooted()) {
		$throwNew($AssertionError);
	}
	$synchronized(this) {
		if ($equals(this->w, bootstrap)) {
			$set(this, w, nullptr);
			$set(this, p, nullptr);
		}
	}
	return this->platform();
}

$System$Logger* LazyLoggers$LazyLoggerAccessor::createLogger() {
	$var($Module, module, $cast($Module, $nc(this->moduleRef)->get()));
	if (module == nullptr) {
		$throwNew($IllegalStateException, "The module for which this logger was created has been garbage collected"_s);
	}
	return $cast($System$Logger, $nc($nc(this->factories)->loggerSupplier)->apply(this->name, module));
}

LazyLoggers$LazyLoggerAccessor* LazyLoggers$LazyLoggerAccessor::makeAccessor($String* name, $LazyLoggers$LazyLoggerFactories* factories, $Module* module) {
	$init(LazyLoggers$LazyLoggerAccessor);
	return $new(LazyLoggers$LazyLoggerAccessor, name, factories, module);
}

void clinit$LazyLoggers$LazyLoggerAccessor($Class* class$) {
	$load($LazyLoggers);
	LazyLoggers$LazyLoggerAccessor::$assertionsDisabled = !$LazyLoggers::class$->desiredAssertionStatus();
}

LazyLoggers$LazyLoggerAccessor::LazyLoggers$LazyLoggerAccessor() {
}

$Class* LazyLoggers$LazyLoggerAccessor::load$($String* name, bool initialize) {
	$loadClass(LazyLoggers$LazyLoggerAccessor, name, initialize, &_LazyLoggers$LazyLoggerAccessor_ClassInfo_, clinit$LazyLoggers$LazyLoggerAccessor, allocate$LazyLoggers$LazyLoggerAccessor);
	return class$;
}

$Class* LazyLoggers$LazyLoggerAccessor::class$ = nullptr;

		} // logger
	} // internal
} // jdk