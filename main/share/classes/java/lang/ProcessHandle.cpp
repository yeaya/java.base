#include <java/lang/ProcessHandle.h>

#include <java/lang/Comparable.h>
#include <java/lang/ProcessHandle$Info.h>
#include <java/lang/ProcessHandleImpl.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandle$Info = ::java::lang::ProcessHandle$Info;
using $ProcessHandleImpl = ::java::lang::ProcessHandleImpl;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {

$CompoundAttribute _ProcessHandle_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$MethodInfo _ProcessHandle_MethodInfo_[] = {
	{"allProcesses", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC | $STATIC, $staticMethod(ProcessHandle, allProcesses, $Stream*)},
	{"children", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, children, $Stream*)},
	{"compareTo", "(Ljava/lang/ProcessHandle;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, compareTo, int32_t, ProcessHandle*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessHandle, compareTo, int32_t, Object$*)},
	{"current", "()Ljava/lang/ProcessHandle;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessHandle, current, ProcessHandle*)},
	{"descendants", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, descendants, $Stream*)},
	{"destroy", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, destroy, bool)},
	{"destroyForcibly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, destroyForcibly, bool)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"info", "()Ljava/lang/ProcessHandle$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, info, $ProcessHandle$Info*)},
	{"isAlive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, isAlive, bool)},
	{"of", "(J)Ljava/util/Optional;", "(J)Ljava/util/Optional<Ljava/lang/ProcessHandle;>;", $PUBLIC | $STATIC, $staticMethod(ProcessHandle, of, $Optional*, int64_t)},
	{"onExit", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/lang/ProcessHandle;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, onExit, $CompletableFuture*)},
	{"parent", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/ProcessHandle;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, parent, $Optional*)},
	{"pid", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, pid, int64_t)},
	{"supportsNormalTermination", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessHandle, supportsNormalTermination, bool)},
	{}
};

$InnerClassInfo _ProcessHandle_InnerClassesInfo_[] = {
	{"java.lang.ProcessHandle$Info", "java.lang.ProcessHandle", "Info", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessHandle_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.ProcessHandle",
	nullptr,
	"java.lang.Comparable",
	nullptr,
	_ProcessHandle_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/lang/ProcessHandle;>;",
	nullptr,
	_ProcessHandle_InnerClassesInfo_,
	_ProcessHandle_Annotations_,
	nullptr,
	"java.lang.ProcessHandle$Info"
};

$Object* allocate$ProcessHandle($Class* clazz) {
	return $of($alloc(ProcessHandle));
}

int32_t ProcessHandle::hashCode() {
	 return this->$Comparable::hashCode();
}

bool ProcessHandle::equals(Object$* other) {
	 return this->$Comparable::equals(other);
}

$Optional* ProcessHandle::of(int64_t pid) {
	$init(ProcessHandle);
	return $ProcessHandleImpl::get(pid);
}

ProcessHandle* ProcessHandle::current() {
	$init(ProcessHandle);
	return $ProcessHandleImpl::current();
}

$Stream* ProcessHandle::allProcesses() {
	$init(ProcessHandle);
	return $ProcessHandleImpl::children(0);
}

int32_t ProcessHandle::compareTo(Object$* other) {
	return this->compareTo($cast(ProcessHandle, other));
}

$Class* ProcessHandle::load$($String* name, bool initialize) {
	$loadClass(ProcessHandle, name, initialize, &_ProcessHandle_ClassInfo_, allocate$ProcessHandle);
	return class$;
}

$Class* ProcessHandle::class$ = nullptr;

	} // lang
} // java