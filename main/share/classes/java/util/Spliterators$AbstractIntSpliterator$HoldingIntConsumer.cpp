#include <java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer.h>

#include <java/util/Spliterators$AbstractIntSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractIntSpliterator$HoldingIntConsumer_FieldInfo_[] = {
	{"value", "I", nullptr, 0, $field(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, value)},
	{}
};

$MethodInfo _Spliterators$AbstractIntSpliterator$HoldingIntConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spliterators$AbstractIntSpliterator$HoldingIntConsumer::*)()>(&Spliterators$AbstractIntSpliterator$HoldingIntConsumer::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractIntSpliterator$HoldingIntConsumer_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer", "java.util.Spliterators$AbstractIntSpliterator", "HoldingIntConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractIntSpliterator$HoldingIntConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_FieldInfo_,
	_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractIntSpliterator$HoldingIntConsumer($Class* clazz) {
	return $of($alloc(Spliterators$AbstractIntSpliterator$HoldingIntConsumer));
}

void Spliterators$AbstractIntSpliterator$HoldingIntConsumer::init$() {
}

void Spliterators$AbstractIntSpliterator$HoldingIntConsumer::accept(int32_t value) {
	this->value = value;
}

Spliterators$AbstractIntSpliterator$HoldingIntConsumer::Spliterators$AbstractIntSpliterator$HoldingIntConsumer() {
}

$Class* Spliterators$AbstractIntSpliterator$HoldingIntConsumer::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, name, initialize, &_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_ClassInfo_, allocate$Spliterators$AbstractIntSpliterator$HoldingIntConsumer);
	return class$;
}

$Class* Spliterators$AbstractIntSpliterator$HoldingIntConsumer::class$ = nullptr;

	} // util
} // java