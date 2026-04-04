#include <java/lang/ref/Cleaner.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Cleaner$1.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <jdk/internal/ref/CleanerImpl$PhantomCleanableRef.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Cleaner$1 = ::java::lang::ref::Cleaner$1;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Objects = ::java::util::Objects;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;
using $CleanerImpl$PhantomCleanableRef = ::jdk::internal::ref::CleanerImpl$PhantomCleanableRef;

namespace java {
	namespace lang {
		namespace ref {

void Cleaner::init$() {
	$set(this, impl, $new($CleanerImpl));
}

Cleaner* Cleaner::create() {
	$init(Cleaner);
	$var(Cleaner, cleaner, $new(Cleaner));
	$nc(cleaner->impl)->start(cleaner, nullptr);
	return cleaner;
}

Cleaner* Cleaner::create($ThreadFactory* threadFactory) {
	$init(Cleaner);
	$Objects::requireNonNull(threadFactory, "threadFactory"_s);
	$var(Cleaner, cleaner, $new(Cleaner));
	$nc(cleaner->impl)->start(cleaner, threadFactory);
	return cleaner;
}

$Cleaner$Cleanable* Cleaner::register$(Object$* obj, $Runnable* action) {
	$Objects::requireNonNull(obj, "obj"_s);
	$Objects::requireNonNull(action, "action"_s);
	return $new($CleanerImpl$PhantomCleanableRef, obj, this, action);
}

void Cleaner::clinit$($Class* clazz) {
	{
		$CleanerImpl::setCleanerImplAccess($$new($Cleaner$1));
	}
}

Cleaner::Cleaner() {
}

$Class* Cleaner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impl", "Ljdk/internal/ref/CleanerImpl;", nullptr, $FINAL, $field(Cleaner, impl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Cleaner, init$, void)},
		{"create", "()Ljava/lang/ref/Cleaner;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cleaner, create, Cleaner*)},
		{"create", "(Ljava/util/concurrent/ThreadFactory;)Ljava/lang/ref/Cleaner;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cleaner, create, Cleaner*, $ThreadFactory*)},
		{"register", "(Ljava/lang/Object;Ljava/lang/Runnable;)Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PUBLIC, $method(Cleaner, register$, $Cleaner$Cleanable*, Object$*, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Cleaner$Cleanable", "java.lang.ref.Cleaner", "Cleanable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.lang.ref.Cleaner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.ref.Cleaner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ref.Cleaner$Cleanable,java.lang.ref.Cleaner$1"
	};
	$loadClass(Cleaner, name, initialize, &classInfo$$, Cleaner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Cleaner);
	});
	return class$;
}

$Class* Cleaner::class$ = nullptr;

		} // ref
	} // lang
} // java