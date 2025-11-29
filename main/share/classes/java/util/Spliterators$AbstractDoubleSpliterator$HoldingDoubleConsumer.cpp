#include <java/util/Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer.h>

#include <java/util/Spliterators$AbstractDoubleSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_FieldInfo_[] = {
	{"value", "D", nullptr, 0, $field(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, value)},
	{}
};

$MethodInfo _Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::*)()>(&Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer", "java.util.Spliterators$AbstractDoubleSpliterator", "HoldingDoubleConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_FieldInfo_,
	_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer($Class* clazz) {
	return $of($alloc(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer));
}

void Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::init$() {
}

void Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::accept(double value) {
	this->value = value;
}

Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer() {
}

$Class* Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, name, initialize, &_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer_ClassInfo_, allocate$Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer);
	return class$;
}

$Class* Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::class$ = nullptr;

	} // util
} // java