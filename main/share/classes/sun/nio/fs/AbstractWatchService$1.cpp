#include <sun/nio/fs/AbstractWatchService$1.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/WatchKey.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractWatchService$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/AbstractWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractWatchService$1, this$0)},
	{}
};

$MethodInfo _AbstractWatchService$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/AbstractWatchService;Ljava/nio/file/Path;Lsun/nio/fs/AbstractWatchService;)V", nullptr, 0, $method(static_cast<void(AbstractWatchService$1::*)($AbstractWatchService*,$Path*,$AbstractWatchService*)>(&AbstractWatchService$1::init$))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractWatchService$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.AbstractWatchService",
	nullptr,
	nullptr
};

$InnerClassInfo _AbstractWatchService$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractWatchService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractWatchService$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.AbstractWatchService$1",
	"sun.nio.fs.AbstractWatchKey",
	nullptr,
	_AbstractWatchService$1_FieldInfo_,
	_AbstractWatchService$1_MethodInfo_,
	nullptr,
	&_AbstractWatchService$1_EnclosingMethodInfo_,
	_AbstractWatchService$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractWatchService"
};

$Object* allocate$AbstractWatchService$1($Class* clazz) {
	return $of($alloc(AbstractWatchService$1));
}

void AbstractWatchService$1::init$($AbstractWatchService* this$0, $Path* dir, $AbstractWatchService* watcher) {
	$set(this, this$0, this$0);
	$AbstractWatchKey::init$(dir, watcher);
}

bool AbstractWatchService$1::isValid() {
	return true;
}

void AbstractWatchService$1::cancel() {
}

AbstractWatchService$1::AbstractWatchService$1() {
}

$Class* AbstractWatchService$1::load$($String* name, bool initialize) {
	$loadClass(AbstractWatchService$1, name, initialize, &_AbstractWatchService$1_ClassInfo_, allocate$AbstractWatchService$1);
	return class$;
}

$Class* AbstractWatchService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun