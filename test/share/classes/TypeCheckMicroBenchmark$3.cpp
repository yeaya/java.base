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

$FieldInfo _TypeCheckMicroBenchmark$3_FieldInfo_[] = {
	{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$klazz)},
	{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$list)},
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$3, val$iterations)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$3::*)($String*,int32_t,$List*,$Class*)>(&TypeCheckMicroBenchmark$3::init$))},
	{"work", "()V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$3_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$3_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$3", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$3_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$3",
	"TypeCheckMicroBenchmark$Job",
	nullptr,
	_TypeCheckMicroBenchmark$3_FieldInfo_,
	_TypeCheckMicroBenchmark$3_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$3_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$3($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$3));
}

void TypeCheckMicroBenchmark$3::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$3::work() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		{
			$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, x, arr$->get(i$));
				if (!(x != nullptr && $nc(this->val$klazz)->isInstance(x))) {
					$throwNew($ClassCastException);
				}
			}
		}
	}
}

TypeCheckMicroBenchmark$3::TypeCheckMicroBenchmark$3() {
}

$Class* TypeCheckMicroBenchmark$3::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$3, name, initialize, &_TypeCheckMicroBenchmark$3_ClassInfo_, allocate$TypeCheckMicroBenchmark$3);
	return class$;
}

$Class* TypeCheckMicroBenchmark$3::class$ = nullptr;