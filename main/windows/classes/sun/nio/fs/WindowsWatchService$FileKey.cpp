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
	if (this->fileIndexHigh != other->fileIndexHigh) {
		return false;
	}
	return this->fileIndexLow == other->fileIndexLow;
}

WindowsWatchService$FileKey::WindowsWatchService$FileKey() {
}

$Class* WindowsWatchService$FileKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"volSerialNumber", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, volSerialNumber)},
		{"fileIndexHigh", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, fileIndexHigh)},
		{"fileIndexLow", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$FileKey, fileIndexLow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, 0, $method(WindowsWatchService$FileKey, init$, void, int32_t, int32_t, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WindowsWatchService$FileKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsWatchService$FileKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsWatchService$FileKey", "sun.nio.fs.WindowsWatchService", "FileKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsWatchService$FileKey",
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
		"sun.nio.fs.WindowsWatchService"
	};
	$loadClass(WindowsWatchService$FileKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsWatchService$FileKey);
	});
	return class$;
}

$Class* WindowsWatchService$FileKey::class$ = nullptr;

		} // fs
	} // nio
} // sun