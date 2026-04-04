#include <java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer.h>
#include <java/util/Spliterators$AbstractIntSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Spliterators$AbstractIntSpliterator$HoldingIntConsumer::init$() {
}

void Spliterators$AbstractIntSpliterator$HoldingIntConsumer::accept(int32_t value) {
	this->value = value;
}

Spliterators$AbstractIntSpliterator$HoldingIntConsumer::Spliterators$AbstractIntSpliterator$HoldingIntConsumer() {
}

$Class* Spliterators$AbstractIntSpliterator$HoldingIntConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, 0, $field(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, init$, void)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, accept, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer", "java.util.Spliterators$AbstractIntSpliterator", "HoldingIntConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer",
		"java.lang.Object",
		"java.util.function.IntConsumer",
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
	$loadClass(Spliterators$AbstractIntSpliterator$HoldingIntConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractIntSpliterator$HoldingIntConsumer);
	});
	return class$;
}

$Class* Spliterators$AbstractIntSpliterator$HoldingIntConsumer::class$ = nullptr;

	} // util
} // java