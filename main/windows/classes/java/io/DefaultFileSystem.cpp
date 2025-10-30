#include <java/io/DefaultFileSystem.h>

#include <java/io/FileSystem.h>
#include <java/io/WinNTFileSystem.h>
#include <jcpp.h>

using $FileSystem = ::java::io::FileSystem;
using $WinNTFileSystem = ::java::io::WinNTFileSystem;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _DefaultFileSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultFileSystem::*)()>(&DefaultFileSystem::init$))},
	{"getFileSystem", "()Ljava/io/FileSystem;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileSystem*(*)()>(&DefaultFileSystem::getFileSystem))},
	{}
};

$ClassInfo _DefaultFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.DefaultFileSystem",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultFileSystem_MethodInfo_
};

$Object* allocate$DefaultFileSystem($Class* clazz) {
	return $of($alloc(DefaultFileSystem));
}

void DefaultFileSystem::init$() {
}

$FileSystem* DefaultFileSystem::getFileSystem() {
	return $new($WinNTFileSystem);
}

DefaultFileSystem::DefaultFileSystem() {
}

$Class* DefaultFileSystem::load$($String* name, bool initialize) {
	$loadClass(DefaultFileSystem, name, initialize, &_DefaultFileSystem_ClassInfo_, allocate$DefaultFileSystem);
	return class$;
}

$Class* DefaultFileSystem::class$ = nullptr;

	} // io
} // java