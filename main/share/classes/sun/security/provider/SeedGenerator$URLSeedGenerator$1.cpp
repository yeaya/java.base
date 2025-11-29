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

$FieldInfo _SeedGenerator$URLSeedGenerator$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/SeedGenerator$URLSeedGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$URLSeedGenerator$1, this$0)},
	{"val$device", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$URLSeedGenerator$1, val$device)},
	{}
};

$MethodInfo _SeedGenerator$URLSeedGenerator$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/SeedGenerator$URLSeedGenerator;Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(SeedGenerator$URLSeedGenerator$1::*)($SeedGenerator$URLSeedGenerator*,$URL*)>(&SeedGenerator$URLSeedGenerator$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SeedGenerator$URLSeedGenerator$1_EnclosingMethodInfo_ = {
	"sun.security.provider.SeedGenerator$URLSeedGenerator",
	"init",
	"()V"
};

$InnerClassInfo _SeedGenerator$URLSeedGenerator$1_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
	{"sun.security.provider.SeedGenerator$URLSeedGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SeedGenerator$URLSeedGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SeedGenerator$URLSeedGenerator$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_SeedGenerator$URLSeedGenerator$1_FieldInfo_,
	_SeedGenerator$URLSeedGenerator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/InputStream;>;",
	&_SeedGenerator$URLSeedGenerator$1_EnclosingMethodInfo_,
	_SeedGenerator$URLSeedGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SeedGenerator"
};

$Object* allocate$SeedGenerator$URLSeedGenerator$1($Class* clazz) {
	return $of($alloc(SeedGenerator$URLSeedGenerator$1));
}

void SeedGenerator$URLSeedGenerator$1::init$($SeedGenerator$URLSeedGenerator* this$0, $URL* val$device) {
	$set(this, this$0, this$0);
	$set(this, val$device, val$device);
}

$Object* SeedGenerator$URLSeedGenerator$1::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(this->val$device)->getProtocol()))->equalsIgnoreCase("file"_s)) {
		$var($File, deviceFile, $SunEntries::getDeviceFile(this->val$device));
		return $of($FileInputStreamPool::getInputStream(deviceFile));
	} else {
		return $of($nc(this->val$device)->openStream());
	}
}

SeedGenerator$URLSeedGenerator$1::SeedGenerator$URLSeedGenerator$1() {
}

$Class* SeedGenerator$URLSeedGenerator$1::load$($String* name, bool initialize) {
	$loadClass(SeedGenerator$URLSeedGenerator$1, name, initialize, &_SeedGenerator$URLSeedGenerator$1_ClassInfo_, allocate$SeedGenerator$URLSeedGenerator$1);
	return class$;
}

$Class* SeedGenerator$URLSeedGenerator$1::class$ = nullptr;

		} // provider
	} // security
} // sun