#include <GetResource.h>
#include <GetResource$1.h>
#include <GetResource$2.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $GetResource$1 = ::GetResource$1;
using $GetResource$2 = ::GetResource$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

void GetResource::init$() {
	$set(this, go, $new($CyclicBarrier, 2));
	$set(this, done, $new($CyclicBarrier, 2));
	$set(this, t1, $new($GetResource$1, this));
	$set(this, t2, $new($GetResource$2, this));
}

void GetResource::run() {
	$nc(this->t1)->start();
	$nc(this->t2)->start();
	try {
		this->t1->join();
	} catch ($InterruptedException& e) {
		e->printStackTrace();
		$throw(e);
	}
	try {
		this->t2->join();
	} catch ($InterruptedException& e) {
		e->printStackTrace();
		$throw(e);
	}
}

void GetResource::main($StringArray* args) {
	$$new(GetResource)->run();
}

GetResource::GetResource() {
}

$Class* GetResource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"go", "Ljava/util/concurrent/CyclicBarrier;", nullptr, 0, $field(GetResource, go)},
		{"done", "Ljava/util/concurrent/CyclicBarrier;", nullptr, 0, $field(GetResource, done)},
		{"t1", "Ljava/lang/Thread;", nullptr, 0, $field(GetResource, t1)},
		{"t2", "Ljava/lang/Thread;", nullptr, 0, $field(GetResource, t2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetResource, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetResource, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetResource, run, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetResource$2", nullptr, nullptr, 0},
		{"GetResource$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetResource",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetResource$2,GetResource$1"
	};
	$loadClass(GetResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetResource);
	});
	return class$;
}

$Class* GetResource::class$ = nullptr;