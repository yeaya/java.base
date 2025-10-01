#include <java/util/stream/Nodes$CollectorTask$OfRef.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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
		 return $of(Nodes$CollectorTask$OfRef::lambda$new$0(generator, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0>());
	}
	$IntFunction* generator = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"generator", "Ljava/util/function/IntFunction;", nullptr, $PUBLIC, $field(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, generator)},
	{}
};
$MethodInfo Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/IntFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::*)($IntFunction*)>(&Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::init$))},
	{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.LongFunction",
	fieldInfos,
	methodInfos
};
$Class* Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::class$ = nullptr;

class Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1 : public $BinaryOperator {
	$class(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of($new($Nodes$ConcNode, $cast($Node, left), $cast($Node, right)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::*)()>(&Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::class$ = nullptr;

$MethodInfo _Nodes$CollectorTask$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/IntFunction;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/function/IntFunction<[TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(Nodes$CollectorTask$OfRef::*)($PipelineHelper*,$IntFunction*,$Spliterator*)>(&Nodes$CollectorTask$OfRef::init$))},
	{"doLeaf", "()Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"lambda$new$0", "(Ljava/util/function/IntFunction;J)Ljava/util/stream/Node$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Node$Builder*(*)($IntFunction*,int64_t)>(&Nodes$CollectorTask$OfRef::lambda$new$0))},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Nodes$CollectorTask$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
	{"java.util.stream.Nodes$CollectorTask$OfRef", "java.util.stream.Nodes$CollectorTask", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$CollectorTask$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$CollectorTask$OfRef",
	"java.util.stream.Nodes$CollectorTask",
	nullptr,
	nullptr,
	_Nodes$CollectorTask$OfRef_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/Nodes$CollectorTask<TP_IN;TP_OUT;Ljava/util/stream/Node<TP_OUT;>;Ljava/util/stream/Node$Builder<TP_OUT;>;>;",
	nullptr,
	_Nodes$CollectorTask$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$CollectorTask$OfRef($Class* clazz) {
	return $of($alloc(Nodes$CollectorTask$OfRef));
}

void Nodes$CollectorTask$OfRef::init$($PipelineHelper* helper, $IntFunction* generator, $Spliterator* spliterator) {
	$var($PipelineHelper, var$0, helper);
	$var($Spliterator, var$1, spliterator);
	$var($LongFunction, var$2, static_cast<$LongFunction*>($new(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0, generator)));
	$Nodes$CollectorTask::init$(var$0, var$1, var$2, static_cast<$BinaryOperator*>($$new(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1)));
}

$Object* Nodes$CollectorTask$OfRef::doLeaf() {
	return $of($Nodes$CollectorTask::doLeaf());
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
		if (name->equals(Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::classInfo$.name)) {
			return Nodes$CollectorTask$OfRef$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::classInfo$.name)) {
			return Nodes$CollectorTask$OfRef$$Lambda$ConcNode$1::load$(name, initialize);
		}
	}
	$loadClass(Nodes$CollectorTask$OfRef, name, initialize, &_Nodes$CollectorTask$OfRef_ClassInfo_, allocate$Nodes$CollectorTask$OfRef);
	return class$;
}

$Class* Nodes$CollectorTask$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java