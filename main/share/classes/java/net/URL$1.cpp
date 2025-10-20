#include <java/net/URL$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/spi/URLStreamHandlerProvider.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
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
using $URL = ::java::net::URL;
using $URLStreamHandlerProvider = ::java::net::spi::URLStreamHandlerProvider;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace net {

$FieldInfo _URL$1_FieldInfo_[] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, 0, $field(URL$1, cl)},
	{"sl", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljava/net/spi/URLStreamHandlerProvider;>;", 0, $field(URL$1, sl)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/net/spi/URLStreamHandlerProvider;>;", 0, $field(URL$1, i)},
	{"next", "Ljava/net/spi/URLStreamHandlerProvider;", nullptr, 0, $field(URL$1, next$)},
	{}
};

$MethodInfo _URL$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(URL$1::*)()>(&URL$1::init$))},
	{"getNext", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(URL$1::*)()>(&URL$1::getNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/net/spi/URLStreamHandlerProvider;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URL$1_EnclosingMethodInfo_ = {
	"java.net.URL",
	"providers",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _URL$1_InnerClassesInfo_[] = {
	{"java.net.URL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URL$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URL$1",
	"java.lang.Object",
	"java.util.Iterator",
	_URL$1_FieldInfo_,
	_URL$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/net/spi/URLStreamHandlerProvider;>;",
	&_URL$1_EnclosingMethodInfo_,
	_URL$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URL"
};

$Object* allocate$URL$1($Class* clazz) {
	return $of($alloc(URL$1));
}

void URL$1::init$() {
	$beforeCallerSensitive();
	$set(this, cl, $ClassLoader::getSystemClassLoader());
	$load($URLStreamHandlerProvider);
	$set(this, sl, $ServiceLoader::load($URLStreamHandlerProvider::class$, this->cl));
	$set(this, i, $nc(this->sl)->iterator());
	$set(this, next$, nullptr);
}

bool URL$1::getNext() {
	$useLocalCurrentObjectStackCache();
	while (this->next$ == nullptr) {
		try {
			if (!$nc(this->i)->hasNext()) {
				return false;
			}
			$set(this, next$, $cast($URLStreamHandlerProvider, $nc(this->i)->next()));
		} catch ($ServiceConfigurationError&) {
			$var($ServiceConfigurationError, sce, $catch());
			if ($instanceOf($SecurityException, $(sce->getCause()))) {
				continue;
			}
			$throw(sce);
		}
	}
	return true;
}

bool URL$1::hasNext() {
	return getNext();
}

$Object* URL$1::next() {
	if (!getNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($URLStreamHandlerProvider, n, this->next$);
	$set(this, next$, nullptr);
	return $of(n);
}

URL$1::URL$1() {
}

$Class* URL$1::load$($String* name, bool initialize) {
	$loadClass(URL$1, name, initialize, &_URL$1_ClassInfo_, allocate$URL$1);
	return class$;
}

$Class* URL$1::class$ = nullptr;

	} // net
} // java