#include <java/util/stream/Nodes$CollectorTask$OfLong.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator = ::java::util::Spliterator;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $LongFunction = ::java::util::function::LongFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder$OfLong = ::java::util::stream::Node$Builder$OfLong;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfLong$$Lambda$longBuilder>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Nodes$CollectorTask$OfLong$$Lambda$longBuilder::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$CollectorTask$OfLong$$Lambda$longBuilder::*)()>(&Nodes$CollectorTask$OfLong$$Lambda$longBuilder::init$))},
	{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Nodes$CollectorTask$OfLong$$Lambda$longBuilder::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$longBuilder",
	"java.lang.Object",
	"java.util.function.LongFunction",
	nullptr,
	methodInfos
};
$Class* Nodes$CollectorTask$OfLong$$Lambda$longBuilder::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfLong$$Lambda$longBuilder, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfLong$$Lambda$OfLong$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::*)()>(&Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfLong$$Lambda$OfLong$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::class$ = nullptr;

$MethodInfo _Nodes$CollectorTask$OfLong_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<Ljava/lang/Long;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(Nodes$CollectorTask$OfLong::*)($PipelineHelper*,$Spliterator*)>(&Nodes$CollectorTask$OfLong::init$))},
	{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Nodes$CollectorTask$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
	{"java.util.stream.Nodes$CollectorTask$OfLong", "java.util.stream.Nodes$CollectorTask", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Node$OfLong", "java.util.stream.Node", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfLong", "java.util.stream.Node$Builder", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$CollectorTask$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$CollectorTask$OfLong",
	"java.util.stream.Nodes$CollectorTask",
	nullptr,
	nullptr,
	_Nodes$CollectorTask$OfLong_MethodInfo_,
	"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;Ljava/lang/Long;Ljava/util/stream/Node$OfLong;Ljava/util/stream/Node$Builder$OfLong;>;",
	nullptr,
	_Nodes$CollectorTask$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$CollectorTask$OfLong($Class* clazz) {
	return $of($alloc(Nodes$CollectorTask$OfLong));
}

void Nodes$CollectorTask$OfLong::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$var($PipelineHelper, var$0, helper);
	$var($Spliterator, var$1, spliterator);
	$var($LongFunction, var$2, static_cast<$LongFunction*>($new(Nodes$CollectorTask$OfLong$$Lambda$longBuilder)));
	$Nodes$CollectorTask::init$(var$0, var$1, var$2, static_cast<$BinaryOperator*>($$new(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1)));
}

$Object* Nodes$CollectorTask$OfLong::doLeaf() {
	return $of($Nodes$CollectorTask::doLeaf());
}

$Nodes$CollectorTask* Nodes$CollectorTask$OfLong::makeChild($Spliterator* spliterator) {
	return $Nodes$CollectorTask::makeChild(spliterator);
}

Nodes$CollectorTask$OfLong::Nodes$CollectorTask$OfLong() {
}

$Class* Nodes$CollectorTask$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Nodes$CollectorTask$OfLong$$Lambda$longBuilder::classInfo$.name)) {
			return Nodes$CollectorTask$OfLong$$Lambda$longBuilder::load$(name, initialize);
		}
		if (name->equals(Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::classInfo$.name)) {
			return Nodes$CollectorTask$OfLong$$Lambda$OfLong$1::load$(name, initialize);
		}
	}
	$loadClass(Nodes$CollectorTask$OfLong, name, initialize, &_Nodes$CollectorTask$OfLong_ClassInfo_, allocate$Nodes$CollectorTask$OfLong);
	return class$;
}

$Class* Nodes$CollectorTask$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java