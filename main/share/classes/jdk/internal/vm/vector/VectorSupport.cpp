#include <jdk/internal/vm/vector/VectorSupport.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/vm/vector/VectorSupport$BroadcastOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$IndexOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$LoadOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$LoadVectorOperationWithMap.h>
#include <jdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$ShuffleToVectorOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperationWithMap.h>
#include <jdk/internal/vm/vector/VectorSupport$TernaryOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$VecExtractOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VecInsertOp.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorBlendOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorCompareOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorConvertOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorMask.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorMaskOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorRearrangeOp.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jcpp.h>

#undef VECTOR_OP_SINH
#undef VECTOR_OP_ACOS
#undef T_DOUBLE
#undef E
#undef VECTOR_OP_MAX
#undef VECTOR_OP_COSH
#undef VECTOR_OP_CAST
#undef VECTOR_OP_REINTERPRET
#undef VECTOR_OP_EXPM1
#undef VECTOR_OP_LOG10
#undef VECTOR_OP_FMA
#undef VECTOR_OP_OR
#undef VECTOR_OP_ASIN
#undef VECTOR_OP_SUB
#undef U
#undef VECTOR_OP_ABS
#undef VECTOR_OP_HYPOT
#undef T_BYTE
#undef VECTOR_OP_NEG
#undef VECTOR_OP_DIV
#undef VECTOR_OP_MASK_TRUECOUNT
#undef VECTOR_OP_ATAN2
#undef VECTOR_OP_MUL
#undef VECTOR_OP_ATAN
#undef VECTOR_OP_LOG
#undef T_INT
#undef VECTOR_OP_MASK_LASTTRUE
#undef VECTOR_OP_CBRT
#undef VECTOR_OP_LSHIFT
#undef T_SHORT
#undef VECTOR_OP_COS
#undef VECTOR_OP_SQRT
#undef VECTOR_OP_LOG1P
#undef VECTOR_OP_EXP
#undef T_LONG
#undef VECTOR_OP_XOR
#undef VECTOR_OP_URSHIFT
#undef T_FLOAT
#undef VECTOR_OP_ADD
#undef VECTOR_OP_TAN
#undef VM
#undef VECTOR_OP_MIN
#undef VECTOR_OP_TANH
#undef VECTOR_OP_SIN
#undef VECTOR_OP_POW
#undef VECTOR_OP_RSHIFT
#undef VECTOR_OP_AND
#undef VECTOR_OP_MASK_FIRSTTRUE

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $VectorSupport$BroadcastOperation = ::jdk::internal::vm::vector::VectorSupport$BroadcastOperation;
using $VectorSupport$IndexOperation = ::jdk::internal::vm::vector::VectorSupport$IndexOperation;
using $VectorSupport$LoadOperation = ::jdk::internal::vm::vector::VectorSupport$LoadOperation;
using $VectorSupport$LoadVectorOperationWithMap = ::jdk::internal::vm::vector::VectorSupport$LoadVectorOperationWithMap;
using $VectorSupport$ShuffleIotaOperation = ::jdk::internal::vm::vector::VectorSupport$ShuffleIotaOperation;
using $VectorSupport$ShuffleToVectorOperation = ::jdk::internal::vm::vector::VectorSupport$ShuffleToVectorOperation;
using $VectorSupport$StoreVectorOperation = ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation;
using $VectorSupport$StoreVectorOperationWithMap = ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperationWithMap;
using $VectorSupport$TernaryOperation = ::jdk::internal::vm::vector::VectorSupport$TernaryOperation;
using $VectorSupport$VecExtractOp = ::jdk::internal::vm::vector::VectorSupport$VecExtractOp;
using $VectorSupport$VecInsertOp = ::jdk::internal::vm::vector::VectorSupport$VecInsertOp;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorBlendOp = ::jdk::internal::vm::vector::VectorSupport$VectorBlendOp;
using $VectorSupport$VectorBroadcastIntOp = ::jdk::internal::vm::vector::VectorSupport$VectorBroadcastIntOp;
using $VectorSupport$VectorCompareOp = ::jdk::internal::vm::vector::VectorSupport$VectorCompareOp;
using $VectorSupport$VectorConvertOp = ::jdk::internal::vm::vector::VectorSupport$VectorConvertOp;
using $VectorSupport$VectorMask = ::jdk::internal::vm::vector::VectorSupport$VectorMask;
using $VectorSupport$VectorMaskOp = ::jdk::internal::vm::vector::VectorSupport$VectorMaskOp;
using $VectorSupport$VectorPayload = ::jdk::internal::vm::vector::VectorSupport$VectorPayload;
using $VectorSupport$VectorRearrangeOp = ::jdk::internal::vm::vector::VectorSupport$VectorRearrangeOp;
using $VectorSupport$VectorShuffle = ::jdk::internal::vm::vector::VectorSupport$VectorShuffle;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$CompoundAttribute _VectorSupport_MethodAnnotations_binaryOp1[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_blend2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_broadcastCoerced3[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_broadcastInt4[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_compare5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_convert6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_extract7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_insert10[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_load12[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_loadWithMap13[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_maskReductionCoerced14[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_maybeRebox15[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_rearrangeOp16[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_reductionCoerced17[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_shuffleIota19[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_shuffleToVector20[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_store21[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_storeWithMap22[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_ternaryOp23[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_test24[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VectorSupport_MethodAnnotations_unaryOp25[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _VectorSupport_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VectorSupport, $assertionsDisabled)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VectorSupport, U)},
	{"VECTOR_OP_ABS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ABS)},
	{"VECTOR_OP_NEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_NEG)},
	{"VECTOR_OP_SQRT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_SQRT)},
	{"VECTOR_OP_ADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ADD)},
	{"VECTOR_OP_SUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_SUB)},
	{"VECTOR_OP_MUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MUL)},
	{"VECTOR_OP_DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_DIV)},
	{"VECTOR_OP_MIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MIN)},
	{"VECTOR_OP_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MAX)},
	{"VECTOR_OP_AND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_AND)},
	{"VECTOR_OP_OR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_OR)},
	{"VECTOR_OP_XOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_XOR)},
	{"VECTOR_OP_FMA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_FMA)},
	{"VECTOR_OP_LSHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_LSHIFT)},
	{"VECTOR_OP_RSHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_RSHIFT)},
	{"VECTOR_OP_URSHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_URSHIFT)},
	{"VECTOR_OP_CAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_CAST)},
	{"VECTOR_OP_REINTERPRET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_REINTERPRET)},
	{"VECTOR_OP_MASK_TRUECOUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MASK_TRUECOUNT)},
	{"VECTOR_OP_MASK_FIRSTTRUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MASK_FIRSTTRUE)},
	{"VECTOR_OP_MASK_LASTTRUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_MASK_LASTTRUE)},
	{"VECTOR_OP_TAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_TAN)},
	{"VECTOR_OP_TANH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_TANH)},
	{"VECTOR_OP_SIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_SIN)},
	{"VECTOR_OP_SINH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_SINH)},
	{"VECTOR_OP_COS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_COS)},
	{"VECTOR_OP_COSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_COSH)},
	{"VECTOR_OP_ASIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ASIN)},
	{"VECTOR_OP_ACOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ACOS)},
	{"VECTOR_OP_ATAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ATAN)},
	{"VECTOR_OP_ATAN2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_ATAN2)},
	{"VECTOR_OP_CBRT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_CBRT)},
	{"VECTOR_OP_LOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_LOG)},
	{"VECTOR_OP_LOG10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_LOG10)},
	{"VECTOR_OP_LOG1P", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_LOG1P)},
	{"VECTOR_OP_POW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_POW)},
	{"VECTOR_OP_EXP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_EXP)},
	{"VECTOR_OP_EXPM1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_EXPM1)},
	{"VECTOR_OP_HYPOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, VECTOR_OP_HYPOT)},
	{"BT_eq", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_eq)},
	{"BT_ne", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_ne)},
	{"BT_le", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_le)},
	{"BT_ge", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_ge)},
	{"BT_lt", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_lt)},
	{"BT_gt", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_gt)},
	{"BT_overflow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_overflow)},
	{"BT_no_overflow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_no_overflow)},
	{"BT_unsigned_compare", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_unsigned_compare)},
	{"BT_ule", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_ule)},
	{"BT_uge", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_uge)},
	{"BT_ult", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_ult)},
	{"BT_ugt", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, BT_ugt)},
	{"T_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_FLOAT)},
	{"T_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_DOUBLE)},
	{"T_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_BYTE)},
	{"T_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_SHORT)},
	{"T_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_INT)},
	{"T_LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VectorSupport, T_LONG)},
	{}
};

$MethodInfo _VectorSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VectorSupport::*)()>(&VectorSupport::init$))},
	{"binaryOp", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "<VM:Ljava/lang/Object;>(ILjava/lang/Class<+TVM;>;Ljava/lang/Class<*>;ITVM;TVM;Ljava/util/function/BiFunction<TVM;TVM;TVM;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(int32_t,$Class*,$Class*,int32_t,Object$*,Object$*,$BiFunction*)>(&VectorSupport::binaryOp)), nullptr, nullptr, _VectorSupport_MethodAnnotations_binaryOp1},
	{"blend", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorMask;Ljdk/internal/vm/vector/VectorSupport$VectorBlendOp;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;M:Ljdk/internal/vm/vector/VectorSupport$VectorMask<TE;>;E:Ljava/lang/Object;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TM;>;Ljava/lang/Class<*>;ITV;TV;TM;Ljdk/internal/vm/vector/VectorSupport$VectorBlendOp<TV;TM;TE;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,$Class*,int32_t,$VectorSupport$Vector*,$VectorSupport$Vector*,$VectorSupport$VectorMask*,$VectorSupport$VectorBlendOp*)>(&VectorSupport::blend)), nullptr, nullptr, _VectorSupport_MethodAnnotations_blend2},
	{"broadcastCoerced", "(Ljava/lang/Class;Ljava/lang/Class;IJLjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$BroadcastOperation;)Ljava/lang/Object;", "<VM:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<+TVM;>;Ljava/lang/Class<TE;>;IJTS;Ljdk/internal/vm/vector/VectorSupport$BroadcastOperation<TVM;TE;TS;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,int32_t,int64_t,$VectorSupport$VectorSpecies*,$VectorSupport$BroadcastOperation*)>(&VectorSupport::broadcastCoerced)), nullptr, nullptr, _VectorSupport_MethodAnnotations_broadcastCoerced3},
	{"broadcastInt", "(ILjava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;ILjdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>(ILjava/lang/Class<+TV;>;Ljava/lang/Class<*>;ITV;ILjdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp<TV;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)(int32_t,$Class*,$Class*,int32_t,$VectorSupport$Vector*,int32_t,$VectorSupport$VectorBroadcastIntOp*)>(&VectorSupport::broadcastInt)), nullptr, nullptr, _VectorSupport_MethodAnnotations_broadcastInt4},
	{"compare", "(ILjava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorCompareOp;)Ljdk/internal/vm/vector/VectorSupport$VectorMask;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;M:Ljdk/internal/vm/vector/VectorSupport$VectorMask<TE;>;E:Ljava/lang/Object;>(ILjava/lang/Class<+TV;>;Ljava/lang/Class<TM;>;Ljava/lang/Class<*>;ITV;TV;Ljdk/internal/vm/vector/VectorSupport$VectorCompareOp<TV;TM;>;)TM;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$VectorMask*(*)(int32_t,$Class*,$Class*,$Class*,int32_t,$VectorSupport$Vector*,$VectorSupport$Vector*,$VectorSupport$VectorCompareOp*)>(&VectorSupport::compare)), nullptr, nullptr, _VectorSupport_MethodAnnotations_compare5},
	{"convert", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$VectorPayload;Ljdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$VectorConvertOp;)Ljdk/internal/vm/vector/VectorSupport$VectorPayload;", "<VOUT:Ljdk/internal/vm/vector/VectorSupport$VectorPayload;VIN:Ljdk/internal/vm/vector/VectorSupport$VectorPayload;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<*>;>(ILjava/lang/Class<*>;Ljava/lang/Class<*>;ILjava/lang/Class<*>;Ljava/lang/Class<*>;ITVIN;TS;Ljdk/internal/vm/vector/VectorSupport$VectorConvertOp<TVOUT;TVIN;TS;>;)TVOUT;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$VectorPayload*(*)(int32_t,$Class*,$Class*,int32_t,$Class*,$Class*,int32_t,$VectorSupport$VectorPayload*,$VectorSupport$VectorSpecies*,$VectorSupport$VectorConvertOp*)>(&VectorSupport::convert)), nullptr, nullptr, _VectorSupport_MethodAnnotations_convert6},
	{"extract", "(Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;ILjdk/internal/vm/vector/VectorSupport$VecExtractOp;)J", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>(Ljava/lang/Class<*>;Ljava/lang/Class<*>;ITV;ILjdk/internal/vm/vector/VectorSupport$VecExtractOp<TV;>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Class*,$Class*,int32_t,$VectorSupport$Vector*,int32_t,$VectorSupport$VecExtractOp*)>(&VectorSupport::extract)), nullptr, nullptr, _VectorSupport_MethodAnnotations_extract7},
	{"getMaxLaneCount", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($Class*)>(&VectorSupport::getMaxLaneCount))},
	{"indexVector", "(Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$IndexOperation;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ITV;ITS;Ljdk/internal/vm/vector/VectorSupport$IndexOperation<TV;TE;TS;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,int32_t,$VectorSupport$Vector*,int32_t,$VectorSupport$VectorSpecies*,$VectorSupport$IndexOperation*)>(&VectorSupport::indexVector))},
	{"insert", "(Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;IJLjdk/internal/vm/vector/VectorSupport$VecInsertOp;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<*>;ITV;IJLjdk/internal/vm/vector/VectorSupport$VecInsertOp<TV;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,int32_t,$VectorSupport$Vector*,int32_t,int64_t,$VectorSupport$VecInsertOp*)>(&VectorSupport::insert)), nullptr, nullptr, _VectorSupport_MethodAnnotations_insert10},
	{"isNonCapturingLambda", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*)>(&VectorSupport::isNonCapturingLambda))},
	{"load", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;JLjava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadOperation;)Ljava/lang/Object;", "<C:Ljava/lang/Object;VM:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<+TVM;>;Ljava/lang/Class<TE;>;ILjava/lang/Object;JTC;ITS;Ljdk/internal/vm/vector/VectorSupport$LoadOperation<TC;TVM;TE;TS;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,int32_t,Object$*,int64_t,Object$*,int32_t,$VectorSupport$VectorSpecies*,$VectorSupport$LoadOperation*)>(&VectorSupport::load)), nullptr, nullptr, _VectorSupport_MethodAnnotations_load12},
	{"loadWithMap", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/lang/Class;Ljava/lang/Object;JLjdk/internal/vm/vector/VectorSupport$Vector;Ljava/lang/Object;I[IILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadVectorOperationWithMap;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;W:Ljdk/internal/vm/vector/VectorSupport$Vector<Ljava/lang/Integer;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<*>;Ljava/lang/Class<TE;>;ILjava/lang/Class<*>;Ljava/lang/Object;JTW;TC;I[IITS;Ljdk/internal/vm/vector/VectorSupport$LoadVectorOperationWithMap<TC;TV;TE;TS;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,int32_t,$Class*,Object$*,int64_t,$VectorSupport$Vector*,Object$*,int32_t,$ints*,int32_t,$VectorSupport$VectorSpecies*,$VectorSupport$LoadVectorOperationWithMap*)>(&VectorSupport::loadWithMap)), nullptr, nullptr, _VectorSupport_MethodAnnotations_loadWithMap13},
	{"maskReductionCoerced", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;Ljdk/internal/vm/vector/VectorSupport$VectorMaskOp;)I", "<E:Ljava/lang/Object;M:Ljava/lang/Object;>(ILjava/lang/Class<+TM;>;Ljava/lang/Class<*>;ITM;Ljdk/internal/vm/vector/VectorSupport$VectorMaskOp<TM;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,$Class*,$Class*,int32_t,Object$*,$VectorSupport$VectorMaskOp*)>(&VectorSupport::maskReductionCoerced)), nullptr, nullptr, _VectorSupport_MethodAnnotations_maskReductionCoerced14},
	{"maybeRebox", "(Ljava/lang/Object;)Ljava/lang/Object;", "<V:Ljava/lang/Object;>(TV;)TV;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&VectorSupport::maybeRebox)), nullptr, nullptr, _VectorSupport_MethodAnnotations_maybeRebox15},
	{"rearrangeOp", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;Ljdk/internal/vm/vector/VectorSupport$VectorRearrangeOp;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;Sh:Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;E:Ljava/lang/Object;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TSh;>;Ljava/lang/Class<*>;ITV;TSh;Ljdk/internal/vm/vector/VectorSupport$VectorRearrangeOp<TV;TSh;TE;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,$Class*,int32_t,$VectorSupport$Vector*,$VectorSupport$VectorShuffle*,$VectorSupport$VectorRearrangeOp*)>(&VectorSupport::rearrangeOp)), nullptr, nullptr, _VectorSupport_MethodAnnotations_rearrangeOp16},
	{"reductionCoerced", "(ILjava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljava/util/function/Function;)J", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>(ILjava/lang/Class<*>;Ljava/lang/Class<*>;ITV;Ljava/util/function/Function<TV;Ljava/lang/Long;>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int32_t,$Class*,$Class*,int32_t,$VectorSupport$Vector*,$Function*)>(&VectorSupport::reductionCoerced)), nullptr, nullptr, _VectorSupport_MethodAnnotations_reductionCoerced17},
	{"registerNatives", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&VectorSupport::registerNatives))},
	{"shuffleIota", "(Ljava/lang/Class;Ljava/lang/Class;Ljdk/internal/vm/vector/VectorSupport$VectorSpecies;IIIILjdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;", "<E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<*>;Ljava/lang/Class<*>;TS;IIIILjdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation<TE;TS;>;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$VectorShuffle*(*)($Class*,$Class*,$VectorSupport$VectorSpecies*,int32_t,int32_t,int32_t,int32_t,$VectorSupport$ShuffleIotaOperation*)>(&VectorSupport::shuffleIota)), nullptr, nullptr, _VectorSupport_MethodAnnotations_shuffleIota19},
	{"shuffleToVector", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;ILjdk/internal/vm/vector/VectorSupport$ShuffleToVectorOperation;)Ljava/lang/Object;", "<VM:Ljava/lang/Object;Sh:Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;E:Ljava/lang/Object;>(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;TSh;ILjdk/internal/vm/vector/VectorSupport$ShuffleToVectorOperation<TVM;TSh;TE;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,$Class*,$VectorSupport$VectorShuffle*,int32_t,$VectorSupport$ShuffleToVectorOperation*)>(&VectorSupport::shuffleToVector)), nullptr, nullptr, _VectorSupport_MethodAnnotations_shuffleToVector20},
	{"store", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;JLjdk/internal/vm/vector/VectorSupport$Vector;Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation;)V", "<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>(Ljava/lang/Class<*>;Ljava/lang/Class<*>;ILjava/lang/Object;JTV;TC;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation<TC;TV;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$Class*,int32_t,Object$*,int64_t,$VectorSupport$Vector*,Object$*,int32_t,$VectorSupport$StoreVectorOperation*)>(&VectorSupport::store)), nullptr, nullptr, _VectorSupport_MethodAnnotations_store21},
	{"storeWithMap", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/lang/Class;Ljava/lang/Object;JLjdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$Vector;Ljava/lang/Object;I[IILjdk/internal/vm/vector/VectorSupport$StoreVectorOperationWithMap;)V", "<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;W:Ljdk/internal/vm/vector/VectorSupport$Vector<Ljava/lang/Integer;>;>(Ljava/lang/Class<*>;Ljava/lang/Class<*>;ILjava/lang/Class<*>;Ljava/lang/Object;JTW;TV;TC;I[IILjdk/internal/vm/vector/VectorSupport$StoreVectorOperationWithMap<TC;TV;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$Class*,int32_t,$Class*,Object$*,int64_t,$VectorSupport$Vector*,$VectorSupport$Vector*,Object$*,int32_t,$ints*,int32_t,$VectorSupport$StoreVectorOperationWithMap*)>(&VectorSupport::storeWithMap)), nullptr, nullptr, _VectorSupport_MethodAnnotations_storeWithMap22},
	{"ternaryOp", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljdk/internal/vm/vector/VectorSupport$TernaryOperation;)Ljava/lang/Object;", "<VM:Ljava/lang/Object;>(ILjava/lang/Class<+TVM;>;Ljava/lang/Class<*>;ITVM;TVM;TVM;Ljdk/internal/vm/vector/VectorSupport$TernaryOperation<TVM;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(int32_t,$Class*,$Class*,int32_t,Object$*,Object$*,Object$*,$VectorSupport$TernaryOperation*)>(&VectorSupport::ternaryOp)), nullptr, nullptr, _VectorSupport_MethodAnnotations_ternaryOp23},
	{"test", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Z", "<VM:Ljava/lang/Object;>(ILjava/lang/Class<*>;Ljava/lang/Class<*>;ITVM;TVM;Ljava/util/function/BiFunction<TVM;TVM;Ljava/lang/Boolean;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t,$Class*,$Class*,int32_t,Object$*,Object$*,$BiFunction*)>(&VectorSupport::test)), nullptr, nullptr, _VectorSupport_MethodAnnotations_test24},
	{"unaryOp", "(ILjava/lang/Class;Ljava/lang/Class;ILjava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "<VM:Ljava/lang/Object;>(ILjava/lang/Class<+TVM;>;Ljava/lang/Class<*>;ITVM;Ljava/util/function/Function<TVM;TVM;>;)TVM;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(int32_t,$Class*,$Class*,int32_t,Object$*,$Function*)>(&VectorSupport::unaryOp)), nullptr, nullptr, _VectorSupport_MethodAnnotations_unaryOp25},
	{}
};

#define _METHOD_INDEX_getMaxLaneCount 8
#define _METHOD_INDEX_registerNatives 18

$InnerClassInfo _VectorSupport_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorMaskOp", "jdk.internal.vm.vector.VectorSupport", "VectorMaskOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorConvertOp", "jdk.internal.vm.vector.VectorSupport", "VectorConvertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp", "jdk.internal.vm.vector.VectorSupport", "VectorBroadcastIntOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorBlendOp", "jdk.internal.vm.vector.VectorSupport", "VectorBlendOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp", "jdk.internal.vm.vector.VectorSupport", "VectorRearrangeOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorCompareOp", "jdk.internal.vm.vector.VectorSupport", "VectorCompareOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperationWithMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperation", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$LoadVectorOperationWithMap", "jdk.internal.vm.vector.VectorSupport", "LoadVectorOperationWithMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$LoadOperation", "jdk.internal.vm.vector.VectorSupport", "LoadOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$TernaryOperation", "jdk.internal.vm.vector.VectorSupport", "TernaryOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VecInsertOp", "jdk.internal.vm.vector.VectorSupport", "VecInsertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VecExtractOp", "jdk.internal.vm.vector.VectorSupport", "VecExtractOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$IndexOperation", "jdk.internal.vm.vector.VectorSupport", "IndexOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleToVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleIotaOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$BroadcastOperation", "jdk.internal.vm.vector.VectorSupport", "BroadcastOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorMask", "jdk.internal.vm.vector.VectorSupport", "VectorMask", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorShuffle", "jdk.internal.vm.vector.VectorSupport", "VectorShuffle", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport",
	"java.lang.Object",
	nullptr,
	_VectorSupport_FieldInfo_,
	_VectorSupport_MethodInfo_,
	nullptr,
	nullptr,
	_VectorSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport$VectorMaskOp,jdk.internal.vm.vector.VectorSupport$VectorConvertOp,jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp,jdk.internal.vm.vector.VectorSupport$VectorBlendOp,jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp,jdk.internal.vm.vector.VectorSupport$VectorCompareOp,jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap,jdk.internal.vm.vector.VectorSupport$StoreVectorOperation,jdk.internal.vm.vector.VectorSupport$LoadVectorOperationWithMap,jdk.internal.vm.vector.VectorSupport$LoadOperation,jdk.internal.vm.vector.VectorSupport$TernaryOperation,jdk.internal.vm.vector.VectorSupport$VecInsertOp,jdk.internal.vm.vector.VectorSupport$VecExtractOp,jdk.internal.vm.vector.VectorSupport$IndexOperation,jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation,jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation,jdk.internal.vm.vector.VectorSupport$BroadcastOperation,jdk.internal.vm.vector.VectorSupport$VectorMask,jdk.internal.vm.vector.VectorSupport$VectorShuffle,jdk.internal.vm.vector.VectorSupport$Vector,jdk.internal.vm.vector.VectorSupport$VectorPayload,jdk.internal.vm.vector.VectorSupport$VectorSpecies"
};

$Object* allocate$VectorSupport($Class* clazz) {
	return $of($alloc(VectorSupport));
}

bool VectorSupport::$assertionsDisabled = false;
$Unsafe* VectorSupport::U = nullptr;

void VectorSupport::init$() {
}

$Object* VectorSupport::broadcastCoerced($Class* vmClass, $Class* E, int32_t length, int64_t bits, $VectorSupport$VectorSpecies* s, $VectorSupport$BroadcastOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->broadcast(bits, s));
}

$VectorSupport$VectorShuffle* VectorSupport::shuffleIota($Class* E, $Class* ShuffleClass, $VectorSupport$VectorSpecies* s, int32_t length, int32_t start, int32_t step, int32_t wrap, $VectorSupport$ShuffleIotaOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(length, start, step, s);
}

$Object* VectorSupport::shuffleToVector($Class* VM, $Class* E, $Class* ShuffleClass, $VectorSupport$VectorShuffle* s, int32_t length, $VectorSupport$ShuffleToVectorOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->apply(s));
}

$VectorSupport$Vector* VectorSupport::indexVector($Class* vClass, $Class* E, int32_t length, $VectorSupport$Vector* v, int32_t step, $VectorSupport$VectorSpecies* s, $VectorSupport$IndexOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->index(v, step, s);
}

int64_t VectorSupport::reductionCoerced(int32_t oprId, $Class* vectorClass, $Class* elementType, int32_t length, $VectorSupport$Vector* v, $Function* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(($cast($Long, $($nc(defaultImpl)->apply(v)))))->longValue();
}

int64_t VectorSupport::extract($Class* vectorClass, $Class* elementType, int32_t vlen, $VectorSupport$Vector* vec, int32_t ix, $VectorSupport$VecExtractOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(vec, ix);
}

$VectorSupport$Vector* VectorSupport::insert($Class* vectorClass, $Class* elementType, int32_t vlen, $VectorSupport$Vector* vec, int32_t ix, int64_t val, $VectorSupport$VecInsertOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $cast($VectorSupport$Vector, $nc(defaultImpl)->apply(vec, ix, val));
}

$Object* VectorSupport::unaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm, $Function* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->apply(vm));
}

$Object* VectorSupport::binaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, $BiFunction* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->apply(vm1, vm2));
}

$Object* VectorSupport::ternaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, Object$* vm3, $VectorSupport$TernaryOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->apply(vm1, vm2, vm3));
}

$Object* VectorSupport::load($Class* vmClass, $Class* E, int32_t length, Object$* base, int64_t offset, Object$* container, int32_t index, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $of($nc(defaultImpl)->load(container, index, s));
}

$VectorSupport$Vector* VectorSupport::loadWithMap($Class* vectorClass, $Class* E, int32_t length, $Class* vectorIndexClass, Object$* base, int64_t offset, $VectorSupport$Vector* index_vector, Object$* container, int32_t index, $ints* indexMap, int32_t indexM, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadVectorOperationWithMap* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->loadWithMap(container, index, indexMap, indexM, s);
}

void VectorSupport::store($Class* vectorClass, $Class* elementType, int32_t length, Object$* base, int64_t offset, $VectorSupport$Vector* v, Object$* container, int32_t index, $VectorSupport$StoreVectorOperation* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	$nc(defaultImpl)->store(container, index, v);
}

void VectorSupport::storeWithMap($Class* vectorClass, $Class* elementType, int32_t length, $Class* vectorIndexClass, Object$* base, int64_t offset, $VectorSupport$Vector* index_vector, $VectorSupport$Vector* v, Object$* container, int32_t index, $ints* indexMap, int32_t indexM, $VectorSupport$StoreVectorOperationWithMap* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	$nc(defaultImpl)->storeWithMap(container, index, v, indexMap, indexM);
}

bool VectorSupport::test(int32_t cond, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, $BiFunction* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(($cast($Boolean, $($nc(defaultImpl)->apply(vm1, vm2)))))->booleanValue();
}

$VectorSupport$VectorMask* VectorSupport::compare(int32_t cond, $Class* vectorClass, $Class* maskClass, $Class* elementType, int32_t length, $VectorSupport$Vector* v1, $VectorSupport$Vector* v2, $VectorSupport$VectorCompareOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $cast($VectorSupport$VectorMask, $nc(defaultImpl)->apply(cond, v1, v2));
}

$VectorSupport$Vector* VectorSupport::rearrangeOp($Class* vectorClass, $Class* shuffleClass, $Class* elementType, int32_t vlen, $VectorSupport$Vector* v1, $VectorSupport$VectorShuffle* sh, $VectorSupport$VectorRearrangeOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(v1, sh);
}

$VectorSupport$Vector* VectorSupport::blend($Class* vectorClass, $Class* maskClass, $Class* elementType, int32_t length, $VectorSupport$Vector* v1, $VectorSupport$Vector* v2, $VectorSupport$VectorMask* m, $VectorSupport$VectorBlendOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(v1, v2, m);
}

$VectorSupport$Vector* VectorSupport::broadcastInt(int32_t opr, $Class* vectorClass, $Class* elementType, int32_t length, $VectorSupport$Vector* v, int32_t n, $VectorSupport$VectorBroadcastIntOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(v, n);
}

$VectorSupport$VectorPayload* VectorSupport::convert(int32_t oprId, $Class* fromVectorClass, $Class* fromElementType, int32_t fromVLen, $Class* toVectorClass, $Class* toElementType, int32_t toVLen, $VectorSupport$VectorPayload* v, $VectorSupport$VectorSpecies* s, $VectorSupport$VectorConvertOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $cast($VectorSupport$VectorPayload, $nc(defaultImpl)->apply(v, s));
}

$Object* VectorSupport::maybeRebox(Object$* v) {
	$init(VectorSupport);
	$nc(VectorSupport::U)->loadFence();
	return $of(v);
}

int32_t VectorSupport::maskReductionCoerced(int32_t oper, $Class* maskClass, $Class* elemClass, int32_t length, Object$* m, $VectorSupport$VectorMaskOp* defaultImpl) {
	$init(VectorSupport);
	if (!VectorSupport::$assertionsDisabled && !isNonCapturingLambda(defaultImpl)) {
		$throwNew($AssertionError, $of(defaultImpl));
	}
	return $nc(defaultImpl)->apply(m);
}

int32_t VectorSupport::getMaxLaneCount($Class* etype) {
	$init(VectorSupport);
	int32_t $ret = 0;
	$prepareNativeStatic(VectorSupport, getMaxLaneCount, int32_t, $Class* etype);
	$ret = $invokeNativeStatic(VectorSupport, getMaxLaneCount, etype);
	$finishNativeStatic();
	return $ret;
}

bool VectorSupport::isNonCapturingLambda(Object$* o) {
	$init(VectorSupport);
	$beforeCallerSensitive();
	return $nc($($nc($of(o))->getClass()->getDeclaredFields()))->length == 0;
}

int32_t VectorSupport::registerNatives() {
	$init(VectorSupport);
	int32_t $ret = 0;
	$prepareNativeStatic(VectorSupport, registerNatives, int32_t);
	$ret = $invokeNativeStatic(VectorSupport, registerNatives);
	$finishNativeStatic();
	return $ret;
}

void clinit$VectorSupport($Class* class$) {
	VectorSupport::$assertionsDisabled = !VectorSupport::class$->desiredAssertionStatus();
	{
		VectorSupport::registerNatives();
	}
	$assignStatic(VectorSupport::U, $Unsafe::getUnsafe());
}

VectorSupport::VectorSupport() {
}

$Class* VectorSupport::load$($String* name, bool initialize) {
	$loadClass(VectorSupport, name, initialize, &_VectorSupport_ClassInfo_, clinit$VectorSupport, allocate$VectorSupport);
	return class$;
}

$Class* VectorSupport::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk