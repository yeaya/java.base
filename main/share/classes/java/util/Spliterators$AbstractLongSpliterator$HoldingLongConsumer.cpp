#include <java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer.h>
#include <java/util/Spliterators$AbstractLongSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Spliterators$AbstractLongSpliterator$HoldingLongConsumer::init$() {
}

void Spliterators$AbstractLongSpliterator$HoldingLongConsumer::accept(int64_t value) {
	this->value = value;
}

Spliterators$AbstractLongSpliterator$HoldingLongConsumer::Spliterators$AbstractLongSpliterator$HoldingLongConsumer() {
}

$Class* Spliterators$AbstractLongSpliterator$HoldingLongConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "J", nullptr, 0, $field(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, init$, void)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, accept, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer", "java.util.Spliterators$AbstractLongSpliterator", "HoldingLongConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer",
		"java.lang.Object",
		"java.util.function.LongConsumer",
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
	$loadClass(Spliterators$AbstractLongSpliterator$HoldingLongConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractLongSpliterator$HoldingLongConsumer);
	});
	return class$;
}

$Class* Spliterators$AbstractLongSpliterator$HoldingLongConsumer::class$ = nullptr;

	} // util
} // java