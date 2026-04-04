#include <java/util/stream/Nodes$CollectorTask$OfRef.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$CollectorTask.h>
#include <java/util/stream/Nodes$ConcNode.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Spliterator = ::java::util::Spliterator;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $IntFunction = ::java::util::function::IntFunction;
using $LongFunction = ::java::util::function::LongFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Nodes = ::java::util::stream::Nodes;
using $Nodes$CollectorTask = ::java::util::stream::Nodes$CollectorTask;
using $Nodes$ConcNode = ::java::util::stream::Nodes$ConcNode;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

class Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0 : public $LongFunction {
	$class(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, $NO_CLASS_INIT, $LongFunction)
public:
	void init$($IntFunction* generator) {
		$set(this, generator, generator);
	}
	virtual $Object* apply(int64_t s) override {
		 return Nodes$CollectorTask$OfRef::lambda$new$0(generator, s);
	}
	$IntFunction* generator = nullptr;
};
$Class* Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"generator", "Ljava/util/function/IntFunction;", nullptr, $PUBLIC, $field(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, generator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntFunction;)V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, init$, void, $IntFunction*)},
		{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, apply, $Object*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.LongFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::class$ = nullptr;

class Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1 : public $BinaryOperator {
	$class(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $new($Nodes$ConcNode, $cast($Node, left), $cast($Node, right));
	}
};
$Class* Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1);
	});
	return class$;
}
$Class* Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::class$ = nullptr;

void Nodes$CollectorTask$OfRef::init$($PipelineHelper* helper, $IntFunction* generator, $Spliterator* spliterator) {
	$useLocalObjectStack();
	$var($LongFunction, var$0, $new(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, generator));
	$Nodes$CollectorTask::init$(helper, spliterator, var$0, $$new(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1));
}

$Object* Nodes$CollectorTask$OfRef::doLeaf() {
	return $Nodes$CollectorTask::doLeaf();
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfRef::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

$Node$Builder* Nodes$CollectorTask$OfRef::lambda$new$0($IntFunction* generator, int64_t s) {
	$init(Nodes$CollectorTask$OfRef);
	return $Nodes::builder(s, generator);
}

Nodes$CollectorTask$OfRef::Nodes$CollectorTask$OfRef() {
}

$Class* Nodes$CollectorTask$OfRef::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0")) {
			return Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1")) {
			return Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/IntFunction;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/function/IntFunction<[TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(Nodes$CollectorTask$OfRef, init$, void, $PipelineHelper*, $IntFunction*, $Spliterator*)},
		{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfRef, doLeaf, $Object*)},
		{"lambda$new$0", "(Ljava/util/function/IntFunction;J)Ljava/util/stream/Node$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Nodes$CollectorTask$OfRef, lambda$new$0, $Node$Builder*, $IntFunction*, int64_t)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfRef, makeChild, $Nodes$CollectorTask*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
		{"java.util.stream.Nodes$CollectorTask$OfRef", "java.util.stream.Nodes$CollectorTask", "OfRef", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$CollectorTask$OfRef",
		"java.util.stream.Nodes$CollectorTask",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;TP_OUT;Ljava/util/stream/Node<TP_OUT;>;Ljava/util/stream/Node$Builder<TP_OUT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$CollectorTask$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$CollectorTask$OfRef));
	});
	return class$;
}

$Class* Nodes$CollectorTask$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java