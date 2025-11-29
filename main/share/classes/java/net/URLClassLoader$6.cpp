#include <java/net/URLClassLoader$6.h>

#include <java/net/FactoryURLClassLoader.h>
#include <java/net/URL.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FactoryURLClassLoader = ::java::net::FactoryURLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$6_FieldInfo_[] = {
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$6, val$acc)},
	{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$6, val$urls)},
	{}
};

$MethodInfo _URLClassLoader$6_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(URLClassLoader$6::*)($URLArray*,$AccessControlContext*)>(&URLClassLoader$6::init$))},
	{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassLoader$6_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader",
	"newInstance",
	"([Ljava/net/URL;)Ljava/net/URLClassLoader;"
};

$InnerClassInfo _URLClassLoader$6_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLClassLoader$6_FieldInfo_,
	_URLClassLoader$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLClassLoader;>;",
	&_URLClassLoader$6_EnclosingMethodInfo_,
	_URLClassLoader$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$6($Class* clazz) {
	return $of($alloc(URLClassLoader$6));
}

void URLClassLoader$6::init$($URLArray* val$urls, $AccessControlContext* val$acc) {
	$set(this, val$urls, val$urls);
	$set(this, val$acc, val$acc);
}

$Object* URLClassLoader$6::run() {
	return $of($new($FactoryURLClassLoader, this->val$urls, this->val$acc));
}

URLClassLoader$6::URLClassLoader$6() {
}

$Class* URLClassLoader$6::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$6, name, initialize, &_URLClassLoader$6_ClassInfo_, allocate$URLClassLoader$6);
	return class$;
}

$Class* URLClassLoader$6::class$ = nullptr;

	} // net
} // java