#include <jdk/internal/logger/BootstrapLogger$DetectBackend.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/logger/BootstrapLogger$DetectBackend$1.h>
#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $BootstrapLogger = ::jdk::internal::logger::BootstrapLogger;
using $BootstrapLogger$DetectBackend$1 = ::jdk::internal::logger::BootstrapLogger$DetectBackend$1;
using $BootstrapLogger$LoggingBackend = ::jdk::internal::logger::BootstrapLogger$LoggingBackend;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _BootstrapLogger$DetectBackend_FieldInfo_[] = {
	{"detectedBackend", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $STATIC | $FINAL, $staticField(BootstrapLogger$DetectBackend, detectedBackend)},
	{}
};

$MethodInfo _BootstrapLogger$DetectBackend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BootstrapLogger$DetectBackend::*)()>(&BootstrapLogger$DetectBackend::init$))},
	{}
};

$InnerClassInfo _BootstrapLogger$DetectBackend_InnerClassesInfo_[] = {
	{"jdk.internal.logger.BootstrapLogger$DetectBackend", "jdk.internal.logger.BootstrapLogger", "DetectBackend", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.logger.BootstrapLogger$DetectBackend$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BootstrapLogger$DetectBackend_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.logger.BootstrapLogger$DetectBackend",
	"java.lang.Object",
	nullptr,
	_BootstrapLogger$DetectBackend_FieldInfo_,
	_BootstrapLogger$DetectBackend_MethodInfo_,
	nullptr,
	nullptr,
	_BootstrapLogger$DetectBackend_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.BootstrapLogger"
};

$Object* allocate$BootstrapLogger$DetectBackend($Class* clazz) {
	return $of($alloc(BootstrapLogger$DetectBackend));
}

$BootstrapLogger$LoggingBackend* BootstrapLogger$DetectBackend::detectedBackend = nullptr;

void BootstrapLogger$DetectBackend::init$() {
}

void clinit$BootstrapLogger$DetectBackend($Class* class$) {
	$beforeCallerSensitive();
	{
		$assignStatic(BootstrapLogger$DetectBackend::detectedBackend, $cast($BootstrapLogger$LoggingBackend, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($BootstrapLogger$DetectBackend$1)))));
	}
}

BootstrapLogger$DetectBackend::BootstrapLogger$DetectBackend() {
}

$Class* BootstrapLogger$DetectBackend::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$DetectBackend, name, initialize, &_BootstrapLogger$DetectBackend_ClassInfo_, clinit$BootstrapLogger$DetectBackend, allocate$BootstrapLogger$DetectBackend);
	return class$;
}

$Class* BootstrapLogger$DetectBackend::class$ = nullptr;

		} // logger
	} // internal
} // jdk