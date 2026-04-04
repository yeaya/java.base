#include <TypeCheckMicroBenchmark$6.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/reflect/Array.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $List = ::java::util::List;

void TypeCheckMicroBenchmark$6::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$6::work() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			{
				$var($ObjectArray, a, $cast($ObjectArray, $1Array::newInstance(this->val$klazz, 1)));
				try {
					a->set(0, x);
				} catch ($ArrayStoreException& unused) {
					$throwNew($ClassCastException);
				}
			}
		}
	}
}

TypeCheckMicroBenchmark$6::TypeCheckMicroBenchmark$6() {
}

$Class* TypeCheckMicroBenchmark$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$klazz)},
		{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$list)},
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$6, init$, void, $String*, int32_t, $List*, $Class*)},
		{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$6, work, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$6", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$6",
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
	$loadClass(TypeCheckMicroBenchmark$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$6);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$6::class$ = nullptr;