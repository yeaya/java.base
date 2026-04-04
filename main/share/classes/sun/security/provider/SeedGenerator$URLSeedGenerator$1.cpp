#include <sun/security/provider/SeedGenerator$URLSeedGenerator$1.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <sun/security/provider/FileInputStreamPool.h>
#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>
#include <sun/security/provider/SunEntries.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $FileInputStreamPool = ::sun::security::provider::FileInputStreamPool;
using $SeedGenerator$URLSeedGenerator = ::sun::security::provider::SeedGenerator$URLSeedGenerator;
using $SunEntries = ::sun::security::provider::SunEntries;

namespace sun {
	namespace security {
		namespace provider {

void SeedGenerator$URLSeedGenerator$1::init$($SeedGenerator$URLSeedGenerator* this$0, $URL* val$device) {
	$set(this, this$0, this$0);
	$set(this, val$device, val$device);
}

$Object* SeedGenerator$URLSeedGenerator$1::run() {
	$useLocalObjectStack();
	if ($$nc($nc(this->val$device)->getProtocol())->equalsIgnoreCase("file"_s)) {
		$var($File, deviceFile, $SunEntries::getDeviceFile(this->val$device));
		return $FileInputStreamPool::getInputStream(deviceFile);
	} else {
		return this->val$device->openStream();
	}
}

SeedGenerator$URLSeedGenerator$1::SeedGenerator$URLSeedGenerator$1() {
}

$Class* SeedGenerator$URLSeedGenerator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/SeedGenerator$URLSeedGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$URLSeedGenerator$1, this$0)},
		{"val$device", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$URLSeedGenerator$1, val$device)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/SeedGenerator$URLSeedGenerator;Ljava/net/URL;)V", nullptr, 0, $method(SeedGenerator$URLSeedGenerator$1, init$, void, $SeedGenerator$URLSeedGenerator*, $URL*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SeedGenerator$URLSeedGenerator$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.SeedGenerator$URLSeedGenerator",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
		{"sun.security.provider.SeedGenerator$URLSeedGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SeedGenerator$URLSeedGenerator$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SeedGenerator"
	};
	$loadClass(SeedGenerator$URLSeedGenerator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SeedGenerator$URLSeedGenerator$1);
	});
	return class$;
}

$Class* SeedGenerator$URLSeedGenerator$1::class$ = nullptr;

		} // provider
	} // security
} // sun