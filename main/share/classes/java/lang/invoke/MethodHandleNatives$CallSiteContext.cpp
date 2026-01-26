#include <java/lang/invoke/MethodHandleNatives$CallSiteContext.h>

#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $Cleaner = ::java::lang::ref::Cleaner;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleNatives$CallSiteContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodHandleNatives$CallSiteContext, init$, void)},
	{"make", "(Ljava/lang/invoke/CallSite;)Ljava/lang/invoke/MethodHandleNatives$CallSiteContext;", nullptr, $STATIC, $staticMethod(MethodHandleNatives$CallSiteContext, make, MethodHandleNatives$CallSiteContext*, $CallSite*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MethodHandleNatives$CallSiteContext, run, void)},
	{}
};

$InnerClassInfo _MethodHandleNatives$CallSiteContext_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleNatives$CallSiteContext", "java.lang.invoke.MethodHandleNatives", "CallSiteContext", $STATIC},
	{}
};

$ClassInfo _MethodHandleNatives$CallSiteContext_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleNatives$CallSiteContext",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_MethodHandleNatives$CallSiteContext_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleNatives$CallSiteContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleNatives"
};

$Object* allocate$MethodHandleNatives$CallSiteContext($Class* clazz) {
	return $of($alloc(MethodHandleNatives$CallSiteContext));
}

void MethodHandleNatives$CallSiteContext::init$() {
}

MethodHandleNatives$CallSiteContext* MethodHandleNatives$CallSiteContext::make($CallSite* cs) {
	$init(MethodHandleNatives$CallSiteContext);
	$useLocalCurrentObjectStackCache();
	$var(MethodHandleNatives$CallSiteContext, newContext, $new(MethodHandleNatives$CallSiteContext));
	$nc($($CleanerFactory::cleaner()))->register$(cs, newContext);
	return newContext;
}

void MethodHandleNatives$CallSiteContext::run() {
	$MethodHandleNatives::clearCallSiteContext(this);
}

MethodHandleNatives$CallSiteContext::MethodHandleNatives$CallSiteContext() {
}

$Class* MethodHandleNatives$CallSiteContext::load$($String* name, bool initialize) {
	$loadClass(MethodHandleNatives$CallSiteContext, name, initialize, &_MethodHandleNatives$CallSiteContext_ClassInfo_, allocate$MethodHandleNatives$CallSiteContext);
	return class$;
}

$Class* MethodHandleNatives$CallSiteContext::class$ = nullptr;

		} // invoke
	} // lang
} // java