#include <sun/nio/cs/IBM775.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/IBM775$Holder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $IBM775$Holder = ::sun::nio::cs::IBM775$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM775_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM775::*)()>(&IBM775::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM775_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM775$Holder", "sun.nio.cs.IBM775", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM775_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM775",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM775_MethodInfo_,
	nullptr,
	nullptr,
	_IBM775_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM775$Holder"
};

$Object* allocate$IBM775($Class* clazz) {
	return $of($alloc(IBM775));
}

int32_t IBM775::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM775::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM775::toString() {
	 return this->$Charset::toString();
}

$Object* IBM775::clone() {
	 return this->$Charset::clone();
}

void IBM775::finalize() {
	this->$Charset::finalize();
}

void IBM775::init$() {
	$Charset::init$("IBM775"_s, $($StandardCharsets::aliases_IBM775()));
}

$String* IBM775::historicalName() {
	return "Cp775"_s;
}

bool IBM775::contains($Charset* cs) {
	return ($instanceOf(IBM775, cs));
}

$CharsetDecoder* IBM775::newDecoder() {
	$init($IBM775$Holder);
	return $new($SingleByte$Decoder, this, $IBM775$Holder::b2c, false, false);
}

$CharsetEncoder* IBM775::newEncoder() {
	$init($IBM775$Holder);
	return $new($SingleByte$Encoder, this, $IBM775$Holder::c2b, $IBM775$Holder::c2bIndex, false);
}

IBM775::IBM775() {
}

$Class* IBM775::load$($String* name, bool initialize) {
	$loadClass(IBM775, name, initialize, &_IBM775_ClassInfo_, allocate$IBM775);
	return class$;
}

$Class* IBM775::class$ = nullptr;

		} // cs
	} // nio
} // sun