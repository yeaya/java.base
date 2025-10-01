#include <java/util/concurrent/ConcurrentHashMap$CounterCell.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace util {
		namespace concurrent {
$CompoundAttribute _ConcurrentHashMap$CounterCell_Annotations_[] = {
	{"Ljdk/internal/vm/annotation/Contended;", nullptr},
	{}
};


$FieldInfo _ConcurrentHashMap$CounterCell_FieldInfo_[] = {
	{"value", "J", nullptr, $VOLATILE, $field(ConcurrentHashMap$CounterCell, value)},
	{}
};

$MethodInfo _ConcurrentHashMap$CounterCell_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(ConcurrentHashMap$CounterCell::*)(int64_t)>(&ConcurrentHashMap$CounterCell::init$))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$CounterCell_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$CounterCell", "java.util.concurrent.ConcurrentHashMap", "CounterCell", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentHashMap$CounterCell_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$CounterCell",
	"java.lang.Object",
	nullptr,
	_ConcurrentHashMap$CounterCell_FieldInfo_,
	_ConcurrentHashMap$CounterCell_MethodInfo_,
	nullptr,
	nullptr,
	_ConcurrentHashMap$CounterCell_InnerClassesInfo_,
	_ConcurrentHashMap$CounterCell_Annotations_,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$CounterCell($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$CounterCell));
}

void ConcurrentHashMap$CounterCell::init$(int64_t x) {
	this->value = x;
}

ConcurrentHashMap$CounterCell::ConcurrentHashMap$CounterCell() {
}

$Class* ConcurrentHashMap$CounterCell::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$CounterCell, name, initialize, &_ConcurrentHashMap$CounterCell_ClassInfo_, allocate$ConcurrentHashMap$CounterCell);
	return class$;
}

$Class* ConcurrentHashMap$CounterCell::class$ = nullptr;

		} // concurrent
	} // util
} // java