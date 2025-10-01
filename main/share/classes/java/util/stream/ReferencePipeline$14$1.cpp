#include <java/util/stream/ReferencePipeline$14$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/ReferencePipeline$14.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $ReferencePipeline$14 = ::java::util::stream::ReferencePipeline$14;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$14$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$14;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$14$1, this$1)},
	{}
};

$MethodInfo _ReferencePipeline$14$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$14;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$14$1::*)($ReferencePipeline$14*,$Sink*)>(&ReferencePipeline$14$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$14$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$14",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$14$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$14", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$14$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$14$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$14$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$14$1_FieldInfo_,
	_ReferencePipeline$14$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Double;>;",
	&_ReferencePipeline$14$1_EnclosingMethodInfo_,
	_ReferencePipeline$14$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$14$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$14$1));
}

void ReferencePipeline$14$1::init$($ReferencePipeline$14* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$14$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$14$1::accept(Object$* u) {
	$nc(this->this$1->val$mapper)->accept(u, $cast($DoubleConsumer, this->downstream));
}

ReferencePipeline$14$1::ReferencePipeline$14$1() {
}

$Class* ReferencePipeline$14$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$14$1, name, initialize, &_ReferencePipeline$14$1_ClassInfo_, allocate$ReferencePipeline$14$1);
	return class$;
}

$Class* ReferencePipeline$14$1::class$ = nullptr;

		} // stream
	} // util
} // java