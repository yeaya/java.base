#include <java/lang/StackStreamFactory$LiveStackInfoTraverser.h>

#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer.h>
#include <java/lang/StackStreamFactory$StackFrameTraverser.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer = ::java::lang::StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer;
using $StackStreamFactory$StackFrameTraverser = ::java::lang::StackStreamFactory$StackFrameTraverser;
using $StackWalker = ::java::lang::StackWalker;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {

$MethodInfo _StackStreamFactory$LiveStackInfoTraverser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackWalker;Ljava/util/function/Function;)V", "(Ljava/lang/StackWalker;Ljava/util/function/Function<-Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;+TT;>;)V", 0, $method(StackStreamFactory$LiveStackInfoTraverser, init$, void, $StackWalker*, $Function*)},
	{"initFrameBuffer", "()V", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$LiveStackInfoTraverser, initFrameBuffer, void)},
	{}
};

$InnerClassInfo _StackStreamFactory$LiveStackInfoTraverser_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$LiveStackInfoTraverser", "java.lang.StackStreamFactory", "LiveStackInfoTraverser", $STATIC | $FINAL},
	{"java.lang.StackStreamFactory$StackFrameTraverser", "java.lang.StackStreamFactory", "StackFrameTraverser", $STATIC},
	{"java.lang.StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer", "java.lang.StackStreamFactory$LiveStackInfoTraverser", "LiveStackFrameBuffer", $FINAL},
	{}
};

$ClassInfo _StackStreamFactory$LiveStackInfoTraverser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StackStreamFactory$LiveStackInfoTraverser",
	"java.lang.StackStreamFactory$StackFrameTraverser",
	nullptr,
	nullptr,
	_StackStreamFactory$LiveStackInfoTraverser_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/StackStreamFactory$StackFrameTraverser<TT;>;",
	nullptr,
	_StackStreamFactory$LiveStackInfoTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$LiveStackInfoTraverser($Class* clazz) {
	return $of($alloc(StackStreamFactory$LiveStackInfoTraverser));
}

void StackStreamFactory$LiveStackInfoTraverser::init$($StackWalker* walker, $Function* function) {
	$StackStreamFactory$StackFrameTraverser::init$(walker, function, 0);
}

void StackStreamFactory$LiveStackInfoTraverser::initFrameBuffer() {
	$set(this, frameBuffer, $new($StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, this, getNextBatchSize()));
}

void clinit$StackStreamFactory$LiveStackInfoTraverser($Class* class$) {
	{
		$init($StackStreamFactory);
		$nc($StackStreamFactory::stackWalkImplClasses)->add(StackStreamFactory$LiveStackInfoTraverser::class$);
	}
}

StackStreamFactory$LiveStackInfoTraverser::StackStreamFactory$LiveStackInfoTraverser() {
}

$Class* StackStreamFactory$LiveStackInfoTraverser::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$LiveStackInfoTraverser, name, initialize, &_StackStreamFactory$LiveStackInfoTraverser_ClassInfo_, clinit$StackStreamFactory$LiveStackInfoTraverser, allocate$StackStreamFactory$LiveStackInfoTraverser);
	return class$;
}

$Class* StackStreamFactory$LiveStackInfoTraverser::class$ = nullptr;

	} // lang
} // java