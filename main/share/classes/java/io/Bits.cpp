#include <java/io/Bits.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _Bits_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Bits, init$, void)},
	{"getBoolean", "([BI)Z", nullptr, $STATIC, $staticMethod(Bits, getBoolean, bool, $bytes*, int32_t)},
	{"getChar", "([BI)C", nullptr, $STATIC, $staticMethod(Bits, getChar, char16_t, $bytes*, int32_t)},
	{"getDouble", "([BI)D", nullptr, $STATIC, $staticMethod(Bits, getDouble, double, $bytes*, int32_t)},
	{"getFloat", "([BI)F", nullptr, $STATIC, $staticMethod(Bits, getFloat, float, $bytes*, int32_t)},
	{"getInt", "([BI)I", nullptr, $STATIC, $staticMethod(Bits, getInt, int32_t, $bytes*, int32_t)},
	{"getLong", "([BI)J", nullptr, $STATIC, $staticMethod(Bits, getLong, int64_t, $bytes*, int32_t)},
	{"getShort", "([BI)S", nullptr, $STATIC, $staticMethod(Bits, getShort, int16_t, $bytes*, int32_t)},
	{"putBoolean", "([BIZ)V", nullptr, $STATIC, $staticMethod(Bits, putBoolean, void, $bytes*, int32_t, bool)},
	{"putChar", "([BIC)V", nullptr, $STATIC, $staticMethod(Bits, putChar, void, $bytes*, int32_t, char16_t)},
	{"putDouble", "([BID)V", nullptr, $STATIC, $staticMethod(Bits, putDouble, void, $bytes*, int32_t, double)},
	{"putFloat", "([BIF)V", nullptr, $STATIC, $staticMethod(Bits, putFloat, void, $bytes*, int32_t, float)},
	{"putInt", "([BII)V", nullptr, $STATIC, $staticMethod(Bits, putInt, void, $bytes*, int32_t, int32_t)},
	{"putLong", "([BIJ)V", nullptr, $STATIC, $staticMethod(Bits, putLong, void, $bytes*, int32_t, int64_t)},
	{"putShort", "([BIS)V", nullptr, $STATIC, $staticMethod(Bits, putShort, void, $bytes*, int32_t, int16_t)},
	{}
};

$ClassInfo _Bits_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Bits",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bits_MethodInfo_
};

$Object* allocate$Bits($Class* clazz) {
	return $of($alloc(Bits));
}

void Bits::init$() {
}

bool Bits::getBoolean($bytes* b, int32_t off) {
	return $nc(b)->get(off) != 0;
}

char16_t Bits::getChar($bytes* b, int32_t off) {
	return (char16_t)(((int32_t)($nc(b)->get(off + 1) & (uint32_t)255)) + (b->get(off) << 8));
}

int16_t Bits::getShort($bytes* b, int32_t off) {
	return (int16_t)(((int32_t)($nc(b)->get(off + 1) & (uint32_t)255)) + (b->get(off) << 8));
}

int32_t Bits::getInt($bytes* b, int32_t off) {
	return ((int32_t)($nc(b)->get(off + 3) & (uint32_t)255)) + (((int32_t)(b->get(off + 2) & (uint32_t)255)) << 8) + (((int32_t)(b->get(off + 1) & (uint32_t)255)) << 16) + ((b->get(off)) << 24);
}

float Bits::getFloat($bytes* b, int32_t off) {
	return $Float::intBitsToFloat(getInt(b, off));
}

int64_t Bits::getLong($bytes* b, int32_t off) {
	return ((int64_t)($nc(b)->get(off + 7) & (uint64_t)(int64_t)255)) + (((int64_t)(b->get(off + 6) & (uint64_t)(int64_t)255)) << 8) + (((int64_t)(b->get(off + 5) & (uint64_t)(int64_t)255)) << 16) + (((int64_t)(b->get(off + 4) & (uint64_t)(int64_t)255)) << 24) + (((int64_t)(b->get(off + 3) & (uint64_t)(int64_t)255)) << 32) + (((int64_t)(b->get(off + 2) & (uint64_t)(int64_t)255)) << 40) + (((int64_t)(b->get(off + 1) & (uint64_t)(int64_t)255)) << 48) + (((int64_t)b->get(off)) << 56);
}

double Bits::getDouble($bytes* b, int32_t off) {
	return $Double::longBitsToDouble(getLong(b, off));
}

void Bits::putBoolean($bytes* b, int32_t off, bool val) {
	$nc(b)->set(off, (int8_t)(val ? 1 : 0));
}

void Bits::putChar($bytes* b, int32_t off, char16_t val) {
	$nc(b)->set(off + 1, (int8_t)(val));
	b->set(off, (int8_t)((int32_t)((uint32_t)val >> 8)));
}

void Bits::putShort($bytes* b, int32_t off, int16_t val) {
	$nc(b)->set(off + 1, (int8_t)(val));
	b->set(off, (int8_t)((int32_t)((uint32_t)val >> 8)));
}

void Bits::putInt($bytes* b, int32_t off, int32_t val) {
	$nc(b)->set(off + 3, (int8_t)(val));
	b->set(off + 2, (int8_t)((int32_t)((uint32_t)val >> 8)));
	b->set(off + 1, (int8_t)((int32_t)((uint32_t)val >> 16)));
	b->set(off, (int8_t)((int32_t)((uint32_t)val >> 24)));
}

void Bits::putFloat($bytes* b, int32_t off, float val) {
	putInt(b, off, $Float::floatToIntBits(val));
}

void Bits::putLong($bytes* b, int32_t off, int64_t val) {
	$nc(b)->set(off + 7, (int8_t)(val));
	b->set(off + 6, (int8_t)((int64_t)((uint64_t)val >> 8)));
	b->set(off + 5, (int8_t)((int64_t)((uint64_t)val >> 16)));
	b->set(off + 4, (int8_t)((int64_t)((uint64_t)val >> 24)));
	b->set(off + 3, (int8_t)((int64_t)((uint64_t)val >> 32)));
	b->set(off + 2, (int8_t)((int64_t)((uint64_t)val >> 40)));
	b->set(off + 1, (int8_t)((int64_t)((uint64_t)val >> 48)));
	b->set(off, (int8_t)((int64_t)((uint64_t)val >> 56)));
}

void Bits::putDouble($bytes* b, int32_t off, double val) {
	putLong(b, off, $Double::doubleToLongBits(val));
}

Bits::Bits() {
}

$Class* Bits::load$($String* name, bool initialize) {
	$loadClass(Bits, name, initialize, &_Bits_ClassInfo_, allocate$Bits);
	return class$;
}

$Class* Bits::class$ = nullptr;

	} // io
} // java