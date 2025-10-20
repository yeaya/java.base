#include <java/lang/ProcessHandleImpl$Info.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessHandle$Info.h>
#include <java/lang/ProcessHandleImpl.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/util/Arrays.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandle$Info = ::java::lang::ProcessHandle$Info;
using $ProcessHandleImpl = ::java::lang::ProcessHandleImpl;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $Arrays = ::java::util::Arrays;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$FieldInfo _ProcessHandleImpl$Info_FieldInfo_[] = {
	{"command", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, command$)},
	{"commandLine", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, commandLine$)},
	{"arguments", "[Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, arguments$)},
	{"startTime", "J", nullptr, 0, $field(ProcessHandleImpl$Info, startTime)},
	{"totalTime", "J", nullptr, 0, $field(ProcessHandleImpl$Info, totalTime)},
	{"user", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, user$)},
	{}
};

$MethodInfo _ProcessHandleImpl$Info_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProcessHandleImpl$Info::*)()>(&ProcessHandleImpl$Info::init$))},
	{"arguments", "()Ljava/util/Optional;", "()Ljava/util/Optional<[Ljava/lang/String;>;", $PUBLIC},
	{"command", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC},
	{"commandLine", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC},
	{"info", "(JJ)Ljava/lang/ProcessHandle$Info;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProcessHandle$Info*(*)(int64_t,int64_t)>(&ProcessHandleImpl$Info::info))},
	{"info0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(ProcessHandleImpl$Info::*)(int64_t)>(&ProcessHandleImpl$Info::info0))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ProcessHandleImpl$Info::initIDs))},
	{"startInstant", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Instant;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"totalCpuDuration", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"user", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC},
	{}
};

#define _METHOD_INDEX_info0 5
#define _METHOD_INDEX_initIDs 6

$InnerClassInfo _ProcessHandleImpl$Info_InnerClassesInfo_[] = {
	{"java.lang.ProcessHandleImpl$Info", "java.lang.ProcessHandleImpl", "Info", $STATIC},
	{"java.lang.ProcessHandle$Info", "java.lang.ProcessHandle", "Info", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessHandleImpl$Info_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessHandleImpl$Info",
	"java.lang.Object",
	"java.lang.ProcessHandle$Info",
	_ProcessHandleImpl$Info_FieldInfo_,
	_ProcessHandleImpl$Info_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessHandleImpl$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessHandleImpl"
};

$Object* allocate$ProcessHandleImpl$Info($Class* clazz) {
	return $of($alloc(ProcessHandleImpl$Info));
}

void ProcessHandleImpl$Info::initIDs() {
	$init(ProcessHandleImpl$Info);
	$prepareNativeStatic(ProcessHandleImpl$Info, initIDs, void);
	$invokeNativeStatic(ProcessHandleImpl$Info, initIDs);
	$finishNativeStatic();
}

void ProcessHandleImpl$Info::info0(int64_t pid) {
	$prepareNative(ProcessHandleImpl$Info, info0, void, int64_t pid);
	$invokeNative(ProcessHandleImpl$Info, info0, pid);
	$finishNative();
}

void ProcessHandleImpl$Info::init$() {
	$set(this, command$, nullptr);
	$set(this, commandLine$, nullptr);
	$set(this, arguments$, nullptr);
	this->startTime = -1;
	this->totalTime = -1;
	$set(this, user$, nullptr);
}

$ProcessHandle$Info* ProcessHandleImpl$Info::info(int64_t pid, int64_t startTime) {
	$init(ProcessHandleImpl$Info);
	$var(ProcessHandleImpl$Info, info, $new(ProcessHandleImpl$Info));
	info->info0(pid);
	if (startTime != info->startTime) {
		$set(info, command$, nullptr);
		$set(info, arguments$, nullptr);
		info->startTime = -1;
		info->totalTime = -1;
		$set(info, user$, nullptr);
	}
	return info;
}

$Optional* ProcessHandleImpl$Info::command() {
	return $Optional::ofNullable(this->command$);
}

$Optional* ProcessHandleImpl$Info::commandLine() {
	$useLocalCurrentObjectStackCache();
	if (this->command$ != nullptr && this->arguments$ != nullptr) {
		return $Optional::of($$str({this->command$, " "_s, $($String::join(static_cast<$CharSequence*>(" "_s), $fcast($CharSequenceArray, this->arguments$)))}));
	} else {
		return $Optional::ofNullable(this->commandLine$);
	}
}

$Optional* ProcessHandleImpl$Info::arguments() {
	return $Optional::ofNullable(this->arguments$);
}

$Optional* ProcessHandleImpl$Info::startInstant() {
	return (this->startTime > 0) ? $Optional::of($($Instant::ofEpochMilli(this->startTime))) : $Optional::empty();
}

$Optional* ProcessHandleImpl$Info::totalCpuDuration() {
	return (this->totalTime != -1) ? $Optional::of($($Duration::ofNanos(this->totalTime))) : $Optional::empty();
}

$Optional* ProcessHandleImpl$Info::user() {
	return $Optional::ofNullable(this->user$);
}

$String* ProcessHandleImpl$Info::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 60));
	sb->append(u'[');
	if (this->user$ != nullptr) {
		sb->append("user: "_s);
		sb->append($($of(user())));
	}
	if (this->command$ != nullptr) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("cmd: "_s);
		sb->append(this->command$);
	}
	if (this->arguments$ != nullptr && $nc(this->arguments$)->length > 0) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("args: "_s);
		sb->append($($Arrays::toString(this->arguments$)));
	}
	if (this->commandLine$ != nullptr) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("cmdLine: "_s);
		sb->append(this->commandLine$);
	}
	if (this->startTime > 0) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("startTime: "_s);
		sb->append($($of(startInstant())));
	}
	if (this->totalTime != -1) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("totalTime: "_s);
		sb->append($($nc($(totalCpuDuration()))->toString()));
	}
	sb->append(u']');
	return sb->toString();
}

void clinit$ProcessHandleImpl$Info($Class* class$) {
	{
		ProcessHandleImpl$Info::initIDs();
	}
}

ProcessHandleImpl$Info::ProcessHandleImpl$Info() {
}

$Class* ProcessHandleImpl$Info::load$($String* name, bool initialize) {
	$loadClass(ProcessHandleImpl$Info, name, initialize, &_ProcessHandleImpl$Info_ClassInfo_, clinit$ProcessHandleImpl$Info, allocate$ProcessHandleImpl$Info);
	return class$;
}

$Class* ProcessHandleImpl$Info::class$ = nullptr;

	} // lang
} // java