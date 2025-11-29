#include <java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer.h>

#include <java/util/Spliterators$AbstractLongSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractLongSpliterator$HoldingLongConsumer_FieldInfo_[] = {
	{"value", "J", nullptr, 0, $field(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, value)},
	{}
};

$MethodInfo _Spliterators$AbstractLongSpliterator$HoldingLongConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spliterators$AbstractLongSpliterator$HoldingLongConsumer::*)()>(&Spliterators$AbstractLongSpliterator$HoldingLongConsumer::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractLongSpliterator$HoldingLongConsumer_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer", "java.util.Spliterators$AbstractLongSpliterator", "HoldingLongConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractLongSpliterator$HoldingLongConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_FieldInfo_,
	_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractLongSpliterator$HoldingLongConsumer($Class* clazz) {
	return $of($alloc(Spliterators$AbstractLongSpliterator$HoldingLongConsumer));
}

void Spliterators$AbstractLongSpliterator$HoldingLongConsumer::init$() {
}

void Spliterators$AbstractLongSpliterator$HoldingLongConsumer::accept(int64_t value) {
	this->value = value;
}

Spliterators$AbstractLongSpliterator$HoldingLongConsumer::Spliterators$AbstractLongSpliterator$HoldingLongConsumer() {
}

$Class* Spliterators$AbstractLongSpliterator$HoldingLongConsumer::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, name, initialize, &_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_ClassInfo_, allocate$Spliterators$AbstractLongSpliterator$HoldingLongConsumer);
	return class$;
}

$Class* Spliterators$AbstractLongSpliterator$HoldingLongConsumer::class$ = nullptr;

	} // util
} // java