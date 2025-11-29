#include <java/net/URL$2.h>

#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/net/spi/URLStreamHandlerProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerProvider = ::java::net::spi::URLStreamHandlerProvider;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace net {

$FieldInfo _URL$2_FieldInfo_[] = {
	{"val$protocol", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URL$2, val$protocol)},
	{}
};

$MethodInfo _URL$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(URL$2::*)($String*)>(&URL$2::init$))},
	{"run", "()Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URL$2_EnclosingMethodInfo_ = {
	"java.net.URL",
	"lookupViaProviders",
	"(Ljava/lang/String;)Ljava/net/URLStreamHandler;"
};

$InnerClassInfo _URL$2_InnerClassesInfo_[] = {
	{"java.net.URL$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URL$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URL$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URL$2_FieldInfo_,
	_URL$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLStreamHandler;>;",
	&_URL$2_EnclosingMethodInfo_,
	_URL$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URL"
};

$Object* allocate$URL$2($Class* clazz) {
	return $of($alloc(URL$2));
}

void URL$2::init$($String* val$protocol) {
	$set(this, val$protocol, val$protocol);
}

$Object* URL$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, itr, $URL::providers());
	while ($nc(itr)->hasNext()) {
		$var($URLStreamHandlerProvider, f, $cast($URLStreamHandlerProvider, itr->next()));
		$var($URLStreamHandler, h, $nc(f)->createURLStreamHandler(this->val$protocol));
		if (h != nullptr) {
			return $of(h);
		}
	}
	return $of(nullptr);
}

URL$2::URL$2() {
}

$Class* URL$2::load$($String* name, bool initialize) {
	$loadClass(URL$2, name, initialize, &_URL$2_ClassInfo_, allocate$URL$2);
	return class$;
}

$Class* URL$2::class$ = nullptr;

	} // net
} // java