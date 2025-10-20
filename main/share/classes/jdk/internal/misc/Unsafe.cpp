#include <jdk/internal/misc/Unsafe.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/misc/UnsafeConstants.h>
#include <jdk/internal/ref/Cleaner.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include <java/lang/Thread.h>
#include <java/lang/Machine.h>
#include <java/lang/fence.h>

#include <atomic>
#include <string.h>
#include <stdlib.h>

using namespace ::java::lang;

#undef ADDRESS_SIZE
#undef ADDRESS_SIZE0
#undef ARRAY_BOOLEAN_BASE_OFFSET
#undef ARRAY_BOOLEAN_INDEX_SCALE
#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE
#undef ARRAY_CHAR_BASE_OFFSET
#undef ARRAY_CHAR_INDEX_SCALE
#undef ARRAY_DOUBLE_BASE_OFFSET
#undef ARRAY_DOUBLE_INDEX_SCALE
#undef ARRAY_FLOAT_BASE_OFFSET
#undef ARRAY_FLOAT_INDEX_SCALE
#undef ARRAY_INT_BASE_OFFSET
#undef ARRAY_INT_INDEX_SCALE
#undef ARRAY_LONG_BASE_OFFSET
#undef ARRAY_LONG_INDEX_SCALE
#undef ARRAY_OBJECT_BASE_OFFSET
#undef ARRAY_OBJECT_INDEX_SCALE
#undef ARRAY_SHORT_BASE_OFFSET
#undef ARRAY_SHORT_INDEX_SCALE
#undef BIG_ENDIAN
#undef DATA_CACHE_LINE_FLUSH_SIZE
#undef INVALID_FIELD_OFFSET
#undef PAGE_SIZE
#undef TYPE
#undef UNALIGNED_ACCESS

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $UnsafeConstants = ::jdk::internal::misc::UnsafeConstants;
using $Cleaner = ::jdk::internal::ref::Cleaner;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace jdk {
	namespace internal {
		namespace misc {

$CompoundAttribute _Unsafe_MethodAnnotations_allocateInstance3[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_allocateUninitializedArray08[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_bool2byte13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_byte2bool14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_c2s15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeBoolean24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeBooleanAcquire25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeBooleanRelease26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeByte27[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeByteAcquire28[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeByteRelease29[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeChar30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeCharAcquire31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeCharRelease32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeDouble33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeDoubleAcquire34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeDoubleRelease35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeFloat36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeFloatAcquire37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeFloatRelease38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeInt39[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeIntAcquire40[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeIntRelease41[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeLong42[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeLongAcquire43[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeLongRelease44[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$0[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeObject45[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$0},
	{}
};

$NamedAttribute Unsafe_Attribute_var$1[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeObjectAcquire46[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$1},
	{}
};

$NamedAttribute Unsafe_Attribute_var$2[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeObjectRelease47[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$2},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeReference48[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeReferenceAcquire49[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeReferenceRelease50[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeShort51[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeShortAcquire52[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndExchangeShortRelease53[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetBoolean54[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetByte55[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetChar56[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetDouble57[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetFloat58[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetInt59[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetLong60[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$3[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetObject61[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$3},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetReference62[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_compareAndSetShort63[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_copyMemory070[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_fullFence85[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAddress86[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAddress87[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddByte88[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddByteAcquire89[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddByteRelease90[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddChar91[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddCharAcquire92[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddCharRelease93[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddDouble94[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddDoubleAcquire95[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddDoubleRelease96[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddFloat97[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddFloatAcquire98[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddFloatRelease99[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddInt100[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddIntAcquire101[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddIntRelease102[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddLong103[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddLongAcquire104[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddLongRelease105[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddShort106[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddShortAcquire107[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndAddShortRelease108[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndBoolean109[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndBooleanAcquire110[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndBooleanRelease111[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndByte112[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndByteAcquire113[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndByteRelease114[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndChar115[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndCharAcquire116[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndCharRelease117[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndInt118[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndIntAcquire119[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndIntRelease120[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndLong121[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndLongAcquire122[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndLongRelease123[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndShort124[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndShortAcquire125[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseAndShortRelease126[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrBoolean127[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrBooleanAcquire128[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrBooleanRelease129[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrByte130[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrByteAcquire131[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrByteRelease132[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrChar133[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrCharAcquire134[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrCharRelease135[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrInt136[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrIntAcquire137[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrIntRelease138[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrLong139[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrLongAcquire140[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrLongRelease141[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrShort142[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrShortAcquire143[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseOrShortRelease144[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorBoolean145[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorBooleanAcquire146[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorBooleanRelease147[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorByte148[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorByteAcquire149[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorByteRelease150[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorChar151[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorCharAcquire152[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorCharRelease153[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorInt154[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorIntAcquire155[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorIntRelease156[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorLong157[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorLongAcquire158[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorLongRelease159[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorShort160[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorShortAcquire161[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndBitwiseXorShortRelease162[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetBoolean163[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetBooleanAcquire164[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetBooleanRelease165[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetByte166[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetByteAcquire167[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetByteRelease168[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetChar169[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetCharAcquire170[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetCharRelease171[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetDouble172[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetDoubleAcquire173[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetDoubleRelease174[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetFloat175[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetFloatAcquire176[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetFloatRelease177[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetInt178[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetIntAcquire179[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetIntRelease180[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetLong181[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetLongAcquire182[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetLongRelease183[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$4[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetObject184[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$4},
	{}
};

$NamedAttribute Unsafe_Attribute_var$5[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetObjectAcquire185[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$5},
	{}
};

$NamedAttribute Unsafe_Attribute_var$6[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetObjectRelease186[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$6},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetReference187[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetReferenceAcquire188[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetReferenceRelease189[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetShort190[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetShortAcquire191[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getAndSetShortRelease192[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBoolean193[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBooleanAcquire194[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBooleanOpaque195[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getBooleanVolatile196[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByte197[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByte198[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByteAcquire199[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByteOpaque200[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getByteVolatile201[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getChar202[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getChar203[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getCharAcquire204[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getCharOpaque205[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getCharUnaligned206[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getCharVolatile208[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDouble209[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDouble210[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDoubleAcquire211[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDoubleOpaque212[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getDoubleVolatile213[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloat214[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloat215[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloatAcquire216[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloatOpaque217[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getFloatVolatile218[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getInt219[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getInt220[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getIntAcquire221[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getIntOpaque222[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getIntUnaligned223[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getIntVolatile225[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLong228[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLong229[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLongAcquire230[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLongOpaque231[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLongUnaligned232[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getLongVolatile234[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$7[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObject235[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$7},
	{}
};

$NamedAttribute Unsafe_Attribute_var$8[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObjectAcquire236[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$8},
	{}
};

$NamedAttribute Unsafe_Attribute_var$9[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObjectOpaque237[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$9},
	{}
};

$NamedAttribute Unsafe_Attribute_var$10[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getObjectVolatile238[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$10},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getReference239[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getReferenceAcquire240[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getReferenceOpaque241[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getReferenceVolatile242[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShort243[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShort244[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShortAcquire245[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShortOpaque246[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShortUnaligned247[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_getShortVolatile249[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_loadFence257[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_park270[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putAddress275[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putAddress276[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBoolean277[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBooleanOpaque278[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBooleanRelease279[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putBooleanVolatile280[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByte281[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByte282[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByteOpaque283[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByteRelease284[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putByteVolatile285[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putChar286[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putChar287[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putCharOpaque288[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putCharRelease289[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putCharUnaligned290[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putCharVolatile292[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDouble293[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDouble294[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDoubleOpaque295[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDoubleRelease296[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putDoubleVolatile297[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloat298[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloat299[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloatOpaque300[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloatRelease301[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putFloatVolatile302[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putInt303[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putInt304[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putIntOpaque305[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putIntRelease308[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putIntUnaligned309[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putIntVolatile311[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLong312[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLong313[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLongOpaque314[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLongRelease318[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLongUnaligned319[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putLongVolatile321[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$11[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObject322[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$11},
	{}
};

$NamedAttribute Unsafe_Attribute_var$12[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObjectOpaque323[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$12},
	{}
};

$NamedAttribute Unsafe_Attribute_var$13[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObjectRelease324[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$13},
	{}
};

$NamedAttribute Unsafe_Attribute_var$14[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putObjectVolatile325[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$14},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putReference326[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putReferenceOpaque327[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putReferenceRelease328[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putReferenceVolatile329[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShort330[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShort331[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShortOpaque332[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShortRelease334[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShortUnaligned335[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_putShortVolatile337[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_s2c342[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_storeFence353[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_unpark364[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetBoolean365[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetBooleanAcquire366[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetBooleanPlain367[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetBooleanRelease368[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetByte369[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetByteAcquire370[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetBytePlain371[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetByteRelease372[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetChar373[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetCharAcquire374[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetCharPlain375[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetCharRelease376[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetDouble377[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetDoubleAcquire378[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetDoublePlain379[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetDoubleRelease380[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetFloat381[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetFloatAcquire382[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetFloatPlain383[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetFloatRelease384[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetInt385[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetIntAcquire386[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetIntPlain387[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetIntRelease388[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetLong389[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetLongAcquire390[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetLongPlain391[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetLongRelease392[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Unsafe_Attribute_var$15[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetObject393[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$15},
	{}
};

$NamedAttribute Unsafe_Attribute_var$16[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetObjectAcquire394[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$16},
	{}
};

$NamedAttribute Unsafe_Attribute_var$17[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetObjectPlain395[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$17},
	{}
};

$NamedAttribute Unsafe_Attribute_var$18[] = {
	{"since", 's', "12"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetObjectRelease396[] = {
	{"Ljava/lang/Deprecated;", Unsafe_Attribute_var$18},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetReference397[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetReferenceAcquire398[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetReferencePlain399[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetReferenceRelease400[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetShort401[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetShortAcquire402[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetShortPlain403[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_weakCompareAndSetShortRelease404[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_writeback0405[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_writebackPostSync0407[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Unsafe_MethodAnnotations_writebackPreSync0408[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Unsafe_FieldInfo_[] = {
	{"theUnsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsafe, theUnsafe)},
	{"INVALID_FIELD_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Unsafe, INVALID_FIELD_OFFSET)},
	{"ARRAY_BOOLEAN_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_BASE_OFFSET)},
	{"ARRAY_BYTE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_BASE_OFFSET)},
	{"ARRAY_SHORT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_BASE_OFFSET)},
	{"ARRAY_CHAR_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_BASE_OFFSET)},
	{"ARRAY_INT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_BASE_OFFSET)},
	{"ARRAY_LONG_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_BASE_OFFSET)},
	{"ARRAY_FLOAT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_BASE_OFFSET)},
	{"ARRAY_DOUBLE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_BASE_OFFSET)},
	{"ARRAY_OBJECT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_BASE_OFFSET)},
	{"ARRAY_BOOLEAN_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_INDEX_SCALE)},
	{"ARRAY_BYTE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_INDEX_SCALE)},
	{"ARRAY_SHORT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_INDEX_SCALE)},
	{"ARRAY_CHAR_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_INDEX_SCALE)},
	{"ARRAY_INT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_INDEX_SCALE)},
	{"ARRAY_LONG_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_INDEX_SCALE)},
	{"ARRAY_FLOAT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_INDEX_SCALE)},
	{"ARRAY_DOUBLE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_INDEX_SCALE)},
	{"ARRAY_OBJECT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_INDEX_SCALE)},
	{"ADDRESS_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ADDRESS_SIZE)},
	{}
};

$MethodInfo _Unsafe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::init$))},
	{"addressSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Unsafe::*)()>(&Unsafe::addressSize))},
	{"alignToHeapWordSize", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::alignToHeapWordSize))},
	{"allocateInstance", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $NATIVE, $method(static_cast<$Object*(Unsafe::*)($Class*)>(&Unsafe::allocateInstance)), "java.lang.InstantiationException", nullptr, _Unsafe_MethodAnnotations_allocateInstance3},
	{"allocateMemory", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::allocateMemory))},
	{"allocateMemory0", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::allocateMemory0))},
	{"allocateMemoryChecks", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::allocateMemoryChecks))},
	{"allocateUninitializedArray", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PUBLIC, $method(static_cast<$Object*(Unsafe::*)($Class*,int32_t)>(&Unsafe::allocateUninitializedArray))},
	{"allocateUninitializedArray0", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(Unsafe::*)($Class*,int32_t)>(&Unsafe::allocateUninitializedArray0)), nullptr, nullptr, _Unsafe_MethodAnnotations_allocateUninitializedArray08},
	{"arrayBaseOffset", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(static_cast<int32_t(Unsafe::*)($Class*)>(&Unsafe::arrayBaseOffset))},
	{"arrayBaseOffset0", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $NATIVE, $method(static_cast<int32_t(Unsafe::*)($Class*)>(&Unsafe::arrayBaseOffset0))},
	{"arrayIndexScale", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(static_cast<int32_t(Unsafe::*)($Class*)>(&Unsafe::arrayIndexScale))},
	{"arrayIndexScale0", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $NATIVE, $method(static_cast<int32_t(Unsafe::*)($Class*)>(&Unsafe::arrayIndexScale0))},
	{"bool2byte", "(Z)B", nullptr, $PRIVATE, $method(static_cast<int8_t(Unsafe::*)(bool)>(&Unsafe::bool2byte)), nullptr, nullptr, _Unsafe_MethodAnnotations_bool2byte13},
	{"byte2bool", "(B)Z", nullptr, $PRIVATE, $method(static_cast<bool(Unsafe::*)(int8_t)>(&Unsafe::byte2bool)), nullptr, nullptr, _Unsafe_MethodAnnotations_byte2bool14},
	{"c2s", "(C)S", nullptr, $PRIVATE, $method(static_cast<int16_t(Unsafe::*)(char16_t)>(&Unsafe::c2s)), nullptr, nullptr, _Unsafe_MethodAnnotations_c2s15},
	{"checkNativeAddress", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::checkNativeAddress))},
	{"checkOffset", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t)>(&Unsafe::checkOffset))},
	{"checkPointer", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t)>(&Unsafe::checkPointer))},
	{"checkPrimitiveArray", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(Unsafe::*)($Class*)>(&Unsafe::checkPrimitiveArray))},
	{"checkPrimitivePointer", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t)>(&Unsafe::checkPrimitivePointer))},
	{"checkSize", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::checkSize))},
	{"checkWritebackEnabled", "()V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::checkWritebackEnabled))},
	{"checkWritebackMemory", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t,int64_t)>(&Unsafe::checkWritebackMemory))},
	{"compareAndExchangeBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::compareAndExchangeBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeBoolean24},
	{"compareAndExchangeBooleanAcquire", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::compareAndExchangeBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeBooleanAcquire25},
	{"compareAndExchangeBooleanRelease", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::compareAndExchangeBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeBooleanRelease26},
	{"compareAndExchangeByte", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::compareAndExchangeByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeByte27},
	{"compareAndExchangeByteAcquire", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::compareAndExchangeByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeByteAcquire28},
	{"compareAndExchangeByteRelease", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::compareAndExchangeByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeByteRelease29},
	{"compareAndExchangeChar", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::compareAndExchangeChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeChar30},
	{"compareAndExchangeCharAcquire", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::compareAndExchangeCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeCharAcquire31},
	{"compareAndExchangeCharRelease", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::compareAndExchangeCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeCharRelease32},
	{"compareAndExchangeDouble", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::compareAndExchangeDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeDouble33},
	{"compareAndExchangeDoubleAcquire", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::compareAndExchangeDoubleAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeDoubleAcquire34},
	{"compareAndExchangeDoubleRelease", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::compareAndExchangeDoubleRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeDoubleRelease35},
	{"compareAndExchangeFloat", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::compareAndExchangeFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeFloat36},
	{"compareAndExchangeFloatAcquire", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::compareAndExchangeFloatAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeFloatAcquire37},
	{"compareAndExchangeFloatRelease", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::compareAndExchangeFloatRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeFloatRelease38},
	{"compareAndExchangeInt", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::compareAndExchangeInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeInt39},
	{"compareAndExchangeIntAcquire", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::compareAndExchangeIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeIntAcquire40},
	{"compareAndExchangeIntRelease", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::compareAndExchangeIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeIntRelease41},
	{"compareAndExchangeLong", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::compareAndExchangeLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeLong42},
	{"compareAndExchangeLongAcquire", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::compareAndExchangeLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeLongAcquire43},
	{"compareAndExchangeLongRelease", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::compareAndExchangeLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeLongRelease44},
	{"compareAndExchangeObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeObject45},
	{"compareAndExchangeObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeObjectAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeObjectAcquire46},
	{"compareAndExchangeObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeObjectRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeObjectRelease47},
	{"compareAndExchangeReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeReference48},
	{"compareAndExchangeReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeReferenceAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeReferenceAcquire49},
	{"compareAndExchangeReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndExchangeReferenceRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeReferenceRelease50},
	{"compareAndExchangeShort", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::compareAndExchangeShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeShort51},
	{"compareAndExchangeShortAcquire", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::compareAndExchangeShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeShortAcquire52},
	{"compareAndExchangeShortRelease", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::compareAndExchangeShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndExchangeShortRelease53},
	{"compareAndSetBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::compareAndSetBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetBoolean54},
	{"compareAndSetByte", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::compareAndSetByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetByte55},
	{"compareAndSetChar", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::compareAndSetChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetChar56},
	{"compareAndSetDouble", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::compareAndSetDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetDouble57},
	{"compareAndSetFloat", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::compareAndSetFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetFloat58},
	{"compareAndSetInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::compareAndSetInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetInt59},
	{"compareAndSetLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::compareAndSetLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetLong60},
	{"compareAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndSetObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetObject61},
	{"compareAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::compareAndSetReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetReference62},
	{"compareAndSetShort", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::compareAndSetShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_compareAndSetShort63},
	{"convEndian", "(ZC)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)(bool,char16_t)>(&Unsafe::convEndian))},
	{"convEndian", "(ZS)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(bool,int16_t)>(&Unsafe::convEndian))},
	{"convEndian", "(ZI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(bool,int32_t)>(&Unsafe::convEndian))},
	{"convEndian", "(ZJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(bool,int64_t)>(&Unsafe::convEndian))},
	{"copyMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t)>(&Unsafe::copyMemory))},
	{"copyMemory", "(JJJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t,int64_t)>(&Unsafe::copyMemory))},
	{"copyMemory0", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t)>(&Unsafe::copyMemory0)), nullptr, nullptr, _Unsafe_MethodAnnotations_copyMemory070},
	{"copyMemoryChecks", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t)>(&Unsafe::copyMemoryChecks))},
	{"copySwapMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t,int64_t)>(&Unsafe::copySwapMemory))},
	{"copySwapMemory", "(JJJJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t,int64_t,int64_t)>(&Unsafe::copySwapMemory))},
	{"copySwapMemory0", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t,int64_t)>(&Unsafe::copySwapMemory0))},
	{"copySwapMemoryChecks", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*,int64_t,int64_t,int64_t)>(&Unsafe::copySwapMemoryChecks))},
	{"dataCacheLineAlignDown", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::dataCacheLineAlignDown))},
	{"dataCacheLineFlushSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Unsafe::*)()>(&Unsafe::dataCacheLineFlushSize))},
	{"defineClass", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(Unsafe::*)($String*,$bytes*,int32_t,int32_t,$ClassLoader*,$ProtectionDomain*)>(&Unsafe::defineClass))},
	{"defineClass0", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class<*>;", $PUBLIC | $NATIVE, $method(static_cast<$Class*(Unsafe::*)($String*,$bytes*,int32_t,int32_t,$ClassLoader*,$ProtectionDomain*)>(&Unsafe::defineClass0))},
	{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(Unsafe::*)($Class*)>(&Unsafe::ensureClassInitialized))},
	{"ensureClassInitialized0", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)($Class*)>(&Unsafe::ensureClassInitialized0))},
	{"freeMemory", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::freeMemory))},
	{"freeMemory0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::freeMemory0))},
	{"freeMemoryChecks", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::freeMemoryChecks))},
	{"fullFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::fullFence)), nullptr, nullptr, _Unsafe_MethodAnnotations_fullFence85},
	{"getAddress", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getAddress)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAddress86},
	{"getAddress", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::getAddress)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAddress87},
	{"getAndAddByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndAddByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddByte88},
	{"getAndAddByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndAddByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddByteAcquire89},
	{"getAndAddByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndAddByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddByteRelease90},
	{"getAndAddChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndAddChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddChar91},
	{"getAndAddCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndAddCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddCharAcquire92},
	{"getAndAddCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndAddCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddCharRelease93},
	{"getAndAddDouble", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndAddDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddDouble94},
	{"getAndAddDoubleAcquire", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndAddDoubleAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddDoubleAcquire95},
	{"getAndAddDoubleRelease", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndAddDoubleRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddDoubleRelease96},
	{"getAndAddFloat", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndAddFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddFloat97},
	{"getAndAddFloatAcquire", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndAddFloatAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddFloatAcquire98},
	{"getAndAddFloatRelease", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndAddFloatRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddFloatRelease99},
	{"getAndAddInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndAddInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddInt100},
	{"getAndAddIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndAddIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddIntAcquire101},
	{"getAndAddIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndAddIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddIntRelease102},
	{"getAndAddLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndAddLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddLong103},
	{"getAndAddLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndAddLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddLongAcquire104},
	{"getAndAddLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndAddLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddLongRelease105},
	{"getAndAddShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndAddShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddShort106},
	{"getAndAddShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndAddShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddShortAcquire107},
	{"getAndAddShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndAddShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndAddShortRelease108},
	{"getAndBitwiseAndBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseAndBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndBoolean109},
	{"getAndBitwiseAndBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseAndBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndBooleanAcquire110},
	{"getAndBitwiseAndBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseAndBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndBooleanRelease111},
	{"getAndBitwiseAndByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseAndByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndByte112},
	{"getAndBitwiseAndByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseAndByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndByteAcquire113},
	{"getAndBitwiseAndByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseAndByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndByteRelease114},
	{"getAndBitwiseAndChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseAndChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndChar115},
	{"getAndBitwiseAndCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseAndCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndCharAcquire116},
	{"getAndBitwiseAndCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseAndCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndCharRelease117},
	{"getAndBitwiseAndInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseAndInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndInt118},
	{"getAndBitwiseAndIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseAndIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndIntAcquire119},
	{"getAndBitwiseAndIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseAndIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndIntRelease120},
	{"getAndBitwiseAndLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseAndLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndLong121},
	{"getAndBitwiseAndLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseAndLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndLongAcquire122},
	{"getAndBitwiseAndLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseAndLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndLongRelease123},
	{"getAndBitwiseAndShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseAndShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndShort124},
	{"getAndBitwiseAndShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseAndShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndShortAcquire125},
	{"getAndBitwiseAndShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseAndShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseAndShortRelease126},
	{"getAndBitwiseOrBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseOrBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrBoolean127},
	{"getAndBitwiseOrBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseOrBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrBooleanAcquire128},
	{"getAndBitwiseOrBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseOrBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrBooleanRelease129},
	{"getAndBitwiseOrByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseOrByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrByte130},
	{"getAndBitwiseOrByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseOrByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrByteAcquire131},
	{"getAndBitwiseOrByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseOrByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrByteRelease132},
	{"getAndBitwiseOrChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseOrChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrChar133},
	{"getAndBitwiseOrCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseOrCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrCharAcquire134},
	{"getAndBitwiseOrCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseOrCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrCharRelease135},
	{"getAndBitwiseOrInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseOrInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrInt136},
	{"getAndBitwiseOrIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseOrIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrIntAcquire137},
	{"getAndBitwiseOrIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseOrIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrIntRelease138},
	{"getAndBitwiseOrLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseOrLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrLong139},
	{"getAndBitwiseOrLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseOrLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrLongAcquire140},
	{"getAndBitwiseOrLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseOrLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrLongRelease141},
	{"getAndBitwiseOrShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseOrShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrShort142},
	{"getAndBitwiseOrShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseOrShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrShortAcquire143},
	{"getAndBitwiseOrShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseOrShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseOrShortRelease144},
	{"getAndBitwiseXorBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseXorBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorBoolean145},
	{"getAndBitwiseXorBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseXorBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorBooleanAcquire146},
	{"getAndBitwiseXorBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndBitwiseXorBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorBooleanRelease147},
	{"getAndBitwiseXorByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseXorByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorByte148},
	{"getAndBitwiseXorByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseXorByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorByteAcquire149},
	{"getAndBitwiseXorByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndBitwiseXorByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorByteRelease150},
	{"getAndBitwiseXorChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseXorChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorChar151},
	{"getAndBitwiseXorCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseXorCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorCharAcquire152},
	{"getAndBitwiseXorCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndBitwiseXorCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorCharRelease153},
	{"getAndBitwiseXorInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseXorInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorInt154},
	{"getAndBitwiseXorIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseXorIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorIntAcquire155},
	{"getAndBitwiseXorIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndBitwiseXorIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorIntRelease156},
	{"getAndBitwiseXorLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseXorLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorLong157},
	{"getAndBitwiseXorLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseXorLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorLongAcquire158},
	{"getAndBitwiseXorLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndBitwiseXorLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorLongRelease159},
	{"getAndBitwiseXorShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseXorShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorShort160},
	{"getAndBitwiseXorShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseXorShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorShortAcquire161},
	{"getAndBitwiseXorShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndBitwiseXorShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndBitwiseXorShortRelease162},
	{"getAndSetBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndSetBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetBoolean163},
	{"getAndSetBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndSetBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetBooleanAcquire164},
	{"getAndSetBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getAndSetBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetBooleanRelease165},
	{"getAndSetByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndSetByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetByte166},
	{"getAndSetByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndSetByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetByteAcquire167},
	{"getAndSetByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::getAndSetByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetByteRelease168},
	{"getAndSetChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndSetChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetChar169},
	{"getAndSetCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndSetCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetCharAcquire170},
	{"getAndSetCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::getAndSetCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetCharRelease171},
	{"getAndSetDouble", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndSetDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetDouble172},
	{"getAndSetDoubleAcquire", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndSetDoubleAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetDoubleAcquire173},
	{"getAndSetDoubleRelease", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::getAndSetDoubleRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetDoubleRelease174},
	{"getAndSetFloat", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndSetFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetFloat175},
	{"getAndSetFloatAcquire", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndSetFloatAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetFloatAcquire176},
	{"getAndSetFloatRelease", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::getAndSetFloatRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetFloatRelease177},
	{"getAndSetInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndSetInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetInt178},
	{"getAndSetIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndSetIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetIntAcquire179},
	{"getAndSetIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::getAndSetIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetIntRelease180},
	{"getAndSetLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndSetLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetLong181},
	{"getAndSetLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndSetLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetLongAcquire182},
	{"getAndSetLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::getAndSetLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetLongRelease183},
	{"getAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetObject184},
	{"getAndSetObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetObjectAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetObjectAcquire185},
	{"getAndSetObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetObjectRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetObjectRelease186},
	{"getAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetReference187},
	{"getAndSetReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetReferenceAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetReferenceAcquire188},
	{"getAndSetReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::getAndSetReferenceRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetReferenceRelease189},
	{"getAndSetShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndSetShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetShort190},
	{"getAndSetShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndSetShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetShortAcquire191},
	{"getAndSetShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::getAndSetShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_getAndSetShortRelease192},
	{"getBoolean", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $NATIVE, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_getBoolean193},
	{"getBooleanAcquire", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getBooleanAcquire194},
	{"getBooleanOpaque", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getBooleanOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getBooleanOpaque195},
	{"getBooleanVolatile", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $NATIVE, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getBooleanVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getBooleanVolatile196},
	{"getByte", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getByte197},
	{"getByte", "(J)B", nullptr, $PUBLIC, $method(static_cast<int8_t(Unsafe::*)(int64_t)>(&Unsafe::getByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_getByte198},
	{"getByteAcquire", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getByteAcquire199},
	{"getByteOpaque", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $FINAL, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getByteOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getByteOpaque200},
	{"getByteVolatile", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int8_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getByteVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getByteVolatile201},
	{"getChar", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $NATIVE, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getChar202},
	{"getChar", "(J)C", nullptr, $PUBLIC, $method(static_cast<char16_t(Unsafe::*)(int64_t)>(&Unsafe::getChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_getChar203},
	{"getCharAcquire", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getCharAcquire204},
	{"getCharOpaque", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getCharOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getCharOpaque205},
	{"getCharUnaligned", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getCharUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_getCharUnaligned206},
	{"getCharUnaligned", "(Ljava/lang/Object;JZ)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getCharUnaligned))},
	{"getCharVolatile", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $NATIVE, $method(static_cast<char16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getCharVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getCharVolatile208},
	{"getDouble", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $NATIVE, $method(static_cast<double(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_getDouble209},
	{"getDouble", "(J)D", nullptr, $PUBLIC, $method(static_cast<double(Unsafe::*)(int64_t)>(&Unsafe::getDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_getDouble210},
	{"getDoubleAcquire", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getDoubleAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getDoubleAcquire211},
	{"getDoubleOpaque", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getDoubleOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getDoubleOpaque212},
	{"getDoubleVolatile", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $NATIVE, $method(static_cast<double(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getDoubleVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getDoubleVolatile213},
	{"getFloat", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $NATIVE, $method(static_cast<float(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloat214},
	{"getFloat", "(J)F", nullptr, $PUBLIC, $method(static_cast<float(Unsafe::*)(int64_t)>(&Unsafe::getFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloat215},
	{"getFloatAcquire", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getFloatAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloatAcquire216},
	{"getFloatOpaque", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getFloatOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloatOpaque217},
	{"getFloatVolatile", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $NATIVE, $method(static_cast<float(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getFloatVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getFloatVolatile218},
	{"getInt", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getInt219},
	{"getInt", "(J)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Unsafe::*)(int64_t)>(&Unsafe::getInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_getInt220},
	{"getIntAcquire", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getIntAcquire221},
	{"getIntOpaque", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getIntOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getIntOpaque222},
	{"getIntUnaligned", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getIntUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_getIntUnaligned223},
	{"getIntUnaligned", "(Ljava/lang/Object;JZ)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getIntUnaligned))},
	{"getIntVolatile", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getIntVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getIntVolatile225},
	{"getLoadAverage", "([DI)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Unsafe::*)($doubles*,int32_t)>(&Unsafe::getLoadAverage))},
	{"getLoadAverage0", "([DI)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Unsafe::*)($doubles*,int32_t)>(&Unsafe::getLoadAverage0))},
	{"getLong", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLong228},
	{"getLong", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(int64_t)>(&Unsafe::getLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLong229},
	{"getLongAcquire", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLongAcquire230},
	{"getLongOpaque", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getLongOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLongOpaque231},
	{"getLongUnaligned", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getLongUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLongUnaligned232},
	{"getLongUnaligned", "(Ljava/lang/Object;JZ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getLongUnaligned))},
	{"getLongVolatile", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int64_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getLongVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getLongVolatile234},
	{"getObject", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_getObject235},
	{"getObjectAcquire", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getObjectAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getObjectAcquire236},
	{"getObjectOpaque", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getObjectOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getObjectOpaque237},
	{"getObjectVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getObjectVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getObjectVolatile238},
	{"getReference", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_getReference239},
	{"getReferenceAcquire", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getReferenceAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getReferenceAcquire240},
	{"getReferenceOpaque", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getReferenceOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getReferenceOpaque241},
	{"getReferenceVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(static_cast<$Object*(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getReferenceVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getReferenceVolatile242},
	{"getShort", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShort243},
	{"getShort", "(J)S", nullptr, $PUBLIC, $method(static_cast<int16_t(Unsafe::*)(int64_t)>(&Unsafe::getShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShort244},
	{"getShortAcquire", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShortAcquire245},
	{"getShortOpaque", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getShortOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShortOpaque246},
	{"getShortUnaligned", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getShortUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShortUnaligned247},
	{"getShortUnaligned", "(Ljava/lang/Object;JZ)S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::getShortUnaligned))},
	{"getShortVolatile", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int16_t(Unsafe::*)(Object$*,int64_t)>(&Unsafe::getShortVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_getShortVolatile249},
	{"getUncompressedObject", "(J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(static_cast<$Object*(Unsafe::*)(int64_t)>(&Unsafe::getUncompressedObject))},
	{"getUnsafe", "()Ljdk/internal/misc/Unsafe;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Unsafe*(*)()>(&Unsafe::getUnsafe))},
	{"invalidInput", "()Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $method(static_cast<$RuntimeException*(Unsafe::*)()>(&Unsafe::invalidInput))},
	{"invokeCleaner", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)($ByteBuffer*)>(&Unsafe::invokeCleaner))},
	{"is32BitClean", "(J)Z", nullptr, $PRIVATE, $method(static_cast<bool(Unsafe::*)(int64_t)>(&Unsafe::is32BitClean))},
	{"isBigEndian", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)()>(&Unsafe::isBigEndian))},
	{"isWritebackEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Unsafe::isWritebackEnabled))},
	{"loadFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::loadFence)), nullptr, nullptr, _Unsafe_MethodAnnotations_loadFence257},
	{"loadLoadFence", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)()>(&Unsafe::loadLoadFence))},
	{"makeInt", "(SS)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int16_t,int16_t)>(&Unsafe::makeInt))},
	{"makeInt", "(BBBB)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int8_t,int8_t,int8_t,int8_t)>(&Unsafe::makeInt))},
	{"makeLong", "(BBBBBBBB)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int8_t,int8_t,int8_t,int8_t,int8_t,int8_t,int8_t,int8_t)>(&Unsafe::makeLong))},
	{"makeLong", "(SSSS)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int16_t,int16_t,int16_t,int16_t)>(&Unsafe::makeLong))},
	{"makeLong", "(II)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&Unsafe::makeLong))},
	{"makeShort", "(BB)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int8_t,int8_t)>(&Unsafe::makeShort))},
	{"objectFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)($Field*)>(&Unsafe::objectFieldOffset))},
	{"objectFieldOffset", "(Ljava/lang/Class;Ljava/lang/String;)J", "(Ljava/lang/Class<*>;Ljava/lang/String;)J", $PUBLIC, $method(static_cast<int64_t(Unsafe::*)($Class*,$String*)>(&Unsafe::objectFieldOffset))},
	{"objectFieldOffset0", "(Ljava/lang/reflect/Field;)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Unsafe::*)($Field*)>(&Unsafe::objectFieldOffset0))},
	{"objectFieldOffset1", "(Ljava/lang/Class;Ljava/lang/String;)J", "(Ljava/lang/Class<*>;Ljava/lang/String;)J", $PRIVATE | $NATIVE, $method(static_cast<int64_t(Unsafe::*)($Class*,$String*)>(&Unsafe::objectFieldOffset1))},
	{"pageSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Unsafe::*)()>(&Unsafe::pageSize))},
	{"park", "(ZJ)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(bool,int64_t)>(&Unsafe::park)), nullptr, nullptr, _Unsafe_MethodAnnotations_park270},
	{"pick", "(BB)B", nullptr, $PRIVATE | $STATIC, $method(static_cast<int8_t(*)(int8_t,int8_t)>(&Unsafe::pick))},
	{"pick", "(SS)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int16_t,int16_t)>(&Unsafe::pick))},
	{"pick", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Unsafe::pick))},
	{"pickPos", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Unsafe::pickPos))},
	{"putAddress", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putAddress)), nullptr, nullptr, _Unsafe_MethodAnnotations_putAddress275},
	{"putAddress", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t)>(&Unsafe::putAddress)), nullptr, nullptr, _Unsafe_MethodAnnotations_putAddress276},
	{"putBoolean", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::putBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_putBoolean277},
	{"putBooleanOpaque", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::putBooleanOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putBooleanOpaque278},
	{"putBooleanRelease", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::putBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putBooleanRelease279},
	{"putBooleanVolatile", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,bool)>(&Unsafe::putBooleanVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putBooleanVolatile280},
	{"putByte", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::putByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_putByte281},
	{"putByte", "(JB)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int8_t)>(&Unsafe::putByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_putByte282},
	{"putByteOpaque", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::putByteOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putByteOpaque283},
	{"putByteRelease", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::putByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putByteRelease284},
	{"putByteVolatile", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t)>(&Unsafe::putByteVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putByteVolatile285},
	{"putChar", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::putChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_putChar286},
	{"putChar", "(JC)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,char16_t)>(&Unsafe::putChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_putChar287},
	{"putCharOpaque", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::putCharOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putCharOpaque288},
	{"putCharRelease", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::putCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putCharRelease289},
	{"putCharUnaligned", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::putCharUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_putCharUnaligned290},
	{"putCharUnaligned", "(Ljava/lang/Object;JCZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t,bool)>(&Unsafe::putCharUnaligned))},
	{"putCharVolatile", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,char16_t)>(&Unsafe::putCharVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putCharVolatile292},
	{"putDouble", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::putDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_putDouble293},
	{"putDouble", "(JD)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,double)>(&Unsafe::putDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_putDouble294},
	{"putDoubleOpaque", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::putDoubleOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putDoubleOpaque295},
	{"putDoubleRelease", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::putDoubleRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putDoubleRelease296},
	{"putDoubleVolatile", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,double)>(&Unsafe::putDoubleVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putDoubleVolatile297},
	{"putFloat", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::putFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloat298},
	{"putFloat", "(JF)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,float)>(&Unsafe::putFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloat299},
	{"putFloatOpaque", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::putFloatOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloatOpaque300},
	{"putFloatRelease", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::putFloatRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloatRelease301},
	{"putFloatVolatile", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,float)>(&Unsafe::putFloatVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putFloatVolatile302},
	{"putInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::putInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_putInt303},
	{"putInt", "(JI)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int32_t)>(&Unsafe::putInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_putInt304},
	{"putIntOpaque", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::putIntOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putIntOpaque305},
	{"putIntParts", "(Ljava/lang/Object;JSS)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::putIntParts))},
	{"putIntParts", "(Ljava/lang/Object;JBBBB)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t,int8_t,int8_t,int8_t)>(&Unsafe::putIntParts))},
	{"putIntRelease", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::putIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putIntRelease308},
	{"putIntUnaligned", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::putIntUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_putIntUnaligned309},
	{"putIntUnaligned", "(Ljava/lang/Object;JIZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t,bool)>(&Unsafe::putIntUnaligned))},
	{"putIntVolatile", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t)>(&Unsafe::putIntVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putIntVolatile311},
	{"putLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLong312},
	{"putLong", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t)>(&Unsafe::putLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLong313},
	{"putLongOpaque", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putLongOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLongOpaque314},
	{"putLongParts", "(Ljava/lang/Object;JBBBBBBBB)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t,int8_t,int8_t,int8_t,int8_t,int8_t,int8_t,int8_t)>(&Unsafe::putLongParts))},
	{"putLongParts", "(Ljava/lang/Object;JSSSS)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t,int16_t,int16_t,int16_t)>(&Unsafe::putLongParts))},
	{"putLongParts", "(Ljava/lang/Object;JII)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::putLongParts))},
	{"putLongRelease", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLongRelease318},
	{"putLongUnaligned", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putLongUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLongUnaligned319},
	{"putLongUnaligned", "(Ljava/lang/Object;JJZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t,bool)>(&Unsafe::putLongUnaligned))},
	{"putLongVolatile", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t)>(&Unsafe::putLongVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putLongVolatile321},
	{"putObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_putObject322},
	{"putObjectOpaque", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putObjectOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putObjectOpaque323},
	{"putObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putObjectRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putObjectRelease324},
	{"putObjectVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putObjectVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putObjectVolatile325},
	{"putReference", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_putReference326},
	{"putReferenceOpaque", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putReferenceOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putReferenceOpaque327},
	{"putReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putReferenceRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putReferenceRelease328},
	{"putReferenceVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,Object$*)>(&Unsafe::putReferenceVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putReferenceVolatile329},
	{"putShort", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::putShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShort330},
	{"putShort", "(JS)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int16_t)>(&Unsafe::putShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShort331},
	{"putShortOpaque", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::putShortOpaque)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShortOpaque332},
	{"putShortParts", "(Ljava/lang/Object;JBB)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::putShortParts))},
	{"putShortRelease", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::putShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShortRelease334},
	{"putShortUnaligned", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::putShortUnaligned)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShortUnaligned335},
	{"putShortUnaligned", "(Ljava/lang/Object;JSZ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t,bool)>(&Unsafe::putShortUnaligned))},
	{"putShortVolatile", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int16_t)>(&Unsafe::putShortVolatile)), nullptr, nullptr, _Unsafe_MethodAnnotations_putShortVolatile337},
	{"reallocateMemory", "(JJ)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)(int64_t,int64_t)>(&Unsafe::reallocateMemory))},
	{"reallocateMemory0", "(JJ)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Unsafe::*)(int64_t,int64_t)>(&Unsafe::reallocateMemory0))},
	{"reallocateMemoryChecks", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(int64_t,int64_t)>(&Unsafe::reallocateMemoryChecks))},
	{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Unsafe::registerNatives))},
	{"s2c", "(S)C", nullptr, $PRIVATE, $method(static_cast<char16_t(Unsafe::*)(int16_t)>(&Unsafe::s2c)), nullptr, nullptr, _Unsafe_MethodAnnotations_s2c342},
	{"setMemory", "(Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t,int8_t)>(&Unsafe::setMemory))},
	{"setMemory", "(JJB)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t,int8_t)>(&Unsafe::setMemory))},
	{"setMemory0", "(Ljava/lang/Object;JJB)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t,int8_t)>(&Unsafe::setMemory0))},
	{"setMemoryChecks", "(Ljava/lang/Object;JJB)V", nullptr, $PRIVATE, $method(static_cast<void(Unsafe::*)(Object$*,int64_t,int64_t,int8_t)>(&Unsafe::setMemoryChecks))},
	{"shouldBeInitialized", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC, $method(static_cast<bool(Unsafe::*)($Class*)>(&Unsafe::shouldBeInitialized))},
	{"shouldBeInitialized0", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $NATIVE, $method(static_cast<bool(Unsafe::*)($Class*)>(&Unsafe::shouldBeInitialized0))},
	{"staticFieldBase", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(Unsafe::*)($Field*)>(&Unsafe::staticFieldBase))},
	{"staticFieldBase0", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Object*(Unsafe::*)($Field*)>(&Unsafe::staticFieldBase0))},
	{"staticFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Unsafe::*)($Field*)>(&Unsafe::staticFieldOffset))},
	{"staticFieldOffset0", "(Ljava/lang/reflect/Field;)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Unsafe::*)($Field*)>(&Unsafe::staticFieldOffset0))},
	{"storeFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::storeFence)), nullptr, nullptr, _Unsafe_MethodAnnotations_storeFence353},
	{"storeStoreFence", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Unsafe::*)()>(&Unsafe::storeStoreFence))},
	{"throwException", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)($Throwable*)>(&Unsafe::throwException))},
	{"throwIllegalAccessError", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Unsafe::throwIllegalAccessError))},
	{"throwNoSuchMethodError", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Unsafe::throwNoSuchMethodError))},
	{"toUnsignedInt", "(B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int8_t)>(&Unsafe::toUnsignedInt))},
	{"toUnsignedInt", "(S)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int16_t)>(&Unsafe::toUnsignedInt))},
	{"toUnsignedLong", "(B)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int8_t)>(&Unsafe::toUnsignedLong))},
	{"toUnsignedLong", "(S)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int16_t)>(&Unsafe::toUnsignedLong))},
	{"toUnsignedLong", "(I)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&Unsafe::toUnsignedLong))},
	{"unalignedAccess", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)()>(&Unsafe::unalignedAccess))},
	{"unpark", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(Unsafe::*)(Object$*)>(&Unsafe::unpark)), nullptr, nullptr, _Unsafe_MethodAnnotations_unpark364},
	{"weakCompareAndSetBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::weakCompareAndSetBoolean)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetBoolean365},
	{"weakCompareAndSetBooleanAcquire", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::weakCompareAndSetBooleanAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetBooleanAcquire366},
	{"weakCompareAndSetBooleanPlain", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::weakCompareAndSetBooleanPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetBooleanPlain367},
	{"weakCompareAndSetBooleanRelease", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,bool,bool)>(&Unsafe::weakCompareAndSetBooleanRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetBooleanRelease368},
	{"weakCompareAndSetByte", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::weakCompareAndSetByte)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetByte369},
	{"weakCompareAndSetByteAcquire", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::weakCompareAndSetByteAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetByteAcquire370},
	{"weakCompareAndSetBytePlain", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::weakCompareAndSetBytePlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetBytePlain371},
	{"weakCompareAndSetByteRelease", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int8_t,int8_t)>(&Unsafe::weakCompareAndSetByteRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetByteRelease372},
	{"weakCompareAndSetChar", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::weakCompareAndSetChar)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetChar373},
	{"weakCompareAndSetCharAcquire", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::weakCompareAndSetCharAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetCharAcquire374},
	{"weakCompareAndSetCharPlain", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::weakCompareAndSetCharPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetCharPlain375},
	{"weakCompareAndSetCharRelease", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,char16_t,char16_t)>(&Unsafe::weakCompareAndSetCharRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetCharRelease376},
	{"weakCompareAndSetDouble", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::weakCompareAndSetDouble)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetDouble377},
	{"weakCompareAndSetDoubleAcquire", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::weakCompareAndSetDoubleAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetDoubleAcquire378},
	{"weakCompareAndSetDoublePlain", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::weakCompareAndSetDoublePlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetDoublePlain379},
	{"weakCompareAndSetDoubleRelease", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,double,double)>(&Unsafe::weakCompareAndSetDoubleRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetDoubleRelease380},
	{"weakCompareAndSetFloat", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::weakCompareAndSetFloat)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetFloat381},
	{"weakCompareAndSetFloatAcquire", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::weakCompareAndSetFloatAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetFloatAcquire382},
	{"weakCompareAndSetFloatPlain", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::weakCompareAndSetFloatPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetFloatPlain383},
	{"weakCompareAndSetFloatRelease", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,float,float)>(&Unsafe::weakCompareAndSetFloatRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetFloatRelease384},
	{"weakCompareAndSetInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::weakCompareAndSetInt)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetInt385},
	{"weakCompareAndSetIntAcquire", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::weakCompareAndSetIntAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetIntAcquire386},
	{"weakCompareAndSetIntPlain", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::weakCompareAndSetIntPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetIntPlain387},
	{"weakCompareAndSetIntRelease", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int32_t,int32_t)>(&Unsafe::weakCompareAndSetIntRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetIntRelease388},
	{"weakCompareAndSetLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::weakCompareAndSetLong)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetLong389},
	{"weakCompareAndSetLongAcquire", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::weakCompareAndSetLongAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetLongAcquire390},
	{"weakCompareAndSetLongPlain", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::weakCompareAndSetLongPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetLongPlain391},
	{"weakCompareAndSetLongRelease", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int64_t,int64_t)>(&Unsafe::weakCompareAndSetLongRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetLongRelease392},
	{"weakCompareAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetObject)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetObject393},
	{"weakCompareAndSetObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetObjectAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetObjectAcquire394},
	{"weakCompareAndSetObjectPlain", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetObjectPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetObjectPlain395},
	{"weakCompareAndSetObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetObjectRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetObjectRelease396},
	{"weakCompareAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetReference)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetReference397},
	{"weakCompareAndSetReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetReferenceAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetReferenceAcquire398},
	{"weakCompareAndSetReferencePlain", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetReferencePlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetReferencePlain399},
	{"weakCompareAndSetReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,Object$*,Object$*)>(&Unsafe::weakCompareAndSetReferenceRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetReferenceRelease400},
	{"weakCompareAndSetShort", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::weakCompareAndSetShort)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetShort401},
	{"weakCompareAndSetShortAcquire", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::weakCompareAndSetShortAcquire)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetShortAcquire402},
	{"weakCompareAndSetShortPlain", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::weakCompareAndSetShortPlain)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetShortPlain403},
	{"weakCompareAndSetShortRelease", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Unsafe::*)(Object$*,int64_t,int16_t,int16_t)>(&Unsafe::weakCompareAndSetShortRelease)), nullptr, nullptr, _Unsafe_MethodAnnotations_weakCompareAndSetShortRelease404},
	{"writeback0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)(int64_t)>(&Unsafe::writeback0)), nullptr, nullptr, _Unsafe_MethodAnnotations_writeback0405},
	{"writebackMemory", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Unsafe::*)(int64_t,int64_t)>(&Unsafe::writebackMemory))},
	{"writebackPostSync0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::writebackPostSync0)), nullptr, nullptr, _Unsafe_MethodAnnotations_writebackPostSync0407},
	{"writebackPreSync0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Unsafe::*)()>(&Unsafe::writebackPreSync0)), nullptr, nullptr, _Unsafe_MethodAnnotations_writebackPreSync0408},
	{}
};

#define _METHOD_INDEX_allocateInstance 3
#define _METHOD_INDEX_allocateMemory0 5
#define _METHOD_INDEX_arrayBaseOffset0 10
#define _METHOD_INDEX_arrayIndexScale0 12
#define _METHOD_INDEX_compareAndExchangeInt 39
#define _METHOD_INDEX_compareAndExchangeLong 42
#define _METHOD_INDEX_compareAndExchangeReference 48
#define _METHOD_INDEX_compareAndSetInt 59
#define _METHOD_INDEX_compareAndSetLong 60
#define _METHOD_INDEX_compareAndSetReference 62
#define _METHOD_INDEX_copyMemory0 70
#define _METHOD_INDEX_copySwapMemory0 74
#define _METHOD_INDEX_defineClass0 79
#define _METHOD_INDEX_ensureClassInitialized0 81
#define _METHOD_INDEX_freeMemory0 83
#define _METHOD_INDEX_fullFence 85
#define _METHOD_INDEX_getBoolean 193
#define _METHOD_INDEX_getBooleanVolatile 196
#define _METHOD_INDEX_getByte 197
#define _METHOD_INDEX_getByteVolatile 201
#define _METHOD_INDEX_getChar 202
#define _METHOD_INDEX_getCharVolatile 208
#define _METHOD_INDEX_getDouble 209
#define _METHOD_INDEX_getDoubleVolatile 213
#define _METHOD_INDEX_getFloat 214
#define _METHOD_INDEX_getFloatVolatile 218
#define _METHOD_INDEX_getInt 219
#define _METHOD_INDEX_getIntVolatile 225
#define _METHOD_INDEX_getLoadAverage0 227
#define _METHOD_INDEX_getLong 228
#define _METHOD_INDEX_getLongVolatile 234
#define _METHOD_INDEX_getReference 239
#define _METHOD_INDEX_getReferenceVolatile 242
#define _METHOD_INDEX_getShort 243
#define _METHOD_INDEX_getShortVolatile 249
#define _METHOD_INDEX_getUncompressedObject 250
#define _METHOD_INDEX_loadFence 257
#define _METHOD_INDEX_objectFieldOffset0 267
#define _METHOD_INDEX_objectFieldOffset1 268
#define _METHOD_INDEX_park 270
#define _METHOD_INDEX_putBoolean 277
#define _METHOD_INDEX_putBooleanVolatile 280
#define _METHOD_INDEX_putByte 281
#define _METHOD_INDEX_putByteVolatile 285
#define _METHOD_INDEX_putChar 286
#define _METHOD_INDEX_putCharVolatile 292
#define _METHOD_INDEX_putDouble 293
#define _METHOD_INDEX_putDoubleVolatile 297
#define _METHOD_INDEX_putFloat 298
#define _METHOD_INDEX_putFloatVolatile 302
#define _METHOD_INDEX_putInt 303
#define _METHOD_INDEX_putIntVolatile 311
#define _METHOD_INDEX_putLong 312
#define _METHOD_INDEX_putLongVolatile 321
#define _METHOD_INDEX_putReference 326
#define _METHOD_INDEX_putReferenceVolatile 329
#define _METHOD_INDEX_putShort 330
#define _METHOD_INDEX_putShortVolatile 337
#define _METHOD_INDEX_reallocateMemory0 339
#define _METHOD_INDEX_registerNatives 341
#define _METHOD_INDEX_setMemory0 345
#define _METHOD_INDEX_shouldBeInitialized0 348
#define _METHOD_INDEX_staticFieldBase0 350
#define _METHOD_INDEX_staticFieldOffset0 352
#define _METHOD_INDEX_storeFence 353
#define _METHOD_INDEX_throwException 355
#define _METHOD_INDEX_unpark 364
#define _METHOD_INDEX_writeback0 405
#define _METHOD_INDEX_writebackPostSync0 407
#define _METHOD_INDEX_writebackPreSync0 408

$ClassInfo _Unsafe_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.misc.Unsafe",
	"java.lang.Object",
	nullptr,
	_Unsafe_FieldInfo_,
	_Unsafe_MethodInfo_
};

$Object* allocate$Unsafe($Class* clazz) {
	return $of($alloc(Unsafe));
}

Unsafe* Unsafe::theUnsafe = nullptr;

int32_t Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_BYTE_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_SHORT_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_CHAR_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_INT_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_LONG_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_FLOAT_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_DOUBLE_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_OBJECT_BASE_OFFSET = 0;

int32_t Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_BYTE_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_SHORT_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_CHAR_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_INT_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_LONG_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_FLOAT_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_DOUBLE_INDEX_SCALE = 0;

int32_t Unsafe::ARRAY_OBJECT_INDEX_SCALE = 0;

int32_t Unsafe::ADDRESS_SIZE = 0;

void Unsafe::registerNatives() {
}

void Unsafe::init$() {
}

Unsafe* Unsafe::getUnsafe() {
	$init(Unsafe);
	return Unsafe::theUnsafe;
}

int32_t Unsafe::getInt(Object$* o, int64_t offset) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putInt(Object$* o, int64_t offset, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	*ptr = x;
}

$Object* Unsafe::getReference(Object$* o, int64_t offset) {
	$Object** ptr = nullptr;
	if (o != nullptr) {
		ptr = ($Object**)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = ($Object**)(offset);
	}
	return *ptr;
}

void Unsafe::putReference(Object$* o, int64_t offset, Object$* x) {
	$Object** ptr = nullptr;
	if (o != nullptr) {
		Object0* owner = $toObject0(o);
		ptr = ($Object**)((int8_t*)owner + offset);
		$Class* clazz = owner->getClass();
		if (clazz->isArray()) {
			$ObjectArray* oa = ($ObjectArray*)owner;
			Object0** ptr0 = (Object0**)ptr;
			if (x != nullptr) {
				x = $toObject0(x);
			}
			ObjectManager::assignArray(oa, *ptr0, x);
		} else {
			if (x != nullptr) {
				$Class* fieldType = clazz->getFieldTypeByOffset((int32_t)offset);
				if (fieldType != nullptr) {
					x = fieldType->cast(x);
				}
			}
			ObjectManager::assignField(owner, offset, x);
		}
	} else {
		ptr = ($Object**)(offset);
		$assignStatic(*ptr, x);
	}
}

bool Unsafe::getBoolean(Object$* o, int64_t offset) {
	bool* ptr = nullptr;
	if (o != nullptr) {
		ptr = (bool*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (bool*)(offset);
	}
	return *ptr;
}

void Unsafe::putBoolean(Object$* o, int64_t offset, bool x) {
	bool* ptr = nullptr;
	if (o != nullptr) {
		ptr = (bool*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (bool*)(offset);
	}
	*ptr = x;
}

int8_t Unsafe::getByte(Object$* o, int64_t offset) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putByte(Object$* o, int64_t offset, int8_t x) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	*ptr = x;
}

int16_t Unsafe::getShort(Object$* o, int64_t offset) {
	int16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int16_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putShort(Object$* o, int64_t offset, int16_t x) {
	int16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int16_t*)(offset);
	}
	*ptr = x;
}

char16_t Unsafe::getChar(Object$* o, int64_t offset) {
	char16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (char16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (char16_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putChar(Object$* o, int64_t offset, char16_t x) {
	char16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (char16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (char16_t*)(offset);
	}
	*ptr = x;
}

int64_t Unsafe::getLong(Object$* o, int64_t offset) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putLong(Object$* o, int64_t offset, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	*ptr = x;
}

float Unsafe::getFloat(Object$* o, int64_t offset) {
	float* ptr = nullptr;
	if (o != nullptr) {
		ptr = (float*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (float*)(offset);
	}
	return *ptr;
}

void Unsafe::putFloat(Object$* o, int64_t offset, float x) {
	float* ptr = nullptr;
	if (o != nullptr) {
		ptr = (float*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (float*)(offset);
	}
	*ptr = x;
}

double Unsafe::getDouble(Object$* o, int64_t offset) {
	double* ptr = nullptr;
	if (o != nullptr) {
		ptr = (double*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (double*)(offset);
	}
	return *ptr;
}

void Unsafe::putDouble(Object$* o, int64_t offset, double x) {
	double* ptr = nullptr;
	if (o != nullptr) {
		ptr = (double*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (double*)(offset);
	}
	*ptr = x;
}

int64_t Unsafe::getAddress(Object$* o, int64_t offset) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		return $Integer::toUnsignedLong(getInt(o, offset));
	} else {
		return getLong(o, offset);
	}
}

void Unsafe::putAddress(Object$* o, int64_t offset, int64_t x) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		putInt(o, offset, (int32_t)x);
	} else {
		putLong(o, offset, x);
	}
}

$Object* Unsafe::getUncompressedObject(int64_t getObject) {
	$Object* o = ($Object*)getObject;
	return nullptr;
}

int8_t Unsafe::getByte(int64_t address) {
	return getByte(nullptr, address);
}

void Unsafe::putByte(int64_t address, int8_t x) {
	putByte(nullptr, address, x);
}

int16_t Unsafe::getShort(int64_t address) {
	return getShort(nullptr, address);
}

void Unsafe::putShort(int64_t address, int16_t x) {
	putShort(nullptr, address, x);
}

char16_t Unsafe::getChar(int64_t address) {
	return getChar(nullptr, address);
}

void Unsafe::putChar(int64_t address, char16_t x) {
	putChar(nullptr, address, x);
}

int32_t Unsafe::getInt(int64_t address) {
	return getInt(nullptr, address);
}

void Unsafe::putInt(int64_t address, int32_t x) {
	putInt(nullptr, address, x);
}

int64_t Unsafe::getLong(int64_t address) {
	return getLong(nullptr, address);
}

void Unsafe::putLong(int64_t address, int64_t x) {
	putLong(nullptr, address, x);
}

float Unsafe::getFloat(int64_t address) {
	return getFloat(nullptr, address);
}

void Unsafe::putFloat(int64_t address, float x) {
	putFloat(nullptr, address, x);
}

double Unsafe::getDouble(int64_t address) {
	return getDouble(nullptr, address);
}

void Unsafe::putDouble(int64_t address, double x) {
	putDouble(nullptr, address, x);
}

int64_t Unsafe::getAddress(int64_t address) {
	return getAddress(nullptr, address);
}

void Unsafe::putAddress(int64_t address, int64_t x) {
	putAddress(nullptr, address, x);
}

$RuntimeException* Unsafe::invalidInput() {
	return $new($IllegalArgumentException);
}

bool Unsafe::is32BitClean(int64_t value) {
	return (int64_t)((uint64_t)value >> 32) == 0;
}

void Unsafe::checkSize(int64_t size) {
	$useLocalCurrentObjectStackCache();
	if (Unsafe::ADDRESS_SIZE == 4) {
		if (!is32BitClean(size)) {
			$throw($(invalidInput()));
		}
	} else if (size < 0) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkNativeAddress(int64_t address) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		if (((int64_t)(((address >> 32) + 1) & (uint64_t)(int64_t)~1)) != 0) {
			$throw($(invalidInput()));
		}
	}
}

void Unsafe::checkOffset(Object$* o, int64_t offset) {
	$useLocalCurrentObjectStackCache();
	if (Unsafe::ADDRESS_SIZE == 4) {
		if (!is32BitClean(offset)) {
			$throw($(invalidInput()));
		}
	} else if (offset < 0) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkPointer(Object$* o, int64_t offset) {
	if (o == nullptr) {
		checkNativeAddress(offset);
	} else {
		checkOffset(o, offset);
	}
}

void Unsafe::checkPrimitiveArray($Class* c) {
	$Class* componentType = $nc(c)->getComponentType();
	if (componentType == nullptr || !$nc(componentType)->isPrimitive()) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkPrimitivePointer(Object$* o, int64_t offset) {
	checkPointer(o, offset);
	if (o != nullptr) {
		checkPrimitiveArray($of(o)->getClass());
	}
}

int64_t Unsafe::alignToHeapWordSize(int64_t bytes) {
	if (bytes >= 0) {
		return (int64_t)((bytes + Unsafe::ADDRESS_SIZE - 1) & (uint64_t)(int64_t)~(Unsafe::ADDRESS_SIZE - 1));
	} else {
		$throw($(invalidInput()));
	}
}

int64_t Unsafe::allocateMemory(int64_t bytes) {
	$useLocalCurrentObjectStackCache();
	bytes = alignToHeapWordSize(bytes);
	allocateMemoryChecks(bytes);
	if (bytes == 0) {
		return 0;
	}
	int64_t p = allocateMemory0(bytes);
	if (p == 0) {
		$throwNew($OutOfMemoryError, $$str({"Unable to allocate "_s, $$str(bytes), " bytes"_s}));
	}
	return p;
}

void Unsafe::allocateMemoryChecks(int64_t bytes) {
	checkSize(bytes);
}

int64_t Unsafe::reallocateMemory(int64_t address, int64_t bytes) {
	$useLocalCurrentObjectStackCache();
	bytes = alignToHeapWordSize(bytes);
	reallocateMemoryChecks(address, bytes);
	if (bytes == 0) {
		freeMemory(address);
		return 0;
	}
	int64_t p = (address == 0) ? allocateMemory0(bytes) : reallocateMemory0(address, bytes);
	if (p == 0) {
		$throwNew($OutOfMemoryError, $$str({"Unable to allocate "_s, $$str(bytes), " bytes"_s}));
	}
	return p;
}

void Unsafe::reallocateMemoryChecks(int64_t address, int64_t bytes) {
	checkPointer(nullptr, address);
	checkSize(bytes);
}

void Unsafe::setMemory(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	setMemoryChecks(o, offset, bytes, value);
	if (bytes == 0) {
		return;
	}
	setMemory0(o, offset, bytes, value);
}

void Unsafe::setMemory(int64_t address, int64_t bytes, int8_t value) {
	setMemory(nullptr, address, bytes, value);
}

void Unsafe::setMemoryChecks(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	checkPrimitivePointer(o, offset);
	checkSize(bytes);
}

void Unsafe::copyMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	copyMemoryChecks(srcBase, srcOffset, destBase, destOffset, bytes);
	if (bytes == 0) {
		return;
	}
	copyMemory0(srcBase, srcOffset, destBase, destOffset, bytes);
}

void Unsafe::copyMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes) {
	copyMemory(nullptr, srcAddress, nullptr, destAddress, bytes);
}

void Unsafe::copyMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	checkSize(bytes);
	checkPrimitivePointer(srcBase, srcOffset);
	checkPrimitivePointer(destBase, destOffset);
}

void Unsafe::copySwapMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	copySwapMemoryChecks(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
	if (bytes == 0) {
		return;
	}
	copySwapMemory0(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
}

void Unsafe::copySwapMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	$useLocalCurrentObjectStackCache();
	checkSize(bytes);
	if (elemSize != 2 && elemSize != 4 && elemSize != 8) {
		$throw($(invalidInput()));
	}
	if ($mod(bytes, elemSize) != 0) {
		$throw($(invalidInput()));
	}
	checkPrimitivePointer(srcBase, srcOffset);
	checkPrimitivePointer(destBase, destOffset);
}

void Unsafe::copySwapMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes, int64_t elemSize) {
	copySwapMemory(nullptr, srcAddress, nullptr, destAddress, bytes, elemSize);
}

void Unsafe::freeMemory(int64_t address) {
	freeMemoryChecks(address);
	if (address == 0) {
		return;
	}
	freeMemory0(address);
}

void Unsafe::freeMemoryChecks(int64_t address) {
	checkPointer(nullptr, address);
}

void Unsafe::writebackMemory(int64_t address, int64_t length) {
	checkWritebackEnabled();
	checkWritebackMemory(address, length);
	writebackPreSync0();
	int64_t line = dataCacheLineAlignDown(address);
	int64_t end = address + length;
	while (line < end) {
		writeback0(line);
		line += dataCacheLineFlushSize();
	}
	writebackPostSync0();
}

void Unsafe::checkWritebackMemory(int64_t address, int64_t length) {
	checkNativeAddress(address);
	checkSize(length);
}

void Unsafe::checkWritebackEnabled() {
	if (!isWritebackEnabled()) {
		$throwNew($RuntimeException, "writebackMemory not enabled!"_s);
	}
}

void Unsafe::writeback0(int64_t getObject) {
	// TODO
	$throwNew(IllegalAccessError);
}

void Unsafe::writebackPreSync0() {
	// TODO
	$throwNew(IllegalAccessError);
}

void Unsafe::writebackPostSync0() {
	// TODO
	$throwNew(IllegalAccessError);
}

int64_t Unsafe::objectFieldOffset($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return objectFieldOffset0(f);
}

int64_t Unsafe::objectFieldOffset($Class* c, $String* name) {
	if (c == nullptr || name == nullptr) {
		$throwNew($NullPointerException);
	}
	return objectFieldOffset1(c, name);
}

int64_t Unsafe::staticFieldOffset($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return staticFieldOffset0(f);
}

$Object* Unsafe::staticFieldBase($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of(staticFieldBase0(f));
}

bool Unsafe::shouldBeInitialized($Class* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	return shouldBeInitialized0(c);
}

void Unsafe::ensureClassInitialized($Class* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	ensureClassInitialized0(c);
}

int32_t Unsafe::arrayBaseOffset($Class* arrayClass) {
	if (arrayClass == nullptr) {
		$throwNew($NullPointerException);
	}
	return arrayBaseOffset0(arrayClass);
}

int32_t Unsafe::arrayIndexScale($Class* arrayClass) {
	if (arrayClass == nullptr) {
		$throwNew($NullPointerException);
	}
	return arrayIndexScale0(arrayClass);
}

int32_t Unsafe::addressSize() {
	return Unsafe::ADDRESS_SIZE;
}

int32_t Unsafe::pageSize() {
	$init($UnsafeConstants);
	return $UnsafeConstants::PAGE_SIZE;
}

int32_t Unsafe::dataCacheLineFlushSize() {
	$init($UnsafeConstants);
	return $UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE;
}

int64_t Unsafe::dataCacheLineAlignDown(int64_t address) {
	$init($UnsafeConstants);
	return ((int64_t)(address & (uint64_t)(int64_t)~($UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE - 1)));
}

bool Unsafe::isWritebackEnabled() {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE != 0;
}

$Class* Unsafe::defineClass($String* name, $bytes* b, int32_t off, int32_t len, $ClassLoader* loader, $ProtectionDomain* protectionDomain) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	return defineClass0(name, b, off, len, loader, protectionDomain);
}

$Class* Unsafe::defineClass0($String* name, $bytes* b, int32_t off, int32_t len, $ClassLoader* loader, $ProtectionDomain* protectionDomain) {
	return Machine::defineClass1(loader, name, b, off, len, protectionDomain, nullptr);;
}

$Object* Unsafe::allocateInstance($Class* cls) {
	return cls->allocateInstance();
}

$Object* Unsafe::allocateUninitializedArray($Class* componentType, int32_t length) {
	if (componentType == nullptr) {
		$throwNew($IllegalArgumentException, "Component type is null"_s);
	}
	if (!$nc(componentType)->isPrimitive()) {
		$throwNew($IllegalArgumentException, "Component type is not primitive"_s);
	}
	if (length < 0) {
		$throwNew($IllegalArgumentException, "Negative length"_s);
	}
	return $of(allocateUninitializedArray0(componentType, length));
}

$Object* Unsafe::allocateUninitializedArray0($Class* componentType, int32_t length) {
	$init($Byte);
	if (componentType == $Byte::TYPE) {
		return $of($new($bytes, length));
	}
	$init($Boolean);
	if (componentType == $Boolean::TYPE) {
		return $of($new($booleans, length));
	}
	$init($Short);
	if (componentType == $Short::TYPE) {
		return $of($new($shorts, length));
	}
	$init($Character);
	if (componentType == $Character::TYPE) {
		return $of($new($chars, length));
	}
	$init($Integer);
	if (componentType == $Integer::TYPE) {
		return $of($new($ints, length));
	}
	$init($Float);
	if (componentType == $Float::TYPE) {
		return $of($new($floats, length));
	}
	$init($Long);
	if (componentType == $Long::TYPE) {
		return $of($new($longs, length));
	}
	$init($Double);
	if (componentType == $Double::TYPE) {
		return $of($new($doubles, length));
	}
	return $of(nullptr);
}

void Unsafe::throwException($Throwable* ee) {
	$throw(ee);
}

bool Unsafe::compareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	if (o != nullptr) {
		Object0* obj0 = $toObject0(o);
		$Object** ptr = ($Object**)((int8_t*)obj0 + offset);
		return ObjectManager::compareAndSetReference(obj0, ptr, expected, x);
	} else {
		$Object** ptr = ($Object**)(offset);
		return ObjectManager::compareAndSetReference(ptr, expected, x);
	}
}

$Object* Unsafe::compareAndExchangeReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	if (o != nullptr) {
		Object0* obj0 = $toObject0(o);
		$Object** ptr = ($Object**)((int8_t*)obj0 + offset);
		return ObjectManager::compareAndExchangeReference(obj0, ptr, expected, x);
	} else {
		$Object** ptr = ($Object**)(offset);
		return ObjectManager::compareAndExchangeReference(ptr, expected, x);
	}
}

$Object* Unsafe::compareAndExchangeReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $of(compareAndExchangeReference(o, offset, expected, x));
}

$Object* Unsafe::compareAndExchangeReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $of(compareAndExchangeReference(o, offset, expected, x));
}

bool Unsafe::weakCompareAndSetReferencePlain(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::compareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int32_t>*)ptr, &expected, x);
	return ret;
}

int32_t Unsafe::compareAndExchangeInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int32_t>*)ptr, &expected, x);
	return expected;
}

int32_t Unsafe::compareAndExchangeIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndExchangeInt(o, offset, expected, x);
}

int32_t Unsafe::compareAndExchangeIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndExchangeInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntPlain(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	int64_t wordOffset = (int64_t)(offset & (uint64_t)(int64_t)~3);
	int32_t shift = (int32_t)((int64_t)(offset & (uint64_t)(int64_t)3)) << 3;
	$init($UnsafeConstants);
	if ($UnsafeConstants::BIG_ENDIAN) {
		shift = 24 - shift;
	}
	int32_t mask = $sl(255, shift);
	int32_t maskedExpected = $sl((int32_t)(expected & (uint32_t)255), shift);
	int32_t maskedX = $sl((int32_t)(x & (uint32_t)255), shift);
	int32_t fullWord = 0;
	do {
		fullWord = getIntVolatile(o, wordOffset);
		if (((int32_t)(fullWord & (uint32_t)mask)) != maskedExpected) {
			return (int8_t)($sr((int32_t)(fullWord & (uint32_t)mask), shift));
		}
	} while (!weakCompareAndSetInt(o, wordOffset, fullWord, ((int32_t)(fullWord & (uint32_t)~mask)) | maskedX));
	return expected;
}

bool Unsafe::compareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x) == expected;
}

bool Unsafe::weakCompareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetBytePlain(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	if (((int64_t)(offset & (uint64_t)(int64_t)3)) == 3) {
		$throwNew($IllegalArgumentException, "Update spans the word, not supported"_s);
	}
	int64_t wordOffset = (int64_t)(offset & (uint64_t)(int64_t)~3);
	int32_t shift = (int32_t)((int64_t)(offset & (uint64_t)(int64_t)3)) << 3;
	$init($UnsafeConstants);
	if ($UnsafeConstants::BIG_ENDIAN) {
		shift = 16 - shift;
	}
	int32_t mask = $sl(0x0000FFFF, shift);
	int32_t maskedExpected = $sl((int32_t)(expected & (uint32_t)0x0000FFFF), shift);
	int32_t maskedX = $sl((int32_t)(x & (uint32_t)0x0000FFFF), shift);
	int32_t fullWord = 0;
	do {
		fullWord = getIntVolatile(o, wordOffset);
		if (((int32_t)(fullWord & (uint32_t)mask)) != maskedExpected) {
			return (int16_t)($sr((int32_t)(fullWord & (uint32_t)mask), shift));
		}
	} while (!weakCompareAndSetInt(o, wordOffset, fullWord, ((int32_t)(fullWord & (uint32_t)~mask)) | maskedX));
	return expected;
}

bool Unsafe::compareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x) == expected;
}

bool Unsafe::weakCompareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortPlain(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x);
}

char16_t Unsafe::s2c(int16_t s) {
	return (char16_t)s;
}

int16_t Unsafe::c2s(char16_t s) {
	return (int16_t)s;
}

bool Unsafe::compareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return compareAndSetShort(var$0, var$1, var$2, c2s(x));
}

char16_t Unsafe::compareAndExchangeChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return s2c(compareAndExchangeShort(var$0, var$1, var$2, c2s(x)));
}

char16_t Unsafe::compareAndExchangeCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return s2c(compareAndExchangeShortAcquire(var$0, var$1, var$2, c2s(x)));
}

char16_t Unsafe::compareAndExchangeCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return s2c(compareAndExchangeShortRelease(var$0, var$1, var$2, c2s(x)));
}

bool Unsafe::weakCompareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return weakCompareAndSetShort(var$0, var$1, var$2, c2s(x));
}

bool Unsafe::weakCompareAndSetCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return weakCompareAndSetShortAcquire(var$0, var$1, var$2, c2s(x));
}

bool Unsafe::weakCompareAndSetCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return weakCompareAndSetShortRelease(var$0, var$1, var$2, c2s(x));
}

bool Unsafe::weakCompareAndSetCharPlain(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int16_t var$2 = c2s(expected);
	return weakCompareAndSetShortPlain(var$0, var$1, var$2, c2s(x));
}

bool Unsafe::byte2bool(int8_t b) {
	return b != 0;
}

int8_t Unsafe::bool2byte(bool b) {
	return b ? (int8_t)1 : (int8_t)0;
}

bool Unsafe::compareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return compareAndSetByte(var$0, var$1, var$2, bool2byte(x));
}

bool Unsafe::compareAndExchangeBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return byte2bool(compareAndExchangeByte(var$0, var$1, var$2, bool2byte(x)));
}

bool Unsafe::compareAndExchangeBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return byte2bool(compareAndExchangeByteAcquire(var$0, var$1, var$2, bool2byte(x)));
}

bool Unsafe::compareAndExchangeBooleanRelease(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return byte2bool(compareAndExchangeByteRelease(var$0, var$1, var$2, bool2byte(x)));
}

bool Unsafe::weakCompareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return weakCompareAndSetByte(var$0, var$1, var$2, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return weakCompareAndSetByteAcquire(var$0, var$1, var$2, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanRelease(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return weakCompareAndSetByteRelease(var$0, var$1, var$2, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanPlain(Object$* o, int64_t offset, bool expected, bool x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int8_t var$2 = bool2byte(expected);
	return weakCompareAndSetBytePlain(var$0, var$1, var$2, bool2byte(x));
}

bool Unsafe::compareAndSetFloat(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	return compareAndSetInt(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
}

float Unsafe::compareAndExchangeFloat(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeInt(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

float Unsafe::compareAndExchangeFloatAcquire(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeIntAcquire(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

float Unsafe::compareAndExchangeFloatRelease(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeIntRelease(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

bool Unsafe::weakCompareAndSetFloatPlain(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntPlain(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloatAcquire(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntAcquire(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloatRelease(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntRelease(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloat(Object$* o, int64_t offset, float expected, float x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int32_t var$2 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetInt(var$0, var$1, var$2, $Float::floatToRawIntBits(x));
}

bool Unsafe::compareAndSetDouble(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	return compareAndSetLong(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
}

double Unsafe::compareAndExchangeDouble(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLong(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

double Unsafe::compareAndExchangeDoubleAcquire(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLongAcquire(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

double Unsafe::compareAndExchangeDoubleRelease(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLongRelease(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

bool Unsafe::weakCompareAndSetDoublePlain(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongPlain(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDoubleAcquire(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongAcquire(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDoubleRelease(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongRelease(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDouble(Object$* o, int64_t offset, double expected, double x) {
	$var($Object, var$0, o);
	int64_t var$1 = offset;
	int64_t var$2 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLong(var$0, var$1, var$2, $Double::doubleToRawLongBits(x));
}

bool Unsafe::compareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int64_t>*)ptr, &expected, x);
	return ret;
}

int64_t Unsafe::compareAndExchangeLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int64_t>*)ptr, &expected, x);
	return expected;
}

int64_t Unsafe::compareAndExchangeLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndExchangeLong(o, offset, expected, x);
}

int64_t Unsafe::compareAndExchangeLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndExchangeLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongPlain(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

$Object* Unsafe::getReferenceVolatile(Object$* o, int64_t offset) {
	$Object* ret = getReference(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putReferenceVolatile(Object$* o, int64_t offset, Object$* x) {
	$storestore();
	putReference(o, offset, x);
	$storeload();
}

int32_t Unsafe::getIntVolatile(Object$* o, int64_t offset) {
	int32_t ret = getInt(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putIntVolatile(Object$* o, int64_t offset, int32_t x) {
	$storestore();
	putInt(o, offset, x);
	$storeload();
}

bool Unsafe::getBooleanVolatile(Object$* o, int64_t offset) {
	bool ret = getBoolean(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putBooleanVolatile(Object$* o, int64_t offset, bool x) {
	$storestore();
	putBoolean(o, offset, x);
	$storeload();
}

int8_t Unsafe::getByteVolatile(Object$* o, int64_t offset) {
	int8_t ret = getByte(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putByteVolatile(Object$* o, int64_t offset, int8_t x) {
	$storestore();
	putByte(o, offset, x);
	$storeload();
}

int16_t Unsafe::getShortVolatile(Object$* o, int64_t offset) {
	int16_t ret = getShort(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putShortVolatile(Object$* o, int64_t offset, int16_t x) {
	$storestore();
	putShort(o, offset, x);
	$storeload();
}

char16_t Unsafe::getCharVolatile(Object$* o, int64_t offset) {
	char16_t ret = getChar(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putCharVolatile(Object$* o, int64_t offset, char16_t x) {
	$storestore();
	putChar(o, offset, x);
	$storeload();
}

int64_t Unsafe::getLongVolatile(Object$* o, int64_t offset) {
	int64_t ret = getLong(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putLongVolatile(Object$* o, int64_t offset, int64_t x) {
	$storestore();
	putLong(o, offset, x);
	$storeload();
}

float Unsafe::getFloatVolatile(Object$* o, int64_t offset) {
	float ret = getFloat(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putFloatVolatile(Object$* o, int64_t offset, float x) {
	$storestore();
	putFloat(o, offset, x);
	$storeload();
}

double Unsafe::getDoubleVolatile(Object$* o, int64_t offset) {
	double ret = getDouble(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putDoubleVolatile(Object$* o, int64_t offset, double x) {
	$storestore();
	putDouble(o, offset, x);
	$storeload();
}

$Object* Unsafe::getReferenceAcquire(Object$* o, int64_t offset) {
	return $of(getReferenceVolatile(o, offset));
}

bool Unsafe::getBooleanAcquire(Object$* o, int64_t offset) {
	return getBooleanVolatile(o, offset);
}

int8_t Unsafe::getByteAcquire(Object$* o, int64_t offset) {
	return getByteVolatile(o, offset);
}

int16_t Unsafe::getShortAcquire(Object$* o, int64_t offset) {
	return getShortVolatile(o, offset);
}

char16_t Unsafe::getCharAcquire(Object$* o, int64_t offset) {
	return getCharVolatile(o, offset);
}

int32_t Unsafe::getIntAcquire(Object$* o, int64_t offset) {
	return getIntVolatile(o, offset);
}

float Unsafe::getFloatAcquire(Object$* o, int64_t offset) {
	return getFloatVolatile(o, offset);
}

int64_t Unsafe::getLongAcquire(Object$* o, int64_t offset) {
	return getLongVolatile(o, offset);
}

double Unsafe::getDoubleAcquire(Object$* o, int64_t offset) {
	return getDoubleVolatile(o, offset);
}

void Unsafe::putReferenceRelease(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putBooleanRelease(Object$* o, int64_t offset, bool x) {
	putBooleanVolatile(o, offset, x);
}

void Unsafe::putByteRelease(Object$* o, int64_t offset, int8_t x) {
	putByteVolatile(o, offset, x);
}

void Unsafe::putShortRelease(Object$* o, int64_t offset, int16_t x) {
	putShortVolatile(o, offset, x);
}

void Unsafe::putCharRelease(Object$* o, int64_t offset, char16_t x) {
	putCharVolatile(o, offset, x);
}

void Unsafe::putIntRelease(Object$* o, int64_t offset, int32_t x) {
	putIntVolatile(o, offset, x);
}

void Unsafe::putFloatRelease(Object$* o, int64_t offset, float x) {
	putFloatVolatile(o, offset, x);
}

void Unsafe::putLongRelease(Object$* o, int64_t offset, int64_t x) {
	putLongVolatile(o, offset, x);
}

void Unsafe::putDoubleRelease(Object$* o, int64_t offset, double x) {
	putDoubleVolatile(o, offset, x);
}

$Object* Unsafe::getReferenceOpaque(Object$* o, int64_t offset) {
	return $of(getReferenceVolatile(o, offset));
}

bool Unsafe::getBooleanOpaque(Object$* o, int64_t offset) {
	return getBooleanVolatile(o, offset);
}

int8_t Unsafe::getByteOpaque(Object$* o, int64_t offset) {
	return getByteVolatile(o, offset);
}

int16_t Unsafe::getShortOpaque(Object$* o, int64_t offset) {
	return getShortVolatile(o, offset);
}

char16_t Unsafe::getCharOpaque(Object$* o, int64_t offset) {
	return getCharVolatile(o, offset);
}

int32_t Unsafe::getIntOpaque(Object$* o, int64_t offset) {
	return getIntVolatile(o, offset);
}

float Unsafe::getFloatOpaque(Object$* o, int64_t offset) {
	return getFloatVolatile(o, offset);
}

int64_t Unsafe::getLongOpaque(Object$* o, int64_t offset) {
	return getLongVolatile(o, offset);
}

double Unsafe::getDoubleOpaque(Object$* o, int64_t offset) {
	return getDoubleVolatile(o, offset);
}

void Unsafe::putReferenceOpaque(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putBooleanOpaque(Object$* o, int64_t offset, bool x) {
	putBooleanVolatile(o, offset, x);
}

void Unsafe::putByteOpaque(Object$* o, int64_t offset, int8_t x) {
	putByteVolatile(o, offset, x);
}

void Unsafe::putShortOpaque(Object$* o, int64_t offset, int16_t x) {
	putShortVolatile(o, offset, x);
}

void Unsafe::putCharOpaque(Object$* o, int64_t offset, char16_t x) {
	putCharVolatile(o, offset, x);
}

void Unsafe::putIntOpaque(Object$* o, int64_t offset, int32_t x) {
	putIntVolatile(o, offset, x);
}

void Unsafe::putFloatOpaque(Object$* o, int64_t offset, float x) {
	putFloatVolatile(o, offset, x);
}

void Unsafe::putLongOpaque(Object$* o, int64_t offset, int64_t x) {
	putLongVolatile(o, offset, x);
}

void Unsafe::putDoubleOpaque(Object$* o, int64_t offset, double x) {
	putDoubleVolatile(o, offset, x);
}

void Unsafe::unpark(Object$* thread) {
	Thread* t = (Thread*)thread;
	if (t != nullptr) {
		t->unpark();
	}
}

void Unsafe::park(bool isAbsolute, int64_t time) {
	Thread* t = Thread::currentThread();
	t->park(isAbsolute, time);
}

int32_t Unsafe::getLoadAverage($doubles* loadavg, int32_t nelems) {
	if (nelems < 0 || nelems > 3 || nelems > $nc(loadavg)->length) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	return getLoadAverage0(loadavg, nelems);
}

int32_t Unsafe::getAndAddInt(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, v, v + delta));
	return v;
}

int32_t Unsafe::getAndAddIntRelease(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, v, v + delta));
	return v;
}

int32_t Unsafe::getAndAddIntAcquire(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getIntAcquire(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLong(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLongRelease(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLongAcquire(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLongAcquire(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, v, v + delta));
	return v;
}

int8_t Unsafe::getAndAddByte(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int8_t Unsafe::getAndAddByteRelease(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int8_t Unsafe::getAndAddByteAcquire(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByteAcquire(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShort(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, v, (int16_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShortRelease(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, v, (int16_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShortAcquire(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShortAcquire(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, v, (int16_t)(v + delta)));
	return v;
}

char16_t Unsafe::getAndAddChar(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShort(o, offset, (int16_t)delta);
}

char16_t Unsafe::getAndAddCharRelease(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShortRelease(o, offset, (int16_t)delta);
}

char16_t Unsafe::getAndAddCharAcquire(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShortAcquire(o, offset, (int16_t)delta);
}

float Unsafe::getAndAddFloat(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getIntVolatile(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetInt(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

float Unsafe::getAndAddFloatRelease(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getInt(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetIntRelease(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

float Unsafe::getAndAddFloatAcquire(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getIntAcquire(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetIntAcquire(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDouble(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLongVolatile(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLong(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDoubleRelease(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLong(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLongRelease(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDoubleAcquire(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLongAcquire(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLongAcquire(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

int32_t Unsafe::getAndSetInt(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, v, newValue));
	return v;
}

int32_t Unsafe::getAndSetIntRelease(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, v, newValue));
	return v;
}

int32_t Unsafe::getAndSetIntAcquire(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getIntAcquire(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLong(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLongRelease(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLongAcquire(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLongAcquire(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, v, newValue));
	return v;
}

$Object* Unsafe::getAndSetReference(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReferenceVolatile(o, offset));
	} while (!weakCompareAndSetReference(o, offset, v, newValue));
	return $of(v);
}

$Object* Unsafe::getAndSetReferenceRelease(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReference(o, offset));
	} while (!weakCompareAndSetReferenceRelease(o, offset, v, newValue));
	return $of(v);
}

$Object* Unsafe::getAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReferenceAcquire(o, offset));
	} while (!weakCompareAndSetReferenceAcquire(o, offset, v, newValue));
	return $of(v);
}

int8_t Unsafe::getAndSetByte(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, v, newValue));
	return v;
}

int8_t Unsafe::getAndSetByteRelease(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, v, newValue));
	return v;
}

int8_t Unsafe::getAndSetByteAcquire(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByteAcquire(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, v, newValue));
	return v;
}

bool Unsafe::getAndSetBoolean(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByte(o, offset, bool2byte(newValue)));
}

bool Unsafe::getAndSetBooleanRelease(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByteRelease(o, offset, bool2byte(newValue)));
}

bool Unsafe::getAndSetBooleanAcquire(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByteAcquire(o, offset, bool2byte(newValue)));
}

int16_t Unsafe::getAndSetShort(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, v, newValue));
	return v;
}

int16_t Unsafe::getAndSetShortRelease(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, v, newValue));
	return v;
}

int16_t Unsafe::getAndSetShortAcquire(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShortAcquire(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, v, newValue));
	return v;
}

char16_t Unsafe::getAndSetChar(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShort(o, offset, c2s(newValue)));
}

char16_t Unsafe::getAndSetCharRelease(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShortRelease(o, offset, c2s(newValue)));
}

char16_t Unsafe::getAndSetCharAcquire(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShortAcquire(o, offset, c2s(newValue)));
}

float Unsafe::getAndSetFloat(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetInt(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

float Unsafe::getAndSetFloatRelease(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetIntRelease(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

float Unsafe::getAndSetFloatAcquire(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetIntAcquire(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

double Unsafe::getAndSetDouble(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLong(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

double Unsafe::getAndSetDoubleRelease(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLongRelease(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

double Unsafe::getAndSetDoubleAcquire(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLongAcquire(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

bool Unsafe::getAndBitwiseOrBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseOrBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseOrBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByteAcquire(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByteAcquire(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByteAcquire(o, offset, bool2byte(mask)));
}

int8_t Unsafe::getAndBitwiseOrByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseOrByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseOrByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

char16_t Unsafe::getAndBitwiseOrChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseOrCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseOrCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShortAcquire(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShortAcquire(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShortAcquire(o, offset, c2s(mask)));
}

int16_t Unsafe::getAndBitwiseOrShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseOrShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseOrShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)((int32_t)(current & (uint32_t)(int32_t)mask))));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int32_t Unsafe::getAndBitwiseOrInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseOrIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseOrIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseAndInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, (int32_t)(current & (uint32_t)mask)));
	return current;
}

int32_t Unsafe::getAndBitwiseAndIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, (int32_t)(current & (uint32_t)mask)));
	return current;
}

int32_t Unsafe::getAndBitwiseAndIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, (int32_t)(current & (uint32_t)mask)));
	return current;
}

int32_t Unsafe::getAndBitwiseXorInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, current ^ mask));
	return current;
}

int32_t Unsafe::getAndBitwiseXorIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, current ^ mask));
	return current;
}

int32_t Unsafe::getAndBitwiseXorIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, (int64_t)(current & (uint64_t)mask)));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, (int64_t)(current & (uint64_t)mask)));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, (int64_t)(current & (uint64_t)mask)));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, current ^ mask));
	return current;
}

void Unsafe::loadFence() {
	$loadfence();
}

void Unsafe::storeFence() {
	$storefence();
}

void Unsafe::fullFence() {
	$fence();
}

void Unsafe::loadLoadFence() {
	loadFence();
}

void Unsafe::storeStoreFence() {
	storeFence();
}

void Unsafe::throwIllegalAccessError() {
	$init(Unsafe);
	$throwNew($IllegalAccessError);
}

void Unsafe::throwNoSuchMethodError() {
	$init(Unsafe);
	$throwNew($NoSuchMethodError);
}

bool Unsafe::isBigEndian() {
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN;
}

bool Unsafe::unalignedAccess() {
	$init($UnsafeConstants);
	return $UnsafeConstants::UNALIGNED_ACCESS;
}

int64_t Unsafe::getLongUnaligned(Object$* o, int64_t offset) {
	if (((int64_t)(offset & (uint64_t)(int64_t)7)) == 0) {
		return getLong(o, offset);
	} else if (((int64_t)(offset & (uint64_t)(int64_t)3)) == 0) {
		int32_t var$0 = getInt(o, offset);
		return makeLong(var$0, getInt(o, offset + 4));
	} else if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		int16_t var$1 = getShort(o, offset);
		int16_t var$2 = getShort(o, offset + 2);
		int16_t var$3 = getShort(o, offset + 4);
		return makeLong(var$1, var$2, var$3, getShort(o, offset + 6));
	} else {
		int8_t var$4 = getByte(o, offset);
		int8_t var$5 = getByte(o, offset + 1);
		int8_t var$6 = getByte(o, offset + 2);
		int8_t var$7 = getByte(o, offset + 3);
		int8_t var$8 = getByte(o, offset + 4);
		int8_t var$9 = getByte(o, offset + 5);
		int8_t var$10 = getByte(o, offset + 6);
		return makeLong(var$4, var$5, var$6, var$7, var$8, var$9, var$10, getByte(o, offset + 7));
	}
}

int64_t Unsafe::getLongUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getLongUnaligned(o, offset));
}

int32_t Unsafe::getIntUnaligned(Object$* o, int64_t offset) {
	if (((int64_t)(offset & (uint64_t)(int64_t)3)) == 0) {
		return getInt(o, offset);
	} else if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		int16_t var$0 = getShort(o, offset);
		return makeInt(var$0, getShort(o, offset + 2));
	} else {
		int8_t var$1 = getByte(o, offset);
		int8_t var$2 = getByte(o, offset + 1);
		int8_t var$3 = getByte(o, offset + 2);
		return makeInt(var$1, var$2, var$3, getByte(o, offset + 3));
	}
}

int32_t Unsafe::getIntUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getIntUnaligned(o, offset));
}

int16_t Unsafe::getShortUnaligned(Object$* o, int64_t offset) {
	if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		return getShort(o, offset);
	} else {
		int8_t var$0 = getByte(o, offset);
		return makeShort(var$0, getByte(o, offset + 1));
	}
}

int16_t Unsafe::getShortUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getShortUnaligned(o, offset));
}

char16_t Unsafe::getCharUnaligned(Object$* o, int64_t offset) {
	if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		return getChar(o, offset);
	} else {
		int8_t var$0 = getByte(o, offset);
		return (char16_t)makeShort(var$0, getByte(o, offset + 1));
	}
}

char16_t Unsafe::getCharUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getCharUnaligned(o, offset));
}

void Unsafe::putLongUnaligned(Object$* o, int64_t offset, int64_t x) {
	if (((int64_t)(offset & (uint64_t)(int64_t)7)) == 0) {
		putLong(o, offset, x);
	} else if (((int64_t)(offset & (uint64_t)(int64_t)3)) == 0) {
		putLongParts(o, offset, (int32_t)(x >> 0), (int32_t)((int64_t)((uint64_t)x >> 32)));
	} else if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		putLongParts(o, offset, (int16_t)((int64_t)((uint64_t)x >> 0)), (int16_t)((int64_t)((uint64_t)x >> 16)), (int16_t)((int64_t)((uint64_t)x >> 32)), (int16_t)((int64_t)((uint64_t)x >> 48)));
	} else {
		putLongParts(o, offset, (int8_t)((int64_t)((uint64_t)x >> 0)), (int8_t)((int64_t)((uint64_t)x >> 8)), (int8_t)((int64_t)((uint64_t)x >> 16)), (int8_t)((int64_t)((uint64_t)x >> 24)), (int8_t)((int64_t)((uint64_t)x >> 32)), (int8_t)((int64_t)((uint64_t)x >> 40)), (int8_t)((int64_t)((uint64_t)x >> 48)), (int8_t)((int64_t)((uint64_t)x >> 56)));
	}
}

void Unsafe::putLongUnaligned(Object$* o, int64_t offset, int64_t x, bool bigEndian) {
	putLongUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putIntUnaligned(Object$* o, int64_t offset, int32_t x) {
	if (((int64_t)(offset & (uint64_t)(int64_t)3)) == 0) {
		putInt(o, offset, x);
	} else if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		putIntParts(o, offset, (int16_t)(x >> 0), (int16_t)((int32_t)((uint32_t)x >> 16)));
	} else {
		putIntParts(o, offset, (int8_t)((int32_t)((uint32_t)x >> 0)), (int8_t)((int32_t)((uint32_t)x >> 8)), (int8_t)((int32_t)((uint32_t)x >> 16)), (int8_t)((int32_t)((uint32_t)x >> 24)));
	}
}

void Unsafe::putIntUnaligned(Object$* o, int64_t offset, int32_t x, bool bigEndian) {
	putIntUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putShortUnaligned(Object$* o, int64_t offset, int16_t x) {
	if (((int64_t)(offset & (uint64_t)(int64_t)1)) == 0) {
		putShort(o, offset, x);
	} else {
		putShortParts(o, offset, (int8_t)((int32_t)((uint32_t)x >> 0)), (int8_t)((int32_t)((uint32_t)x >> 8)));
	}
}

void Unsafe::putShortUnaligned(Object$* o, int64_t offset, int16_t x, bool bigEndian) {
	putShortUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putCharUnaligned(Object$* o, int64_t offset, char16_t x) {
	putShortUnaligned(o, offset, (int16_t)x);
}

void Unsafe::putCharUnaligned(Object$* o, int64_t offset, char16_t x, bool bigEndian) {
	putCharUnaligned(o, offset, convEndian(bigEndian, x));
}

int32_t Unsafe::pickPos(int32_t top, int32_t pos) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? top - pos : pos;
}

int64_t Unsafe::makeLong(int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7) {
	$init(Unsafe);
	int64_t var$7 = toUnsignedLong(i0);
	int64_t var$6 = ($sl(var$7, pickPos(56, 0)));
	int64_t var$9 = toUnsignedLong(i1);
	int64_t var$8 = ($sl(var$9, pickPos(56, 8)));
	int64_t var$5 = var$6 | var$8;
	int64_t var$11 = toUnsignedLong(i2);
	int64_t var$10 = ($sl(var$11, pickPos(56, 16)));
	int64_t var$4 = var$5 | var$10;
	int64_t var$13 = toUnsignedLong(i3);
	int64_t var$12 = ($sl(var$13, pickPos(56, 24)));
	int64_t var$3 = var$4 | var$12;
	int64_t var$15 = toUnsignedLong(i4);
	int64_t var$14 = ($sl(var$15, pickPos(56, 32)));
	int64_t var$2 = var$3 | var$14;
	int64_t var$17 = toUnsignedLong(i5);
	int64_t var$16 = ($sl(var$17, pickPos(56, 40)));
	int64_t var$1 = var$2 | var$16;
	int64_t var$19 = toUnsignedLong(i6);
	int64_t var$18 = ($sl(var$19, pickPos(56, 48)));
	int64_t var$0 = var$1 | var$18;
	int64_t var$21 = toUnsignedLong(i7);
	int64_t var$20 = ($sl(var$21, pickPos(56, 56)));
	return (var$0 | var$20);
}

int64_t Unsafe::makeLong(int16_t i0, int16_t i1, int16_t i2, int16_t i3) {
	$init(Unsafe);
	int64_t var$3 = toUnsignedLong(i0);
	int64_t var$2 = ($sl(var$3, pickPos(48, 0)));
	int64_t var$5 = toUnsignedLong(i1);
	int64_t var$4 = ($sl(var$5, pickPos(48, 16)));
	int64_t var$1 = var$2 | var$4;
	int64_t var$7 = toUnsignedLong(i2);
	int64_t var$6 = ($sl(var$7, pickPos(48, 32)));
	int64_t var$0 = var$1 | var$6;
	int64_t var$9 = toUnsignedLong(i3);
	int64_t var$8 = ($sl(var$9, pickPos(48, 48)));
	return (var$0 | var$8);
}

int64_t Unsafe::makeLong(int32_t i0, int32_t i1) {
	$init(Unsafe);
	int64_t var$1 = toUnsignedLong(i0);
	int64_t var$0 = ($sl(var$1, pickPos(32, 0)));
	int64_t var$3 = toUnsignedLong(i1);
	int64_t var$2 = ($sl(var$3, pickPos(32, 32)));
	return var$0 | var$2;
}

int32_t Unsafe::makeInt(int16_t i0, int16_t i1) {
	$init(Unsafe);
	int32_t var$1 = toUnsignedInt(i0);
	int32_t var$0 = ($sl(var$1, pickPos(16, 0)));
	int32_t var$3 = toUnsignedInt(i1);
	int32_t var$2 = ($sl(var$3, pickPos(16, 16)));
	return var$0 | var$2;
}

int32_t Unsafe::makeInt(int8_t i0, int8_t i1, int8_t i2, int8_t i3) {
	$init(Unsafe);
	int32_t var$3 = toUnsignedInt(i0);
	int32_t var$2 = ($sl(var$3, pickPos(24, 0)));
	int32_t var$5 = toUnsignedInt(i1);
	int32_t var$4 = ($sl(var$5, pickPos(24, 8)));
	int32_t var$1 = var$2 | var$4;
	int32_t var$7 = toUnsignedInt(i2);
	int32_t var$6 = ($sl(var$7, pickPos(24, 16)));
	int32_t var$0 = var$1 | var$6;
	int32_t var$9 = toUnsignedInt(i3);
	int32_t var$8 = ($sl(var$9, pickPos(24, 24)));
	return (var$0 | var$8);
}

int16_t Unsafe::makeShort(int8_t i0, int8_t i1) {
	$init(Unsafe);
	int32_t var$1 = toUnsignedInt(i0);
	int32_t var$0 = ($sl(var$1, pickPos(8, 0)));
	int32_t var$3 = toUnsignedInt(i1);
	int32_t var$2 = ($sl(var$3, pickPos(8, 8)));
	return (int16_t)(var$0 | var$2);
}

int8_t Unsafe::pick(int8_t le, int8_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

int16_t Unsafe::pick(int16_t le, int16_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

int32_t Unsafe::pick(int32_t le, int32_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7) {
	putByte(o, offset + 0, pick(i0, i7));
	putByte(o, offset + 1, pick(i1, i6));
	putByte(o, offset + 2, pick(i2, i5));
	putByte(o, offset + 3, pick(i3, i4));
	putByte(o, offset + 4, pick(i4, i3));
	putByte(o, offset + 5, pick(i5, i2));
	putByte(o, offset + 6, pick(i6, i1));
	putByte(o, offset + 7, pick(i7, i0));
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int16_t i0, int16_t i1, int16_t i2, int16_t i3) {
	putShort(o, offset + 0, pick(i0, i3));
	putShort(o, offset + 2, pick(i1, i2));
	putShort(o, offset + 4, pick(i2, i1));
	putShort(o, offset + 6, pick(i3, i0));
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int32_t i0, int32_t i1) {
	putInt(o, offset + 0, pick(i0, i1));
	putInt(o, offset + 4, pick(i1, i0));
}

void Unsafe::putIntParts(Object$* o, int64_t offset, int16_t i0, int16_t i1) {
	putShort(o, offset + 0, pick(i0, i1));
	putShort(o, offset + 2, pick(i1, i0));
}

void Unsafe::putIntParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3) {
	putByte(o, offset + 0, pick(i0, i3));
	putByte(o, offset + 1, pick(i1, i2));
	putByte(o, offset + 2, pick(i2, i1));
	putByte(o, offset + 3, pick(i3, i0));
}

void Unsafe::putShortParts(Object$* o, int64_t offset, int8_t i0, int8_t i1) {
	putByte(o, offset + 0, pick(i0, i1));
	putByte(o, offset + 1, pick(i1, i0));
}

int32_t Unsafe::toUnsignedInt(int8_t n) {
	$init(Unsafe);
	return (int32_t)(n & (uint32_t)255);
}

int32_t Unsafe::toUnsignedInt(int16_t n) {
	$init(Unsafe);
	return (int32_t)(n & (uint32_t)0x0000FFFF);
}

int64_t Unsafe::toUnsignedLong(int8_t n) {
	$init(Unsafe);
	return (int64_t)(n & (uint64_t)(int64_t)255);
}

int64_t Unsafe::toUnsignedLong(int16_t n) {
	$init(Unsafe);
	return (int64_t)(n & (uint64_t)(int64_t)65535);
}

int64_t Unsafe::toUnsignedLong(int32_t n) {
	$init(Unsafe);
	return (int64_t)(n & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

char16_t Unsafe::convEndian(bool big, char16_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Character::reverseBytes(n);
}

int16_t Unsafe::convEndian(bool big, int16_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Short::reverseBytes(n);
}

int32_t Unsafe::convEndian(bool big, int32_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Integer::reverseBytes(n);
}

int64_t Unsafe::convEndian(bool big, int64_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Long::reverseBytes(n);
}

int64_t Unsafe::allocateMemory0(int64_t bytes) {
	void* m = malloc(bytes);
	return (int64_t)m;
}

int64_t Unsafe::reallocateMemory0(int64_t getObject, int64_t bytes) {
	void* addr = (void*)getObject;
	void* m = realloc(addr, bytes);
	return (int64_t)m;
}

void Unsafe::freeMemory0(int64_t getObject) {
	int8_t* m = (int8_t*)getObject;
	free(m);
}

void Unsafe::setMemory0(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	memset(ptr, value, bytes);
}

void Unsafe::copyMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	int8_t* src = nullptr;
	if (srcBase != nullptr) {
		src = (int8_t*)((int8_t*)$toObject0(srcBase) + srcOffset);
	} else {
		src = (int8_t*)(srcOffset);
	}
	int8_t* dest = nullptr;
	if (destBase != nullptr) {
		dest = (int8_t*)((int8_t*)$toObject0(destBase) + destOffset);
	} else {
		dest = (int8_t*)(destOffset);
	}
//	if (srcBase != destBase) {
//		memcpy(dest, src, bytes);
//	} else {
		memmove(dest, src, bytes);
//	}
}

void Unsafe::copySwapMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	int8_t* src = nullptr;
	if (srcBase != nullptr) {
		src = (int8_t*)((int8_t*)$toObject0(srcBase) + srcOffset);
	} else {
		src = (int8_t*)(srcOffset);
	}
	int8_t* dest = nullptr;
	if (destBase != nullptr) {
		dest = (int8_t*)((int8_t*)$toObject0(destBase) + destOffset);
	} else {
		dest = (int8_t*)(destOffset);
	}
	int64_t count = bytes / elemSize;
	if (elemSize == 2) {
		int16_t* srcInt16 = (int16_t*)src;
		int16_t* destInt16 = (int16_t*)dest;
		for (int64_t i = 0; i < count; i++) {
			int16_t t = srcInt16[i];
			int16_t v = ((t << 8) & 0xFF00) | ((t >> 8) & 0xFF);
			destInt16[i] = v;
		}
		return;
	}
	if (elemSize == 4) {
		int32_t* srcInt32 = (int32_t*)src;
		int32_t* destInt32 = (int32_t*)dest;
		for (int64_t i = 0; i < count; i++) {
			int32_t t = srcInt32[i];
			int32_t v = ((t << 24) & 0xFF000000) | ((t << 8) & 0x00FF0000) | ((t >> 8) & 0x0000FF00) | ((t >> 24) & 0x000000FF);
			destInt32[i] = v;
		}
		return;
	}
	// elemSize == 8
	int64_t* srcInt64 = (int64_t*)src;
	int64_t* destInt64 = (int64_t*)dest;
	for (int64_t i = 0; i < count; i++) {
		int64_t t = srcInt64[i];
		int64_t v = ((t << 56) & 0xFF00000000000000) | ((t << 40) & 0x00FF000000000000) | ((t << 24) & 0x0000FF0000000000) | ((t << 8) & 0x000000FF00000000)
			| ((t >> 8) & 0x00000000FF000000) | ((t >> 24) & 0x0000000000FF0000) | ((t >> 40) & 0x000000000000FF00) | ((t >> 56) & 0x00000000000000FF);
		destInt64[i] = v;
	}
}

int64_t Unsafe::objectFieldOffset0($Field* f) {
	return f->offsetof;
}

int64_t Unsafe::objectFieldOffset1($Class* c, $String* name) {
	return $nullcheck(c->findField(name))->offsetof;
}

int64_t Unsafe::staticFieldOffset0($Field* f) {
	return f->getOffsetof();
}

$Object* Unsafe::staticFieldBase0($Field* f) {
	return nullptr;
}

bool Unsafe::shouldBeInitialized0($Class* c) {
	return c->state != $Class::CLASS_STATE_INITIALIZED;
}

void Unsafe::ensureClassInitialized0($Class* c) {
	c->ensureClassInitialized();
}

int32_t Unsafe::arrayBaseOffset0($Class* arrayClass) {
	return arrayClass->getArrayBaseOffset();
}

int32_t Unsafe::arrayIndexScale0($Class* arrayClass) {
	return arrayClass->getArrayIndexScale();
}

int32_t Unsafe::getLoadAverage0($doubles* loadavg, int32_t nelems) {
	return -1;
}

void Unsafe::invokeCleaner($ByteBuffer* directBuffer) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(directBuffer)->isDirect()) {
		$throwNew($IllegalArgumentException, "buffer is non-direct"_s);
	}
	$var($DirectBuffer, db, $cast($DirectBuffer, directBuffer));
	if ($nc(db)->attachment() != nullptr) {
		$throwNew($IllegalArgumentException, "duplicate or slice"_s);
	}
	$var($Cleaner, cleaner, $nc(db)->cleaner());
	if (cleaner != nullptr) {
		cleaner->clean();
	}
}

$Object* Unsafe::getObject(Object$* o, int64_t offset) {
	return $of(getReference(o, offset));
}

$Object* Unsafe::getObjectVolatile(Object$* o, int64_t offset) {
	return $of(getReferenceVolatile(o, offset));
}

$Object* Unsafe::getObjectAcquire(Object$* o, int64_t offset) {
	return $of(getReferenceAcquire(o, offset));
}

$Object* Unsafe::getObjectOpaque(Object$* o, int64_t offset) {
	return $of(getReferenceOpaque(o, offset));
}

void Unsafe::putObject(Object$* o, int64_t offset, Object$* x) {
	putReference(o, offset, x);
}

void Unsafe::putObjectVolatile(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putObjectOpaque(Object$* o, int64_t offset, Object$* x) {
	putReferenceOpaque(o, offset, x);
}

void Unsafe::putObjectRelease(Object$* o, int64_t offset, Object$* x) {
	putReferenceRelease(o, offset, x);
}

$Object* Unsafe::getAndSetObject(Object$* o, int64_t offset, Object$* newValue) {
	return $of(getAndSetReference(o, offset, newValue));
}

$Object* Unsafe::getAndSetObjectAcquire(Object$* o, int64_t offset, Object$* newValue) {
	return $of(getAndSetReferenceAcquire(o, offset, newValue));
}

$Object* Unsafe::getAndSetObjectRelease(Object$* o, int64_t offset, Object$* newValue) {
	return $of(getAndSetReferenceRelease(o, offset, newValue));
}

bool Unsafe::compareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

$Object* Unsafe::compareAndExchangeObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $of(compareAndExchangeReference(o, offset, expected, x));
}

$Object* Unsafe::compareAndExchangeObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $of(compareAndExchangeReferenceAcquire(o, offset, expected, x));
}

$Object* Unsafe::compareAndExchangeObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return $of(compareAndExchangeReferenceRelease(o, offset, expected, x));
}

bool Unsafe::weakCompareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferenceAcquire(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectPlain(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferencePlain(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferenceRelease(o, offset, expected, x);
}

void clinit$Unsafe($Class* class$) {
	{
		Unsafe::registerNatives();
	}
	$assignStatic(Unsafe::theUnsafe, $new(Unsafe));
	$load($booleans);
	Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($booleans));
	$load($bytes);
	Unsafe::ARRAY_BYTE_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($bytes));
	$load($shorts);
	Unsafe::ARRAY_SHORT_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($shorts));
	$load($chars);
	Unsafe::ARRAY_CHAR_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($chars));
	$load($ints);
	Unsafe::ARRAY_INT_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($ints));
	$load($longs);
	Unsafe::ARRAY_LONG_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($longs));
	$load($floats);
	Unsafe::ARRAY_FLOAT_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($floats));
	$load($doubles);
	Unsafe::ARRAY_DOUBLE_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($doubles));
	$load($ObjectArray);
	Unsafe::ARRAY_OBJECT_BASE_OFFSET = $nc(Unsafe::theUnsafe)->arrayBaseOffset($getClass($ObjectArray));
	Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($booleans));
	Unsafe::ARRAY_BYTE_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($bytes));
	Unsafe::ARRAY_SHORT_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($shorts));
	Unsafe::ARRAY_CHAR_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($chars));
	Unsafe::ARRAY_INT_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($ints));
	Unsafe::ARRAY_LONG_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($longs));
	Unsafe::ARRAY_FLOAT_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($floats));
	Unsafe::ARRAY_DOUBLE_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($doubles));
	Unsafe::ARRAY_OBJECT_INDEX_SCALE = $nc(Unsafe::theUnsafe)->arrayIndexScale($getClass($ObjectArray));
	$init($UnsafeConstants);
	Unsafe::ADDRESS_SIZE = $UnsafeConstants::ADDRESS_SIZE0;
}

Unsafe::Unsafe() {
}

$Class* Unsafe::load$($String* name, bool initialize) {
	$loadClass(Unsafe, name, initialize, &_Unsafe_ClassInfo_, clinit$Unsafe, allocate$Unsafe);
	return class$;
}

$Class* Unsafe::class$ = nullptr;

		} // misc
	} // internal
} // jdk