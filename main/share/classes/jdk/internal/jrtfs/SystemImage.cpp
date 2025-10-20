#include <jdk/internal/jrtfs/SystemImage.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/jrtfs/ExplodedImage.h>
#include <jdk/internal/jrtfs/SystemImage$1.h>
#include <jdk/internal/jrtfs/SystemImage$2.h>
#include <jcpp.h>

#include <jdk/internal/jrtfs/RuntimeImage.h>
#include <jdk/internal/jimage/RuntimeImageReader.h>

using ::jdk::internal::jrtfs::RuntimeImage;
using ::jdk::internal::jimage::RuntimeImageReader;

#undef RUNTIME_HOME

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $ExplodedImage = ::jdk::internal::jrtfs::ExplodedImage;
using $SystemImage$1 = ::jdk::internal::jrtfs::SystemImage$1;
using $SystemImage$2 = ::jdk::internal::jrtfs::SystemImage$2;

namespace jdk {
	namespace internal {
		namespace jrtfs {

class SystemImage$$Lambda$findHome : public $PrivilegedAction {
	$class(SystemImage$$Lambda$findHome, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SystemImage::findHome());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SystemImage$$Lambda$findHome>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SystemImage$$Lambda$findHome::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemImage$$Lambda$findHome::*)()>(&SystemImage$$Lambda$findHome::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SystemImage$$Lambda$findHome::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jrtfs.SystemImage$$Lambda$findHome",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SystemImage$$Lambda$findHome::load$($String* name, bool initialize) {
	$loadClass(SystemImage$$Lambda$findHome, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SystemImage$$Lambda$findHome::class$ = nullptr;

$FieldInfo _SystemImage_FieldInfo_[] = {
	{"RUNTIME_HOME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SystemImage, RUNTIME_HOME)},
	{"moduleImageFile", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(SystemImage, moduleImageFile)},
	{"modulesImageExists", "Z", nullptr, $STATIC | $FINAL, $staticField(SystemImage, modulesImageExists)},
	{"explodedModulesDir", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(SystemImage, explodedModulesDir)},
	{}
};

$MethodInfo _SystemImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SystemImage::*)()>(&SystemImage::init$))},
	{"close", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"findHome", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&SystemImage::findHome))},
	{"findNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Node;)[B", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"open", "()Ljdk/internal/jrtfs/SystemImage;", nullptr, $STATIC, $method(static_cast<SystemImage*(*)()>(&SystemImage::open)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SystemImage_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.SystemImage$2", nullptr, nullptr, 0},
	{"jdk.internal.jrtfs.SystemImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SystemImage_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.jrtfs.SystemImage",
	"java.lang.Object",
	nullptr,
	_SystemImage_FieldInfo_,
	_SystemImage_MethodInfo_,
	nullptr,
	nullptr,
	_SystemImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.SystemImage$2,jdk.internal.jrtfs.SystemImage$1"
};

$Object* allocate$SystemImage($Class* clazz) {
	return $of($alloc(SystemImage));
}

$String* SystemImage::RUNTIME_HOME = nullptr;
$Path* SystemImage::moduleImageFile = nullptr;
bool SystemImage::modulesImageExists = false;
$Path* SystemImage::explodedModulesDir = nullptr;

void SystemImage::init$() {
}

SystemImage* SystemImage::open() {
	$init(SystemImage);
	$var(RuntimeImageReader, reader, RuntimeImageReader::open());
	$nc(reader)->getRootDirectory();
	$var(RuntimeImage, image, $new<RuntimeImage>(reader));
	return image;
}

$String* SystemImage::findHome() {
	$init(SystemImage);
	$useLocalCurrentObjectStackCache();
	$var($CodeSource, cs, $nc($(SystemImage::class$->getProtectionDomain()))->getCodeSource());
	if (cs == nullptr) {
		return $System::getProperty("java.home"_s);
	}
	$var($URL, url, $nc(cs)->getLocation());
	if (!$nc($($nc(url)->getProtocol()))->equalsIgnoreCase("file"_s)) {
		$throwNew($InternalError, $$str({url, " loaded in unexpected way"_s}));
	}
	try {
		$var($Path, lib, $nc($($Paths::get($($nc(url)->toURI()))))->getParent());
		if (!$nc($($nc($($nc(lib)->getFileName()))->toString()))->equals("lib"_s)) {
			$throwNew($InternalError, $$str({url, " unexpected path"_s}));
		}
		return $nc($($nc(lib)->getParent()))->toString();
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$SystemImage($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(SystemImage$$Lambda$findHome)));
		$assignStatic(SystemImage::RUNTIME_HOME, $cast($String, $AccessController::doPrivileged(pa)));
		$var($FileSystem, fs, $FileSystems::getDefault());
		$assignStatic(SystemImage::moduleImageFile, $nc(fs)->getPath(SystemImage::RUNTIME_HOME, $$new($StringArray, {
			"lib"_s,
			"modules"_s
		})));
		$assignStatic(SystemImage::explodedModulesDir, fs->getPath(SystemImage::RUNTIME_HOME, $$new($StringArray, {"modules"_s})));
		SystemImage::modulesImageExists = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SystemImage$2)))))))->booleanValue();
	}
}

SystemImage::SystemImage() {
}

$Class* SystemImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SystemImage$$Lambda$findHome::classInfo$.name)) {
			return SystemImage$$Lambda$findHome::load$(name, initialize);
		}
	}
	$loadClass(SystemImage, name, initialize, &_SystemImage_ClassInfo_, clinit$SystemImage, allocate$SystemImage);
	return class$;
}

$Class* SystemImage::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk