#include <sun/security/ssl/TrustManagerFactoryImpl$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <sun/security/ssl/TrustManagerFactoryImpl.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TrustManagerFactoryImpl$1_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(TrustManagerFactoryImpl$1, val$file)},
	{}
};

$MethodInfo _TrustManagerFactoryImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(TrustManagerFactoryImpl$1::*)($File*)>(&TrustManagerFactoryImpl$1::init$))},
	{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _TrustManagerFactoryImpl$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.TrustManagerFactoryImpl",
	"getFileInputStream",
	"(Ljava/io/File;)Ljava/io/FileInputStream;"
};

$InnerClassInfo _TrustManagerFactoryImpl$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustManagerFactoryImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustManagerFactoryImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.TrustManagerFactoryImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_TrustManagerFactoryImpl$1_FieldInfo_,
	_TrustManagerFactoryImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;",
	&_TrustManagerFactoryImpl$1_EnclosingMethodInfo_,
	_TrustManagerFactoryImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustManagerFactoryImpl"
};

$Object* allocate$TrustManagerFactoryImpl$1($Class* clazz) {
	return $of($alloc(TrustManagerFactoryImpl$1));
}

void TrustManagerFactoryImpl$1::init$($File* val$file) {
	$set(this, val$file, val$file);
}

$Object* TrustManagerFactoryImpl$1::run() {
	try {
		if ($nc(this->val$file)->exists()) {
			return $of($new($FileInputStream, this->val$file));
		} else {
			return $of(nullptr);
		}
	} catch ($FileNotFoundException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

TrustManagerFactoryImpl$1::TrustManagerFactoryImpl$1() {
}

$Class* TrustManagerFactoryImpl$1::load$($String* name, bool initialize) {
	$loadClass(TrustManagerFactoryImpl$1, name, initialize, &_TrustManagerFactoryImpl$1_ClassInfo_, allocate$TrustManagerFactoryImpl$1);
	return class$;
}

$Class* TrustManagerFactoryImpl$1::class$ = nullptr;

		} // ssl
	} // security
} // sun