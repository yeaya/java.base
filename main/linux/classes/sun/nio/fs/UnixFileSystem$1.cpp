#include <sun/nio/fs/UnixFileSystem$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileSystem$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$1, this$0)},
	{"val$allowedList", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$1, val$allowedList)},
	{}
};

$MethodInfo _UnixFileSystem$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Ljava/util/List;)V", nullptr, 0, $method(static_cast<void(UnixFileSystem$1::*)($UnixFileSystem*,$List*)>(&UnixFileSystem$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _UnixFileSystem$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystem",
	"getRootDirectories",
	"()Ljava/lang/Iterable;"
};

$InnerClassInfo _UnixFileSystem$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystem$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystem$1",
	"java.lang.Object",
	"java.lang.Iterable",
	_UnixFileSystem$1_FieldInfo_,
	_UnixFileSystem$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/Path;>;",
	&_UnixFileSystem$1_EnclosingMethodInfo_,
	_UnixFileSystem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystem"
};

$Object* allocate$UnixFileSystem$1($Class* clazz) {
	return $of($alloc(UnixFileSystem$1));
}

void UnixFileSystem$1::init$($UnixFileSystem* this$0, $List* val$allowedList) {
	$set(this, this$0, this$0);
	$set(this, val$allowedList, val$allowedList);
}

$Iterator* UnixFileSystem$1::iterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			sm->checkRead($($nc(this->this$0->rootDirectory$)->toString()));
		}
		return $nc(this->val$allowedList)->iterator();
	} catch ($SecurityException&) {
		$var($SecurityException, x, $catch());
		$var($List, disallowed, $Collections::emptyList());
		return $nc(disallowed)->iterator();
	}
	$shouldNotReachHere();
}

UnixFileSystem$1::UnixFileSystem$1() {
}

$Class* UnixFileSystem$1::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem$1, name, initialize, &_UnixFileSystem$1_ClassInfo_, allocate$UnixFileSystem$1);
	return class$;
}

$Class* UnixFileSystem$1::class$ = nullptr;

		} // fs
	} // nio
} // sun