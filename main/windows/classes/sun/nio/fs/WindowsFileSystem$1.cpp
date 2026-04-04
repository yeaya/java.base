#include <sun/nio/fs/WindowsFileSystem$1.h>
#include <java/util/Iterator.h>
#include <sun/nio/fs/WindowsFileSystem$FileStoreIterator.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsFileSystem$FileStoreIterator = ::sun::nio::fs::WindowsFileSystem$FileStoreIterator;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsFileSystem$1::init$($WindowsFileSystem* this$0) {
	$set(this, this$0, this$0);
}

$Iterator* WindowsFileSystem$1::iterator() {
	return $new($WindowsFileSystem$FileStoreIterator, this->this$0);
}

WindowsFileSystem$1::WindowsFileSystem$1() {
}

$Class* WindowsFileSystem$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsFileSystem;)V", nullptr, 0, $method(WindowsFileSystem$1, init$, void, $WindowsFileSystem*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/FileStore;>;", $PUBLIC, $virtualMethod(WindowsFileSystem$1, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsFileSystem",
		"getFileStores",
		"()Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileSystem$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileSystem"
	};
	$loadClass(WindowsFileSystem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystem$1);
	});
	return class$;
}

$Class* WindowsFileSystem$1::class$ = nullptr;

		} // fs
	} // nio
} // sun