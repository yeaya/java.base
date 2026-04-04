#include <java/util/stream/Nodes$CollectorTask$OfDouble.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/Node$Builder$OfDouble.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$CollectorTask.h>
#include <java/util/stream/Nodes$ConcNode$OfDouble.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Spliterator = ::java::util::Spliterator;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $LongFunction = ::java::util::function::LongFunction;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$CollectorTask = ::java::util::stream::Nodes$CollectorTask;
using $Nodes$ConcNode$OfDouble = ::java::util::stream::Nodes$ConcNode$OfDouble;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

class Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder : public $LongFunction {
	$class(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, $NO_CLASS_INIT, $LongFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int64_t exactSizeIfKnown) override {
		 return $of($Nodes::doubleBuilder(exactSizeIfKnown));
	}
};
$Class* Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, init$, void)},
		{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, apply, $Object*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder",
		"java.lang.Object",
		"java.util.function.LongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::class$ = nullptr;

class Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1 : public $BinaryOperator {
	$class(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of($new($Nodes$ConcNode$OfDouble, $cast($Node$OfDouble, left), $cast($Node$OfDouble, right)));
	}
};
$Class* Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::class$ = nullptr;

void Nodes$CollectorTask$OfDouble::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	$var($LongFunction, var$0, $new(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder));
	$Nodes$CollectorTask::init$(helper, spliterator, var$0, $$new(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1));
}

$Object* Nodes$CollectorTask$OfDouble::doLeaf() {
	return $Nodes$CollectorTask::doLeaf();
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfDouble::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

Nodes$CollectorTask$OfDouble::Nodes$CollectorTask$OfDouble() {
}

$Class* Nodes$CollectorTask$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder")) {
			return Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1")) {
			return Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(Nodes$CollectorTask$OfDouble, init$, void, $PipelineHelper*, $Spliterator*)},
		{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfDouble, doLeaf, $Object*)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfDouble, makeChild, $Nodes$CollectorTask*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
		{"java.util.stream.Nodes$CollectorTask$OfDouble", "java.util.stream.Nodes$CollectorTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$CollectorTask$OfDouble",
		"java.util.stream.Nodes$CollectorTask",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;Ljava/lang/Double;Ljava/util/stream/Node$OfDouble;Ljava/util/stream/Node$Builder$OfDouble;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$CollectorTask$OfDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$CollectorTask$OfDouble));
	});
	return class$;
}

$Class* Nodes$CollectorTask$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java