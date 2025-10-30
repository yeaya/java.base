#include <sun/security/provider/SeedGenerator$1.h>

#include <java/io/File.h>
#include <java/lang/Runtime.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/security/MessageDigest.h>
#include <java/util/Iterator.h>
#include <java/util/Properties.h>
#include <java/util/Random.h>
#include <java/util/Set.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $MessageDigest = ::java::security::MessageDigest;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Properties = ::java::util::Properties;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SeedGenerator$1_FieldInfo_[] = {
	{"val$md", "Ljava/security/MessageDigest;", nullptr, $FINAL | $SYNTHETIC, $field(SeedGenerator$1, val$md)},
	{}
};

$MethodInfo _SeedGenerator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, 0, $method(static_cast<void(SeedGenerator$1::*)($MessageDigest*)>(&SeedGenerator$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SeedGenerator$1_EnclosingMethodInfo_ = {
	"sun.security.provider.SeedGenerator",
	"getSystemEntropy",
	"()[B"
};

$InnerClassInfo _SeedGenerator$1_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SeedGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SeedGenerator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SeedGenerator$1_FieldInfo_,
	_SeedGenerator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_SeedGenerator$1_EnclosingMethodInfo_,
	_SeedGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SeedGenerator"
};

$Object* allocate$SeedGenerator$1($Class* clazz) {
	return $of($alloc(SeedGenerator$1));
}

void SeedGenerator$1::init$($MessageDigest* val$md) {
	$set(this, val$md, val$md);
}

$Object* SeedGenerator$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Properties, p, $System::getProperties());
		{
			$var($Iterator, i$, $nc($($nc(p)->stringPropertyNames()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, s, $cast($String, i$->next()));
				{
					$nc(this->val$md)->update($($nc(s)->getBytes()));
					$nc(this->val$md)->update($($nc($(p->getProperty(s)))->getBytes()));
				}
			}
		}
		$SeedGenerator::addNetworkAdapterInfo(this->val$md);
		$var($File, f, $new($File, $(p->getProperty("java.io.tmpdir"_s))));
		int32_t count = 0;
		{
			$var($DirectoryStream, stream, $Files::newDirectoryStream($(f->toPath())));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($Random, r, $new($Random));
						{
							$var($Iterator, i$, $nc(stream)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Path, entry, $cast($Path, i$->next()));
								{
									if (count < 512 || r->nextBoolean()) {
										$nc(this->val$md)->update($($nc($($nc($($nc(entry)->getFileName()))->toString()))->getBytes()));
									}
									if (count++ > 1024) {
										break;
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						if (stream != nullptr) {
							try {
								stream->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (stream != nullptr) {
						stream->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($Exception& ex) {
		$nc(this->val$md)->update((int8_t)$of(ex)->hashCode());
	}
	$var($Runtime, rt, $Runtime::getRuntime());
	$var($bytes, memBytes, $SeedGenerator::longToByteArray($nc(rt)->totalMemory()));
	$nc(this->val$md)->update(memBytes, 0, $nc(memBytes)->length);
	$assign(memBytes, $SeedGenerator::longToByteArray($nc(rt)->freeMemory()));
	$nc(this->val$md)->update(memBytes, 0, $nc(memBytes)->length);
	return $of(nullptr);
}

SeedGenerator$1::SeedGenerator$1() {
}

$Class* SeedGenerator$1::load$($String* name, bool initialize) {
	$loadClass(SeedGenerator$1, name, initialize, &_SeedGenerator$1_ClassInfo_, allocate$SeedGenerator$1);
	return class$;
}

$Class* SeedGenerator$1::class$ = nullptr;

		} // provider
	} // security
} // sun