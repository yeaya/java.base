#include <java/util/zip/Checksum$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Checksum$1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Checksum$1, $assertionsDisabled)},
	{}
};

$EnclosingMethodInfo _Checksum$1_EnclosingMethodInfo_ = {
	"java.util.zip.Checksum",
	nullptr,
	nullptr
};

$InnerClassInfo _Checksum$1_InnerClassesInfo_[] = {
	{"java.util.zip.Checksum$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Checksum$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.zip.Checksum$1",
	"java.lang.Object",
	nullptr,
	_Checksum$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Checksum$1_EnclosingMethodInfo_,
	_Checksum$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.Checksum"
};

$Object* allocate$Checksum$1($Class* clazz) {
	return $of($alloc(Checksum$1));
}

bool Checksum$1::$assertionsDisabled = false;

void clinit$Checksum$1($Class* class$) {
	$load($Checksum);
	Checksum$1::$assertionsDisabled = !$Checksum::class$->desiredAssertionStatus();
}

Checksum$1::Checksum$1() {
}

$Class* Checksum$1::load$($String* name, bool initialize) {
	$loadClass(Checksum$1, name, initialize, &_Checksum$1_ClassInfo_, clinit$Checksum$1, allocate$Checksum$1);
	return class$;
}

$Class* Checksum$1::class$ = nullptr;

		} // zip
	} // util
} // java