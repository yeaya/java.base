#include <sun/util/logging/PlatformLogger$Bridge.h>

#include <java/lang/System$Logger.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>
#include <jdk/internal/logger/LoggerWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $AbstractLoggerWrapper = ::jdk::internal::logger::AbstractLoggerWrapper;
using $LoggerWrapper = ::jdk::internal::logger::LoggerWrapper;

namespace sun {
	namespace util {
		namespace logging {

$MethodInfo _PlatformLogger$Bridge_MethodInfo_[] = {
	{"convert", "(Ljava/lang/System$Logger;)Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PlatformLogger$Bridge*(*)($System$Logger*)>(&PlatformLogger$Bridge::convert))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PlatformLogger$Bridge_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$Bridge", "sun.util.logging.PlatformLogger", "Bridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PlatformLogger$Bridge_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.logging.PlatformLogger$Bridge",
	nullptr,
	nullptr,
	nullptr,
	_PlatformLogger$Bridge_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformLogger$Bridge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.logging.PlatformLogger"
};

$Object* allocate$PlatformLogger$Bridge($Class* clazz) {
	return $of($alloc(PlatformLogger$Bridge));
}

PlatformLogger$Bridge* PlatformLogger$Bridge::convert($System$Logger* logger) {
	if ($instanceOf(PlatformLogger$Bridge, logger)) {
		return $cast(PlatformLogger$Bridge, logger);
	} else {
		return $new($LoggerWrapper, logger);
	}
}

$Class* PlatformLogger$Bridge::load$($String* name, bool initialize) {
	$loadClass(PlatformLogger$Bridge, name, initialize, &_PlatformLogger$Bridge_ClassInfo_, allocate$PlatformLogger$Bridge);
	return class$;
}

$Class* PlatformLogger$Bridge::class$ = nullptr;

		} // logging
	} // util
} // sun