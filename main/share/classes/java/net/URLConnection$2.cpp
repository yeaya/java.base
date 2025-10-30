#include <java/net/URLConnection$2.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/net/ContentHandler.h>
#include <java/net/ContentHandlerFactory.h>
#include <java/net/URLConnection.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $ContentHandler = ::java::net::ContentHandler;
using $ContentHandlerFactory = ::java::net::ContentHandlerFactory;
using $URLConnection = ::java::net::URLConnection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace net {

$FieldInfo _URLConnection$2_FieldInfo_[] = {
	{"this$0", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(URLConnection$2, this$0)},
	{"val$contentType", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLConnection$2, val$contentType)},
	{}
};

$MethodInfo _URLConnection$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URLConnection;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(URLConnection$2::*)($URLConnection*,$String*)>(&URLConnection$2::init$))},
	{"run", "()Ljava/net/ContentHandler;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLConnection$2_EnclosingMethodInfo_ = {
	"java.net.URLConnection",
	"lookupContentHandlerViaProvider",
	"(Ljava/lang/String;)Ljava/net/ContentHandler;"
};

$InnerClassInfo _URLConnection$2_InnerClassesInfo_[] = {
	{"java.net.URLConnection$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLConnection$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLConnection$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLConnection$2_FieldInfo_,
	_URLConnection$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ContentHandler;>;",
	&_URLConnection$2_EnclosingMethodInfo_,
	_URLConnection$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLConnection"
};

$Object* allocate$URLConnection$2($Class* clazz) {
	return $of($alloc(URLConnection$2));
}

void URLConnection$2::init$($URLConnection* this$0, $String* val$contentType) {
	$set(this, this$0, this$0);
	$set(this, val$contentType, val$contentType);
}

$Object* URLConnection$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
	$load($ContentHandlerFactory);
	$var($ServiceLoader, sl, $ServiceLoader::load($ContentHandlerFactory::class$, cl));
	$var($Iterator, iterator, $nc(sl)->iterator());
	$var($ContentHandler, handler, nullptr);
	while ($nc(iterator)->hasNext()) {
		$var($ContentHandlerFactory, f, nullptr);
		try {
			$assign(f, $cast($ContentHandlerFactory, iterator->next()));
		} catch ($ServiceConfigurationError& e) {
			if ($instanceOf($SecurityException, $(e->getCause()))) {
				continue;
			}
			$throw(e);
		}
		$assign(handler, $nc(f)->createContentHandler(this->val$contentType));
		if (handler != nullptr) {
			break;
		}
	}
	return $of(handler);
}

URLConnection$2::URLConnection$2() {
}

$Class* URLConnection$2::load$($String* name, bool initialize) {
	$loadClass(URLConnection$2, name, initialize, &_URLConnection$2_ClassInfo_, allocate$URLConnection$2);
	return class$;
}

$Class* URLConnection$2::class$ = nullptr;

	} // net
} // java