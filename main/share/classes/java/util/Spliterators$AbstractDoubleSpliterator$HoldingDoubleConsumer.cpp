#include <java/util/Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer.h>
#include <java/util/Spliterators$AbstractDoubleSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::init$() {
}

void Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::accept(double value) {
	this->value = value;
}

Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer() {
}

$Class* Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "D", nullptr, 0, $field(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, init$, void)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, accept, void, double)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer", "java.util.Spliterators$AbstractDoubleSpliterator", "HoldingDoubleConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer",
		"java.lang.Object",
		"java.util.function.DoubleConsumer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer);
	});
	return class$;
}

$Class* Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer::class$ = nullptr;

	} // util
} // java