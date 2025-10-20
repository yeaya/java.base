#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <sun/security/provider/SeedGenerator$URLSeedGenerator$1.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;
using $SeedGenerator$URLSeedGenerator$1 = ::sun::security::provider::SeedGenerator$URLSeedGenerator$1;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SeedGenerator$URLSeedGenerator_FieldInfo_[] = {
	{"deviceName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SeedGenerator$URLSeedGenerator, deviceName)},
	{"seedStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(SeedGenerator$URLSeedGenerator, seedStream)},
	{}
};

$MethodInfo _SeedGenerator$URLSeedGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SeedGenerator$URLSeedGenerator::*)($String*)>(&SeedGenerator$URLSeedGenerator::init$)), "java.io.IOException"},
	{"getSeedBytes", "([B)V", nullptr, 0},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(SeedGenerator$URLSeedGenerator::*)()>(&SeedGenerator$URLSeedGenerator::init)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SeedGenerator$URLSeedGenerator_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
	{"sun.security.provider.SeedGenerator$URLSeedGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SeedGenerator$URLSeedGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SeedGenerator$URLSeedGenerator",
	"sun.security.provider.SeedGenerator",
	nullptr,
	_SeedGenerator$URLSeedGenerator_FieldInfo_,
	_SeedGenerator$URLSeedGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SeedGenerator$URLSeedGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SeedGenerator"
};

$Object* allocate$SeedGenerator$URLSeedGenerator($Class* clazz) {
	return $of($alloc(SeedGenerator$URLSeedGenerator));
}

void SeedGenerator$URLSeedGenerator::init$($String* egdurl) {
	$SeedGenerator::init$();
	if (egdurl == nullptr) {
		$throwNew($IOException, "No random source specified"_s);
	}
	$set(this, deviceName, egdurl);
	init();
}

void SeedGenerator$URLSeedGenerator::init() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($URL, device, $new($URL, this->deviceName));
	try {
		$set(this, seedStream, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($SeedGenerator$URLSeedGenerator$1, this, device)))));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IOException, $$str({"Failed to open "_s, this->deviceName}), $(e->getCause()));
	}
}

void SeedGenerator$URLSeedGenerator::getSeedBytes($bytes* result) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(result)->length;
	int32_t read = 0;
	try {
		while (read < len) {
			int32_t count = $nc(this->seedStream)->read(result, read, len - read);
			if (count < 0) {
				$throwNew($InternalError, $$str({"URLSeedGenerator "_s, this->deviceName, " reached end of file"_s}));
			}
			read += count;
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($InternalError, $$str({"URLSeedGenerator "_s, this->deviceName, " generated exception: "_s, $(ioe->getMessage())}), ioe);
	}
}

SeedGenerator$URLSeedGenerator::SeedGenerator$URLSeedGenerator() {
}

$Class* SeedGenerator$URLSeedGenerator::load$($String* name, bool initialize) {
	$loadClass(SeedGenerator$URLSeedGenerator, name, initialize, &_SeedGenerator$URLSeedGenerator_ClassInfo_, allocate$SeedGenerator$URLSeedGenerator);
	return class$;
}

$Class* SeedGenerator$URLSeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun