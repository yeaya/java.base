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

$FieldInfo _JavaRuntimeURLConnection$1_FieldInfo_[] = {
	{"val$location", "Ljdk/internal/jimage/ImageLocation;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$location)},
	{"val$module", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$module)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$url)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavaRuntimeURLConnection$1, val$name)},
	{"resource", "[B", nullptr, 2, $field(JavaRuntimeURLConnection$1, resource)},
	{}
};

$MethodInfo _JavaRuntimeURLConnection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/String;Ljdk/internal/jimage/ImageLocation;)V", nullptr, 0, $method(static_cast<void(JavaRuntimeURLConnection$1::*)($String*,$URL*,$String*,$ImageLocation*)>(&JavaRuntimeURLConnection$1::init$))},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavaRuntimeURLConnection$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection",
	"findResource",
	"(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _JavaRuntimeURLConnection$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavaRuntimeURLConnection$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_JavaRuntimeURLConnection$1_FieldInfo_,
	_JavaRuntimeURLConnection$1_MethodInfo_,
	nullptr,
	&_JavaRuntimeURLConnection$1_EnclosingMethodInfo_,
	_JavaRuntimeURLConnection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jrt.JavaRuntimeURLConnection"
};

$Object* allocate$JavaRuntimeURLConnection$1($Class* clazz) {
	return $of($alloc(JavaRuntimeURLConnection$1));
}

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
	$loadClass(JavaRuntimeURLConnection$1, name, initialize, &_JavaRuntimeURLConnection$1_ClassInfo_, allocate$JavaRuntimeURLConnection$1);
	return class$;
}

$Class* JavaRuntimeURLConnection$1::class$ = nullptr;

				} // jrt
			} // protocol
		} // www
	} // net
} // sun