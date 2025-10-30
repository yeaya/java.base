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

$FieldInfo _FileDispatcher_FieldInfo_[] = {
	{"NO_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, NO_LOCK)},
	{"LOCKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, LOCKED)},
	{"RET_EX_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, RET_EX_LOCK)},
	{"INTERRUPTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileDispatcher, INTERRUPTED)},
	{}
};

$MethodInfo _FileDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileDispatcher::*)()>(&FileDispatcher::init$))},
	{"canTransferToDirectly", "(Ljava/nio/channels/SelectableChannel;)Z", nullptr, $ABSTRACT},
	{"duplicateForMapping", "(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"force", "(Ljava/io/FileDescriptor;Z)I", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"lock", "(Ljava/io/FileDescriptor;ZJJZ)I", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"release", "(Ljava/io/FileDescriptor;JJ)V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"seek", "(Ljava/io/FileDescriptor;J)J", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"setDirectIO", "(Ljava/io/FileDescriptor;Ljava/lang/String;)I", nullptr, $ABSTRACT},
	{"size", "(Ljava/io/FileDescriptor;)J", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"transferToDirectlyNeedsPositionLock", "()Z", nullptr, $ABSTRACT},
	{"truncate", "(Ljava/io/FileDescriptor;J)I", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileDispatcher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.ch.FileDispatcher",
	"sun.nio.ch.NativeDispatcher",
	nullptr,
	_FileDispatcher_FieldInfo_,
	_FileDispatcher_MethodInfo_
};

$Object* allocate$FileDispatcher($Class* clazz) {
	return $of($alloc(FileDispatcher));
}

void FileDispatcher::init$() {
	$NativeDispatcher::init$();
}

FileDispatcher::FileDispatcher() {
}

$Class* FileDispatcher::load$($String* name, bool initialize) {
	$loadClass(FileDispatcher, name, initialize, &_FileDispatcher_ClassInfo_, allocate$FileDispatcher);
	return class$;
}

$Class* FileDispatcher::class$ = nullptr;

		} // ch
	} // nio
} // sun