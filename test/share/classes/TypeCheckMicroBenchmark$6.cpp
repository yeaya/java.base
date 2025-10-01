#include <TypeCheckMicroBenchmark$6.h>

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
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeCheckMicroBenchmark = ::TypeCheckMicroBenchmark;
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

$FieldInfo _TypeCheckMicroBenchmark$6_FieldInfo_[] = {
	{"val$klazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$klazz)},
	{"val$list", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$list)},
	{"val$iterations", "I", nullptr, $FINAL | $SYNTHETIC, $field(TypeCheckMicroBenchmark$6, val$iterations)},
	{}
};

$MethodInfo _TypeCheckMicroBenchmark$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(TypeCheckMicroBenchmark$6::*)($String*,int32_t,$List*,$Class*)>(&TypeCheckMicroBenchmark$6::init$))},
	{"work", "()V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TypeCheckMicroBenchmark$6_EnclosingMethodInfo_ = {
	"TypeCheckMicroBenchmark",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TypeCheckMicroBenchmark$6_InnerClassesInfo_[] = {
	{"TypeCheckMicroBenchmark$6", nullptr, nullptr, 0},
	{"TypeCheckMicroBenchmark$Job", "TypeCheckMicroBenchmark", "Job", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeCheckMicroBenchmark$6_ClassInfo_ = {
	$ACC_SUPER,
	"TypeCheckMicroBenchmark$6",
	"TypeCheckMicroBenchmark$Job",
	nullptr,
	_TypeCheckMicroBenchmark$6_FieldInfo_,
	_TypeCheckMicroBenchmark$6_MethodInfo_,
	nullptr,
	&_TypeCheckMicroBenchmark$6_EnclosingMethodInfo_,
	_TypeCheckMicroBenchmark$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeCheckMicroBenchmark"
};

$Object* allocate$TypeCheckMicroBenchmark$6($Class* clazz) {
	return $of($alloc(TypeCheckMicroBenchmark$6));
}

void TypeCheckMicroBenchmark$6::init$($String* name, int32_t val$iterations, $List* val$list, $Class* val$klazz) {
	this->val$iterations = val$iterations;
	$set(this, val$list, val$list);
	$set(this, val$klazz, val$klazz);
	$TypeCheckMicroBenchmark$Job::init$(name);
}

void TypeCheckMicroBenchmark$6::work() {
	for (int32_t i = 0; i < this->val$iterations; ++i) {
		{
			$var($ObjectArray, arr$, $nc(this->val$list)->toArray());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, x, arr$->get(i$));
				{
					$var($ObjectArray, a, $cast($ObjectArray, $1Array::newInstance(this->val$klazz, 1)));
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

TypeCheckMicroBenchmark$6::TypeCheckMicroBenchmark$6() {
}

$Class* TypeCheckMicroBenchmark$6::load$($String* name, bool initialize) {
	$loadClass(TypeCheckMicroBenchmark$6, name, initialize, &_TypeCheckMicroBenchmark$6_ClassInfo_, allocate$TypeCheckMicroBenchmark$6);
	return class$;
}

$Class* TypeCheckMicroBenchmark$6::class$ = nullptr;