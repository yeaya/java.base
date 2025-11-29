#include <sun/nio/cs/DoubleByte$Encoder_EUC_SIM.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _DoubleByte$Encoder_EUC_SIM_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;[C[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte$Encoder_EUC_SIM::*)($Charset*,$chars*,$chars*,bool)>(&DoubleByte$Encoder_EUC_SIM::init$))},
	{}
};

$InnerClassInfo _DoubleByte$Encoder_EUC_SIM_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Encoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Encoder_EUC_SIM", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte$Encoder_EUC_SIM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte$Encoder_EUC_SIM",
	"sun.nio.cs.DoubleByte$Encoder",
	nullptr,
	nullptr,
	_DoubleByte$Encoder_EUC_SIM_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte$Encoder_EUC_SIM_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte"
};

$Object* allocate$DoubleByte$Encoder_EUC_SIM($Class* clazz) {
	return $of($alloc(DoubleByte$Encoder_EUC_SIM));
}

void DoubleByte$Encoder_EUC_SIM::init$($Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$DoubleByte$Encoder::init$(cs, c2b, c2bIndex, isASCIICompatible);
}

DoubleByte$Encoder_EUC_SIM::DoubleByte$Encoder_EUC_SIM() {
}

$Class* DoubleByte$Encoder_EUC_SIM::load$($String* name, bool initialize) {
	$loadClass(DoubleByte$Encoder_EUC_SIM, name, initialize, &_DoubleByte$Encoder_EUC_SIM_ClassInfo_, allocate$DoubleByte$Encoder_EUC_SIM);
	return class$;
}

$Class* DoubleByte$Encoder_EUC_SIM::class$ = nullptr;

		} // cs
	} // nio
} // sun