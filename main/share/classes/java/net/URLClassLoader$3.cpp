#include <java/net/URLClassLoader$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader$3$1.h>
#include <java/net/URLClassLoader.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$3_FieldInfo_[] = {
	{"this$0", "Ljava/net/URLClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3, this$0)},
	{"val$e", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3, val$e)},
	{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(URLClassLoader$3, url)},
	{}
};

$MethodInfo _URLClassLoader$3_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URLClassLoader;Ljava/util/Enumeration;)V", nullptr, 0, $method(static_cast<void(URLClassLoader$3::*)($URLClassLoader*,$Enumeration*)>(&URLClassLoader$3::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(URLClassLoader$3::*)()>(&URLClassLoader$3::next))},
	{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassLoader$3_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader",
	"findResources",
	"(Ljava/lang/String;)Ljava/util/Enumeration;"
};

$InnerClassInfo _URLClassLoader$3_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$3", nullptr, nullptr, 0},
	{"java.net.URLClassLoader$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$3",
	"java.lang.Object",
	"java.util.Enumeration",
	_URLClassLoader$3_FieldInfo_,
	_URLClassLoader$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
	&_URLClassLoader$3_EnclosingMethodInfo_,
	_URLClassLoader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$3($Class* clazz) {
	return $of($alloc(URLClassLoader$3));
}

void URLClassLoader$3::init$($URLClassLoader* this$0, $Enumeration* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
	$set(this, url, nullptr);
}

bool URLClassLoader$3::next() {
	$beforeCallerSensitive();
	if (this->url != nullptr) {
		return true;
	}
	do {
		$var($URL, u, $cast($URL, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($URLClassLoader$3$1, this)), this->this$0->acc)));
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
	return $of(u);
}

bool URLClassLoader$3::hasMoreElements() {
	return next();
}

URLClassLoader$3::URLClassLoader$3() {
}

$Class* URLClassLoader$3::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$3, name, initialize, &_URLClassLoader$3_ClassInfo_, allocate$URLClassLoader$3);
	return class$;
}

$Class* URLClassLoader$3::class$ = nullptr;

	} // net
} // java