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

void TrustManagerFactoryImpl$1::init$($File* val$file) {
	$set(this, val$file, val$file);
}

$Object* TrustManagerFactoryImpl$1::run() {
	try {
		if ($nc(this->val$file)->exists()) {
			return $new($FileInputStream, this->val$file);
		} else {
			return nullptr;
		}
	} catch ($FileNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

TrustManagerFactoryImpl$1::TrustManagerFactoryImpl$1() {
}

$Class* TrustManagerFactoryImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(TrustManagerFactoryImpl$1, val$file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(TrustManagerFactoryImpl$1, init$, void, $File*)},
		{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, $virtualMethod(TrustManagerFactoryImpl$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.TrustManagerFactoryImpl",
		"getFileInputStream",
		"(Ljava/io/File;)Ljava/io/FileInputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TrustManagerFactoryImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.TrustManagerFactoryImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.TrustManagerFactoryImpl"
	};
	$loadClass(TrustManagerFactoryImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrustManagerFactoryImpl$1);
	});
	return class$;
}

$Class* TrustManagerFactoryImpl$1::class$ = nullptr;

		} // ssl
	} // security
} // sun