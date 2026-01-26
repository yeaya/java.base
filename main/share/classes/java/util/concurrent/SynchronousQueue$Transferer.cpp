#include <java/util/concurrent/SynchronousQueue$Transferer.h>

#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _SynchronousQueue$Transferer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$Transferer, init$, void)},
	{"transfer", "(Ljava/lang/Object;ZJ)Ljava/lang/Object;", "(TE;ZJ)TE;", $ABSTRACT, $virtualMethod(SynchronousQueue$Transferer, transfer, $Object*, Object$*, bool, int64_t)},
	{}
};

$InnerClassInfo _SynchronousQueue$Transferer_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$Transferer", "java.util.concurrent.SynchronousQueue", "Transferer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SynchronousQueue$Transferer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.SynchronousQueue$Transferer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SynchronousQueue$Transferer_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_SynchronousQueue$Transferer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue"
};

$Object* allocate$SynchronousQueue$Transferer($Class* clazz) {
	return $of($alloc(SynchronousQueue$Transferer));
}

void SynchronousQueue$Transferer::init$() {
}

SynchronousQueue$Transferer::SynchronousQueue$Transferer() {
}

$Class* SynchronousQueue$Transferer::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue$Transferer, name, initialize, &_SynchronousQueue$Transferer_ClassInfo_, allocate$SynchronousQueue$Transferer);
	return class$;
}

$Class* SynchronousQueue$Transferer::class$ = nullptr;

		} // concurrent
	} // util
} // java