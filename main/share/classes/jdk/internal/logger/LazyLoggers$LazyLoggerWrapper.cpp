#include <jdk/internal/logger/LazyLoggers$LazyLoggerWrapper.h>

#include <java/lang/System$Logger.h>
#include <java/util/Objects.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerAccessor.h>
#include <jdk/internal/logger/LazyLoggers$LoggerAccessor.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $Void = ::java::lang::Void;
using $Objects = ::java::util::Objects;
using $AbstractLoggerWrapper = ::jdk::internal::logger::AbstractLoggerWrapper;
using $LazyLoggers$LazyLoggerAccessor = ::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor;
using $LazyLoggers$LoggerAccessor = ::jdk::internal::logger::LazyLoggers$LoggerAccessor;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LazyLoggers$LazyLoggerWrapper_FieldInfo_[] = {
	{"loggerAccessor", "Ljdk/internal/logger/LazyLoggers$LoggerAccessor;", nullptr, $FINAL, $field(LazyLoggers$LazyLoggerWrapper, loggerAccessor)},
	{}
};

$MethodInfo _LazyLoggers$LazyLoggerWrapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;)V", nullptr, $PUBLIC, $method(static_cast<void(LazyLoggers$LazyLoggerWrapper::*)($LazyLoggers$LazyLoggerAccessor*)>(&LazyLoggers$LazyLoggerWrapper::init$))},
	{"<init>", "(Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(LazyLoggers$LazyLoggerWrapper::*)($LazyLoggers$LazyLoggerAccessor*,$Void*)>(&LazyLoggers$LazyLoggerWrapper::init$))},
	{"platformProxy", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, 0},
	{"wrapped", "()Ljava/lang/System$Logger;", nullptr, $FINAL},
	{}
};

$InnerClassInfo _LazyLoggers$LazyLoggerWrapper_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LazyLoggers$LazyLoggerWrapper", "jdk.internal.logger.LazyLoggers", "LazyLoggerWrapper", $PRIVATE | $STATIC},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LazyLoggers$LazyLoggerWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.LazyLoggers$LazyLoggerWrapper",
	"jdk.internal.logger.AbstractLoggerWrapper",
	nullptr,
	_LazyLoggers$LazyLoggerWrapper_FieldInfo_,
	_LazyLoggers$LazyLoggerWrapper_MethodInfo_,
	"Ljdk/internal/logger/AbstractLoggerWrapper<Ljava/lang/System$Logger;>;",
	nullptr,
	_LazyLoggers$LazyLoggerWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LazyLoggers"
};

$Object* allocate$LazyLoggers$LazyLoggerWrapper($Class* clazz) {
	return $of($alloc(LazyLoggers$LazyLoggerWrapper));
}

void LazyLoggers$LazyLoggerWrapper::init$($LazyLoggers$LazyLoggerAccessor* loggerSinkSupplier) {
	LazyLoggers$LazyLoggerWrapper::init$($cast($LazyLoggers$LazyLoggerAccessor, $Objects::requireNonNull(loggerSinkSupplier)), ($Void*)nullptr);
}

void LazyLoggers$LazyLoggerWrapper::init$($LazyLoggers$LazyLoggerAccessor* loggerSinkSupplier, $Void* unused) {
	$AbstractLoggerWrapper::init$();
	$set(this, loggerAccessor, loggerSinkSupplier);
}

$System$Logger* LazyLoggers$LazyLoggerWrapper::wrapped() {
	return $nc(this->loggerAccessor)->wrapped();
}

$PlatformLogger$Bridge* LazyLoggers$LazyLoggerWrapper::platformProxy() {
	return $nc(this->loggerAccessor)->platform();
}

LazyLoggers$LazyLoggerWrapper::LazyLoggers$LazyLoggerWrapper() {
}

$Class* LazyLoggers$LazyLoggerWrapper::load$($String* name, bool initialize) {
	$loadClass(LazyLoggers$LazyLoggerWrapper, name, initialize, &_LazyLoggers$LazyLoggerWrapper_ClassInfo_, allocate$LazyLoggers$LazyLoggerWrapper);
	return class$;
}

$Class* LazyLoggers$LazyLoggerWrapper::class$ = nullptr;

		} // logger
	} // internal
} // jdk