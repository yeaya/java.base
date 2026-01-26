#include <jdk/internal/logger/LazyLoggers$LazyLoggerFactories.h>

#include <java/util/Objects.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LazyLoggers$LazyLoggerFactories_FieldInfo_[] = {
	{"loggerSupplier", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/lang/Module;TL;>;", $FINAL, $field(LazyLoggers$LazyLoggerFactories, loggerSupplier)},
	{}
};

$MethodInfo _LazyLoggers$LazyLoggerFactories_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/lang/Module;TL;>;)V", $PUBLIC, $method(LazyLoggers$LazyLoggerFactories, init$, void, $BiFunction*)},
	{"<init>", "(Ljava/util/function/BiFunction;Ljava/lang/Void;)V", "(Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/lang/Module;TL;>;Ljava/lang/Void;)V", $PRIVATE, $method(LazyLoggers$LazyLoggerFactories, init$, void, $BiFunction*, $Void*)},
	{}
};

$InnerClassInfo _LazyLoggers$LazyLoggerFactories_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LazyLoggers$LazyLoggerFactories", "jdk.internal.logger.LazyLoggers", "LazyLoggerFactories", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LazyLoggers$LazyLoggerFactories_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.logger.LazyLoggers$LazyLoggerFactories",
	"java.lang.Object",
	nullptr,
	_LazyLoggers$LazyLoggerFactories_FieldInfo_,
	_LazyLoggers$LazyLoggerFactories_MethodInfo_,
	"<L::Ljava/lang/System$Logger;>Ljava/lang/Object;",
	nullptr,
	_LazyLoggers$LazyLoggerFactories_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LazyLoggers"
};

$Object* allocate$LazyLoggers$LazyLoggerFactories($Class* clazz) {
	return $of($alloc(LazyLoggers$LazyLoggerFactories));
}

void LazyLoggers$LazyLoggerFactories::init$($BiFunction* loggerSupplier) {
	LazyLoggers$LazyLoggerFactories::init$($cast($BiFunction, $Objects::requireNonNull(loggerSupplier)), ($Void*)nullptr);
}

void LazyLoggers$LazyLoggerFactories::init$($BiFunction* loggerSupplier, $Void* unused) {
	$set(this, loggerSupplier, loggerSupplier);
}

LazyLoggers$LazyLoggerFactories::LazyLoggers$LazyLoggerFactories() {
}

$Class* LazyLoggers$LazyLoggerFactories::load$($String* name, bool initialize) {
	$loadClass(LazyLoggers$LazyLoggerFactories, name, initialize, &_LazyLoggers$LazyLoggerFactories_ClassInfo_, allocate$LazyLoggers$LazyLoggerFactories);
	return class$;
}

$Class* LazyLoggers$LazyLoggerFactories::class$ = nullptr;

		} // logger
	} // internal
} // jdk