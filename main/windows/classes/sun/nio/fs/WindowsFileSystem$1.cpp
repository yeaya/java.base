#include <sun/nio/fs/WindowsFileSystem$1.h>

#include <java/util/Iterator.h>
#include <sun/nio/fs/WindowsFileSystem$FileStoreIterator.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsFileSystem$FileStoreIterator = ::sun::nio::fs::WindowsFileSystem$FileStoreIterator;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileSystem$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/WindowsFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileSystem$1, this$0)},
	{}
};

$MethodInfo _WindowsFileSystem$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsFileSystem;)V", nullptr, 0, $method(static_cast<void(WindowsFileSystem$1::*)($WindowsFileSystem*)>(&WindowsFileSystem$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/FileStore;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileSystem$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsFileSystem",
	"getFileStores",
	"()Ljava/lang/Iterable;"
};

$InnerClassInfo _WindowsFileSystem$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystem$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileSystem$1",
	"java.lang.Object",
	"java.lang.Iterable",
	_WindowsFileSystem$1_FieldInfo_,
	_WindowsFileSystem$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;",
	&_WindowsFileSystem$1_EnclosingMethodInfo_,
	_WindowsFileSystem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileSystem"
};

$Object* allocate$WindowsFileSystem$1($Class* clazz) {
	return $of($alloc(WindowsFileSystem$1));
}

void WindowsFileSystem$1::init$($WindowsFileSystem* this$0) {
	$set(this, this$0, this$0);
}

$Iterator* WindowsFileSystem$1::iterator() {
	return $new($WindowsFileSystem$FileStoreIterator, this->this$0);
}

WindowsFileSystem$1::WindowsFileSystem$1() {
}

$Class* WindowsFileSystem$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystem$1, name, initialize, &_WindowsFileSystem$1_ClassInfo_, allocate$WindowsFileSystem$1);
	return class$;
}

$Class* WindowsFileSystem$1::class$ = nullptr;

		} // fs
	} // nio
} // sun