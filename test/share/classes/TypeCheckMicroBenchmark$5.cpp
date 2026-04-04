#include <TypeCheckMicroBenchmark$5.h>
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

void TypeCheckMicroBenchmark$5::init$($String* name, int32_t val$iterations, $List* val$list) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$5::work() {
	$useLocalObjectStack();
	$var($ObjectArray, a, $new($IntegerArray, 1));
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			try {
				a->set(0, x);
			} catch ($ArrayStoreException& unused) {
				$throwNew($ClassCastException);
			}
		}
	}
}

TypeCheckMicroBenchmark$5::TypeCheckMicroBenchmark$5() {
}

$Class* TypeCheckMicroBenchmark$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$5, val$list)},
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$5, val$iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$5, init$, void, $String*, int32_t, $List*)},
		{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$5, work, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$5", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$5",
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
	$loadClass(TypeCheckMicroBenchmark$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$5);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$5::class$ = nullptr;