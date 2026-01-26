#include <jdk/internal/ref/CleanerFactory.h>

#include <java/lang/ref/Cleaner.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <jdk/internal/ref/CleanerFactory$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::java::lang::ref::Cleaner;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $CleanerFactory$1 = ::jdk::internal::ref::CleanerFactory$1;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _CleanerFactory_FieldInfo_[] = {
	{"commonCleaner", "Ljava/lang/ref/Cleaner;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CleanerFactory, commonCleaner)},
	{}
};

$MethodInfo _CleanerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CleanerFactory, init$, void)},
	{"cleaner", "()Ljava/lang/ref/Cleaner;", nullptr, $PUBLIC | $STATIC, $staticMethod(CleanerFactory, cleaner, $Cleaner*)},
	{}
};

$InnerClassInfo _CleanerFactory_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CleanerFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.ref.CleanerFactory",
	"java.lang.Object",
	nullptr,
	_CleanerFactory_FieldInfo_,
	_CleanerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_CleanerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerFactory$1"
};

$Object* allocate$CleanerFactory($Class* clazz) {
	return $of($alloc(CleanerFactory));
}

$Cleaner* CleanerFactory::commonCleaner = nullptr;

void CleanerFactory::init$() {
}

$Cleaner* CleanerFactory::cleaner() {
	$init(CleanerFactory);
	return CleanerFactory::commonCleaner;
}

void clinit$CleanerFactory($Class* class$) {
	$assignStatic(CleanerFactory::commonCleaner, $Cleaner::create($$new($CleanerFactory$1)));
}

CleanerFactory::CleanerFactory() {
}

$Class* CleanerFactory::load$($String* name, bool initialize) {
	$loadClass(CleanerFactory, name, initialize, &_CleanerFactory_ClassInfo_, clinit$CleanerFactory, allocate$CleanerFactory);
	return class$;
}

$Class* CleanerFactory::class$ = nullptr;

		} // ref
	} // internal
} // jdk