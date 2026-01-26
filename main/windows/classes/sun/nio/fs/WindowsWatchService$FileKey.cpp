#include <sun/nio/fs/WindowsWatchService$FileKey.h>

#include <sun/nio/fs/WindowsWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsWatchService$FileKey_FieldInfo_[] = {
	{"volSerialNumber", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, volSerialNumber)},
	{"fileIndexHigh", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, fileIndexHigh)},
	{"fileIndexLow", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, fileIndexLow)},
	{}
};

$MethodInfo _WindowsWatchService$FileKey_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(WindowsWatchService$FileKey, init$, void, int32_t, int32_t, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WindowsWatchService$FileKey, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsWatchService$FileKey, hashCode, int32_t)},
	{}
};

$InnerClassInfo _WindowsWatchService$FileKey_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsWatchService$FileKey", "sun.nio.fs.WindowsWatchService", "FileKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsWatchService$FileKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsWatchService$FileKey",
	"java.lang.Object",
	nullptr,
	_WindowsWatchService$FileKey_FieldInfo_,
	_WindowsWatchService$FileKey_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsWatchService$FileKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsWatchService"
};

$Object* allocate$WindowsWatchService$FileKey($Class* clazz) {
	return $of($alloc(WindowsWatchService$FileKey));
}

void WindowsWatchService$FileKey::init$(int32_t volSerialNumber, int32_t fileIndexHigh, int32_t fileIndexLow) {
	this->volSerialNumber = volSerialNumber;
	this->fileIndexHigh = fileIndexHigh;
	this->fileIndexLow = fileIndexLow;
}

int32_t WindowsWatchService$FileKey::hashCode() {
	return (this->volSerialNumber ^ this->fileIndexHigh) ^ this->fileIndexLow;
}

bool WindowsWatchService$FileKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(WindowsWatchService$FileKey, obj))) {
		return false;
	}
	$var(WindowsWatchService$FileKey, other, $cast(WindowsWatchService$FileKey, obj));
	if (this->volSerialNumber != $nc(other)->volSerialNumber) {
		return false;
	}
	if (this->fileIndexHigh != $nc(other)->fileIndexHigh) {
		return false;
	}
	return this->fileIndexLow == $nc(other)->fileIndexLow;
}

WindowsWatchService$FileKey::WindowsWatchService$FileKey() {
}

$Class* WindowsWatchService$FileKey::load$($String* name, bool initialize) {
	$loadClass(WindowsWatchService$FileKey, name, initialize, &_WindowsWatchService$FileKey_ClassInfo_, allocate$WindowsWatchService$FileKey);
	return class$;
}

$Class* WindowsWatchService$FileKey::class$ = nullptr;

		} // fs
	} // nio
} // sun