#include <FindResourceDoesNotThrowException.h>

#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Enumeration = ::java::util::Enumeration;

$MethodInfo _FindResourceDoesNotThrowException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FindResourceDoesNotThrowException::*)()>(&FindResourceDoesNotThrowException::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FindResourceDoesNotThrowException::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _FindResourceDoesNotThrowException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FindResourceDoesNotThrowException",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FindResourceDoesNotThrowException_MethodInfo_
};

$Object* allocate$FindResourceDoesNotThrowException($Class* clazz) {
	return $of($alloc(FindResourceDoesNotThrowException));
}

void FindResourceDoesNotThrowException::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, "https://127.0.0.1/"_s));
	$var($String, resource, "c:/windows"_s);
	{
		$var($URLClassLoader, urlClassLoader, $new($URLClassLoader, $$new($URLArray, {url})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (urlClassLoader->findResource(resource) != nullptr) {
						$throwNew($RuntimeException, "findResource should return null"_s);
					}
					if (urlClassLoader->getResource(resource) != nullptr) {
						$throwNew($RuntimeException, "getResource should return null"_s);
					}
					if ($nc($(urlClassLoader->findResources(resource)))->hasMoreElements()) {
						$throwNew($RuntimeException, "findResources should return an empty enumeration"_s);
					}
					if ($nc($(urlClassLoader->getResources(resource)))->hasMoreElements()) {
						$throwNew($RuntimeException, "getResources should return an empty enumeration"_s);
					}
				} catch ($Throwable& t$) {
					try {
						urlClassLoader->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				urlClassLoader->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void FindResourceDoesNotThrowException::init$() {
}

FindResourceDoesNotThrowException::FindResourceDoesNotThrowException() {
}

$Class* FindResourceDoesNotThrowException::load$($String* name, bool initialize) {
	$loadClass(FindResourceDoesNotThrowException, name, initialize, &_FindResourceDoesNotThrowException_ClassInfo_, allocate$FindResourceDoesNotThrowException);
	return class$;
}

$Class* FindResourceDoesNotThrowException::class$ = nullptr;