#include <sun/nio/ch/IOStatus.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UNAVAILABLE
#undef UNSUPPORTED
#undef THROWN
#undef EOF
#undef UNSUPPORTED_CASE
#undef INTERRUPTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _IOStatus_FieldInfo_[] = {
	{"EOF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, EOF)},
	{"UNAVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, UNAVAILABLE)},
	{"INTERRUPTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, INTERRUPTED)},
	{"UNSUPPORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, UNSUPPORTED)},
	{"THROWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, THROWN)},
	{"UNSUPPORTED_CASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IOStatus, UNSUPPORTED_CASE)},
	{}
};

$MethodInfo _IOStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IOStatus::*)()>(&IOStatus::init$))},
	{"check", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&IOStatus::check))},
	{"check", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&IOStatus::check))},
	{"checkAll", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&IOStatus::checkAll))},
	{"normalize", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&IOStatus::normalize))},
	{"normalize", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&IOStatus::normalize))},
	{"okayToRetry", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&IOStatus::okayToRetry))},
	{}
};

$ClassInfo _IOStatus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.ch.IOStatus",
	"java.lang.Object",
	nullptr,
	_IOStatus_FieldInfo_,
	_IOStatus_MethodInfo_
};

$Object* allocate$IOStatus($Class* clazz) {
	return $of($alloc(IOStatus));
}

void IOStatus::init$() {
}

int32_t IOStatus::normalize(int32_t n) {
	if (n == IOStatus::UNAVAILABLE) {
		return 0;
	}
	return n;
}

bool IOStatus::check(int32_t n) {
	return (n >= IOStatus::UNAVAILABLE);
}

int64_t IOStatus::normalize(int64_t n) {
	if (n == IOStatus::UNAVAILABLE) {
		return 0;
	}
	return n;
}

bool IOStatus::check(int64_t n) {
	return (n >= IOStatus::UNAVAILABLE);
}

bool IOStatus::checkAll(int64_t n) {
	return ((n > IOStatus::EOF) || (n < IOStatus::UNSUPPORTED_CASE));
}

bool IOStatus::okayToRetry(int64_t n) {
	return (n == IOStatus::UNAVAILABLE) || (n == IOStatus::INTERRUPTED);
}

IOStatus::IOStatus() {
}

$Class* IOStatus::load$($String* name, bool initialize) {
	$loadClass(IOStatus, name, initialize, &_IOStatus_ClassInfo_, allocate$IOStatus);
	return class$;
}

$Class* IOStatus::class$ = nullptr;

		} // ch
	} // nio
} // sun