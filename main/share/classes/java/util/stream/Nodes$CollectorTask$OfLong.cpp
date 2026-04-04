#include <java/util/stream/Nodes$CollectorTask$OfLong.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/Node$Builder$OfLong.h>
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$CollectorTask.h>
#include <java/util/stream/Nodes$ConcNode$OfLong.h>
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
using $Node$OfLong = ::java::util::stream::Node$OfLong;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$CollectorTask = ::java::util::stream::Nodes$CollectorTask;
using $Nodes$ConcNode$OfLong = ::java::util::stream::Nodes$ConcNode$OfLong;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

class Nodes$CollectorTask$OfLong$$Lambda$longBuilder : public $LongFunction {
	$class(Nodes$CollectorTask$OfLong$$Lambda$longBuilder, $NO_CLASS_INIT, $LongFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int64_t exactSizeIfKnown) override {
		 return $of($Nodes::longBuilder(exactSizeIfKnown));
	}
};
$Class* Nodes$CollectorTask$OfLong$$Lambda$longBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfLong$$Lambda$longBuilder, init$, void)},
		{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfLong$$Lambda$longBuilder, apply, $Object*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$longBuilder",
		"java.lang.Object",
		"java.util.function.LongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfLong$$Lambda$longBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfLong$$Lambda$longBuilder);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfLong$$Lambda$longBuilder::class$ = nullptr;

class Nodes$CollectorTask$OfLong$$Lambda$OfLong$1 : public $BinaryOperator {
	$class(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of($new($Nodes$ConcNode$OfLong, $cast($Node$OfLong, left), $cast($Node$OfLong, right)));
	}
};
$Class* Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$OfLong$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::class$ = nullptr;

void Nodes$CollectorTask$OfLong::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	$var($LongFunction, var$0, $new(Nodes$CollectorTask$OfLong$$Lambda$longBuilder));
	$Nodes$CollectorTask::init$(helper, spliterator, var$0, $$new(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1));
}

$Object* Nodes$CollectorTask$OfLong::doLeaf() {
	return $Nodes$CollectorTask::doLeaf();
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfLong::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

Nodes$CollectorTask$OfLong::Nodes$CollectorTask$OfLong() {
}

$Class* Nodes$CollectorTask$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$longBuilder")) {
			return Nodes$CollectorTask$OfLong$$Lambda$longBuilder::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$OfLong$1")) {
			return Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<Ljava/lang/Long;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(Nodes$CollectorTask$OfLong, init$, void, $PipelineHelper*, $Spliterator*)},
		{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfLong, doLeaf, $Object*)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfLong, makeChild, $Nodes$CollectorTask*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
		{"java.util.stream.Nodes$CollectorTask$OfLong", "java.util.stream.Nodes$CollectorTask", "OfLong", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Node$OfLong", "java.util.stream.Node", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfLong", "java.util.stream.Node$Builder", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$CollectorTask$OfLong",
		"java.util.stream.Nodes$CollectorTask",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;Ljava/lang/Long;Ljava/util/stream/Node$OfLong;Ljava/util/stream/Node$Builder$OfLong;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$CollectorTask$OfLong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$CollectorTask$OfLong));
	});
	return class$;
}

$Class* Nodes$CollectorTask$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java