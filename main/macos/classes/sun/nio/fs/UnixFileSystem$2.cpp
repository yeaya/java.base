#include <sun/nio/fs/UnixFileSystem$2.h>
#include <java/util/Iterator.h>
#include <sun/nio/fs/UnixFileSystem$FileStoreIterator.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixFileSystem$FileStoreIterator = ::sun::nio::fs::UnixFileSystem$FileStoreIterator;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileSystem$2::init$($UnixFileSystem* this$0) {
	$set(this, this$0, this$0);
}

$Iterator* UnixFileSystem$2::iterator() {
	return $new($UnixFileSystem$FileStoreIterator, this->this$0);
}

UnixFileSystem$2::UnixFileSystem$2() {
}

$Class* UnixFileSystem$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystem$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystem;)V", nullptr, 0, $method(UnixFileSystem$2, init$, void, $UnixFileSystem*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/FileStore;>;", $PUBLIC, $virtualMethod(UnixFileSystem$2, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystem",
		"getFileStores",
		"()Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystem$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystem$2",
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
		"sun.nio.fs.UnixFileSystem"
	};
	$loadClass(UnixFileSystem$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem$2);
	});
	return class$;
}

$Class* UnixFileSystem$2::class$ = nullptr;

		} // fs
	} // nio
} // sun