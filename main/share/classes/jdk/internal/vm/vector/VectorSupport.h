#ifndef _jdk_internal_vm_vector_VectorSupport_h_
#define _jdk_internal_vm_vector_VectorSupport_h_
//$ class jdk.internal.vm.vector.VectorSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("E")
#undef E
#pragma push_macro("T_BYTE")
#undef T_BYTE
#pragma push_macro("T_DOUBLE")
#undef T_DOUBLE
#pragma push_macro("T_FLOAT")
#undef T_FLOAT
#pragma push_macro("T_INT")
#undef T_INT
#pragma push_macro("T_LONG")
#undef T_LONG
#pragma push_macro("T_SHORT")
#undef T_SHORT
#pragma push_macro("U")
#undef U
#pragma push_macro("VECTOR_OP_ABS")
#undef VECTOR_OP_ABS
#pragma push_macro("VECTOR_OP_ACOS")
#undef VECTOR_OP_ACOS
#pragma push_macro("VECTOR_OP_ADD")
#undef VECTOR_OP_ADD
#pragma push_macro("VECTOR_OP_AND")
#undef VECTOR_OP_AND
#pragma push_macro("VECTOR_OP_ASIN")
#undef VECTOR_OP_ASIN
#pragma push_macro("VECTOR_OP_ATAN")
#undef VECTOR_OP_ATAN
#pragma push_macro("VECTOR_OP_ATAN2")
#undef VECTOR_OP_ATAN2
#pragma push_macro("VECTOR_OP_CAST")
#undef VECTOR_OP_CAST
#pragma push_macro("VECTOR_OP_CBRT")
#undef VECTOR_OP_CBRT
#pragma push_macro("VECTOR_OP_COS")
#undef VECTOR_OP_COS
#pragma push_macro("VECTOR_OP_COSH")
#undef VECTOR_OP_COSH
#pragma push_macro("VECTOR_OP_DIV")
#undef VECTOR_OP_DIV
#pragma push_macro("VECTOR_OP_EXP")
#undef VECTOR_OP_EXP
#pragma push_macro("VECTOR_OP_EXPM1")
#undef VECTOR_OP_EXPM1
#pragma push_macro("VECTOR_OP_FMA")
#undef VECTOR_OP_FMA
#pragma push_macro("VECTOR_OP_HYPOT")
#undef VECTOR_OP_HYPOT
#pragma push_macro("VECTOR_OP_LOG")
#undef VECTOR_OP_LOG
#pragma push_macro("VECTOR_OP_LOG10")
#undef VECTOR_OP_LOG10
#pragma push_macro("VECTOR_OP_LOG1P")
#undef VECTOR_OP_LOG1P
#pragma push_macro("VECTOR_OP_LSHIFT")
#undef VECTOR_OP_LSHIFT
#pragma push_macro("VECTOR_OP_MASK_FIRSTTRUE")
#undef VECTOR_OP_MASK_FIRSTTRUE
#pragma push_macro("VECTOR_OP_MASK_LASTTRUE")
#undef VECTOR_OP_MASK_LASTTRUE
#pragma push_macro("VECTOR_OP_MASK_TRUECOUNT")
#undef VECTOR_OP_MASK_TRUECOUNT
#pragma push_macro("VECTOR_OP_MAX")
#undef VECTOR_OP_MAX
#pragma push_macro("VECTOR_OP_MIN")
#undef VECTOR_OP_MIN
#pragma push_macro("VECTOR_OP_MUL")
#undef VECTOR_OP_MUL
#pragma push_macro("VECTOR_OP_NEG")
#undef VECTOR_OP_NEG
#pragma push_macro("VECTOR_OP_OR")
#undef VECTOR_OP_OR
#pragma push_macro("VECTOR_OP_POW")
#undef VECTOR_OP_POW
#pragma push_macro("VECTOR_OP_REINTERPRET")
#undef VECTOR_OP_REINTERPRET
#pragma push_macro("VECTOR_OP_RSHIFT")
#undef VECTOR_OP_RSHIFT
#pragma push_macro("VECTOR_OP_SIN")
#undef VECTOR_OP_SIN
#pragma push_macro("VECTOR_OP_SINH")
#undef VECTOR_OP_SINH
#pragma push_macro("VECTOR_OP_SQRT")
#undef VECTOR_OP_SQRT
#pragma push_macro("VECTOR_OP_SUB")
#undef VECTOR_OP_SUB
#pragma push_macro("VECTOR_OP_TAN")
#undef VECTOR_OP_TAN
#pragma push_macro("VECTOR_OP_TANH")
#undef VECTOR_OP_TANH
#pragma push_macro("VECTOR_OP_URSHIFT")
#undef VECTOR_OP_URSHIFT
#pragma push_macro("VECTOR_OP_XOR")
#undef VECTOR_OP_XOR
#pragma push_macro("VM")
#undef VM

namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$BroadcastOperation;
				class VectorSupport$IndexOperation;
				class VectorSupport$LoadOperation;
				class VectorSupport$LoadVectorOperationWithMap;
				class VectorSupport$ShuffleIotaOperation;
				class VectorSupport$ShuffleToVectorOperation;
				class VectorSupport$StoreVectorOperation;
				class VectorSupport$StoreVectorOperationWithMap;
				class VectorSupport$TernaryOperation;
				class VectorSupport$VecExtractOp;
				class VectorSupport$VecInsertOp;
				class VectorSupport$Vector;
				class VectorSupport$VectorBlendOp;
				class VectorSupport$VectorBroadcastIntOp;
				class VectorSupport$VectorCompareOp;
				class VectorSupport$VectorConvertOp;
				class VectorSupport$VectorMask;
				class VectorSupport$VectorMaskOp;
				class VectorSupport$VectorPayload;
				class VectorSupport$VectorRearrangeOp;
				class VectorSupport$VectorShuffle;
				class VectorSupport$VectorSpecies;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

class $export VectorSupport : public ::java::lang::Object {
	$class(VectorSupport, 0, ::java::lang::Object)
public:
	VectorSupport();
	void init$();
	static $Object* binaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, ::java::util::function::BiFunction* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* blend($Class* vectorClass, $Class* maskClass, $Class* elementType, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v1, ::jdk::internal::vm::vector::VectorSupport$Vector* v2, ::jdk::internal::vm::vector::VectorSupport$VectorMask* m, ::jdk::internal::vm::vector::VectorSupport$VectorBlendOp* defaultImpl);
	static $Object* broadcastCoerced($Class* vmClass, $Class* E, int32_t length, int64_t bits, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$BroadcastOperation* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* broadcastInt(int32_t opr, $Class* vectorClass, $Class* elementType, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v, int32_t n, ::jdk::internal::vm::vector::VectorSupport$VectorBroadcastIntOp* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$VectorMask* compare(int32_t cond, $Class* vectorClass, $Class* maskClass, $Class* elementType, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v1, ::jdk::internal::vm::vector::VectorSupport$Vector* v2, ::jdk::internal::vm::vector::VectorSupport$VectorCompareOp* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$VectorPayload* convert(int32_t oprId, $Class* fromVectorClass, $Class* fromElementType, int32_t fromVLen, $Class* toVectorClass, $Class* toElementType, int32_t toVLen, ::jdk::internal::vm::vector::VectorSupport$VectorPayload* v, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$VectorConvertOp* defaultImpl);
	static int64_t extract($Class* vectorClass, $Class* elementType, int32_t vlen, ::jdk::internal::vm::vector::VectorSupport$Vector* vec, int32_t ix, ::jdk::internal::vm::vector::VectorSupport$VecExtractOp* defaultImpl);
	static int32_t getMaxLaneCount($Class* etype);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* indexVector($Class* vClass, $Class* E, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v, int32_t step, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$IndexOperation* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* insert($Class* vectorClass, $Class* elementType, int32_t vlen, ::jdk::internal::vm::vector::VectorSupport$Vector* vec, int32_t ix, int64_t val, ::jdk::internal::vm::vector::VectorSupport$VecInsertOp* defaultImpl);
	static bool isNonCapturingLambda(Object$* o);
	static $Object* load($Class* vmClass, $Class* E, int32_t length, Object$* base, int64_t offset, Object$* container, int32_t index, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$LoadOperation* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* loadWithMap($Class* vectorClass, $Class* E, int32_t length, $Class* vectorIndexClass, Object$* base, int64_t offset, ::jdk::internal::vm::vector::VectorSupport$Vector* index_vector, Object$* container, int32_t index, $ints* indexMap, int32_t indexM, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$LoadVectorOperationWithMap* defaultImpl);
	static int32_t maskReductionCoerced(int32_t oper, $Class* maskClass, $Class* elemClass, int32_t length, Object$* m, ::jdk::internal::vm::vector::VectorSupport$VectorMaskOp* defaultImpl);
	static $Object* maybeRebox(Object$* v);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* rearrangeOp($Class* vectorClass, $Class* shuffleClass, $Class* elementType, int32_t vlen, ::jdk::internal::vm::vector::VectorSupport$Vector* v1, ::jdk::internal::vm::vector::VectorSupport$VectorShuffle* sh, ::jdk::internal::vm::vector::VectorSupport$VectorRearrangeOp* defaultImpl);
	static int64_t reductionCoerced(int32_t oprId, $Class* vectorClass, $Class* elementType, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v, ::java::util::function::Function* defaultImpl);
	static int32_t registerNatives();
	static ::jdk::internal::vm::vector::VectorSupport$VectorShuffle* shuffleIota($Class* E, $Class* ShuffleClass, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, int32_t length, int32_t start, int32_t step, int32_t wrap, ::jdk::internal::vm::vector::VectorSupport$ShuffleIotaOperation* defaultImpl);
	static $Object* shuffleToVector($Class* VM, $Class* E, $Class* ShuffleClass, ::jdk::internal::vm::vector::VectorSupport$VectorShuffle* s, int32_t length, ::jdk::internal::vm::vector::VectorSupport$ShuffleToVectorOperation* defaultImpl);
	static void store($Class* vectorClass, $Class* elementType, int32_t length, Object$* base, int64_t offset, ::jdk::internal::vm::vector::VectorSupport$Vector* v, Object$* container, int32_t index, ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation* defaultImpl);
	static void storeWithMap($Class* vectorClass, $Class* elementType, int32_t length, $Class* vectorIndexClass, Object$* base, int64_t offset, ::jdk::internal::vm::vector::VectorSupport$Vector* index_vector, ::jdk::internal::vm::vector::VectorSupport$Vector* v, Object$* container, int32_t index, $ints* indexMap, int32_t indexM, ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperationWithMap* defaultImpl);
	static $Object* ternaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, Object$* vm3, ::jdk::internal::vm::vector::VectorSupport$TernaryOperation* defaultImpl);
	static bool test(int32_t cond, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm1, Object$* vm2, ::java::util::function::BiFunction* defaultImpl);
	static $Object* unaryOp(int32_t oprId, $Class* vmClass, $Class* elementType, int32_t length, Object$* vm, ::java::util::function::Function* defaultImpl);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* U;
	static const int32_t VECTOR_OP_ABS = 0;
	static const int32_t VECTOR_OP_NEG = 1;
	static const int32_t VECTOR_OP_SQRT = 2;
	static const int32_t VECTOR_OP_ADD = 4;
	static const int32_t VECTOR_OP_SUB = 5;
	static const int32_t VECTOR_OP_MUL = 6;
	static const int32_t VECTOR_OP_DIV = 7;
	static const int32_t VECTOR_OP_MIN = 8;
	static const int32_t VECTOR_OP_MAX = 9;
	static const int32_t VECTOR_OP_AND = 10;
	static const int32_t VECTOR_OP_OR = 11;
	static const int32_t VECTOR_OP_XOR = 12;
	static const int32_t VECTOR_OP_FMA = 13;
	static const int32_t VECTOR_OP_LSHIFT = 14;
	static const int32_t VECTOR_OP_RSHIFT = 15;
	static const int32_t VECTOR_OP_URSHIFT = 16;
	static const int32_t VECTOR_OP_CAST = 17;
	static const int32_t VECTOR_OP_REINTERPRET = 18;
	static const int32_t VECTOR_OP_MASK_TRUECOUNT = 19;
	static const int32_t VECTOR_OP_MASK_FIRSTTRUE = 20;
	static const int32_t VECTOR_OP_MASK_LASTTRUE = 21;
	static const int32_t VECTOR_OP_TAN = 101;
	static const int32_t VECTOR_OP_TANH = 102;
	static const int32_t VECTOR_OP_SIN = 103;
	static const int32_t VECTOR_OP_SINH = 104;
	static const int32_t VECTOR_OP_COS = 105;
	static const int32_t VECTOR_OP_COSH = 106;
	static const int32_t VECTOR_OP_ASIN = 107;
	static const int32_t VECTOR_OP_ACOS = 108;
	static const int32_t VECTOR_OP_ATAN = 109;
	static const int32_t VECTOR_OP_ATAN2 = 110;
	static const int32_t VECTOR_OP_CBRT = 111;
	static const int32_t VECTOR_OP_LOG = 112;
	static const int32_t VECTOR_OP_LOG10 = 113;
	static const int32_t VECTOR_OP_LOG1P = 114;
	static const int32_t VECTOR_OP_POW = 115;
	static const int32_t VECTOR_OP_EXP = 116;
	static const int32_t VECTOR_OP_EXPM1 = 117;
	static const int32_t VECTOR_OP_HYPOT = 118;
	static const int32_t BT_eq = 0;
	static const int32_t BT_ne = 4;
	static const int32_t BT_le = 5;
	static const int32_t BT_ge = 7;
	static const int32_t BT_lt = 3;
	static const int32_t BT_gt = 1;
	static const int32_t BT_overflow = 2;
	static const int32_t BT_no_overflow = 6;
	static const int32_t BT_unsigned_compare = 16;
	static const int32_t BT_ule = 21; // BT_le | BT_unsigned_compare
	static const int32_t BT_uge = 23; // BT_ge | BT_unsigned_compare
	static const int32_t BT_ult = 19; // BT_lt | BT_unsigned_compare
	static const int32_t BT_ugt = 17; // BT_gt | BT_unsigned_compare
	static const int32_t T_FLOAT = 6;
	static const int32_t T_DOUBLE = 7;
	static const int32_t T_BYTE = 8;
	static const int32_t T_SHORT = 9;
	static const int32_t T_INT = 10;
	static const int32_t T_LONG = 11;
};

			} // vector
		} // vm
	} // internal
} // jdk

