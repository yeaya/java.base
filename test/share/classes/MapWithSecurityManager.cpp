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
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;

$MethodInfo _MapWithSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MapWithSecurityManager::*)()>(&MapWithSecurityManager::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MapWithSecurityManager::main)), "java.io.IOException"},
	{}
};

$ClassInfo _MapWithSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MapWithSecurityManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MapWithSecurityManager_MethodInfo_
};

$Object* allocate$MapWithSecurityManager($Class* clazz) {
	return $of($alloc(MapWithSecurityManager));
}

void MapWithSecurityManager::init$() {
}

void MapWithSecurityManager::main($StringArray* args) {
	$load(MapWithSecurityManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Path, tempFile, $Files::createTempFile("test"_s, "test"_s, $$new($FileAttributeArray, 0)));
	{
		$var($FileChannel, ch, $FileChannel::open(tempFile, $$new($OpenOptionArray, 0)));
		{
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
}

MapWithSecurityManager::MapWithSecurityManager() {
}

$Class* MapWithSecurityManager::load$($String* name, bool initialize) {
	$loadClass(MapWithSecurityManager, name, initialize, &_MapWithSecurityManager_ClassInfo_, allocate$MapWithSecurityManager);
	return class$;
}

$Class* MapWithSecurityManager::class$ = nullptr;