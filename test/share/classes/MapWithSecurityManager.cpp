#include <MapWithSecurityManager.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

#undef READ_ONLY

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

void MapWithSecurityManager::init$() {
}

void MapWithSecurityManager::main($StringArray* args) {
	$useLocalObjectStack();
	$load(MapWithSecurityManager);
	$beforeCallerSensitive();
	$var($Path, tempFile, $Files::createTempFile("test"_s, "test"_s, $$new($FileAttributeArray, 0)));
	{
		$var($FileChannel, ch, $FileChannel::open(tempFile, $$new($OpenOptionArray, 0)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$System::setSecurityManager($$new($SecurityManager));
				$init($FileChannel$MapMode);
				$nc(ch)->map($FileChannel$MapMode::READ_ONLY, 0, 0);
			} catch ($Throwable& t$) {
				if (ch != nullptr) {
					try {
						ch->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (ch != nullptr) {
				ch->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

MapWithSecurityManager::MapWithSecurityManager() {
}

$Class* MapWithSecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MapWithSecurityManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MapWithSecurityManager, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MapWithSecurityManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MapWithSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MapWithSecurityManager);
	});
	return class$;
}

$Class* MapWithSecurityManager::class$ = nullptr;