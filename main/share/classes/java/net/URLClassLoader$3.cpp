#include <java/net/URLClassLoader$3.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader$3$1.h>
#include <java/net/URLClassLoader.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $URLClassLoader$3$1 = ::java::net::URLClassLoader$3$1;
using $AccessController = ::java::security::AccessController;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace java {
	namespace net {

void URLClassLoader$3::init$($URLClassLoader* this$0, $Enumeration* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
	$set(this, url, nullptr);
}

bool URLClassLoader$3::next() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->url != nullptr) {
		return true;
	}
	do {
		$var($URL, u, $cast($URL, $AccessController::doPrivileged($$new($URLClassLoader$3$1, this), this->this$0->acc)));
		if (u == nullptr) {
			break;
		}
		$set(this, url, $URLClassPath::checkURL(u));
	} while (this->url == nullptr);
	return this->url != nullptr;
}

$Object* URLClassLoader$3::nextElement() {
	if (!next()) {
		$throwNew($NoSuchElementException);
	}
	$var($URL, u, this->url);
	$set(this, url, nullptr);
	return u;
}

bool URLClassLoader$3::hasMoreElements() {
	return next();
}

URLClassLoader$3::URLClassLoader$3() {
}

$Class* URLClassLoader$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/URLClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3, this$0)},
		{"val$e", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3, val$e)},
		{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(URLClassLoader$3, url)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URLClassLoader;Ljava/util/Enumeration;)V", nullptr, 0, $method(URLClassLoader$3, init$, void, $URLClassLoader*, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$3, hasMoreElements, bool)},
		{"next", "()Z", nullptr, $PRIVATE, $method(URLClassLoader$3, next, bool)},
		{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$3, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLClassLoader",
		"findResources",
		"(Ljava/lang/String;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLClassLoader$3", nullptr, nullptr, 0},
		{"java.net.URLClassLoader$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLClassLoader$3",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URLClassLoader"
	};
	$loadClass(URLClassLoader$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassLoader$3);
	});
	return class$;
}

$Class* URLClassLoader$3::class$ = nullptr;

	} // net
} // java