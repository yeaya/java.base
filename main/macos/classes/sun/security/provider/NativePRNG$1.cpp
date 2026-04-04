#include <sun/security/provider/NativePRNG$1.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <sun/security/provider/NativePRNG$2.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <sun/security/provider/SunEntries.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $NativePRNG = ::sun::security::provider::NativePRNG;
using $NativePRNG$2 = ::sun::security::provider::NativePRNG$2;
using $NativePRNG$RandomIO = ::sun::security::provider::NativePRNG$RandomIO;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;
using $SunEntries = ::sun::security::provider::SunEntries;

namespace sun {
	namespace security {
		namespace provider {

void NativePRNG$1::init$($NativePRNG$Variant* val$v) {
	$set(this, val$v, val$v);
}

$Object* NativePRNG$1::run() {
	$useLocalObjectStack();
	$var($File, seedFile, nullptr);
	$var($File, nextFile, nullptr);
	{
		$init($NativePRNG$2);
		$var($URL, egdUrl, nullptr);
		$var($File, egdFile, nullptr);
		switch ($nc($NativePRNG$2::$SwitchMap$sun$security$provider$NativePRNG$Variant)->get(this->val$v->ordinal())) {
		case 1:
			$assign(egdFile, nullptr);
			if (($assign(egdUrl, $NativePRNG::getEgdUrl())) != nullptr) {
				try {
					$assign(egdFile, $SunEntries::getDeviceFile(egdUrl));
				} catch ($IOException& e) {
				}
			}
			if ((egdFile != nullptr) && egdFile->canRead()) {
				$assign(seedFile, egdFile);
			} else {
				$assign(seedFile, $new($File, "/dev/random"_s));
			}
			$assign(nextFile, $new($File, "/dev/urandom"_s));
			break;
		case 2:
			$assign(seedFile, $new($File, "/dev/random"_s));
			$assign(nextFile, $new($File, "/dev/random"_s));
			break;
		case 3:
			$assign(seedFile, $new($File, "/dev/urandom"_s));
			$assign(nextFile, $new($File, "/dev/urandom"_s));
			break;
		default:
			return nullptr;
		}
	}
	$init($NativePRNG);
	if ($NativePRNG::debug != nullptr) {
		$NativePRNG::debug->println($$str({"NativePRNG."_s, this->val$v, " seedFile: "_s, seedFile, " nextFile: "_s, nextFile}));
	}
	bool var$0 = !$nc(seedFile)->canRead();
	if (var$0 || !$nc(nextFile)->canRead()) {
		if ($NativePRNG::debug != nullptr) {
			$NativePRNG::debug->println($$str({"NativePRNG."_s, this->val$v, " Couldn\'t read Files."_s}));
		}
		return nullptr;
	}
	try {
		return $new($NativePRNG$RandomIO, seedFile, nextFile);
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

NativePRNG$1::NativePRNG$1() {
}

$Class* NativePRNG$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$v", "Lsun/security/provider/NativePRNG$Variant;", nullptr, $FINAL | $SYNTHETIC, $field(NativePRNG$1, val$v)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/NativePRNG$Variant;)V", nullptr, 0, $method(NativePRNG$1, init$, void, $NativePRNG$Variant*)},
		{"run", "()Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PUBLIC, $virtualMethod(NativePRNG$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.NativePRNG",
		"initIO",
		"(Lsun/security/provider/NativePRNG$Variant;)Lsun/security/provider/NativePRNG$RandomIO;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$1", nullptr, nullptr, 0},
		{"sun.security.provider.NativePRNG$RandomIO", "sun.security.provider.NativePRNG", "RandomIO", $PRIVATE | $STATIC},
		{"sun.security.provider.NativePRNG$Variant", "sun.security.provider.NativePRNG", "Variant", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.NativePRNG$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/provider/NativePRNG$RandomIO;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG$1);
	});
	return class$;
}

$Class* NativePRNG$1::class$ = nullptr;

		} // provider
	} // security
} // sun