#include <jdk/internal/logger/LoggerWrapper.h>

#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Void = ::java::lang::Void;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;
using $AbstractLoggerWrapper = ::jdk::internal::logger::AbstractLoggerWrapper;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LoggerWrapper_FieldInfo_[] = {
	{"wrapped", "Ljava/lang/System$Logger;", "TL;", $FINAL, $field(LoggerWrapper, wrapped$)},
	{"platformProxy", "Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $FINAL, $field(LoggerWrapper, platformProxy$)},
	{}
};

$MethodInfo _LoggerWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/System$Logger;)V", "(TL;)V", $PUBLIC, $method(LoggerWrapper, init$, void, $System$Logger*)},
	{"<init>", "(Ljava/lang/System$Logger;Ljava/lang/Void;)V", "(TL;Ljava/lang/Void;)V", 0, $method(LoggerWrapper, init$, void, $System$Logger*, $Void*)},
	{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, getLoggerConfiguration, $PlatformLogger$ConfigurableBridge$LoggerConfiguration*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, isEnabled, bool)},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, isLoggable, bool, $PlatformLogger$Level*)},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, isLoggable, bool, $System$Logger$Level*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $PlatformLogger$Level*, $Throwable*, $Supplier*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $PlatformLogger$Level*, $Supplier*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $PlatformLogger$Level*, $String*, $ObjectArray*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $PlatformLogger$Level*, $String*, $Throwable*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $PlatformLogger$Level*, $String*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $String*, $ObjectArray*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $Supplier*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, Object$*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $Supplier*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, log, void, $System$Logger$Level*, $String*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $Throwable*, $Supplier*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $Throwable*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $ObjectArray*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $Supplier*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logrb, void, $PlatformLogger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logrb, void, $PlatformLogger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logrb, void, $PlatformLogger$Level*, $String*, $String*, $ResourceBundle*, $String*, $Throwable*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LoggerWrapper, logrb, void, $PlatformLogger$Level*, $String*, $String*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"platformProxy", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC | $FINAL, $virtualMethod(LoggerWrapper, platformProxy, $PlatformLogger$Bridge*)},
	{"wrapped", "()Ljava/lang/System$Logger;", "()TL;", $PUBLIC | $FINAL, $virtualMethod(LoggerWrapper, wrapped, $System$Logger*)},
	{}
};

$InnerClassInfo _LoggerWrapper_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LoggerWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.logger.LoggerWrapper",
	"jdk.internal.logger.AbstractLoggerWrapper",
	nullptr,
	_LoggerWrapper_FieldInfo_,
	_LoggerWrapper_MethodInfo_,
	"<L::Ljava/lang/System$Logger;>Ljdk/internal/logger/AbstractLoggerWrapper<TL;>;",
	nullptr,
	_LoggerWrapper_InnerClassesInfo_
};

$Object* allocate$LoggerWrapper($Class* clazz) {
	return $of($alloc(LoggerWrapper));
}

void LoggerWrapper::init$($System$Logger* wrapped) {
	LoggerWrapper::init$($cast($System$Logger, $Objects::requireNonNull(wrapped)), ($Void*)nullptr);
}

void LoggerWrapper::init$($System$Logger* wrapped, $Void* unused) {
	$AbstractLoggerWrapper::init$();
	$set(this, wrapped$, wrapped);
	$set(this, platformProxy$, ($instanceOf($PlatformLogger$Bridge, wrapped)) ? $cast($PlatformLogger$Bridge, wrapped) : ($PlatformLogger$Bridge*)nullptr);
}

$System$Logger* LoggerWrapper::wrapped() {
	return this->wrapped$;
}

$PlatformLogger$Bridge* LoggerWrapper::platformProxy() {
	return this->platformProxy$;
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* LoggerWrapper::getLoggerConfiguration() {
	return $AbstractLoggerWrapper::getLoggerConfiguration();
}

void LoggerWrapper::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* msg, $ObjectArray* params) {
	$AbstractLoggerWrapper::logrb(level, bundle, msg, params);
}

