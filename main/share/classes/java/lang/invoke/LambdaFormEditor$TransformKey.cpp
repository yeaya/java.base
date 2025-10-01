#include <java/lang/invoke/LambdaFormEditor$TransformKey.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormEditor$Transform.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef PACKED_BYTE_MAX_LENGTH
#undef PACKED_BYTE_SIZE
#undef STRESS_TEST
#undef NO_BYTES
#undef PACKED_BYTE_MASK

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $LambdaFormEditor$Transform = ::java::lang::invoke::LambdaFormEditor$Transform;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaFormEditor$TransformKey_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaFormEditor$TransformKey, $assertionsDisabled)},
	{"packedBytes", "J", nullptr, $FINAL, $field(LambdaFormEditor$TransformKey, packedBytes$)},
	{"fullBytes", "[B", nullptr, $FINAL, $field(LambdaFormEditor$TransformKey, fullBytes$)},
	{"NO_BYTES", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LambdaFormEditor$TransformKey, NO_BYTES)},
	{"STRESS_TEST", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor$TransformKey, STRESS_TEST)},
	{"PACKED_BYTE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor$TransformKey, PACKED_BYTE_SIZE)},
	{"PACKED_BYTE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor$TransformKey, PACKED_BYTE_MASK)},
	{"PACKED_BYTE_MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor$TransformKey, PACKED_BYTE_MAX_LENGTH)},
	{}
};

$MethodInfo _LambdaFormEditor$TransformKey_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormEditor$TransformKey::*)(int64_t)>(&LambdaFormEditor$TransformKey::init$))},
	{"<init>", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormEditor$TransformKey::*)($bytes*)>(&LambdaFormEditor$TransformKey::init$))},
	{"<init>", "(J[B)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormEditor$TransformKey::*)(int64_t,$bytes*)>(&LambdaFormEditor$TransformKey::init$))},
	{"bval", "(I)B", nullptr, $PRIVATE | $STATIC, $method(static_cast<int8_t(*)(int32_t)>(&LambdaFormEditor$TransformKey::bval))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/invoke/LambdaFormEditor$TransformKey;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormEditor$TransformKey::*)(LambdaFormEditor$TransformKey*)>(&LambdaFormEditor$TransformKey::equals))},
	{"equals", "(Ljava/lang/invoke/LambdaFormEditor$Transform;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormEditor$TransformKey::*)($LambdaFormEditor$Transform*)>(&LambdaFormEditor$TransformKey::equals))},
	{"fullBytes", "([I)[B", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$bytes*(*)($ints*)>(&LambdaFormEditor$TransformKey::fullBytes))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inRange", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&LambdaFormEditor$TransformKey::inRange))},
	{"of", "(BI)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,int32_t)>(&LambdaFormEditor$TransformKey::of))},
	{"of", "(BII)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,int32_t,int32_t)>(&LambdaFormEditor$TransformKey::of))},
	{"of", "(BIII)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,int32_t,int32_t,int32_t)>(&LambdaFormEditor$TransformKey::of))},
	{"of", "(B[I)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,$ints*)>(&LambdaFormEditor$TransformKey::of))},
	{"of", "(BI[I)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,int32_t,$ints*)>(&LambdaFormEditor$TransformKey::of))},
	{"of", "(BII[B)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,int32_t,int32_t,$bytes*)>(&LambdaFormEditor$TransformKey::of))},
	{"ofBothArrays", "(B[I[B)Ljava/lang/invoke/LambdaFormEditor$TransformKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<LambdaFormEditor$TransformKey*(*)(int8_t,$ints*,$bytes*)>(&LambdaFormEditor$TransformKey::ofBothArrays))},
	{"packedBytes", "([B)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($bytes*)>(&LambdaFormEditor$TransformKey::packedBytes))},
	{"packedBytes", "(II)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&LambdaFormEditor$TransformKey::packedBytes))},
	{"packedBytes", "(III)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t,int32_t)>(&LambdaFormEditor$TransformKey::packedBytes))},
	{"packedBytes", "(IIII)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t,int32_t,int32_t)>(&LambdaFormEditor$TransformKey::packedBytes))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withResult", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaFormEditor$Transform;", nullptr, 0, $method(static_cast<$LambdaFormEditor$Transform*(LambdaFormEditor$TransformKey::*)($LambdaForm*)>(&LambdaFormEditor$TransformKey::withResult))},
	{}
};

$InnerClassInfo _LambdaFormEditor$TransformKey_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaFormEditor$TransformKey", "java.lang.invoke.LambdaFormEditor", "TransformKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _LambdaFormEditor$TransformKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaFormEditor$TransformKey",
	"java.lang.Object",
	nullptr,
	_LambdaFormEditor$TransformKey_FieldInfo_,
	_LambdaFormEditor$TransformKey_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaFormEditor$TransformKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaFormEditor"
};

$Object* allocate$LambdaFormEditor$TransformKey($Class* clazz) {
	return $of($alloc(LambdaFormEditor$TransformKey));
}

bool LambdaFormEditor$TransformKey::$assertionsDisabled = false;
$bytes* LambdaFormEditor$TransformKey::NO_BYTES = nullptr;

void LambdaFormEditor$TransformKey::init$(int64_t packedBytes) {
	this->packedBytes$ = packedBytes;
	$set(this, fullBytes$, nullptr);
}

void LambdaFormEditor$TransformKey::init$($bytes* fullBytes) {
	$set(this, fullBytes$, fullBytes);
	this->packedBytes$ = 0;
}

void LambdaFormEditor$TransformKey::init$(int64_t packedBytes, $bytes* fullBytes) {
	$set(this, fullBytes$, fullBytes);
	this->packedBytes$ = packedBytes;
}

int8_t LambdaFormEditor$TransformKey::bval(int32_t b) {
	$init(LambdaFormEditor$TransformKey);
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(((int32_t)(b & (uint32_t)255)) == b)) {
		$throwNew($AssertionError);
	}
	return (int8_t)b;
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t k, int32_t b1) {
	$init(LambdaFormEditor$TransformKey);
	int8_t b0 = bval(k);
	if (inRange(b0 | b1)) {
		return $new(LambdaFormEditor$TransformKey, packedBytes(b0, b1));
	} else {
		return $new(LambdaFormEditor$TransformKey, $(fullBytes($$new($ints, {
			(int32_t)b0,
			b1
		}))));
	}
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t b0, int32_t b1, int32_t b2) {
	$init(LambdaFormEditor$TransformKey);
	if (inRange((b0 | b1) | b2)) {
		return $new(LambdaFormEditor$TransformKey, packedBytes(b0, b1, b2));
	} else {
		return $new(LambdaFormEditor$TransformKey, $(fullBytes($$new($ints, {
			(int32_t)b0,
			b1,
			b2
		}))));
	}
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t b0, int32_t b1, int32_t b2, int32_t b3) {
	$init(LambdaFormEditor$TransformKey);
	if (inRange(((b0 | b1) | b2) | b3)) {
		return $new(LambdaFormEditor$TransformKey, packedBytes(b0, b1, b2, b3));
	} else {
		return $new(LambdaFormEditor$TransformKey, $(fullBytes($$new($ints, {
			(int32_t)b0,
			b1,
			b2,
			b3
		}))));
	}
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t kind, $ints* b123) {
	$init(LambdaFormEditor$TransformKey);
	return ofBothArrays(kind, b123, LambdaFormEditor$TransformKey::NO_BYTES);
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t kind, int32_t b1, $ints* b23456) {
	$init(LambdaFormEditor$TransformKey);
	$var($bytes, fullBytes, $new($bytes, $nc(b23456)->length + 2));
	fullBytes->set(0, kind);
	fullBytes->set(1, bval(b1));
	for (int32_t i = 0; i < b23456->length; ++i) {
		fullBytes->set(i + 2, LambdaFormEditor$TransformKey::bval(b23456->get(i)));
	}
	int64_t packedBytes = LambdaFormEditor$TransformKey::packedBytes(fullBytes);
	if (packedBytes != 0) {
		return $new(LambdaFormEditor$TransformKey, packedBytes);
	} else {
		return $new(LambdaFormEditor$TransformKey, fullBytes);
	}
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::of(int8_t kind, int32_t b1, int32_t b2, $bytes* b345) {
	$init(LambdaFormEditor$TransformKey);
	return ofBothArrays(kind, $$new($ints, {
		b1,
		b2
	}), b345);
}

LambdaFormEditor$TransformKey* LambdaFormEditor$TransformKey::ofBothArrays(int8_t kind, $ints* b123, $bytes* b456) {
	$init(LambdaFormEditor$TransformKey);
	$var($bytes, fullBytes, $new($bytes, 1 + $nc(b123)->length + $nc(b456)->length));
	int32_t i = 0;
	fullBytes->set(i++, bval(kind));
	{
		$var($ints, arr$, b123);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t bv = arr$->get(i$);
			{
				fullBytes->set(i++, bval(bv));
			}
		}
	}
	{
		$var($bytes, arr$, b456);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t bv = arr$->get(i$);
			{
				fullBytes->set(i++, bv);
			}
		}
	}
	int64_t packedBytes = LambdaFormEditor$TransformKey::packedBytes(fullBytes);
	if (packedBytes != 0) {
		return $new(LambdaFormEditor$TransformKey, packedBytes);
	} else {
		return $new(LambdaFormEditor$TransformKey, fullBytes);
	}
}

int64_t LambdaFormEditor$TransformKey::packedBytes($bytes* bytes) {
	$init(LambdaFormEditor$TransformKey);
	if (!inRange($nc(bytes)->get(0)) || $nc(bytes)->length > LambdaFormEditor$TransformKey::PACKED_BYTE_MAX_LENGTH) {
		return 0;
	}
	int64_t pb = 0;
	int32_t bitset = 0;
	for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
		int32_t b = (int32_t)(bytes->get(i) & (uint32_t)255);
		bitset |= b;
		pb |= $sl((int64_t)b, i * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE);
	}
	if (!inRange(bitset)) {
		return 0;
	}
	return pb;
}

int64_t LambdaFormEditor$TransformKey::packedBytes(int32_t b0, int32_t b1) {
	$init(LambdaFormEditor$TransformKey);
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(inRange(b0 | b1))) {
		$throwNew($AssertionError);
	}
	return (($sl(b0, 0 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)) | ($sl(b1, 1 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)));
}

int64_t LambdaFormEditor$TransformKey::packedBytes(int32_t b0, int32_t b1, int32_t b2) {
	$init(LambdaFormEditor$TransformKey);
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(inRange((b0 | b1) | b2))) {
		$throwNew($AssertionError);
	}
	return ((($sl(b0, 0 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)) | ($sl(b1, 1 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE))) | ($sl(b2, 2 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)));
}

int64_t LambdaFormEditor$TransformKey::packedBytes(int32_t b0, int32_t b1, int32_t b2, int32_t b3) {
	$init(LambdaFormEditor$TransformKey);
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(inRange(((b0 | b1) | b2) | b3))) {
		$throwNew($AssertionError);
	}
	return (((($sl(b0, 0 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)) | ($sl(b1, 1 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE))) | ($sl(b2, 2 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE))) | ($sl(b3, 3 * LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE)));
}

bool LambdaFormEditor$TransformKey::inRange(int32_t bitset) {
	$init(LambdaFormEditor$TransformKey);
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(((int32_t)(bitset & (uint32_t)255)) == bitset)) {
		$throwNew($AssertionError);
	}
	return (((int32_t)(bitset & (uint32_t)~LambdaFormEditor$TransformKey::PACKED_BYTE_MASK)) == 0);
}

$bytes* LambdaFormEditor$TransformKey::fullBytes($ints* byteValues) {
	$init(LambdaFormEditor$TransformKey);
	$var($bytes, bytes, $new($bytes, $nc(byteValues)->length));
	int32_t i = 0;
	{
		$var($ints, arr$, byteValues);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t bv = arr$->get(i$);
			{
				bytes->set(i++, bval(bv));
			}
		}
	}
	if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(packedBytes(bytes) == 0)) {
		$throwNew($AssertionError);
	}
	return bytes;
}

$LambdaFormEditor$Transform* LambdaFormEditor$TransformKey::withResult($LambdaForm* result) {
	return $new($LambdaFormEditor$Transform, this->packedBytes$, this->fullBytes$, result);
}

$String* LambdaFormEditor$TransformKey::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	int64_t bits = this->packedBytes$;
	if (bits != 0) {
		buf->append("("_s);
		while (bits != 0) {
			buf->append((int64_t)(bits & (uint64_t)(int64_t)LambdaFormEditor$TransformKey::PACKED_BYTE_MASK));
			$usrAssign(bits, LambdaFormEditor$TransformKey::PACKED_BYTE_SIZE);
			if (bits != 0) {
				buf->append(","_s);
			}
		}
		buf->append(")"_s);
	}
	if (this->fullBytes$ != nullptr) {
		buf->append("unpacked"_s);
		buf->append($($Arrays::toString(this->fullBytes$)));
	}
	return buf->toString();
}