#pragma pop_macro("E")
#pragma pop_macro("T_BYTE")
#pragma pop_macro("T_DOUBLE")
#pragma pop_macro("T_FLOAT")
#pragma pop_macro("T_INT")
#pragma pop_macro("T_LONG")
#pragma pop_macro("T_SHORT")
#pragma pop_macro("U")
#pragma pop_macro("VECTOR_OP_ABS")
#pragma pop_macro("VECTOR_OP_ACOS")
#pragma pop_macro("VECTOR_OP_ADD")
#pragma pop_macro("VECTOR_OP_AND")
#pragma pop_macro("VECTOR_OP_ASIN")
#pragma pop_macro("VECTOR_OP_ATAN")
#pragma pop_macro("VECTOR_OP_ATAN2")
#pragma pop_macro("VECTOR_OP_CAST")
#pragma pop_macro("VECTOR_OP_CBRT")
#pragma pop_macro("VECTOR_OP_COS")
#pragma pop_macro("VECTOR_OP_COSH")
#pragma pop_macro("VECTOR_OP_DIV")
#pragma pop_macro("VECTOR_OP_EXP")
#pragma pop_macro("VECTOR_OP_EXPM1")
#pragma pop_macro("VECTOR_OP_FMA")
#pragma pop_macro("VECTOR_OP_HYPOT")
#pragma pop_macro("VECTOR_OP_LOG")
#pragma pop_macro("VECTOR_OP_LOG10")
#pragma pop_macro("VECTOR_OP_LOG1P")
#pragma pop_macro("VECTOR_OP_LSHIFT")
#pragma pop_macro("VECTOR_OP_MASK_FIRSTTRUE")
#pragma pop_macro("VECTOR_OP_MASK_LASTTRUE")
#pragma pop_macro("VECTOR_OP_MASK_TRUECOUNT")
#pragma pop_macro("VECTOR_OP_MAX")
#pragma pop_macro("VECTOR_OP_MIN")
#pragma pop_macro("VECTOR_OP_MUL")
#pragma pop_macro("VECTOR_OP_NEG")
#pragma pop_macro("VECTOR_OP_OR")
#pragma pop_macro("VECTOR_OP_POW")
#pragma pop_macro("VECTOR_OP_REINTERPRET")
#pragma pop_macro("VECTOR_OP_RSHIFT")
#pragma pop_macro("VECTOR_OP_SIN")
#pragma pop_macro("VECTOR_OP_SINH")
#pragma pop_macro("VECTOR_OP_SQRT")
#pragma pop_macro("VECTOR_OP_SUB")
#pragma pop_macro("VECTOR_OP_TAN")
#pragma pop_macro("VECTOR_OP_TANH")
#pragma pop_macro("VECTOR_OP_URSHIFT")
#pragma pop_macro("VECTOR_OP_XOR")
#pragma pop_macro("VM")

#endif // _jdk_internal_vm_vector_VectorSupport_h_