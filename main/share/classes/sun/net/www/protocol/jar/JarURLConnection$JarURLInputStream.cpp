#include <sun/net/www/protocol/jar/JarURLConnection$JarURLInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/jar/JarFile.h>
#include <java/util/zip/ZipFile.h>
#include <sun/net/www/protocol/jar/JarURLConnection.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JarFile = ::java::util::jar::JarFile;
using $ZipFile = ::java::util::zip::ZipFile;
using $JarURLConnection = ::sun::net::www::protocol::jar::JarURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$FieldInfo _JarURLConnection$JarURLInputStream_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/jar/JarURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(JarURLConnection$JarURLInputStream, this$0)},
	{}
};

$MethodInfo _JarURLConnection$JarURLInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/jar/JarURLConnection;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(JarURLConnection$JarURLInputStream::*)($JarURLConnection*,$InputStream*)>(&JarURLConnection$JarURLInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JarURLConnection$JarURLInputStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream", "sun.net.www.protocol.jar.JarURLConnection", "JarURLInputStream", 0},
	{}
};

$ClassInfo _JarURLConnection$JarURLInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_JarURLConnection$JarURLInputStream_FieldInfo_,
	_JarURLConnection$JarURLInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_JarURLConnection$JarURLInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jar.JarURLConnection"
};

$Object* allocate$JarURLConnection$JarURLInputStream($Class* clazz) {
	return $of($alloc(JarURLConnection$JarURLInputStream));
}

void JarURLConnection$JarURLInputStream::init$($JarURLConnection* this$0, $InputStream* src) {
	$set(this, this$0, this$0);
	$FilterInputStream::init$(src);
}

void JarURLConnection$JarURLInputStream::close() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$FilterInputStream::close();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (!this->this$0->getUseCaches()) {
				$nc(this->this$0->jarFile)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

JarURLConnection$JarURLInputStream::JarURLConnection$JarURLInputStream() {
}

$Class* JarURLConnection$JarURLInputStream::load$($String* name, bool initialize) {
	$loadClass(JarURLConnection$JarURLInputStream, name, initialize, &_JarURLConnection$JarURLInputStream_ClassInfo_, allocate$JarURLConnection$JarURLInputStream);
	return class$;
}

$Class* JarURLConnection$JarURLInputStream::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun