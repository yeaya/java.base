#include <java/util/stream/ForEachOps$ForEachOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/stream/ForEachOps$ForEachOrderedTask.h>
#include <java/util/stream/ForEachOps$ForEachTask.h>
#include <java/util/stream/ForEachOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef NOT_ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Spliterator = ::java::util::Spliterator;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $ForEachOps = ::java::util::stream::ForEachOps;
using $ForEachOps$ForEachOrderedTask = ::java::util::stream::ForEachOps$ForEachOrderedTask;
using $ForEachOps$ForEachTask = ::java::util::stream::ForEachOps$ForEachTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $TerminalOp = ::java::util::stream::TerminalOp;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachOp_FieldInfo_[] = {
	{"ordered", "Z", nullptr, $PRIVATE | $FINAL, $field(ForEachOps$ForEachOp, ordered)},
	{}
};

$MethodInfo _ForEachOps$ForEachOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(ForEachOps$ForEachOp::*)(bool)>(&ForEachOps$ForEachOp::init$))},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Void;", "<S:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;)Ljava/lang/Void;", $PUBLIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Void;", "<S:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;)Ljava/lang/Void;", $PUBLIC},
	{"get", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{"getOpFlags", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOp_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ForEachOps$ForEachOp$OfDouble", "java.util.stream.ForEachOps$ForEachOp", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.ForEachOps$ForEachOp$OfLong", "java.util.stream.ForEachOps$ForEachOp", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.ForEachOps$ForEachOp$OfInt", "java.util.stream.ForEachOps$ForEachOp", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.ForEachOps$ForEachOp$OfRef", "java.util.stream.ForEachOps$ForEachOp", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForEachOps$ForEachOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.ForEachOps$ForEachOp",
	"java.lang.Object",
	"java.util.stream.TerminalOp,java.util.stream.TerminalSink",
	_ForEachOps$ForEachOp_FieldInfo_,
	_ForEachOps$ForEachOp_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/TerminalOp<TT;Ljava/lang/Void;>;Ljava/util/stream/TerminalSink<TT;Ljava/lang/Void;>;",
	nullptr,
	_ForEachOps$ForEachOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOp($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOp));
}

int32_t ForEachOps$ForEachOp::hashCode() {
	 return this->$TerminalOp::hashCode();
}

bool ForEachOps$ForEachOp::equals(Object$* obj) {
	 return this->$TerminalOp::equals(obj);
}

$Object* ForEachOps$ForEachOp::clone() {
	 return this->$TerminalOp::clone();
}

$String* ForEachOps$ForEachOp::toString() {
	 return this->$TerminalOp::toString();
}

void ForEachOps$ForEachOp::finalize() {
	this->$TerminalOp::finalize();
}

void ForEachOps$ForEachOp::init$(bool ordered) {
	this->ordered = ordered;
}

int32_t ForEachOps$ForEachOp::getOpFlags() {
	$init($StreamOpFlag);
	return this->ordered ? 0 : $StreamOpFlag::NOT_ORDERED;
}

$Object* ForEachOps$ForEachOp::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($nc(($cast(ForEachOps$ForEachOp, $($nc(helper)->wrapAndCopyInto(this, spliterator)))))->get());
}

$Object* ForEachOps$ForEachOp::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalCurrentObjectStackCache();
	if (this->ordered) {
		$$new($ForEachOps$ForEachOrderedTask, helper, spliterator, static_cast<$Sink*>(this))->invoke();
	} else {
		$$new($ForEachOps$ForEachTask, helper, spliterator, $($nc(helper)->wrapSink(this)))->invoke();
	}
	return $of(nullptr);
}

$Object* ForEachOps$ForEachOp::get() {
	return $of(nullptr);
}

ForEachOps$ForEachOp::ForEachOps$ForEachOp() {
}

$Class* ForEachOps$ForEachOp::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOp, name, initialize, &_ForEachOps$ForEachOp_ClassInfo_, allocate$ForEachOps$ForEachOp);
	return class$;
}

$Class* ForEachOps$ForEachOp::class$ = nullptr;

		} // stream
	} // util
} // java