bool LambdaFormEditor$TransformKey::equals(Object$* obj) {
	if ($instanceOf(LambdaFormEditor$TransformKey, obj)) {
		return equals($cast(LambdaFormEditor$TransformKey, obj));
	}
	return $instanceOf($LambdaFormEditor$Transform, obj) && equals($cast($LambdaFormEditor$Transform, obj));
}

bool LambdaFormEditor$TransformKey::equals(LambdaFormEditor$TransformKey* that) {
	return this->packedBytes$ == $nc(that)->packedBytes$ && $Arrays::equals(this->fullBytes$, that->fullBytes$);
}

bool LambdaFormEditor$TransformKey::equals($LambdaFormEditor$Transform* that) {
	return this->packedBytes$ == $nc(that)->packedBytes && $Arrays::equals(this->fullBytes$, that->fullBytes);
}

int32_t LambdaFormEditor$TransformKey::hashCode() {
	if (this->packedBytes$ != 0) {
		if (!LambdaFormEditor$TransformKey::$assertionsDisabled && !(this->fullBytes$ == nullptr)) {
			$throwNew($AssertionError);
		}
		return $Long::hashCode(this->packedBytes$);
	}
	return $Arrays::hashCode(this->fullBytes$);
}

void clinit$LambdaFormEditor$TransformKey($Class* class$) {
	$load($LambdaFormEditor);
	LambdaFormEditor$TransformKey::$assertionsDisabled = !$LambdaFormEditor::class$->desiredAssertionStatus();
	$assignStatic(LambdaFormEditor$TransformKey::NO_BYTES, $new($bytes, 0));
}

LambdaFormEditor$TransformKey::LambdaFormEditor$TransformKey() {
}

$Class* LambdaFormEditor$TransformKey::load$($String* name, bool initialize) {
	$loadClass(LambdaFormEditor$TransformKey, name, initialize, &_LambdaFormEditor$TransformKey_ClassInfo_, clinit$LambdaFormEditor$TransformKey, allocate$LambdaFormEditor$TransformKey);
	return class$;
}

$Class* LambdaFormEditor$TransformKey::class$ = nullptr;

		} // invoke
	} // lang
} // java