#include <TypeCheckMicroBenchmark$3.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/lang/ClassCastException.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

void TypeCheckMicroBenchmark$3::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$3::work() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			if (!(x != nullptr && $nc(this->val$klazz)->isInstance(x))) {
				$throwNew($ClassCastException);
			}
		}
	}
}

TypeCheckMicroBenchmark$3::TypeCheckMicroBenchmark$3() {
}

$Class* TypeCheckMicroBenchmark$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$klazz)},
		{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$list)},
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$3, init$, void, $String*, int32_t, $List*, $Class*)},
		{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$3, work, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$3", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$3",
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
	$loadClass(TypeCheckMicroBenchmark$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$3);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$3::class$ = nullptr;