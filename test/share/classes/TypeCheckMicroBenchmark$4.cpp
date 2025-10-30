#include <TypeCheckMicroBenchmark$4.h>

#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark = ::TypeCheckMicroBenchmark;
using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

$FieldInfo _TypeCheckMicroBenchmark$4_FieldInfo_[] = {
	{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$klazz)},
	{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$list)},
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$4, val$iterations)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$4::*)($String*,int32_t,$List*,$Class*)>(&TypeCheckMicroBenchmark$4::init$))},
	{"work", "()V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$4_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$4_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$4", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$4_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$4",
	"TypeCheckMicroBenchmark$Job",
	nullptr,
	_TypeCheckMicroBenchmark$4_FieldInfo_,
	_TypeCheckMicroBenchmark$4_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$4_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$4($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$4));
}

void TypeCheckMicroBenchmark$4::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$4::work() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		{
			$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, x, arr$->get(i$));
				$nc(this->val$klazz)->cast(x);
			}
		}
	}
}

TypeCheckMicroBenchmark$4::TypeCheckMicroBenchmark$4() {
}

$Class* TypeCheckMicroBenchmark$4::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$4, name, initialize, &_TypeCheckMicroBenchmark$4_ClassInfo_, allocate$TypeCheckMicroBenchmark$4);
	return class$;
}

$Class* TypeCheckMicroBenchmark$4::class$ = nullptr;