#include <sun/net/www/protocol/jrt/JavaRuntimeURLConnection.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/jimage/ImageReaderFactory.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <sun/net/www/ParseUtil.h>
#include <sun/net/www/URLConnection.h>
#include <sun/net/www/protocol/jrt/JavaRuntimeURLConnection$1.h>
#include <jcpp.h>

#include <java/lang/Machine.h>

using Machine = ::java::lang::Machine;

#undef MAX_VALUE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReaderFactory = ::jdk::internal::jimage::ImageReaderFactory;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $ParseUtil = ::sun::net::www::ParseUtil;
using $1URLConnection = ::sun::net::www::URLConnection;
using $JavaRuntimeURLConnection$1 = ::sun::net::www::protocol::jrt::JavaRuntimeURLConnection$1;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jrt {

class JavaRuntimeURLConnection$$Lambda$getImageReader : public $PrivilegedAction {
	$class(JavaRuntimeURLConnection$$Lambda$getImageReader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of($ImageReaderFactory::getImageReader());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavaRuntimeURLConnection$$Lambda$getImageReader>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavaRuntimeURLConnection$$Lambda$getImageReader::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaRuntimeURLConnection$$Lambda$getImageReader::*)()>(&JavaRuntimeURLConnection$$Lambda$getImageReader::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavaRuntimeURLConnection$$Lambda$getImageReader::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$$Lambda$getImageReader",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* JavaRuntimeURLConnection$$Lambda$getImageReader::load$($String* name, bool initialize) {
	$loadClass(JavaRuntimeURLConnection$$Lambda$getImageReader, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavaRuntimeURLConnection$$Lambda$getImageReader::class$ = nullptr;

$FieldInfo _JavaRuntimeURLConnection_FieldInfo_[] = {
	{"reader", "Ljdk/internal/jimage/ImageReader;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavaRuntimeURLConnection, reader)},
	{"module", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JavaRuntimeURLConnection, module)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JavaRuntimeURLConnection, name)},
	{"resource", "Ljdk/internal/loader/Resource;", nullptr, $PRIVATE | $VOLATILE, $field(JavaRuntimeURLConnection, resource)},
	{}
};

$MethodInfo _JavaRuntimeURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(JavaRuntimeURLConnection::*)($URL*)>(&JavaRuntimeURLConnection::init$)), "java.io.IOException"},
	{"connect", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Resource*(*)($String*,$String*)>(&JavaRuntimeURLConnection::findResource))},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getContentLengthLong", "()J", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC},
	{"toJrtURL", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($String*,$String*)>(&JavaRuntimeURLConnection::toJrtURL))},
	{"toJrtURL", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($String*)>(&JavaRuntimeURLConnection::toJrtURL))},
	{}
};

$InnerClassInfo _JavaRuntimeURLConnection_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavaRuntimeURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection",
	"sun.net.www.URLConnection",
	nullptr,
	_JavaRuntimeURLConnection_FieldInfo_,
	_JavaRuntimeURLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_JavaRuntimeURLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1"
};

$Object* allocate$JavaRuntimeURLConnection($Class* clazz) {
	return $of($alloc(JavaRuntimeURLConnection));
}

$ImageReader* JavaRuntimeURLConnection::reader = nullptr;

void JavaRuntimeURLConnection::init$($URL* url) {
	$1URLConnection::init$(url);
	$var($String, path, $nc(url)->getPath());
	bool var$0 = $nc(path)->isEmpty();
	if (var$0 || $nc(path)->charAt(0) != u'/') {
		$throwNew($MalformedURLException, $$str({url, " missing path or /"_s}));
	}
	if ($nc(path)->length() == 1) {
		$set(this, module, nullptr);
		$set(this, name, nullptr);
	} else {
		int32_t pos = path->indexOf((int32_t)u'/', 1);
		if (pos == -1) {
			$set(this, module, path->substring(1));
			$set(this, name, nullptr);
		} else {
			$set(this, module, path->substring(1, pos));
			$set(this, name, $ParseUtil::decode($(path->substring(pos + 1))));
		}
	}
}

$Resource* JavaRuntimeURLConnection::findResource($String* module, $String* name) {
	$var($bytes, bytes, Machine::findResource(module, name));
	if (bytes != nullptr) {
		$var($URL, url, JavaRuntimeURLConnection::toJrtURL(module, name));
		$var(JavaRuntimeURLConnection$1, resource, $new<JavaRuntimeURLConnection$1>(name, url, module, nullptr));
		$set(resource, resource, bytes);
		return resource;
	}
	return nullptr;
}

void JavaRuntimeURLConnection::connect() {
	$synchronized(this) {
		if (!this->connected) {
			if (this->name == nullptr) {
				$var($String, s, (this->module == nullptr) ? ""_s : this->module);
				$throwNew($IOException, $$str({"cannot connect to jrt:/"_s, s}));
			}
			$set(this, resource, findResource(this->module, this->name));
			if (this->resource == nullptr) {
				$throwNew($IOException, $$str({this->module, "/"_s, this->name, " not found"_s}));
			}
			this->connected = true;
		}
	}
}

$InputStream* JavaRuntimeURLConnection::getInputStream() {
	connect();
	return $nc(this->resource)->getInputStream();
}

int64_t JavaRuntimeURLConnection::getContentLengthLong() {
	try {
		connect();
		return $nc(this->resource)->getContentLength();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return -1;
	}
	$shouldNotReachHere();
}

int32_t JavaRuntimeURLConnection::getContentLength() {
	int64_t len = getContentLengthLong();
	return len > $Integer::MAX_VALUE ? -1 : (int32_t)len;
}

$Permission* JavaRuntimeURLConnection::getPermission() {
	return $new($RuntimePermission, "accessSystemModules"_s);
}

$URL* JavaRuntimeURLConnection::toJrtURL($String* module, $String* name) {
	$init(JavaRuntimeURLConnection);
	try {
		return $new($URL, $$str({"jrt:/"_s, module, "/"_s, name}));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$URL* JavaRuntimeURLConnection::toJrtURL($String* module) {
	$init(JavaRuntimeURLConnection);
	try {
		return $new($URL, $$str({"jrt:/"_s, module}));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$JavaRuntimeURLConnection($Class* class$) {
}

JavaRuntimeURLConnection::JavaRuntimeURLConnection() {
}

$Class* JavaRuntimeURLConnection::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavaRuntimeURLConnection$$Lambda$getImageReader::classInfo$.name)) {
			return JavaRuntimeURLConnection$$Lambda$getImageReader::load$(name, initialize);
		}
	}
	$loadClass(JavaRuntimeURLConnection, name, initialize, &_JavaRuntimeURLConnection_ClassInfo_, clinit$JavaRuntimeURLConnection, allocate$JavaRuntimeURLConnection);
	return class$;
}

$Class* JavaRuntimeURLConnection::class$ = nullptr;

				} // jrt
			} // protocol
		} // www
	} // net
} // sun