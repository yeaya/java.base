#include <sun/nio/ch/FileDispatcher.h>
#include <java/io/FileDescriptor.h>
#include <java/nio/channels/SelectableChannel.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <jcpp.h>

#undef INTERRUPTED
#undef LOCKED
#undef NO_LOCK
#undef RET_EX_LOCK

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;

namespace sun {
	namespace nio {
		namespace ch {

void FileDispatcher::init$() {
	$NativeDispatcher::init$();
}

FileDispatcher::FileDispatcher() {
}

$Class* FileDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, NO_LOCK)},
		{"LOCKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, LOCKED)},
		{"RET_EX_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, RET_EX_LOCK)},
		{"INTERRUPTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, INTERRUPTED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileDispatcher, init$, void)},
		{"canTransferToDirectly", "(Ljava/nio/channels/SelectableChannel;)Z", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, canTransferToDirectly, bool, $SelectableChannel*)},
		{"duplicateForMapping", "(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, duplicateForMapping, $FileDescriptor*, $FileDescriptor*), "java.io.IOException"},
		{"force", "(Ljava/io/FileDescriptor;Z)I", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, force, int32_t, $FileDescriptor*, bool), "java.io.IOException"},
		{"lock", "(Ljava/io/FileDescriptor;ZJJZ)I", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, lock, int32_t, $FileDescriptor*, bool, int64_t, int64_t, bool), "java.io.IOException"},
		{"release", "(Ljava/io/FileDescriptor;JJ)V", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, release, void, $FileDescriptor*, int64_t, int64_t), "java.io.IOException"},
		{"seek", "(Ljava/io/FileDescriptor;J)J", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, seek, int64_t, $FileDescriptor*, int64_t), "java.io.IOException"},
		{"setDirectIO", "(Ljava/io/FileDescriptor;Ljava/lang/String;)I", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, setDirectIO, int32_t, $FileDescriptor*, $String*)},
		{"size", "(Ljava/io/FileDescriptor;)J", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, size, int64_t, $FileDescriptor*), "java.io.IOException"},
		{"transferToDirectlyNeedsPositionLock", "()Z", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, transferToDirectlyNeedsPositionLock, bool)},
		{"truncate", "(Ljava/io/FileDescriptor;J)I", nullptr, $ABSTRACT, $virtualMethod(FileDispatcher, truncate, int32_t, $FileDescriptor*, int64_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.nio.ch.FileDispatcher",
		"sun.nio.ch.NativeDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileDispatcher);
	});
	return class$;
}

$Class* FileDispatcher::class$ = nullptr;

		} // ch
	} // nio
} // sun