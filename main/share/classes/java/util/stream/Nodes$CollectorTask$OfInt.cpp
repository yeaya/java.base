#include <java/util/stream/Nodes$CollectorTask$OfInt.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/Node$Builder$OfInt.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$CollectorTask.h>
#include <java/util/stream/Nodes$ConcNode$OfInt.h>
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
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$CollectorTask = ::java::util::stream::Nodes$CollectorTask;
using $Nodes$ConcNode$OfInt = ::java::util::stream::Nodes$ConcNode$OfInt;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

class Nodes$CollectorTask$OfInt$$Lambda$intBuilder : public $LongFunction {
	$class(Nodes$CollectorTask$OfInt$$Lambda$intBuilder, $NO_CLASS_INIT, $LongFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int64_t exactSizeIfKnown) override {
		 return $of($Nodes::intBuilder(exactSizeIfKnown));
	}
};
$Class* Nodes$CollectorTask$OfInt$$Lambda$intBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfInt$$Lambda$intBuilder, init$, void)},
		{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfInt$$Lambda$intBuilder, apply, $Object*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfInt$$Lambda$intBuilder",
		"java.lang.Object",
		"java.util.function.LongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfInt$$Lambda$intBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfInt$$Lambda$intBuilder);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfInt$$Lambda$intBuilder::class$ = nullptr;

class Nodes$CollectorTask$OfInt$$Lambda$OfInt$1 : public $BinaryOperator {
	$class(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of($new($Nodes$ConcNode$OfInt, $cast($Node$OfInt, left), $cast($Node$OfInt, right)));
	}
};
$Class* Nodes$CollectorTask$OfInt$$Lambda$OfInt$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfInt$$Lambda$OfInt$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfInt$$Lambda$OfInt$1::class$ = nullptr;

void Nodes$CollectorTask$OfInt::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	$var($LongFunction, var$0, $new(Nodes$CollectorTask$OfInt$$Lambda$intBuilder));
	$Nodes$CollectorTask::init$(helper, spliterator, var$0, $$new(Nodes$CollectorTask$OfInt$$Lambda$OfInt$1));
}

$Object* Nodes$CollectorTask$OfInt::doLeaf() {
	return $Nodes$CollectorTask::doLeaf();
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfInt::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

Nodes$CollectorTask$OfInt::Nodes$CollectorTask$OfInt() {
}

$Class* Nodes$CollectorTask$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfInt$$Lambda$intBuilder")) {
			return Nodes$CollectorTask$OfInt$$Lambda$intBuilder::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfInt$$Lambda$OfInt$1")) {
			return Nodes$CollectorTask$OfInt$$Lambda$OfInt$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<Ljava/lang/Integer;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(Nodes$CollectorTask$OfInt, init$, void, $PipelineHelper*, $Spliterator*)},
		{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfInt, doLeaf, $Object*)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfInt, makeChild, $Nodes$CollectorTask*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
		{"java.util.stream.Nodes$CollectorTask$OfInt", "java.util.stream.Nodes$CollectorTask", "OfInt", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$CollectorTask$OfInt",
		"java.util.stream.Nodes$CollectorTask",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;Ljava/lang/Integer;Ljava/util/stream/Node$OfInt;Ljava/util/stream/Node$Builder$OfInt;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$CollectorTask$OfInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$CollectorTask$OfInt));
	});
	return class$;
}

$Class* Nodes$CollectorTask$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java