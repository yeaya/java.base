#include <sun/nio/cs/DoubleByte.h>

#include <java/util/Arrays.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _DoubleByte_FieldInfo_[] = {
	{"B2C_UNMAPPABLE", "[C", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DoubleByte, B2C_UNMAPPABLE)},
	{}
};

$MethodInfo _DoubleByte_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleByte::*)()>(&DoubleByte::init$))},
	{}
};

$InnerClassInfo _DoubleByte_InnerClassesInfo_[] = {
	{"sun.nio.cs.DoubleByte$Encoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Encoder_EUC_SIM", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder_EBCDIC", "sun.nio.cs.DoubleByte", "Encoder_EBCDIC", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Encoder_DBCSONLY", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder_EUC_SIM", "sun.nio.cs.DoubleByte", "Decoder_EUC_SIM", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Decoder_DBCSONLY", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder_EBCDIC", "sun.nio.cs.DoubleByte", "Decoder_EBCDIC", $PUBLIC | $STATIC},
	{"sun.nio.cs.DoubleByte$Decoder", "sun.nio.cs.DoubleByte", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DoubleByte_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.DoubleByte",
	"java.lang.Object",
	nullptr,
	_DoubleByte_FieldInfo_,
	_DoubleByte_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleByte_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.DoubleByte$Encoder_EUC_SIM,sun.nio.cs.DoubleByte$Encoder_EBCDIC,sun.nio.cs.DoubleByte$Encoder_DBCSONLY,sun.nio.cs.DoubleByte$Encoder,sun.nio.cs.DoubleByte$Decoder_EUC_SIM,sun.nio.cs.DoubleByte$Decoder_DBCSONLY,sun.nio.cs.DoubleByte$Decoder_EBCDIC,sun.nio.cs.DoubleByte$Decoder"
};

$Object* allocate$DoubleByte($Class* clazz) {
	return $of($alloc(DoubleByte));
}

$chars* DoubleByte::B2C_UNMAPPABLE = nullptr;

void DoubleByte::init$() {
}

void clinit$DoubleByte($Class* class$) {
	{
		$assignStatic(DoubleByte::B2C_UNMAPPABLE, $new($chars, 256));
		$Arrays::fill(DoubleByte::B2C_UNMAPPABLE, (char16_t)0xFFFD);
	}
}

DoubleByte::DoubleByte() {
}

$Class* DoubleByte::load$($String* name, bool initialize) {
	$loadClass(DoubleByte, name, initialize, &_DoubleByte_ClassInfo_, clinit$DoubleByte, allocate$DoubleByte);
	return class$;
}

$Class* DoubleByte::class$ = nullptr;

		} // cs
	} // nio
} // sun