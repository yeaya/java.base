#include <sun/nio/cs/IBM437.h>

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
#include <sun/nio/cs/IBM437$Holder.h>
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
using $IBM437$Holder = ::sun::nio::cs::IBM437$Holder;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _IBM437_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM437::*)()>(&IBM437::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM437_InnerClassesInfo_[] = {
	{"sun.nio.cs.IBM437$Holder", "sun.nio.cs.IBM437", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM437_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.IBM437",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM437_MethodInfo_,
	nullptr,
	nullptr,
	_IBM437_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.IBM437$Holder"
};

$Object* allocate$IBM437($Class* clazz) {
	return $of($alloc(IBM437));
}

int32_t IBM437::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM437::equals(Object$* ob) {
	 return this->$Charset::equals(ob);
}

$String* IBM437::toString() {
	 return this->$Charset::toString();
}

$Object* IBM437::clone() {
	 return this->$Charset::clone();
}

void IBM437::finalize() {
	this->$Charset::finalize();
}

void IBM437::init$() {
	$Charset::init$("IBM437"_s, $($StandardCharsets::aliases_IBM437()));
}

$String* IBM437::historicalName() {
	return "Cp437"_s;
}

bool IBM437::contains($Charset* cs) {
	return ($instanceOf(IBM437, cs));
}

$CharsetDecoder* IBM437::newDecoder() {
	$init($IBM437$Holder);
	return $new($SingleByte$Decoder, this, $IBM437$Holder::b2c, false, false);
}

$CharsetEncoder* IBM437::newEncoder() {
	$init($IBM437$Holder);
	return $new($SingleByte$Encoder, this, $IBM437$Holder::c2b, $IBM437$Holder::c2bIndex, false);
}

IBM437::IBM437() {
}

$Class* IBM437::load$($String* name, bool initialize) {
	$loadClass(IBM437, name, initialize, &_IBM437_ClassInfo_, allocate$IBM437);
	return class$;
}

$Class* IBM437::class$ = nullptr;

		} // cs
	} // nio
} // sun