#include <java/lang/ProcessHandle$Info.h>

#include <java/lang/ProcessHandle.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _ProcessHandle$Info_MethodInfo_[] = {
	{"arguments", "()Ljava/util/Optional;", "()Ljava/util/Optional<[Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"command", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"commandLine", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"startInstant", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Instant;>;", $PUBLIC | $ABSTRACT},
	{"totalCpuDuration", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC | $ABSTRACT},
	{"user", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ProcessHandle$Info_InnerClassesInfo_[] = {
	{"java.lang.ProcessHandle$Info", "java.lang.ProcessHandle", "Info", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessHandle$Info_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.ProcessHandle$Info",
	nullptr,
	nullptr,
	nullptr,
	_ProcessHandle$Info_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessHandle$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessHandle"
};

$Object* allocate$ProcessHandle$Info($Class* clazz) {
	return $of($alloc(ProcessHandle$Info));
}

$Class* ProcessHandle$Info::load$($String* name, bool initialize) {
	$loadClass(ProcessHandle$Info, name, initialize, &_ProcessHandle$Info_ClassInfo_, allocate$ProcessHandle$Info);
	return class$;
}

$Class* ProcessHandle$Info::class$ = nullptr;

	} // lang
} // java