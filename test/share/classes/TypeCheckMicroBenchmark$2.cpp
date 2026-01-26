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

$FieldInfo _TypeCheckMicroBenchmark$2_FieldInfo_[] = {
	{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$2, val$list)},
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$2, val$iterations)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", nullptr, 0, $method(TypeCheckMicroBenchmark$2, init$, void, $String*, int32_t, $List*)},
	{"work", "()V", nullptr, 0, $virtualMethod(TypeCheckMicroBenchmark$2, work, void)},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$2_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$2_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$2", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$2_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$2",
	"TypeCheckMicroBenchmark$Job",
	nullptr,
	_TypeCheckMicroBenchmark$2_FieldInfo_,
	_TypeCheckMicroBenchmark$2_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$2_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$2($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$2));
}

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
	$loadClass(TypeCheckMicroBenchmark$2, name, initialize, &_TypeCheckMicroBenchmark$2_ClassInfo_, allocate$TypeCheckMicroBenchmark$2);
	return class$;
}

$Class* TypeCheckMicroBenchmark$2::class$ = nullptr;