#include <java/lang/ref/Reference$ReferenceHandler.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Reference.h>
#include <jdk/internal/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Reference = ::java::lang::ref::Reference;
using $Cleaner = ::jdk::internal::ref::Cleaner;

namespace java {
	namespace lang {
		namespace ref {

void Reference$ReferenceHandler::ensureClassInitialized($Class* clazz) {
	$init(Reference$ReferenceHandler);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($String, var$0, $nc(clazz)->getName());
		$Class::forName(var$0, true, $(clazz->getClassLoader()));
	} catch ($ClassNotFoundException& e) {
		$throw($$cast($Error, $$new($NoClassDefFoundError, $(e->getMessage()))->initCause(e)));
	}
}

void Reference$ReferenceHandler::init$($ThreadGroup* g, $String* name) {
	$Thread::init$(g, nullptr, name, 0, false);
}

void Reference$ReferenceHandler::run() {
	while (true) {
		$Reference::processPendingReferences();
	}
}

void Reference$ReferenceHandler::clinit$($Class* clazz) {
	{
		$load($Cleaner);
		Reference$ReferenceHandler::ensureClassInitialized($Cleaner::class$);
	}
}

Reference$ReferenceHandler::Reference$ReferenceHandler() {
}

$Class* Reference$ReferenceHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, 0, $method(Reference$ReferenceHandler, init$, void, $ThreadGroup*, $String*)},
		{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(Reference$ReferenceHandler, ensureClassInitialized, void, $Class*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Reference$ReferenceHandler, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Reference$ReferenceHandler", "java.lang.ref.Reference", "ReferenceHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Reference$ReferenceHandler",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Reference"
	};
	$loadClass(Reference$ReferenceHandler, name, initialize, &classInfo$$, Reference$ReferenceHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Reference$ReferenceHandler);
	});
	return class$;
}

$Class* Reference$ReferenceHandler::class$ = nullptr;

		} // ref
	} // lang
} // java