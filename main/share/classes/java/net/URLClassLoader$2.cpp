#include <java/net/URLClassLoader$2.h>

#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLClassLoader = ::java::net::URLClassLoader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$2_FieldInfo_[] = {
	{"this$0", "Ljava/net/URLClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$2, this$0)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$2, val$name)},
	{}
};

$MethodInfo _URLClassLoader$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URLClassLoader;Ljava/lang/String;)V", nullptr, 0, $method(URLClassLoader$2, init$, void, $URLClassLoader*, $String*)},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _URLClassLoader$2_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader",
	"findResource",
	"(Ljava/lang/String;)Ljava/net/URL;"
};

$InnerClassInfo _URLClassLoader$2_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLClassLoader$2_FieldInfo_,
	_URLClassLoader$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
	&_URLClassLoader$2_EnclosingMethodInfo_,
	_URLClassLoader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$2($Class* clazz) {
	return $of($alloc(URLClassLoader$2));
}

void URLClassLoader$2::init$($URLClassLoader* this$0, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* URLClassLoader$2::run() {
	return $of($nc(this->this$0->ucp)->findResource(this->val$name, true));
}

URLClassLoader$2::URLClassLoader$2() {
}

$Class* URLClassLoader$2::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$2, name, initialize, &_URLClassLoader$2_ClassInfo_, allocate$URLClassLoader$2);
	return class$;
}

$Class* URLClassLoader$2::class$ = nullptr;

	} // net
} // java