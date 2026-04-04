#include <sun/net/www/protocol/jar/JarURLConnection$JarURLInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
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
using $JarURLConnection = ::sun::net::www::protocol::jar::JarURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

void JarURLConnection$JarURLInputStream::init$($JarURLConnection* this$0, $InputStream* src) {
	$set(this, this$0, this$0);
	$FilterInputStream::init$(src);
}

void JarURLConnection$JarURLInputStream::close() {
	$var($Throwable, var$0, nullptr);
	try {
		$FilterInputStream::close();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (!this->this$0->getUseCaches()) {
			$nc(this->this$0->jarFile)->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

JarURLConnection$JarURLInputStream::JarURLConnection$JarURLInputStream() {
}

$Class* JarURLConnection$JarURLInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/jar/JarURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(JarURLConnection$JarURLInputStream, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/jar/JarURLConnection;Ljava/io/InputStream;)V", nullptr, 0, $method(JarURLConnection$JarURLInputStream, init$, void, $JarURLConnection*, $InputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JarURLConnection$JarURLInputStream, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream", "sun.net.www.protocol.jar.JarURLConnection", "JarURLInputStream", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream",
		"java.io.FilterInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.jar.JarURLConnection"
	};
	$loadClass(JarURLConnection$JarURLInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarURLConnection$JarURLInputStream);
	});
	return class$;
}

$Class* JarURLConnection$JarURLInputStream::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun