#include <TypeCheckMicroBenchmark$2.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/ClassCastException.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $IntegerArray = $Array<::java::lang::Integer>;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

void TypeCheckMicroBenchmark$2::init$($String* name, int32_t val$iterations, $List* val$list) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$2::work() {
	$var($ObjectArray, a, $new($IntegerArray, 0));
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		try {
			$nc(this->val$list)->toArray(a);
		} catch ($ArrayStoreException& ase) {
			$throwNew($ClassCastException);
		}
	}
}

TypeCheckMicroBenchmark$2::TypeCheckMicroBenchmark$2() {
}

$Class* TypeCheckMicroBenchmark$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$2, val$list)},
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$2, val$iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$2, init$, void, $String*, int32_t, $List*)},
		{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$2, work, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$2", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$2",
		"TypeCheckMicroBenchmark$Job",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TypeCheckMicroBenchmark"
	};
	$loadClass(TypeCheckMicroBenchmark$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$2);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$2::class$ = nullptr;