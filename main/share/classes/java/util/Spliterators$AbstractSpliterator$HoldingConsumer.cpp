#include <java/util/Spliterators$AbstractSpliterator$HoldingConsumer.h>

#include <java/util/Spliterators$AbstractSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractSpliterator$HoldingConsumer_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, 0, $field(Spliterators$AbstractSpliterator$HoldingConsumer, value)},
	{}
};

$MethodInfo _Spliterators$AbstractSpliterator$HoldingConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Spliterators$AbstractSpliterator$HoldingConsumer::*)()>(&Spliterators$AbstractSpliterator$HoldingConsumer::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractSpliterator$HoldingConsumer_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractSpliterator$HoldingConsumer", "java.util.Spliterators$AbstractSpliterator", "HoldingConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractSpliterator$HoldingConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$AbstractSpliterator$HoldingConsumer",
	"java.lang.Object",
	"java.util.function.Consumer",
	_Spliterators$AbstractSpliterator$HoldingConsumer_FieldInfo_,
	_Spliterators$AbstractSpliterator$HoldingConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_Spliterators$AbstractSpliterator$HoldingConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractSpliterator$HoldingConsumer($Class* clazz) {
	return $of($alloc(Spliterators$AbstractSpliterator$HoldingConsumer));
}

void Spliterators$AbstractSpliterator$HoldingConsumer::init$() {
}

void Spliterators$AbstractSpliterator$HoldingConsumer::accept(Object$* value) {
	$set(this, value, value);
}

Spliterators$AbstractSpliterator$HoldingConsumer::Spliterators$AbstractSpliterator$HoldingConsumer() {
}

$Class* Spliterators$AbstractSpliterator$HoldingConsumer::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractSpliterator$HoldingConsumer, name, initialize, &_Spliterators$AbstractSpliterator$HoldingConsumer_ClassInfo_, allocate$Spliterators$AbstractSpliterator$HoldingConsumer);
	return class$;
}

$Class* Spliterators$AbstractSpliterator$HoldingConsumer::class$ = nullptr;

	} // util
} // java