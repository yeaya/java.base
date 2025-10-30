#include <java/net/URLClassLoader$3$1.h>

#include <java/net/URL.h>
#include <java/net/URLClassLoader$3.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader$3 = ::java::net::URLClassLoader$3;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$3$1_FieldInfo_[] = {
	{"this$1", "Ljava/net/URLClassLoader$3;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$3$1, this$1)},
	{}
};

$MethodInfo _URLClassLoader$3$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URLClassLoader$3;)V", nullptr, 0, $method(static_cast<void(URLClassLoader$3$1::*)($URLClassLoader$3*)>(&URLClassLoader$3$1::init$))},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassLoader$3$1_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader$3",
	"next",
	"()Z"
};

$InnerClassInfo _URLClassLoader$3$1_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$3", nullptr, nullptr, 0},
	{"java.net.URLClassLoader$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$3$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLClassLoader$3$1_FieldInfo_,
	_URLClassLoader$3$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
	&_URLClassLoader$3$1_EnclosingMethodInfo_,
	_URLClassLoader$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$3$1($Class* clazz) {
	return $of($alloc(URLClassLoader$3$1));
}

void URLClassLoader$3$1::init$($URLClassLoader$3* this$1) {
	$set(this, this$1, this$1);
}

$Object* URLClassLoader$3$1::run() {
	if (!$nc(this->this$1->val$e)->hasMoreElements()) {
		return $of(nullptr);
	}
	return $of($cast($URL, $nc(this->this$1->val$e)->nextElement()));
}

URLClassLoader$3$1::URLClassLoader$3$1() {
}

$Class* URLClassLoader$3$1::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$3$1, name, initialize, &_URLClassLoader$3$1_ClassInfo_, allocate$URLClassLoader$3$1);
	return class$;
}

$Class* URLClassLoader$3$1::class$ = nullptr;

	} // net
} // java