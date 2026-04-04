#include <sun/nio/fs/UnixFileSystem$1.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileSystem$1::init$($UnixFileSystem* this$0, $List* val$allowedList) {
	$set(this, this$0, this$0);
	$set(this, val$allowedList, val$allowedList);
}

$Iterator* UnixFileSystem$1::iterator() {
	$useLocalObjectStack();
	try {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			sm->checkRead($($nc(this->this$0->rootDirectory$)->toString()));
		}
		return $nc(this->val$allowedList)->iterator();
	} catch ($SecurityException& x) {
		$var($List, disallowed, $Collections::emptyList());
		return $nc(disallowed)->iterator();
	}
	$shouldNotReachHere();
}

UnixFileSystem$1::UnixFileSystem$1() {
}

$Class* UnixFileSystem$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$1, this$0)},
		{"val$allowedList", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$1, val$allowedList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystem;Ljava/util/List;)V", nullptr, 0, $method(UnixFileSystem$1, init$, void, $UnixFileSystem*, $List*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(UnixFileSystem$1, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystem",
		"getRootDirectories",
		"()Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystem$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixFileSystem"
	};
	$loadClass(UnixFileSystem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem$1);
	});
	return class$;
}

$Class* UnixFileSystem$1::class$ = nullptr;

		} // fs
	} // nio
} // sun