#include <java/util/ArrayPrefixHelpers.h>

#include <jcpp.h>

#undef CUMULATE
#undef FINISHED
#undef MIN_PARTITION
#undef SUMMED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _ArrayPrefixHelpers_FieldInfo_[] = {
	{"CUMULATE", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, CUMULATE)},
	{"SUMMED", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, SUMMED)},
	{"FINISHED", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, FINISHED)},
	{"MIN_PARTITION", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, MIN_PARTITION)},
	{}
};

$MethodInfo _ArrayPrefixHelpers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayPrefixHelpers::*)()>(&ArrayPrefixHelpers::init$))},
	{}
};

$InnerClassInfo _ArrayPrefixHelpers_InnerClassesInfo_[] = {
	{"java.util.ArrayPrefixHelpers$IntCumulateTask", "java.util.ArrayPrefixHelpers", "IntCumulateTask", $STATIC | $FINAL},
	{"java.util.ArrayPrefixHelpers$DoubleCumulateTask", "java.util.ArrayPrefixHelpers", "DoubleCumulateTask", $STATIC | $FINAL},
	{"java.util.ArrayPrefixHelpers$LongCumulateTask", "java.util.ArrayPrefixHelpers", "LongCumulateTask", $STATIC | $FINAL},
	{"java.util.ArrayPrefixHelpers$CumulateTask", "java.util.ArrayPrefixHelpers", "CumulateTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayPrefixHelpers_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayPrefixHelpers",
	"java.lang.Object",
	nullptr,
	_ArrayPrefixHelpers_FieldInfo_,
	_ArrayPrefixHelpers_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayPrefixHelpers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.ArrayPrefixHelpers$IntCumulateTask,java.util.ArrayPrefixHelpers$DoubleCumulateTask,java.util.ArrayPrefixHelpers$LongCumulateTask,java.util.ArrayPrefixHelpers$CumulateTask"
};

$Object* allocate$ArrayPrefixHelpers($Class* clazz) {
	return $of($alloc(ArrayPrefixHelpers));
}

void ArrayPrefixHelpers::init$() {
}

ArrayPrefixHelpers::ArrayPrefixHelpers() {
}

$Class* ArrayPrefixHelpers::load$($String* name, bool initialize) {
	$loadClass(ArrayPrefixHelpers, name, initialize, &_ArrayPrefixHelpers_ClassInfo_, allocate$ArrayPrefixHelpers);
	return class$;
}

$Class* ArrayPrefixHelpers::class$ = nullptr;

	} // util
} // java