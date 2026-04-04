#include <TypeCheckMicroBenchmark$4.h>
#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

void TypeCheckMicroBenchmark$4::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$4::work() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			$nc(this->val$klazz)->cast(x);
		}
	}
}

TypeCheckMicroBenchmark$4::TypeCheckMicroBenchmark$4() {
}

$Class* TypeCheckMicroBenchmark$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$klazz)},
		{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$list)},
		{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$iterations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$4, init$, void, $String*, int32_t, $List*, $Class*)},
		{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$4, work, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TypeCheckMicroBenchmark",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeCheckMicroBenchmark$4", nullptr, nullptr, 0},
		{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeCheckMicroBenchmark$4",
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
	$loadClass(TypeCheckMicroBenchmark$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCheckMicroBenchmark$4);
	});
	return class$;
}

$Class* TypeCheckMicroBenchmark$4::class$ = nullptr;