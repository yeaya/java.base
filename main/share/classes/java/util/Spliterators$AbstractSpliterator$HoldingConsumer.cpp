#include <java/util/Spliterators$AbstractSpliterator$HoldingConsumer.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Spliterators$AbstractSpliterator$HoldingConsumer::init$() {
}

void Spliterators$AbstractSpliterator$HoldingConsumer::accept(Object$* value) {
	$set(this, value, value);
}

Spliterators$AbstractSpliterator$HoldingConsumer::Spliterators$AbstractSpliterator$HoldingConsumer() {
}

$Class* Spliterators$AbstractSpliterator$HoldingConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", nullptr, 0, $field(Spliterators$AbstractSpliterator$HoldingConsumer, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Spliterators$AbstractSpliterator$HoldingConsumer, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(Spliterators$AbstractSpliterator$HoldingConsumer, accept, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterators$AbstractSpliterator$HoldingConsumer", "java.util.Spliterators$AbstractSpliterator", "HoldingConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Spliterators$AbstractSpliterator$HoldingConsumer",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$AbstractSpliterator$HoldingConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractSpliterator$HoldingConsumer);
	});
	return class$;
}

$Class* Spliterators$AbstractSpliterator$HoldingConsumer::class$ = nullptr;

	} // util
} // java