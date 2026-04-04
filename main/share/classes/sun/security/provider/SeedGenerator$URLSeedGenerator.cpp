#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/InternalError.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
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
using $SeedGenerator = ::sun::security::provider::SeedGenerator;
using $SeedGenerator$URLSeedGenerator$1 = ::sun::security::provider::SeedGenerator$URLSeedGenerator$1;

namespace sun {
	namespace security {
		namespace provider {

void SeedGenerator$URLSeedGenerator::init$($String* egdurl) {
	$SeedGenerator::init$();
	if (egdurl == nullptr) {
		$throwNew($IOException, "No random source specified"_s);
	}
	$set(this, deviceName, egdurl);
	init();
}

void SeedGenerator$URLSeedGenerator::init() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($URL, device, $new($URL, this->deviceName));
	try {
		$set(this, seedStream, $cast($InputStream, $AccessController::doPrivileged($$new($SeedGenerator$URLSeedGenerator$1, this, device))));
	} catch ($Exception& e) {
		$throwNew($IOException, $$str({"Failed to open "_s, this->deviceName}), $(e->getCause()));
	}
}

void SeedGenerator$URLSeedGenerator::getSeedBytes($bytes* result) {
	$useLocalObjectStack();
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
	} catch ($IOException& ioe) {
		$throwNew($InternalError, $$str({"URLSeedGenerator "_s, this->deviceName, " generated exception: "_s, $(ioe->getMessage())}), ioe);
	}
}

SeedGenerator$URLSeedGenerator::SeedGenerator$URLSeedGenerator() {
}

$Class* SeedGenerator$URLSeedGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"deviceName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SeedGenerator$URLSeedGenerator, deviceName)},
		{"seedStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(SeedGenerator$URLSeedGenerator, seedStream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SeedGenerator$URLSeedGenerator, init$, void, $String*), "java.io.IOException"},
		{"getSeedBytes", "([B)V", nullptr, 0, $virtualMethod(SeedGenerator$URLSeedGenerator, getSeedBytes, void, $bytes*)},
		{"init", "()V", nullptr, $PRIVATE, $method(SeedGenerator$URLSeedGenerator, init, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
		{"sun.security.provider.SeedGenerator$URLSeedGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SeedGenerator$URLSeedGenerator",
		"sun.security.provider.SeedGenerator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SeedGenerator"
	};
	$loadClass(SeedGenerator$URLSeedGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SeedGenerator$URLSeedGenerator);
	});
	return class$;
}

$Class* SeedGenerator$URLSeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun