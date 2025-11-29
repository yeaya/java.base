#include <jdk/internal/module/SystemModuleFinders$SystemModuleReader.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/Permission.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/access/JavaNetUriAccess.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/module/SystemModuleFinders$ModuleContentSpliterator.h>
#include <jdk/internal/module/SystemModuleFinders$SystemImage.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

#undef JNUA

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Spliterator = ::java::util::Spliterator;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $JavaNetUriAccess = ::jdk::internal::access::JavaNetUriAccess;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $SystemModuleFinders = ::jdk::internal::module::SystemModuleFinders;
using $SystemModuleFinders$ModuleContentSpliterator = ::jdk::internal::module::SystemModuleFinders$ModuleContentSpliterator;
using $SystemModuleFinders$SystemImage = ::jdk::internal::module::SystemModuleFinders$SystemImage;

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream : public $Function {
	$class(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream, $NO_CLASS_INIT, $Function)
public:
	void init$(SystemModuleFinders$SystemModuleReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* bb) override {
		 return $of($nc(inst$)->toInputStream($cast($ByteBuffer, bb)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream>());
	}
	SystemModuleFinders$SystemModuleReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream, inst$)},
	{}
};
$MethodInfo SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/SystemModuleFinders$SystemModuleReader;)V", nullptr, $PUBLIC, $method(static_cast<void(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::*)(SystemModuleFinders$SystemModuleReader*)>(&SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::load$($String* name, bool initialize) {
	$loadClass(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::class$ = nullptr;

$FieldInfo _SystemModuleFinders$SystemModuleReader_FieldInfo_[] = {
	{"module", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SystemModuleFinders$SystemModuleReader, module)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SystemModuleFinders$SystemModuleReader, closed)},
	{}
};

$MethodInfo _SystemModuleFinders$SystemModuleReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URI;)V", nullptr, 0, $method(static_cast<void(SystemModuleFinders$SystemModuleReader::*)($String*,$URI*)>(&SystemModuleFinders$SystemModuleReader::init$))},
	{"checkPermissionToConnect", "(Ljava/net/URI;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($URI*)>(&SystemModuleFinders$SystemModuleReader::checkPermissionToConnect))},
	{"close", "()V", nullptr, $PUBLIC},
	{"containsImageLocation", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SystemModuleFinders$SystemModuleReader::*)($String*)>(&SystemModuleFinders$SystemModuleReader::containsImageLocation)), "java.io.IOException"},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"findImageLocation", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageLocation;", nullptr, $PRIVATE, $method(static_cast<$ImageLocation*(SystemModuleFinders$SystemModuleReader::*)($String*)>(&SystemModuleFinders$SystemModuleReader::findImageLocation)), "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/nio/ByteBuffer;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"release", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"toInputStream", "(Ljava/nio/ByteBuffer;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(SystemModuleFinders$SystemModuleReader::*)($ByteBuffer*)>(&SystemModuleFinders$SystemModuleReader::toInputStream))},
	{}
};

$InnerClassInfo _SystemModuleFinders$SystemModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.module.SystemModuleFinders$SystemModuleReader", "jdk.internal.module.SystemModuleFinders", "SystemModuleReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SystemModuleFinders$SystemModuleReader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModuleFinders$SystemModuleReader",
	"java.lang.Object",
	"java.lang.module.ModuleReader",
	_SystemModuleFinders$SystemModuleReader_FieldInfo_,
	_SystemModuleFinders$SystemModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_SystemModuleFinders$SystemModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.SystemModuleFinders"
};

$Object* allocate$SystemModuleFinders$SystemModuleReader($Class* clazz) {
	return $of($alloc(SystemModuleFinders$SystemModuleReader));
}

