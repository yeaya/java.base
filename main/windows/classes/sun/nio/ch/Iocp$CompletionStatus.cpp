#include <sun/nio/ch/Iocp$CompletionStatus.h>
#include <sun/nio/ch/Iocp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void Iocp$CompletionStatus::init$() {
}

int32_t Iocp$CompletionStatus::error() {
	return this->error$;
}

int32_t Iocp$CompletionStatus::bytesTransferred() {
	return this->bytesTransferred$;
}

int32_t Iocp$CompletionStatus::completionKey() {
	return this->completionKey$;
}

int64_t Iocp$CompletionStatus::overlapped() {
	return this->overlapped$;
}

Iocp$CompletionStatus::Iocp$CompletionStatus() {
}

$Class* Iocp$CompletionStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"error", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, error$)},
		{"bytesTransferred", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, bytesTransferred$)},
		{"completionKey", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, completionKey$)},
		{"overlapped", "J", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, overlapped$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Iocp$CompletionStatus, init$, void)},
		{"bytesTransferred", "()I", nullptr, 0, $virtualMethod(Iocp$CompletionStatus, bytesTransferred, int32_t)},
		{"completionKey", "()I", nullptr, 0, $virtualMethod(Iocp$CompletionStatus, completionKey, int32_t)},
		{"error", "()I", nullptr, 0, $virtualMethod(Iocp$CompletionStatus, error, int32_t)},
		{"overlapped", "()J", nullptr, 0, $virtualMethod(Iocp$CompletionStatus, overlapped, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Iocp$CompletionStatus", "sun.nio.ch.Iocp", "CompletionStatus", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Iocp$CompletionStatus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Iocp"
	};
	$loadClass(Iocp$CompletionStatus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iocp$CompletionStatus);
	});
	return class$;
}

$Class* Iocp$CompletionStatus::class$ = nullptr;

		} // ch
	} // nio
} // sun