void LoggerWrapper::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* msg, $Throwable* thrown) {
	$AbstractLoggerWrapper::logrb(level, bundle, msg, thrown);
}

void LoggerWrapper::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* msg, $Throwable* thrown) {
	$AbstractLoggerWrapper::logrb(level, sourceClass, sourceMethod, bundle, msg, thrown);
}

void LoggerWrapper::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* msg, $ObjectArray* params) {
	$AbstractLoggerWrapper::logrb(level, sourceClass, sourceMethod, bundle, msg, params);
}

void LoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, $Supplier* msgSupplier) {
	$AbstractLoggerWrapper::logp(level, sourceClass, sourceMethod, thrown, msgSupplier);
}

void LoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) {
	$AbstractLoggerWrapper::logp(level, sourceClass, sourceMethod, msg, thrown);
}

void LoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) {
	$AbstractLoggerWrapper::logp(level, sourceClass, sourceMethod, msg, params);
}

void LoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier) {
	$AbstractLoggerWrapper::logp(level, sourceClass, sourceMethod, msgSupplier);
}

void LoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) {
	$AbstractLoggerWrapper::logp(level, sourceClass, sourceMethod, msg);
}

void LoggerWrapper::log($PlatformLogger$Level* level, $Throwable* thrown, $Supplier* msgSupplier) {
	$AbstractLoggerWrapper::log(level, thrown, msgSupplier);
}

void LoggerWrapper::log($PlatformLogger$Level* level, $Supplier* msgSupplier) {
	$AbstractLoggerWrapper::log(level, msgSupplier);
}

void LoggerWrapper::log($PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {
	$AbstractLoggerWrapper::log(level, msg, params);
}

void LoggerWrapper::log($PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	$AbstractLoggerWrapper::log(level, msg, thrown);
}

void LoggerWrapper::log($PlatformLogger$Level* level, $String* msg) {
	$AbstractLoggerWrapper::log(level, msg);
}

bool LoggerWrapper::isEnabled() {
	return $AbstractLoggerWrapper::isEnabled();
}

bool LoggerWrapper::isLoggable($PlatformLogger$Level* level) {
	return $AbstractLoggerWrapper::isLoggable(level);
}

void LoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* format, $ObjectArray* params) {
	$AbstractLoggerWrapper::log(level, bundle, format, params);
}

void LoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$AbstractLoggerWrapper::log(level, bundle, key, thrown);
}

void LoggerWrapper::log($System$Logger$Level* level, $String* format, $ObjectArray* params) {
	$AbstractLoggerWrapper::log(level, format, params);
}

void LoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$AbstractLoggerWrapper::log(level, msgSupplier, thrown);
}

void LoggerWrapper::log($System$Logger$Level* level, $String* msg, $Throwable* thrown) {
	$AbstractLoggerWrapper::log(level, msg, thrown);
}

void LoggerWrapper::log($System$Logger$Level* level, Object$* obj) {
	$AbstractLoggerWrapper::log(level, obj);
}

void LoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier) {
	$AbstractLoggerWrapper::log(level, msgSupplier);
}

void LoggerWrapper::log($System$Logger$Level* level, $String* msg) {
	$AbstractLoggerWrapper::log(level, msg);
}

bool LoggerWrapper::isLoggable($System$Logger$Level* level) {
	return $AbstractLoggerWrapper::isLoggable(level);
}

LoggerWrapper::LoggerWrapper() {
}

$Class* LoggerWrapper::load$($String* name, bool initialize) {
	$loadClass(LoggerWrapper, name, initialize, &_LoggerWrapper_ClassInfo_, allocate$LoggerWrapper);
	return class$;
}

$Class* LoggerWrapper::class$ = nullptr;

		} // logger
	} // internal
} // jdk