void SystemModuleFinders$SystemModuleReader::checkPermissionToConnect($URI* uri) {
	$init(SystemModuleFinders$SystemModuleReader);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		try {
			$var($URLConnection, uc, $nc($($nc(uri)->toURL()))->openConnection());
			sm->checkPermission($($nc(uc)->getPermission()));
		} catch ($IOException& ioe) {
			$throwNew($UncheckedIOException, ioe);
		}
	}
}

void SystemModuleFinders$SystemModuleReader::init$($String* module, $URI* uri) {
	checkPermissionToConnect(uri);
	$set(this, module, module);
}

$ImageLocation* SystemModuleFinders$SystemModuleReader::findImageLocation($String* name) {
	$Objects::requireNonNull(name);
	if (this->closed) {
		$throwNew($IOException, "ModuleReader is closed"_s);
	}
	$var($ImageReader, imageReader, $SystemModuleFinders$SystemImage::reader());
	if (imageReader != nullptr) {
		return imageReader->findLocation(this->module, name);
	} else {
		return nullptr;
	}
}

bool SystemModuleFinders$SystemModuleReader::containsImageLocation($String* name) {
	$Objects::requireNonNull(name);
	if (this->closed) {
		$throwNew($IOException, "ModuleReader is closed"_s);
	}
	$var($ImageReader, imageReader, $SystemModuleFinders$SystemImage::reader());
	if (imageReader != nullptr) {
		return imageReader->verifyLocation(this->module, name);
	} else {
		return false;
	}
}

$Optional* SystemModuleFinders$SystemModuleReader::find($String* name) {
	$useLocalCurrentObjectStackCache();
	if (containsImageLocation(name)) {
		$init($SystemModuleFinders);
		$var($URI, u, $nc($SystemModuleFinders::JNUA)->create("jrt"_s, $$str({"/"_s, this->module, "/"_s, name})));
		return $Optional::of(u);
	} else {
		return $Optional::empty();
	}
}

$Optional* SystemModuleFinders$SystemModuleReader::open($String* name) {
	$useLocalCurrentObjectStackCache();
	return $nc($(read(name)))->map(static_cast<$Function*>($$new(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream, this)));
}

$InputStream* SystemModuleFinders$SystemModuleReader::toInputStream($ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($InputStream, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t rem = $nc(bb)->remaining();
			$var($bytes, bytes, $new($bytes, rem));
			bb->get(bytes);
			$assign(var$2, $new($ByteArrayInputStream, bytes));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			release(bb);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Optional* SystemModuleFinders$SystemModuleReader::read($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ImageLocation, location, findImageLocation(name));
	if (location != nullptr) {
		return $Optional::of($($nc($($SystemModuleFinders$SystemImage::reader()))->getResourceBuffer(location)));
	} else {
		return $Optional::empty();
	}
}

void SystemModuleFinders$SystemModuleReader::release($ByteBuffer* bb) {
	$Objects::requireNonNull(bb);
	$ImageReader::releaseByteBuffer(bb);
}

$Stream* SystemModuleFinders$SystemModuleReader::list() {
	if (this->closed) {
		$throwNew($IOException, "ModuleReader is closed"_s);
	}
	$var($Spliterator, s, $new($SystemModuleFinders$ModuleContentSpliterator, this->module));
	return $StreamSupport::stream(s, false);
}

void SystemModuleFinders$SystemModuleReader::close() {
	this->closed = true;
}

SystemModuleFinders$SystemModuleReader::SystemModuleFinders$SystemModuleReader() {
}

$Class* SystemModuleFinders$SystemModuleReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::classInfo$.name)) {
			return SystemModuleFinders$SystemModuleReader$$Lambda$toInputStream::load$(name, initialize);
		}
	}
	$loadClass(SystemModuleFinders$SystemModuleReader, name, initialize, &_SystemModuleFinders$SystemModuleReader_ClassInfo_, allocate$SystemModuleFinders$SystemModuleReader);
	return class$;
}

$Class* SystemModuleFinders$SystemModuleReader::class$ = nullptr;

		} // module
	} // internal
} // jdk