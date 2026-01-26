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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, init$, void)},
	{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, apply, $Object*, int64_t)},
	{}
};
$ClassInfo Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder",
	"java.lang.Object",
	"java.util.function.LongFunction",
	nullptr,
	methodInfos
};
$Class* Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, init$, void)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::class$ = nullptr;

$MethodInfo _Nodes$CollectorTask$OfDouble_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(Nodes$CollectorTask$OfDouble, init$, void, $PipelineHelper*, $Spliterator*)},
	{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfDouble, doLeaf, $Object*)},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$CollectorTask$OfDouble, makeChild, $Nodes$CollectorTask*, $Spliterator*)},
	{}
};

$InnerClassInfo _Nodes$CollectorTask$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
	{"java.util.stream.Nodes$CollectorTask$OfDouble", "java.util.stream.Nodes$CollectorTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$CollectorTask$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$CollectorTask$OfDouble",
	"java.util.stream.Nodes$CollectorTask",
	nullptr,
	nullptr,
	_Nodes$CollectorTask$OfDouble_MethodInfo_,
	"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;Ljava/lang/Double;Ljava/util/stream/Node$OfDouble;Ljava/util/stream/Node$Builder$OfDouble;>;",
	nullptr,
	_Nodes$CollectorTask$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$CollectorTask$OfDouble($Class* clazz) {
	return $of($alloc(Nodes$CollectorTask$OfDouble));
}

void Nodes$CollectorTask$OfDouble::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalCurrentObjectStackCache();
	$var($PipelineHelper, var$0, helper);
	$var($Spliterator, var$1, spliterator);
	$var($LongFunction, var$2, static_cast<$LongFunction*>($new(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder)));
	$Nodes$CollectorTask::init$(var$0, var$1, var$2, static_cast<$BinaryOperator*>($$new(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1)));
}

$Object* Nodes$CollectorTask$OfDouble::doLeaf() {
	return $of($Nodes$CollectorTask::doLeaf());
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfDouble::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

Nodes$CollectorTask$OfDouble::Nodes$CollectorTask$OfDouble() {
}

$Class* Nodes$CollectorTask$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::classInfo$.name)) {
			return Nodes$CollectorTask$OfDouble$$Lambda$doubleBuilder::load$(name, initialize);
		}
		if (name->equals(Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::classInfo$.name)) {
			return Nodes$CollectorTask$OfDouble$$Lambda$OfDouble$1::load$(name, initialize);
		}
	}
	$loadClass(Nodes$CollectorTask$OfDouble, name, initialize, &_Nodes$CollectorTask$OfDouble_ClassInfo_, allocate$Nodes$CollectorTask$OfDouble);
	return class$;
}

$Class* Nodes$CollectorTask$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java