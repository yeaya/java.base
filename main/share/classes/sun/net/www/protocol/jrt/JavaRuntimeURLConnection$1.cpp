#include <sun/net/www/protocol/jrt/JavaRuntimeURLConnection$1.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/loader/Resource.h>
#include <sun/net/www/protocol/jrt/JavaRuntimeURLConnection.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $Resource = ::jdk::internal::loader::Resource;
using $JavaRuntimeURLConnection = ::sun::net::www::protocol::jrt::JavaRuntimeURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jrt {

void JavaRuntimeURLConnection$1::init$($String* val$name, $URL* val$url, $String* val$module, $ImageLocation* val$location) {
	$set(this, val$name, val$name);
	$set(this, val$url, val$url);
	$set(this, val$module, val$module);
	$set(this, val$location, val$location);
	$Resource::init$();
}

$String* JavaRuntimeURLConnection$1::getName() {
	return this->val$name;
}

$URL* JavaRuntimeURLConnection$1::getURL() {
	return this->val$url;
}

$URL* JavaRuntimeURLConnection$1::getCodeSourceURL() {
	return $JavaRuntimeURLConnection::toJrtURL(this->val$module);
}

$InputStream* JavaRuntimeURLConnection$1::getInputStream() {
	return $new<$ByteArrayInputStream>(resource);
}

int32_t JavaRuntimeURLConnection$1::getContentLength() {
	int32_t size = resource->length;
	return (size < 0) ? (-1) : (int32_t)(size);
}

JavaRuntimeURLConnection$1::JavaRuntimeURLConnection$1() {
}

$Class* JavaRuntimeURLConnection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$location", "Ljdk/internal/jimage/ImageLocation;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$location)},
		{"val$module", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$module)},
		{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$url)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$name)},
		{"resource", "[B", nullptr, 2, $field(JavaRuntimeURLConnection$1, resource)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/String;Ljdk/internal/jimage/ImageLocation;)V", nullptr, 0, $method(JavaRuntimeURLConnection$1, init$, void, $String*, $URL*, $String*, $ImageLocation*)},
		{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(JavaRuntimeURLConnection$1, getCodeSourceURL, $URL*)},
		{"getContentLength", "()I", nullptr, $PUBLIC, $virtualMethod(JavaRuntimeURLConnection$1, getContentLength, int32_t)},
		{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(JavaRuntimeURLConnection$1, getInputStream, $InputStream*), "java.io.IOException"},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaRuntimeURLConnection$1, getName, $String*)},
		{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(JavaRuntimeURLConnection$1, getURL, $URL*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.jrt.JavaRuntimeURLConnection",
		"findResource",
		"(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/loader/Resource;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1",
		"jdk.internal.loader.Resource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.jrt.JavaRuntimeURLConnection"
	};
	$loadClass(JavaRuntimeURLConnection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaRuntimeURLConnection$1);
	});
	return class$;
}

$Class* JavaRuntimeURLConnection$1::class$ = nullptr;

				} // jrt
			} // protocol
		} // www
	} // net
} // sun