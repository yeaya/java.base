#include <sun/nio/fs/PollingWatchService$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/util/Set.h>
#include <sun/nio/fs/PollingWatchService$PollingWatchKey.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Set = ::java::util::Set;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;
using $PollingWatchService$PollingWatchKey = ::sun::nio::fs::PollingWatchService$PollingWatchKey;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _PollingWatchService$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, this$0)},
	{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$value)},
	{"val$eventSet", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$eventSet)},
	{"val$path", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$path)},
	{}
};

$MethodInfo _PollingWatchService$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/PollingWatchService;Ljava/nio/file/Path;Ljava/util/Set;I)V", "()V", 0, $method(static_cast<void(PollingWatchService$2::*)($PollingWatchService*,$Path*,$Set*,int32_t)>(&PollingWatchService$2::init$))},
	{"run", "()Lsun/nio/fs/PollingWatchService$PollingWatchKey;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _PollingWatchService$2_EnclosingMethodInfo_ = {
	"sun.nio.fs.PollingWatchService",
	"register",
	"(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;"
};

$InnerClassInfo _PollingWatchService$2_InnerClassesInfo_[] = {
	{"sun.nio.fs.PollingWatchService$2", nullptr, nullptr, 0},
	{"sun.nio.fs.PollingWatchService$PollingWatchKey", "sun.nio.fs.PollingWatchService", "PollingWatchKey", $PRIVATE},
	{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PollingWatchService$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.PollingWatchService$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_PollingWatchService$2_FieldInfo_,
	_PollingWatchService$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Lsun/nio/fs/PollingWatchService$PollingWatchKey;>;",
	&_PollingWatchService$2_EnclosingMethodInfo_,
	_PollingWatchService$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.PollingWatchService"
};

$Object* allocate$PollingWatchService$2($Class* clazz) {
	return $of($alloc(PollingWatchService$2));
}

void PollingWatchService$2::init$($PollingWatchService* this$0, $Path* val$path, $Set* val$eventSet, int32_t val$value) {
	$set(this, this$0, this$0);
	$set(this, val$path, val$path);
	$set(this, val$eventSet, val$eventSet);
	this->val$value = val$value;
}

$Object* PollingWatchService$2::run() {
	return $of(this->this$0->doPrivilegedRegister(this->val$path, this->val$eventSet, this->val$value));
}

PollingWatchService$2::PollingWatchService$2() {
}

$Class* PollingWatchService$2::load$($String* name, bool initialize) {
	$loadClass(PollingWatchService$2, name, initialize, &_PollingWatchService$2_ClassInfo_, allocate$PollingWatchService$2);
	return class$;
}

$Class* PollingWatchService$2::class$ = nullptr;

		} // fs
	} // nio
} // sun