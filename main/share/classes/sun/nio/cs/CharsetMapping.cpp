#include <sun/nio/cs/CharsetMapping.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <sun/nio/cs/CharsetMapping$1.h>
#include <sun/nio/cs/CharsetMapping$2.h>
#include <sun/nio/cs/CharsetMapping$3.h>
#include <sun/nio/cs/CharsetMapping$4.h>
#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <jcpp.h>

#undef MAP_SINGLEBYTE
#undef MAP_COMPOSITE
#undef MAP_DOUBLEBYTE1
#undef MAP_DOUBLEBYTE2
#undef MAP_SUPPLEMENT_C2B
#undef MAP_INDEXC2B
#undef UNMAPPABLE_ENCODING
#undef UNMAPPABLE_DECODING
#undef MAP_SUPPLEMENT
#undef N

using $CharsetMapping$EntryArray = $Array<::sun::nio::cs::CharsetMapping$Entry>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $CharsetMapping$1 = ::sun::nio::cs::CharsetMapping$1;
using $CharsetMapping$2 = ::sun::nio::cs::CharsetMapping$2;
using $CharsetMapping$3 = ::sun::nio::cs::CharsetMapping$3;
using $CharsetMapping$4 = ::sun::nio::cs::CharsetMapping$4;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _CharsetMapping_FieldInfo_[] = {
	{"UNMAPPABLE_DECODING", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharsetMapping, UNMAPPABLE_DECODING)},
	{"UNMAPPABLE_ENCODING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharsetMapping, UNMAPPABLE_ENCODING)},
	{"b2cSB", "[C", nullptr, 0, $field(CharsetMapping, b2cSB)},
	{"b2cDB1", "[C", nullptr, 0, $field(CharsetMapping, b2cDB1)},
	{"b2cDB2", "[C", nullptr, 0, $field(CharsetMapping, b2cDB2)},
	{"b2Min", "I", nullptr, 0, $field(CharsetMapping, b2Min)},
	{"b2Max", "I", nullptr, 0, $field(CharsetMapping, b2Max)},
	{"b1MinDB1", "I", nullptr, 0, $field(CharsetMapping, b1MinDB1)},
	{"b1MaxDB1", "I", nullptr, 0, $field(CharsetMapping, b1MaxDB1)},
	{"b1MinDB2", "I", nullptr, 0, $field(CharsetMapping, b1MinDB2)},
	{"b1MaxDB2", "I", nullptr, 0, $field(CharsetMapping, b1MaxDB2)},
	{"dbSegSize", "I", nullptr, 0, $field(CharsetMapping, dbSegSize)},
	{"c2b", "[C", nullptr, 0, $field(CharsetMapping, c2b)},
	{"c2bIndex", "[C", nullptr, 0, $field(CharsetMapping, c2bIndex)},
	{"b2cSupp", "[C", nullptr, 0, $field(CharsetMapping, b2cSupp)},
	{"c2bSupp", "[C", nullptr, 0, $field(CharsetMapping, c2bSupp)},
	{"b2cComp", "[Lsun/nio/cs/CharsetMapping$Entry;", nullptr, 0, $field(CharsetMapping, b2cComp)},
	{"c2bComp", "[Lsun/nio/cs/CharsetMapping$Entry;", nullptr, 0, $field(CharsetMapping, c2bComp)},
	{"comparatorBytes", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;", $STATIC, $staticField(CharsetMapping, comparatorBytes)},
	{"comparatorCP", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;", $STATIC, $staticField(CharsetMapping, comparatorCP)},
	{"comparatorComp", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;", $STATIC, $staticField(CharsetMapping, comparatorComp)},
	{"MAP_SINGLEBYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_SINGLEBYTE)},
	{"MAP_DOUBLEBYTE1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_DOUBLEBYTE1)},
	{"MAP_DOUBLEBYTE2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_DOUBLEBYTE2)},
	{"MAP_SUPPLEMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_SUPPLEMENT)},
	{"MAP_SUPPLEMENT_C2B", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_SUPPLEMENT_C2B)},
	{"MAP_COMPOSITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_COMPOSITE)},
	{"MAP_INDEXC2B", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharsetMapping, MAP_INDEXC2B)},
	{"off", "I", nullptr, 0, $field(CharsetMapping, off)},
	{"bb", "[B", nullptr, 0, $field(CharsetMapping, bb)},
	{}
};

$MethodInfo _CharsetMapping_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharsetMapping::*)()>(&CharsetMapping::init$))},
	{"decodeComposite", "(Lsun/nio/cs/CharsetMapping$Entry;[C)[C", nullptr, $PUBLIC},
	{"decodeDouble", "(II)C", nullptr, $PUBLIC},
	{"decodeSingle", "(I)C", nullptr, $PUBLIC},
	{"decodeSurrogate", "(I[C)[C", nullptr, $PUBLIC},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{"encodeComposite", "(Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $PUBLIC},
	{"encodeSurrogate", "(CC)I", nullptr, $PUBLIC},
	{"findBytes", "([Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($CharsetMapping$EntryArray*,$CharsetMapping$Entry*)>(&CharsetMapping::findBytes))},
	{"findCP", "([Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($CharsetMapping$EntryArray*,$CharsetMapping$Entry*)>(&CharsetMapping::findCP))},
	{"findComp", "([Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($CharsetMapping$EntryArray*,$CharsetMapping$Entry*)>(&CharsetMapping::findComp))},
	{"get", "(Ljava/io/InputStream;)Lsun/nio/cs/CharsetMapping;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CharsetMapping*(*)($InputStream*)>(&CharsetMapping::get))},
	{"isCompositeBase", "(Lsun/nio/cs/CharsetMapping$Entry;)Z", nullptr, $PUBLIC},
	{"load", "(Ljava/io/InputStream;)Lsun/nio/cs/CharsetMapping;", nullptr, 0},
	{"readCOMPOSITE", "()V", nullptr, 0},
	{"readCharArray", "()[C", nullptr, $PRIVATE, $method(static_cast<$chars*(CharsetMapping::*)()>(&CharsetMapping::readCharArray))},
	{"readDB", "(III)[C", nullptr, 0},
	{"readDOUBLEBYTE1", "()V", nullptr, 0},
	{"readDOUBLEBYTE2", "()V", nullptr, 0},
	{"readINDEXC2B", "()V", nullptr, 0},
	{"readNBytes", "(Ljava/io/InputStream;[BI)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)($InputStream*,$bytes*,int32_t)>(&CharsetMapping::readNBytes)), "java.io.IOException"},
	{"readSINGLEBYTE", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _CharsetMapping_InnerClassesInfo_[] = {
	{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
	{"sun.nio.cs.CharsetMapping$4", nullptr, nullptr, 0},
	{"sun.nio.cs.CharsetMapping$3", nullptr, nullptr, 0},
	{"sun.nio.cs.CharsetMapping$2", nullptr, nullptr, 0},
	{"sun.nio.cs.CharsetMapping$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CharsetMapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.CharsetMapping",
	"java.lang.Object",
	nullptr,
	_CharsetMapping_FieldInfo_,
	_CharsetMapping_MethodInfo_,
	nullptr,
	nullptr,
	_CharsetMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.CharsetMapping$Entry,sun.nio.cs.CharsetMapping$4,sun.nio.cs.CharsetMapping$3,sun.nio.cs.CharsetMapping$2,sun.nio.cs.CharsetMapping$1"
};

$Object* allocate$CharsetMapping($Class* clazz) {
	return $of($alloc(CharsetMapping));
}

$Comparator* CharsetMapping::comparatorBytes = nullptr;
$Comparator* CharsetMapping::comparatorCP = nullptr;
$Comparator* CharsetMapping::comparatorComp = nullptr;

void CharsetMapping::init$() {
	this->off = 0;
}

char16_t CharsetMapping::decodeSingle(int32_t b) {
	return $nc(this->b2cSB)->get(b);
}

char16_t CharsetMapping::decodeDouble(int32_t b1, int32_t b2) {
	if (b2 >= this->b2Min && b2 < this->b2Max) {
		b2 -= this->b2Min;
		if (b1 >= this->b1MinDB1 && b1 <= this->b1MaxDB1) {
			b1 -= this->b1MinDB1;
			return $nc(this->b2cDB1)->get(b1 * this->dbSegSize + b2);
		}
		if (b1 >= this->b1MinDB2 && b1 <= this->b1MaxDB2) {
			b1 -= this->b1MinDB2;
			return $nc(this->b2cDB2)->get(b1 * this->dbSegSize + b2);
		}
	}
	return CharsetMapping::UNMAPPABLE_DECODING;
}

$chars* CharsetMapping::decodeSurrogate(int32_t db, $chars* cc) {
	int32_t end = $nc(this->b2cSupp)->length / 2;
	int32_t i = $Arrays::binarySearch(this->b2cSupp, 0, end, (char16_t)db);
	if (i >= 0) {
		$Character::toChars($nc(this->b2cSupp)->get(end + i) + 0x00020000, cc, 0);
		return cc;
	}
	return nullptr;
}

$chars* CharsetMapping::decodeComposite($CharsetMapping$Entry* comp, $chars* cc) {
	int32_t i = findBytes(this->b2cComp, comp);
	if (i >= 0) {
		$nc(cc)->set(0, (char16_t)$nc($nc(this->b2cComp)->get(i))->cp);
		cc->set(1, (char16_t)$nc($nc(this->b2cComp)->get(i))->cp2);
		return cc;
	}
	return nullptr;
}

int32_t CharsetMapping::encodeChar(char16_t ch) {
	int32_t index = $nc(this->c2bIndex)->get(ch >> 8);
	if (index == 0x0000FFFF) {
		return CharsetMapping::UNMAPPABLE_ENCODING;
	}
	return $nc(this->c2b)->get(index + ((int32_t)(ch & (uint32_t)255)));
}

int32_t CharsetMapping::encodeSurrogate(char16_t hi, char16_t lo) {
	int32_t cp = $Character::toCodePoint(hi, lo);
	if (cp < 0x00020000 || cp >= 0x00030000) {
		return CharsetMapping::UNMAPPABLE_ENCODING;
	}
	int32_t end = $nc(this->c2bSupp)->length / 2;
	int32_t i = $Arrays::binarySearch(this->c2bSupp, 0, end, (char16_t)cp);
	if (i >= 0) {
		return $nc(this->c2bSupp)->get(end + i);
	}
	return CharsetMapping::UNMAPPABLE_ENCODING;
}

bool CharsetMapping::isCompositeBase($CharsetMapping$Entry* comp) {
	if ($nc(comp)->cp <= 12791 && comp->cp >= 230) {
		return (findCP(this->c2bComp, comp) >= 0);
	}
	return false;
}

int32_t CharsetMapping::encodeComposite($CharsetMapping$Entry* comp) {
	int32_t i = findComp(this->c2bComp, comp);
	if (i >= 0) {
		return $nc($nc(this->c2bComp)->get(i))->bs;
	}
	return CharsetMapping::UNMAPPABLE_ENCODING;
}

CharsetMapping* CharsetMapping::get($InputStream* is) {
	$init(CharsetMapping);
	$beforeCallerSensitive();
	return $cast(CharsetMapping, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CharsetMapping$1, is))));
}

int32_t CharsetMapping::findBytes($CharsetMapping$EntryArray* a, $CharsetMapping$Entry* k) {
	$init(CharsetMapping);
	return $Arrays::binarySearch(a, 0, $nc(a)->length, k, CharsetMapping::comparatorBytes);
}

int32_t CharsetMapping::findCP($CharsetMapping$EntryArray* a, $CharsetMapping$Entry* k) {
	$init(CharsetMapping);
	return $Arrays::binarySearch(a, 0, $nc(a)->length, k, CharsetMapping::comparatorCP);
}

int32_t CharsetMapping::findComp($CharsetMapping$EntryArray* a, $CharsetMapping$Entry* k) {
	$init(CharsetMapping);
	return $Arrays::binarySearch(a, 0, $nc(a)->length, k, CharsetMapping::comparatorComp);
}

bool CharsetMapping::readNBytes($InputStream* in, $bytes* bb, int32_t N) {
	$init(CharsetMapping);
	int32_t off = 0;
	while (N > 0) {
		int32_t n = $nc(in)->read(bb, off, N);
		if (n == -1) {
			return false;
		}
		N = N - n;
		off += n;
	}
	return true;
}

$chars* CharsetMapping::readCharArray() {
	int32_t var$0 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	int32_t size = var$0 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	$var($chars, cc, $new($chars, size));
	for (int32_t i = 0; i < size; ++i) {
		int32_t var$1 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
		cc->set(i, (char16_t)(var$1 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255))));
	}
	return cc;
}

void CharsetMapping::readSINGLEBYTE() {
	$var($chars, map, readCharArray());
	for (int32_t i = 0; i < $nc(map)->length; ++i) {
		char16_t c = map->get(i);
		if (c != CharsetMapping::UNMAPPABLE_DECODING) {
			$nc(this->c2b)->set($nc(this->c2bIndex)->get(c >> 8) + ((int32_t)(c & (uint32_t)255)), (char16_t)i);
		}
	}
	$set(this, b2cSB, map);
}

void CharsetMapping::readINDEXC2B() {
	$var($chars, map, readCharArray());
	for (int32_t i = $nc(map)->length - 1; i >= 0; --i) {
		if (this->c2b == nullptr && map->get(i) != -1) {
			$set(this, c2b, $new($chars, map->get(i) + 256));
			$Arrays::fill(this->c2b, (char16_t)CharsetMapping::UNMAPPABLE_ENCODING);
			break;
		}
	}
	$set(this, c2bIndex, map);
}

$chars* CharsetMapping::readDB(int32_t b1Min, int32_t b2Min, int32_t segSize) {
	$var($chars, map, readCharArray());
	for (int32_t i = 0; i < $nc(map)->length; ++i) {
		char16_t c = map->get(i);
		if (c != CharsetMapping::UNMAPPABLE_DECODING) {
			int32_t b1 = $div(i, segSize);
			int32_t b2 = $mod(i, segSize);
			int32_t b = (b1 + b1Min) * 256 + (b2 + b2Min);
			$nc(this->c2b)->set($nc(this->c2bIndex)->get(c >> 8) + ((int32_t)(c & (uint32_t)255)), (char16_t)(b));
		}
	}
	return map;
}

void CharsetMapping::readDOUBLEBYTE1() {
	int32_t var$0 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b1MinDB1 = var$0 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$1 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b1MaxDB1 = var$1 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$2 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b2Min = var$2 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$3 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b2Max = var$3 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	this->dbSegSize = this->b2Max - this->b2Min + 1;
	$set(this, b2cDB1, readDB(this->b1MinDB1, this->b2Min, this->dbSegSize));
}

void CharsetMapping::readDOUBLEBYTE2() {
	int32_t var$0 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b1MinDB2 = var$0 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$1 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b1MaxDB2 = var$1 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$2 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b2Min = var$2 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	int32_t var$3 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
	this->b2Max = var$3 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
	this->dbSegSize = this->b2Max - this->b2Min + 1;
	$set(this, b2cDB2, readDB(this->b1MinDB2, this->b2Min, this->dbSegSize));
}

void CharsetMapping::readCOMPOSITE() {
	$var($chars, map, readCharArray());
	int32_t mLen = $nc(map)->length / 3;
	$set(this, b2cComp, $new($CharsetMapping$EntryArray, mLen));
	$set(this, c2bComp, $new($CharsetMapping$EntryArray, mLen));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < mLen; ++i) {
			$var($CharsetMapping$Entry, m, $new($CharsetMapping$Entry));
			m->bs = map->get(j++);
			m->cp = map->get(j++);
			m->cp2 = map->get(j++);
			$nc(this->b2cComp)->set(i, m);
			$nc(this->c2bComp)->set(i, m);
		}
	}
	$Arrays::sort(this->c2bComp, 0, $nc(this->c2bComp)->length, CharsetMapping::comparatorComp);
}

CharsetMapping* CharsetMapping::load($InputStream* in) {
	try {
		int32_t var$2 = (((int32_t)($nc(in)->read() & (uint32_t)255)) << 24);
		int32_t var$1 = var$2 | (((int32_t)(in->read() & (uint32_t)255)) << 16);
		int32_t var$0 = var$1 | (((int32_t)(in->read() & (uint32_t)255)) << 8);
		int32_t len = var$0 | ((int32_t)(in->read() & (uint32_t)255));
		$set(this, bb, $new($bytes, len));
		this->off = 0;
		if (!readNBytes(in, this->bb, len)) {
			$throwNew($RuntimeException, "Corrupted data file"_s);
		}
		in->close();
		while (this->off < len) {
			int32_t var$3 = (((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255)) << 8);
			int32_t type = var$3 | ((int32_t)($nc(this->bb)->get(this->off++) & (uint32_t)255));
			switch (type) {
			case CharsetMapping::MAP_INDEXC2B:
				{
					readINDEXC2B();
					break;
				}
			case CharsetMapping::MAP_SINGLEBYTE:
				{
					readSINGLEBYTE();
					break;
				}
			case CharsetMapping::MAP_DOUBLEBYTE1:
				{
					readDOUBLEBYTE1();
					break;
				}
			case CharsetMapping::MAP_DOUBLEBYTE2:
				{
					readDOUBLEBYTE2();
					break;
				}
			case CharsetMapping::MAP_SUPPLEMENT:
				{
					$set(this, b2cSupp, readCharArray());
					break;
				}
			case CharsetMapping::MAP_SUPPLEMENT_C2B:
				{
					$set(this, c2bSupp, readCharArray());
					break;
				}
			case CharsetMapping::MAP_COMPOSITE:
				{
					readCOMPOSITE();
					break;
				}
			default:
				{
					$throwNew($RuntimeException, "Corrupted data file"_s);
				}
			}
		}
		$set(this, bb, nullptr);
		return this;
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		x->printStackTrace();
		return nullptr;
	}
	$shouldNotReachHere();
}

void clinit$CharsetMapping($Class* class$) {
	$assignStatic(CharsetMapping::comparatorBytes, $new($CharsetMapping$2));
	$assignStatic(CharsetMapping::comparatorCP, $new($CharsetMapping$3));
	$assignStatic(CharsetMapping::comparatorComp, $new($CharsetMapping$4));
}

CharsetMapping::CharsetMapping() {
}

$Class* CharsetMapping::load$($String* name, bool initialize) {
	$loadClass(CharsetMapping, name, initialize, &_CharsetMapping_ClassInfo_, clinit$CharsetMapping, allocate$CharsetMapping);
	return class$;
}

$Class* CharsetMapping::class$ = nullptr;

		} // cs
	} // nio
} // sun