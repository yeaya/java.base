#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder$2.h>

#include <java/io/FileInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLContextImpl$DefaultManagersHolder.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $SSLContextImpl$DefaultManagersHolder = ::sun::security::ssl::SSLContextImpl$DefaultManagersHolder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLContextImpl$DefaultManagersHolder$2_FieldInfo_[] = {
	{"val$defaultKeyStore", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SSLContextImpl$DefaultManagersHolder$2, val$defaultKeyStore)},
	{}
};

$MethodInfo _SSLContextImpl$DefaultManagersHolder$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(SSLContextImpl$DefaultManagersHolder$2::*)($String*)>(&SSLContextImpl$DefaultManagersHolder$2::init$))},
	{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _SSLContextImpl$DefaultManagersHolder$2_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLContextImpl$DefaultManagersHolder",
	"getKeyManagers",
	"()[Ljavax/net/ssl/KeyManager;"
};

$InnerClassInfo _SSLContextImpl$DefaultManagersHolder$2_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder", "sun.security.ssl.SSLContextImpl", "DefaultManagersHolder", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SSLContextImpl$DefaultManagersHolder$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_SSLContextImpl$DefaultManagersHolder$2_FieldInfo_,
	_SSLContextImpl$DefaultManagersHolder$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;",
	&_SSLContextImpl$DefaultManagersHolder$2_EnclosingMethodInfo_,
	_SSLContextImpl$DefaultManagersHolder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$DefaultManagersHolder$2($Class* clazz) {
	return $of($alloc(SSLContextImpl$DefaultManagersHolder$2));
}

void SSLContextImpl$DefaultManagersHolder$2::init$($String* val$defaultKeyStore) {
	$set(this, val$defaultKeyStore, val$defaultKeyStore);
}

$Object* SSLContextImpl$DefaultManagersHolder$2::run() {
	return $of($new($FileInputStream, this->val$defaultKeyStore));
}

SSLContextImpl$DefaultManagersHolder$2::SSLContextImpl$DefaultManagersHolder$2() {
}

$Class* SSLContextImpl$DefaultManagersHolder$2::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$DefaultManagersHolder$2, name, initialize, &_SSLContextImpl$DefaultManagersHolder$2_ClassInfo_, allocate$SSLContextImpl$DefaultManagersHolder$2);
	return class$;
}

$Class* SSLContextImpl$DefaultManagersHolder$2::class$ = nullptr;

		} // ssl
	} // security
} // sun