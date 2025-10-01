#ifndef _jdk_internal_reflect_ClassFileConstants_h_
#define _jdk_internal_reflect_ClassFileConstants_h_
//$ interface jdk.internal.reflect.ClassFileConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACC_PUBLIC")
#undef ACC_PUBLIC

namespace jdk {
	namespace internal {
		namespace reflect {

class ClassFileConstants : public ::java::lang::Object {
	$interface(ClassFileConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int8_t opc_aconst_null = (int8_t)1;
	static const int8_t opc_sipush = (int8_t)17;
	static const int8_t opc_ldc = (int8_t)18;
	static const int8_t opc_iload_0 = (int8_t)26;
	static const int8_t opc_iload_1 = (int8_t)27;
	static const int8_t opc_iload_2 = (int8_t)28;
	static const int8_t opc_iload_3 = (int8_t)29;
	static const int8_t opc_lload_0 = (int8_t)30;
	static const int8_t opc_lload_1 = (int8_t)31;
	static const int8_t opc_lload_2 = (int8_t)32;
	static const int8_t opc_lload_3 = (int8_t)33;
	static const int8_t opc_fload_0 = (int8_t)34;
	static const int8_t opc_fload_1 = (int8_t)35;
	static const int8_t opc_fload_2 = (int8_t)36;
	static const int8_t opc_fload_3 = (int8_t)37;
	static const int8_t opc_dload_0 = (int8_t)38;
	static const int8_t opc_dload_1 = (int8_t)39;
	static const int8_t opc_dload_2 = (int8_t)40;
	static const int8_t opc_dload_3 = (int8_t)41;
	static const int8_t opc_aload_0 = (int8_t)42;
	static const int8_t opc_aload_1 = (int8_t)43;
	static const int8_t opc_aload_2 = (int8_t)44;
	static const int8_t opc_aload_3 = (int8_t)45;
	static const int8_t opc_aaload = (int8_t)50;
	static const int8_t opc_astore_0 = (int8_t)75;
	static const int8_t opc_astore_1 = (int8_t)76;
	static const int8_t opc_astore_2 = (int8_t)77;
	static const int8_t opc_astore_3 = (int8_t)78;
	static const int8_t opc_pop = (int8_t)87;
	static const int8_t opc_dup = (int8_t)89;
	static const int8_t opc_dup_x1 = (int8_t)90;
	static const int8_t opc_swap = (int8_t)95;
	static const int8_t opc_i2l = (int8_t)133;
	static const int8_t opc_i2f = (int8_t)134;
	static const int8_t opc_i2d = (int8_t)135;
	static const int8_t opc_l2i = (int8_t)136;
	static const int8_t opc_l2f = (int8_t)137;
	static const int8_t opc_l2d = (int8_t)138;
	static const int8_t opc_f2i = (int8_t)139;
	static const int8_t opc_f2l = (int8_t)140;
	static const int8_t opc_f2d = (int8_t)141;
	static const int8_t opc_d2i = (int8_t)142;
	static const int8_t opc_d2l = (int8_t)143;
	static const int8_t opc_d2f = (int8_t)144;
	static const int8_t opc_i2b = (int8_t)145;
	static const int8_t opc_i2c = (int8_t)146;
	static const int8_t opc_i2s = (int8_t)147;
	static const int8_t opc_ifeq = (int8_t)153;
	static const int8_t opc_if_icmpeq = (int8_t)159;
	static const int8_t opc_goto = (int8_t)167;
	static const int8_t opc_ireturn = (int8_t)172;
	static const int8_t opc_lreturn = (int8_t)173;
	static const int8_t opc_freturn = (int8_t)174;
	static const int8_t opc_dreturn = (int8_t)175;
	static const int8_t opc_areturn = (int8_t)176;
	static const int8_t opc_return = (int8_t)177;
	static const int8_t opc_getstatic = (int8_t)178;
	static const int8_t opc_putstatic = (int8_t)179;
	static const int8_t opc_getfield = (int8_t)180;
	static const int8_t opc_putfield = (int8_t)181;
	static const int8_t opc_invokevirtual = (int8_t)182;
	static const int8_t opc_invokespecial = (int8_t)183;
	static const int8_t opc_invokestatic = (int8_t)184;
	static const int8_t opc_invokeinterface = (int8_t)185;
	static const int8_t opc_arraylength = (int8_t)190;
	static const int8_t opc_new = (int8_t)187;
	static const int8_t opc_athrow = (int8_t)191;
	static const int8_t opc_checkcast = (int8_t)192;
	static const int8_t opc_instanceof = (int8_t)193;
	static const int8_t opc_ifnull = (int8_t)198;
	static const int8_t opc_ifnonnull = (int8_t)199;
	static const int8_t CONSTANT_Class = (int8_t)7;
	static const int8_t CONSTANT_Fieldref = (int8_t)9;
	static const int8_t CONSTANT_Methodref = (int8_t)10;
	static const int8_t CONSTANT_InterfaceMethodref = (int8_t)11;
	static const int8_t CONSTANT_NameAndType = (int8_t)12;
	static const int8_t CONSTANT_String = (int8_t)8;
	static const int8_t CONSTANT_Utf8 = (int8_t)1;
	static const int16_t ACC_PUBLIC = (int16_t)1;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("ACC_PUBLIC")

#endif // _jdk_internal_reflect_ClassFileConstants_h_