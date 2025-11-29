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

$FieldInfo _Iocp$CompletionStatus_FieldInfo_[] = {
	{"error", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, error$)},
	{"bytesTransferred", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, bytesTransferred$)},
	{"completionKey", "I", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, completionKey$)},
	{"overlapped", "J", nullptr, $PRIVATE, $field(Iocp$CompletionStatus, overlapped$)},
	{}
};

$MethodInfo _Iocp$CompletionStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Iocp$CompletionStatus::*)()>(&Iocp$CompletionStatus::init$))},
	{"bytesTransferred", "()I", nullptr, 0},
	{"completionKey", "()I", nullptr, 0},
	{"error", "()I", nullptr, 0},
	{"overlapped", "()J", nullptr, 0},
	{}
};

$InnerClassInfo _Iocp$CompletionStatus_InnerClassesInfo_[] = {
	{"sun.nio.ch.Iocp$CompletionStatus", "sun.nio.ch.Iocp", "CompletionStatus", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Iocp$CompletionStatus_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Iocp$CompletionStatus",
	"java.lang.Object",
	nullptr,
	_Iocp$CompletionStatus_FieldInfo_,
	_Iocp$CompletionStatus_MethodInfo_,
	nullptr,
	nullptr,
	_Iocp$CompletionStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Iocp"
};

$Object* allocate$Iocp$CompletionStatus($Class* clazz) {
	return $of($alloc(Iocp$CompletionStatus));
}

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
	$loadClass(Iocp$CompletionStatus, name, initialize, &_Iocp$CompletionStatus_ClassInfo_, allocate$Iocp$CompletionStatus);
	return class$;
}

$Class* Iocp$CompletionStatus::class$ = nullptr;

		} // ch
	} // nio
} // sun