#include <java/util/zip/Checksum$1.h>
#include <java/util/zip/Checksum.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Checksum = ::java::util::zip::Checksum;

namespace java {
	namespace util {
		namespace zip {

bool Checksum$1::$assertionsDisabled = false;

void Checksum$1::clinit$($Class* clazz) {
	$load($Checksum);
	Checksum$1::$assertionsDisabled = !$Checksum::class$->desiredAssertionStatus();
}

Checksum$1::Checksum$1() {
}

$Class* Checksum$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Checksum$1, $assertionsDisabled)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.zip.Checksum",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.Checksum$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.zip.Checksum$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.Checksum"
	};
	$loadClass(Checksum$1, name, initialize, &classInfo$$, Checksum$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Checksum$1);
	});
	return class$;
}

$Class* Checksum$1::class$ = nullptr;

		} // zip
	} // util
} // java