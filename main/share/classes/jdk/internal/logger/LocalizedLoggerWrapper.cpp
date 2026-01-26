#include <jdk/internal/logger/LocalizedLoggerWrapper.h>

#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>
#include <jdk/internal/logger/LoggerWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;
using $LoggerWrapper = ::jdk::internal::logger::LoggerWrapper;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LocalizedLoggerWrapper_FieldInfo_[] = {
	{"bundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $FINAL, $field(LocalizedLoggerWrapper, bundle)},
	{}
};

$MethodInfo _LocalizedLoggerWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/System$Logger;Ljava/util/ResourceBundle;)V", "(TL;Ljava/util/ResourceBundle;)V", $PUBLIC, $method(LocalizedLoggerWrapper, init$, void, $System$Logger*, $ResourceBundle*)},
	{"getBundle", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $FINAL, $method(LocalizedLoggerWrapper, getBundle, $ResourceBundle*)},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, isLoggable, bool, $System$Logger$Level*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $String*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $String*, $ObjectArray*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, Object$*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $Supplier*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)V", $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $Supplier*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $PlatformLogger$Level*, $String*, $Throwable*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, log, void, $PlatformLogger$Level*, $String*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(LocalizedLoggerWrapper, log, void, $PlatformLogger$Level*, $String*, $ObjectArray*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LocalizedLoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $Throwable*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(LocalizedLoggerWrapper, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _LocalizedLoggerWrapper_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LocalizedLoggerWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.logger.LocalizedLoggerWrapper",
	"jdk.internal.logger.LoggerWrapper",
	nullptr,
	_LocalizedLoggerWrapper_FieldInfo_,
	_LocalizedLoggerWrapper_MethodInfo_,
	"<L::Ljava/lang/System$Logger;>Ljdk/internal/logger/LoggerWrapper<TL;>;",
	nullptr,
	_LocalizedLoggerWrapper_InnerClassesInfo_
};

$Object* allocate$LocalizedLoggerWrapper($Class* clazz) {
	return $of($alloc(LocalizedLoggerWrapper));
}

void LocalizedLoggerWrapper::init$($System$Logger* wrapped, $ResourceBundle* bundle) {
	$LoggerWrapper::init$(wrapped);
	$set(this, bundle, bundle);
}

$ResourceBundle* LocalizedLoggerWrapper::getBundle() {
	return this->bundle;
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $String* msg) {
	log(level, this->bundle, msg, ($ObjectArray*)nullptr);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $String* msg, $Throwable* thrown) {
	log(level, this->bundle, msg, thrown);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $String* format, $ObjectArray* params) {
	log(level, this->bundle, format, params);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, Object$* obj) {
	$nc(this->wrapped$)->log(level, obj);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier) {
	$nc(this->wrapped$)->log(level, msgSupplier);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$nc(this->wrapped$)->log(level, msgSupplier, thrown);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* format, $ObjectArray* params) {
	$nc(this->wrapped$)->log(level, bundle, format, params);
}

void LocalizedLoggerWrapper::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$nc(this->wrapped$)->log(level, bundle, key, thrown);
}

bool LocalizedLoggerWrapper::isLoggable($System$Logger$Level* level) {
	return $nc(this->wrapped$)->isLoggable(level);
}

void LocalizedLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key) {
	logrb(level, sourceClass, sourceMethod, this->bundle, key, ($ObjectArray*)nullptr);
}

void LocalizedLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key, $Throwable* thrown) {
	logrb(level, sourceClass, sourceMethod, this->bundle, key, thrown);
}

void LocalizedLoggerWrapper::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key, $ObjectArray* params) {
	logrb(level, sourceClass, sourceMethod, this->bundle, key, params);
}

void LocalizedLoggerWrapper::log($PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	logrb(level, this->bundle, msg, thrown);
}

void LocalizedLoggerWrapper::log($PlatformLogger$Level* level, $String* msg) {
	logrb(level, this->bundle, msg, ($ObjectArray*)nullptr);
}

void LocalizedLoggerWrapper::log($PlatformLogger$Level* level, $String* format, $ObjectArray* params) {
	logrb(level, this->bundle, format, params);
}

LocalizedLoggerWrapper::LocalizedLoggerWrapper() {
}

$Class* LocalizedLoggerWrapper::load$($String* name, bool initialize) {
	$loadClass(LocalizedLoggerWrapper, name, initialize, &_LocalizedLoggerWrapper_ClassInfo_, allocate$LocalizedLoggerWrapper);
	return class$;
}

$Class* LocalizedLoggerWrapper::class$ = nullptr;

		} // logger
	} // internal
} // jdk