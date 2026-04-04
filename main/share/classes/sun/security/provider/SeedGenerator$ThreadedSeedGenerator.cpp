#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator.h>
#include <java/lang/InternalError.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessController.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$1.h>
#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator$BogusThread.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

using $ThreadGroupArray = $Array<::java::lang::ThreadGroup>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;
using $SeedGenerator$ThreadedSeedGenerator$1 = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator$1;
using $SeedGenerator$ThreadedSeedGenerator$BogusThread = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator$BogusThread;

namespace sun {
	namespace security {
		namespace provider {

int32_t SeedGenerator$ThreadedSeedGenerator::hashCode() {
	 return this->$SeedGenerator::hashCode();
}

bool SeedGenerator$ThreadedSeedGenerator::equals(Object$* obj) {
	 return this->$SeedGenerator::equals(obj);
}

$Object* SeedGenerator$ThreadedSeedGenerator::clone() {
	 return this->$SeedGenerator::clone();
}

$String* SeedGenerator$ThreadedSeedGenerator::toString() {
	 return this->$SeedGenerator::toString();
}

void SeedGenerator$ThreadedSeedGenerator::finalize() {
	this->$SeedGenerator::finalize();
}

$bytes* SeedGenerator$ThreadedSeedGenerator::rndTab = nullptr;

void SeedGenerator$ThreadedSeedGenerator::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$SeedGenerator::init$();
	$set(this, pool, $new($bytes, 20));
	this->start = (this->end = 0);
	$var($MessageDigest, digest, nullptr);
	try {
		$assign(digest, $MessageDigest::getInstance("SHA"_s));
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($InternalError, "internal error: SHA-1 not available."_s, e);
	}
	$var($ThreadGroupArray, finalsg, $new($ThreadGroupArray, 1));
	$var($Thread, t, $cast($Thread, $AccessController::doPrivileged($$new($SeedGenerator$ThreadedSeedGenerator$1, this, finalsg))));
	$set(this, seedGroup, finalsg->get(0));
	$nc(t)->start();
}

void SeedGenerator$ThreadedSeedGenerator::run() {
	$useLocalObjectStack();
	try {
		while (true) {
			$synchronized(this) {
				while (this->count >= $nc(this->pool)->length) {
					$of(this)->wait();
				}
			}
			int32_t counter = 0;
			int32_t quanta = 0;
			int8_t v = 0;
			for (counter = (quanta = 0); (counter < 64000) && (quanta < 6); ++quanta) {
				try {
					$var($SeedGenerator$ThreadedSeedGenerator$BogusThread, bt, $new($SeedGenerator$ThreadedSeedGenerator$BogusThread));
					$var($Thread, t, $new($Thread, this->seedGroup, bt, "SeedGenerator Thread"_s, 0, false));
					t->start();
				} catch ($Exception& e) {
					$throwNew($InternalError, "internal error: SeedGenerator thread creation error."_s, e);
				}
				int32_t latch = 0;
				int64_t startTime = $System::nanoTime();
				while ($System::nanoTime() - startTime < 250000000) {
					$synchronized(this) {
					}
					;
					latch = (latch + 1) & 0x1fffffff;
				}
				v ^= SeedGenerator$ThreadedSeedGenerator::rndTab->get(latch % 255);
				counter += latch;
			}
			$synchronized(this) {
				$nc(this->pool)->set(this->end, v);
				++this->end;
				++this->count;
				if (this->end >= this->pool->length) {
					this->end = 0;
				}
				$of(this)->notifyAll();
			}
		}
	} catch ($Exception& e) {
		$throwNew($InternalError, "internal error: SeedGenerator thread generated an exception."_s, e);
	}
}

void SeedGenerator$ThreadedSeedGenerator::getSeedBytes($bytes* result) {
	for (int32_t i = 0; i < $nc(result)->length; ++i) {
		result->set(i, getSeedByte());
	}
}

int8_t SeedGenerator$ThreadedSeedGenerator::getSeedByte() {
	int8_t b = 0;
	try {
		$synchronized(this) {
			while (this->count <= 0) {
				$of(this)->wait();
			}
		}
	} catch ($Exception& e) {
		if (this->count <= 0) {
			$throwNew($InternalError, "internal error: SeedGenerator thread generated an exception."_s, e);
		}
	}
	$synchronized(this) {
		b = $nc(this->pool)->get(this->start);
		this->pool->set(this->start, 0);
		++this->start;
		--this->count;
		if (this->start == this->pool->length) {
			this->start = 0;
		}
		$of(this)->notifyAll();
	}
	return b;
}

void SeedGenerator$ThreadedSeedGenerator::clinit$($Class* clazz) {
	$assignStatic(SeedGenerator$ThreadedSeedGenerator::rndTab, $new($bytes, {
		56,
		30,
		-107,
		-6,
		-86,
		25,
		-83,
		75,
		-12,
		-64,
		5,
		-128,
		78,
		21,
		16,
		32,
		70,
		-81,
		37,
		-51,
		-43,
		-46,
		-108,
		87,
		29,
		17,
		-55,
		22,
		-11,
		-111,
		-115,
		84,
		-100,
		108,
		-45,
		-15,
		-98,
		72,
		-33,
		-28,
		31,
		-52,
		-37,
		-117,
		-97,
		-27,
		93,
		-123,
		47,
		126,
		-80,
		-62,
		-93,
		-79,
		61,
		-96,
		-65,
		-5,
		-47,
		-119,
		14,
		89,
		81,
		-118,
		-88,
		20,
		67,
		-126,
		-113,
		60,
		-102,
		55,
		110,
		28,
		85,
		121,
		122,
		-58,
		2,
		45,
		43,
		24,
		-9,
		103,
		-13,
		102,
		-68,
		-54,
		-101,
		-104,
		19,
		13,
		-39,
		-26,
		-103,
		62,
		77,
		51,
		44,
		111,
		73,
		18,
		-127,
		-82,
		4,
		-30,
		11,
		-99,
		-74,
		40,
		-89,
		42,
		-76,
		-77,
		-94,
		-35,
		-69,
		35,
		120,
		76,
		33,
		-73,
		-7,
		82,
		-25,
		-10,
		88,
		125,
		-112,
		58,
		83,
		95,
		6,
		10,
		98,
		-34,
		80,
		15,
		-91,
		86,
		-19,
		52,
		-17,
		117,
		49,
		-63,
		118,
		-90,
		36,
		-116,
		-40,
		-71,
		97,
		-53,
		-109,
		-85,
		109,
		-16,
		-3,
		104,
		-95,
		68,
		54,
		34,
		26,
		114,
		-1,
		106,
		-121,
		3,
		66,
		0,
		100,
		-84,
		57,
		107,
		119,
		-42,
		112,
		-61,
		1,
		48,
		38,
		12,
		-56,
		-57,
		39,
		-106,
		-72,
		41,
		7,
		71,
		-29,
		-59,
		-8,
		-38,
		79,
		-31,
		124,
		-124,
		8,
		91,
		116,
		99,
		-4,
		9,
		-36,
		-78,
		63,
		-49,
		-67,
		-87,
		59,
		101,
		-32,
		92,
		94,
		53,
		-41,
		115,
		-66,
		-70,
		-122,
		50,
		-50,
		-22,
		-20,
		-18,
		-21,
		23,
		-2,
		-48,
		96,
		65,
		-105,
		123,
		-14,
		-110,
		69,
		-24,
		-120,
		-75,
		74,
		127,
		-60,
		113,
		90,
		-114,
		105,
		46,
		27,
		-125,
		-23,
		-44,
		64
	}));
}

SeedGenerator$ThreadedSeedGenerator::SeedGenerator$ThreadedSeedGenerator() {
}

$Class* SeedGenerator$ThreadedSeedGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pool", "[B", nullptr, $PRIVATE, $field(SeedGenerator$ThreadedSeedGenerator, pool)},
		{"start", "I", nullptr, $PRIVATE, $field(SeedGenerator$ThreadedSeedGenerator, start)},
		{"end", "I", nullptr, $PRIVATE, $field(SeedGenerator$ThreadedSeedGenerator, end)},
		{"count", "I", nullptr, $PRIVATE, $field(SeedGenerator$ThreadedSeedGenerator, count)},
		{"seedGroup", "Ljava/lang/ThreadGroup;", nullptr, 0, $field(SeedGenerator$ThreadedSeedGenerator, seedGroup)},
		{"rndTab", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SeedGenerator$ThreadedSeedGenerator, rndTab)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(SeedGenerator$ThreadedSeedGenerator, init$, void)},
		{"getSeedByte", "()B", nullptr, 0, $virtualMethod(SeedGenerator$ThreadedSeedGenerator, getSeedByte, int8_t)},
		{"getSeedBytes", "([B)V", nullptr, 0, $virtualMethod(SeedGenerator$ThreadedSeedGenerator, getSeedBytes, void, $bytes*)},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SeedGenerator$ThreadedSeedGenerator, run, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread", "sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "BogusThread", $PRIVATE | $STATIC},
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SeedGenerator$ThreadedSeedGenerator",
		"sun.security.provider.SeedGenerator",
		"java.lang.Runnable",
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
	$loadClass(SeedGenerator$ThreadedSeedGenerator, name, initialize, &classInfo$$, SeedGenerator$ThreadedSeedGenerator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SeedGenerator$ThreadedSeedGenerator));
	});
	return class$;
}

$Class* SeedGenerator$ThreadedSeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun