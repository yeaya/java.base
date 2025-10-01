#include <java/net/URLClassLoader$5.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/FactoryURLClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FactoryURLClassLoader = ::java::net::FactoryURLClassLoader;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$5_FieldInfo_[] = {
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$acc)},
	{"val$parent", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$parent)},
	{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$5, val$urls)},
	{}
};

$MethodInfo _URLClassLoader$5_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(URLClassLoader$5::*)($URLArray*,$ClassLoader*,$AccessControlContext*)>(&URLClassLoader$5::init$))},
	{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassLoader$5_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader",
	"newInstance",
	"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;"
};

$InnerClassInfo _URLClassLoader$5_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLClassLoader$5_FieldInfo_,
	_URLClassLoader$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLClassLoader;>;",
	&_URLClassLoader$5_EnclosingMethodInfo_,
	_URLClassLoader$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$5($Class* clazz) {
	return $of($alloc(URLClassLoader$5));
}

void URLClassLoader$5::init$($URLArray* val$urls, $ClassLoader* val$parent, $AccessControlContext* val$acc) {
	$set(this, val$urls, val$urls);
	$set(this, val$parent, val$parent);
	$set(this, val$acc, val$acc);
}

$Object* URLClassLoader$5::run() {
	return $of($new($FactoryURLClassLoader, nullptr, this->val$urls, this->val$parent, this->val$acc));
}

URLClassLoader$5::URLClassLoader$5() {
}

$Class* URLClassLoader$5::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$5, name, initialize, &_URLClassLoader$5_ClassInfo_, allocate$URLClassLoader$5);
	return class$;
}

$Class* URLClassLoader$5::class$ = nullptr;

	} // net
} // java