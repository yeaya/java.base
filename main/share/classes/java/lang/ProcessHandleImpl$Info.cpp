#include <java/lang/ProcessHandleImpl$Info.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ProcessHandle$Info.h>
#include <java/lang/ProcessHandleImpl.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/util/Arrays.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandle$Info = ::java::lang::ProcessHandle$Info;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $Arrays = ::java::util::Arrays;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

void ProcessHandleImpl$Info::initIDs() {
	$init(ProcessHandleImpl$Info);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void ProcessHandleImpl$Info::info0(int64_t pid) {
	$prepareNative(info0, void, int64_t pid);
	$invokeNative(pid);
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
	$useLocalObjectStack();
	if (this->command$ != nullptr && this->arguments$ != nullptr) {
		return $Optional::of($$str({this->command$, " "_s, $($String::join(" "_s, $cast($CharSequenceArray, this->arguments$)))}));
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
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, 60));
	sb->append(u'[');
	if (this->user$ != nullptr) {
		sb->append("user: "_s);
		sb->append($(user()));
	}
	if (this->command$ != nullptr) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("cmd: "_s);
		sb->append(this->command$);
	}
	if (this->arguments$ != nullptr && this->arguments$->length > 0) {
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
		sb->append($(startInstant()));
	}
	if (this->totalTime != -1) {
		if (sb->length() != 0) {
			sb->append(", "_s);
		}
		sb->append("totalTime: "_s);
		sb->append($($$nc(totalCpuDuration())->toString()));
	}
	sb->append(u']');
	return sb->toString();
}

void ProcessHandleImpl$Info::clinit$($Class* clazz) {
	{
		ProcessHandleImpl$Info::initIDs();
	}
}

ProcessHandleImpl$Info::ProcessHandleImpl$Info() {
}

$Class* ProcessHandleImpl$Info::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"command", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, command$)},
		{"commandLine", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, commandLine$)},
		{"arguments", "[Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, arguments$)},
		{"startTime", "J", nullptr, 0, $field(ProcessHandleImpl$Info, startTime)},
		{"totalTime", "J", nullptr, 0, $field(ProcessHandleImpl$Info, totalTime)},
		{"user", "Ljava/lang/String;", nullptr, 0, $field(ProcessHandleImpl$Info, user$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessHandleImpl$Info, init$, void)},
		{"arguments", "()Ljava/util/Optional;", "()Ljava/util/Optional<[Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, arguments, $Optional*)},
		{"command", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, command, $Optional*)},
		{"commandLine", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, commandLine, $Optional*)},
		{"info", "(JJ)Ljava/lang/ProcessHandle$Info;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessHandleImpl$Info, info, $ProcessHandle$Info*, int64_t, int64_t)},
		{"info0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(ProcessHandleImpl$Info, info0, void, int64_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl$Info, initIDs, void)},
		{"startInstant", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Instant;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, startInstant, $Optional*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, toString, $String*)},
		{"totalCpuDuration", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, totalCpuDuration, $Optional*)},
		{"user", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl$Info, user, $Optional*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessHandleImpl$Info", "java.lang.ProcessHandleImpl", "Info", $STATIC},
		{"java.lang.ProcessHandle$Info", "java.lang.ProcessHandle", "Info", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessHandleImpl$Info",
		"java.lang.Object",
		"java.lang.ProcessHandle$Info",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessHandleImpl"
	};
	$loadClass(ProcessHandleImpl$Info, name, initialize, &classInfo$$, ProcessHandleImpl$Info::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$Info);
	});
	return class$;
}

$Class* ProcessHandleImpl$Info::class$ = nullptr;

	} // lang
} // java