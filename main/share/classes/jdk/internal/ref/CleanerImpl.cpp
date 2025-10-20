#include <jdk/internal/ref/CleanerImpl.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jdk/internal/ref/CleanerImpl$CleanerCleanable.h>
#include <jdk/internal/ref/CleanerImpl$InnocuousThreadFactory.h>
#include <jdk/internal/ref/CleanerImpl$PhantomCleanableRef.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $Function = ::java::util::function::Function;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $CleanerImpl$CleanerCleanable = ::jdk::internal::ref::CleanerImpl$CleanerCleanable;
using $CleanerImpl$InnocuousThreadFactory = ::jdk::internal::ref::CleanerImpl$InnocuousThreadFactory;
using $CleanerImpl$PhantomCleanableRef = ::jdk::internal::ref::CleanerImpl$PhantomCleanableRef;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _CleanerImpl_FieldInfo_[] = {
	{"cleanerImplAccess", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/ref/Cleaner;Ljdk/internal/ref/CleanerImpl;>;", $PRIVATE | $STATIC, $staticField(CleanerImpl, cleanerImplAccess)},
	{"phantomCleanableList", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", $FINAL, $field(CleanerImpl, phantomCleanableList)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $FINAL, $field(CleanerImpl, queue)},
	{}
};

$MethodInfo _CleanerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CleanerImpl::*)()>(&CleanerImpl::init$))},
	{"getCleanerImpl", "(Ljava/lang/ref/Cleaner;)Ljdk/internal/ref/CleanerImpl;", nullptr, $STATIC, $method(static_cast<CleanerImpl*(*)($Cleaner*)>(&CleanerImpl::getCleanerImpl))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setCleanerImplAccess", "(Ljava/util/function/Function;)V", "(Ljava/util/function/Function<Ljava/lang/ref/Cleaner;Ljdk/internal/ref/CleanerImpl;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Function*)>(&CleanerImpl::setCleanerImplAccess))},
	{"start", "(Ljava/lang/ref/Cleaner;Ljava/util/concurrent/ThreadFactory;)V", nullptr, $PUBLIC, $method(static_cast<void(CleanerImpl::*)($Cleaner*,$ThreadFactory*)>(&CleanerImpl::start))},
	{}
};

$InnerClassInfo _CleanerImpl_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerImpl$CleanerCleanable", "jdk.internal.ref.CleanerImpl", "CleanerCleanable", $STATIC | $FINAL},
	{"jdk.internal.ref.CleanerImpl$InnocuousThreadFactory", "jdk.internal.ref.CleanerImpl", "InnocuousThreadFactory", $STATIC | $FINAL},
	{"jdk.internal.ref.CleanerImpl$PhantomCleanableRef", "jdk.internal.ref.CleanerImpl", "PhantomCleanableRef", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CleanerImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.ref.CleanerImpl",
	"java.lang.Object",
	"java.lang.Runnable",
	_CleanerImpl_FieldInfo_,
	_CleanerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CleanerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerImpl$CleanerCleanable,jdk.internal.ref.CleanerImpl$InnocuousThreadFactory,jdk.internal.ref.CleanerImpl$PhantomCleanableRef"
};

$Object* allocate$CleanerImpl($Class* clazz) {
	return $of($alloc(CleanerImpl));
}


$Function* CleanerImpl::cleanerImplAccess = nullptr;

void CleanerImpl::setCleanerImplAccess($Function* access) {
	$init(CleanerImpl);
	if (CleanerImpl::cleanerImplAccess == nullptr) {
		$assignStatic(CleanerImpl::cleanerImplAccess, access);
	} else {
		$throwNew($InternalError, "cleanerImplAccess"_s);
	}
}

CleanerImpl* CleanerImpl::getCleanerImpl($Cleaner* cleaner) {
	$init(CleanerImpl);
	return $cast(CleanerImpl, $nc(CleanerImpl::cleanerImplAccess)->apply(cleaner));
}

void CleanerImpl::init$() {
	$set(this, queue, $new($ReferenceQueue));
	$set(this, phantomCleanableList, $new($CleanerImpl$PhantomCleanableRef));
}

void CleanerImpl::start($Cleaner* cleaner, $ThreadFactory* threadFactory$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadFactory, threadFactory, threadFactory$renamed);
	if (getCleanerImpl(cleaner) != this) {
		$throwNew($AssertionError, $of("wrong cleaner"_s));
	}
	$new($CleanerImpl$CleanerCleanable, cleaner);
	if (threadFactory == nullptr) {
		$assign(threadFactory, $CleanerImpl$InnocuousThreadFactory::factory());
	}
	$var($Thread, thread, $nc(threadFactory)->newThread(this));
	$nc(thread)->setDaemon(true);
	thread->start();
}

void CleanerImpl::run() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $Thread::currentThread());
	$var($InnocuousThread, mlThread, ($instanceOf($InnocuousThread, t)) ? $cast($InnocuousThread, t) : ($InnocuousThread*)nullptr);
	while (!$nc(this->phantomCleanableList)->isListEmpty()) {
		if (mlThread != nullptr) {
			mlThread->eraseThreadLocals();
		}
		try {
			$var($Cleaner$Cleanable, ref, $cast($Cleaner$Cleanable, $nc(this->queue)->remove(60 * (int64_t)1000)));
			if (ref != nullptr) {
				ref->clean();
			}
		} catch ($Throwable&) {
			$catch();
		}
	}
}

void clinit$CleanerImpl($Class* class$) {
	$assignStatic(CleanerImpl::cleanerImplAccess, nullptr);
}

CleanerImpl::CleanerImpl() {
}

$Class* CleanerImpl::load$($String* name, bool initialize) {
	$loadClass(CleanerImpl, name, initialize, &_CleanerImpl_ClassInfo_, clinit$CleanerImpl, allocate$CleanerImpl);
	return class$;
}

$Class* CleanerImpl::class$ = nullptr;

		} // ref
	} // internal
} // jdk