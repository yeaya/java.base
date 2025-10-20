#include <jdk/internal/logger/BootstrapLogger$DetectBackend$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$LoggerFinder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jdk/internal/logger/BootstrapLogger$DetectBackend.h>
#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>
#include <jdk/internal/logger/DefaultLoggerFinder.h>
#include <jcpp.h>

#undef CUSTOM
#undef JUL_DEFAULT
#undef JUL_WITH_CONFIG
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$LoggerFinder = ::java::lang::System$LoggerFinder;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $BootstrapLogger$DetectBackend = ::jdk::internal::logger::BootstrapLogger$DetectBackend;
using $BootstrapLogger$LoggingBackend = ::jdk::internal::logger::BootstrapLogger$LoggingBackend;
using $DefaultLoggerFinder = ::jdk::internal::logger::DefaultLoggerFinder;

namespace jdk {
	namespace internal {
		namespace logger {

$MethodInfo _BootstrapLogger$DetectBackend$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BootstrapLogger$DetectBackend$1::*)()>(&BootstrapLogger$DetectBackend$1::init$))},
	{"run", "()Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BootstrapLogger$DetectBackend$1_EnclosingMethodInfo_ = {
	"jdk.internal.logger.BootstrapLogger$DetectBackend",
	nullptr,
	nullptr
};

$InnerClassInfo _BootstrapLogger$DetectBackend$1_InnerClassesInfo_[] = {
	{"jdk.internal.logger.BootstrapLogger$DetectBackend", "jdk.internal.logger.BootstrapLogger", "DetectBackend", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.logger.BootstrapLogger$DetectBackend$1", nullptr, nullptr, 0},
	{"jdk.internal.logger.BootstrapLogger$LoggingBackend", "jdk.internal.logger.BootstrapLogger", "LoggingBackend", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BootstrapLogger$DetectBackend$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.BootstrapLogger$DetectBackend$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_BootstrapLogger$DetectBackend$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/logger/BootstrapLogger$LoggingBackend;>;",
	&_BootstrapLogger$DetectBackend$1_EnclosingMethodInfo_,
	_BootstrapLogger$DetectBackend$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.BootstrapLogger"
};

$Object* allocate$BootstrapLogger$DetectBackend$1($Class* clazz) {
	return $of($alloc(BootstrapLogger$DetectBackend$1));
}

void BootstrapLogger$DetectBackend$1::init$() {
}

$Object* BootstrapLogger$DetectBackend$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($System$LoggerFinder);
	$var($Iterator, iterator, $nc($($ServiceLoader::load($System$LoggerFinder::class$, $($ClassLoader::getSystemClassLoader()))))->iterator());
	if ($nc(iterator)->hasNext()) {
		$init($BootstrapLogger$LoggingBackend);
		return $of($BootstrapLogger$LoggingBackend::CUSTOM);
	}
	$load($DefaultLoggerFinder);
	$var($Iterator, iterator2, $nc($($ServiceLoader::loadInstalled($DefaultLoggerFinder::class$)))->iterator());
	if ($nc(iterator2)->hasNext()) {
		$var($String, cname, $System::getProperty("java.util.logging.config.class"_s));
		$var($String, fname, $System::getProperty("java.util.logging.config.file"_s));
		$init($BootstrapLogger$LoggingBackend);
		return $of((cname != nullptr || fname != nullptr) ? $BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG : $BootstrapLogger$LoggingBackend::JUL_DEFAULT);
	} else {
		$init($BootstrapLogger$LoggingBackend);
		return $of($BootstrapLogger$LoggingBackend::NONE);
	}
}

BootstrapLogger$DetectBackend$1::BootstrapLogger$DetectBackend$1() {
}

$Class* BootstrapLogger$DetectBackend$1::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$DetectBackend$1, name, initialize, &_BootstrapLogger$DetectBackend$1_ClassInfo_, allocate$BootstrapLogger$DetectBackend$1);
	return class$;
}

$Class* BootstrapLogger$DetectBackend$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk