#include <TypeCheckMicroBenchmark$5.h>

#include <TypeCheckMicroBenchmark$Job.h>
#include <TypeCheckMicroBenchmark.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark = ::TypeCheckMicroBenchmark;
using $TypeCheckMicroBenchmark$Job = ::TypeCheckMicroBenchmark$Job;
using $IntegerArray = $Array<::java::lang::Integer>;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

$FieldInfo _TypeCheckMicroBenchmark$5_FieldInfo_[] = {
	{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$5, val$list)},
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$5, val$iterations)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$5::*)($String*,int32_t,$List*)>(&TypeCheckMicroBenchmark$5::init$))},
	{"work", "()V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$5_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$5_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$5", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$5_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$5",
	"TypeCheckMicroBenchmark$Job",
	nullptr,
	_TypeCheckMicroBenchmark$5_FieldInfo_,
	_TypeCheckMicroBenchmark$5_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$5_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$5($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$5));
}

void TypeCheckMicroBenchmark$5::init$($String* name, int32_t val$iterations, $List* val$list) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$5::work() {
	$var($ObjectArray, a, $new($IntegerArray, 1));
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		{
			$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, x, arr$->get(i$));
				{
					try {
						a->set(0, x);
					} catch ($ArrayStoreException&) {
						$var($ArrayStoreException, unused, $catch());
						$throwNew($ClassCastException);
					}
				}
			}
		}
	}
}

TypeCheckMicroBenchmark$5::TypeCheckMicroBenchmark$5() {
}

$Class* TypeCheckMicroBenchmark$5::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$5, name, initialize, &_TypeCheckMicroBenchmark$5_ClassInfo_, allocate$TypeCheckMicroBenchmark$5);
	return class$;
}

$Class* TypeCheckMicroBenchmark$5::class$ = nullptr;