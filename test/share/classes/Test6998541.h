#ifndef _Test6998541_h_
#define _Test6998541_h_
//$ class Test6998541
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KIND")
#undef KIND
#pragma push_macro("DO_CASTS")
#undef DO_CASTS
#pragma push_macro("BITS")
#undef BITS
#pragma push_macro("NUMERIC_TYPE_WIDENING_ORDER")
#undef NUMERIC_TYPE_WIDENING_ORDER
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("N")
#undef N
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export Test6998541 : public ::java::lang::Object {
	$class(Test6998541, 0, ::java::lang::Object)
public:
	Test6998541();
	void init$();
	static void assertEquals(Object$* o, Object$* o2);
	static void boolean2prim(bool x);
	static void boolean2prim_invalid(bool x);
	static void byte2prim(int8_t x);
	static void byte2prim_invalid(int8_t x);
	static bool canDoAsType($Class* src, $Class* dst);
	static bool canDoAsType(::java::lang::invoke::MethodType* mt0, ::java::lang::invoke::MethodType* mt1);
	static void char2prim(char16_t x);
	static void char2prim_invalid(char16_t x);
	static void doboolean();
	static void dobyte();
	static void dochar();
	static void dodouble();
	static void dofloat();
	static void doint();
	static void dolong();
	static void doshort();
	static void double2prim(double x);
	static void double2prim_invalid(double x);
	static void dovoid();
	static void fail();
	static void float2prim(float x);
	static void float2prim_invalid(float x);
	static bool identity(bool v);
	static int8_t identity(int8_t v);
	static char16_t identity(char16_t v);
	static int16_t identity(int16_t v);
	static int32_t identity(int32_t v);
	static int64_t identity(int64_t v);
	static float identity(float v);
	static double identity(double v);
	static void identity();
	static void int2prim(int32_t x);
	static void int2prim_invalid(int32_t x);
	static void long2prim(int64_t x);
	static void long2prim_invalid(int64_t x);
	static void main($StringArray* args);
	static ::java::lang::invoke::MethodHandle* mh($Class* ret, $ClassArray* args);
	static ::java::lang::invoke::MethodHandle* mh_b($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_c($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_d($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_f($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_i($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_j($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_s($Class* ret);
	static ::java::lang::invoke::MethodHandle* mh_v($Class* arg);
	static ::java::lang::invoke::MethodHandle* mh_z($Class* ret);
	static void prim2void(int32_t x);
	static void prim2void_invalid(int32_t x);
	static void short2prim(int16_t x);
	static void short2prim_invalid(int16_t x);
	static void void2prim(int32_t i);
	static void void2prim_invalid(double x);
	static $Class* CLASS;
	static $String* NAME;
	static int32_t N;
	static $String* KIND;
	static const int32_t BITS = 513;
	static bool DO_CASTS;
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static $ClassArray* NUMERIC_TYPE_WIDENING_ORDER;
	static ::java::lang::invoke::MethodHandle* mh_zz;
	static ::java::lang::invoke::MethodHandle* mh_bz;
	static ::java::lang::invoke::MethodHandle* mh_cz;
	static ::java::lang::invoke::MethodHandle* mh_sz;
	static ::java::lang::invoke::MethodHandle* mh_iz;
	static ::java::lang::invoke::MethodHandle* mh_jz;
	static ::java::lang::invoke::MethodHandle* mh_fz;
	static ::java::lang::invoke::MethodHandle* mh_dz;
	static ::java::lang::invoke::MethodHandle* mh_zb;
	static ::java::lang::invoke::MethodHandle* mh_bb;
	static ::java::lang::invoke::MethodHandle* mh_cb;
	static ::java::lang::invoke::MethodHandle* mh_sb;
	static ::java::lang::invoke::MethodHandle* mh_ib;
	static ::java::lang::invoke::MethodHandle* mh_jb;
	static ::java::lang::invoke::MethodHandle* mh_fb;
	static ::java::lang::invoke::MethodHandle* mh_db;
	static ::java::lang::invoke::MethodHandle* mh_zc;
	static ::java::lang::invoke::MethodHandle* mh_bc;
	static ::java::lang::invoke::MethodHandle* mh_cc;
	static ::java::lang::invoke::MethodHandle* mh_sc;
	static ::java::lang::invoke::MethodHandle* mh_ic;
	static ::java::lang::invoke::MethodHandle* mh_jc;
	static ::java::lang::invoke::MethodHandle* mh_fc;
	static ::java::lang::invoke::MethodHandle* mh_dc;
	static ::java::lang::invoke::MethodHandle* mh_zs;
	static ::java::lang::invoke::MethodHandle* mh_bs;
	static ::java::lang::invoke::MethodHandle* mh_cs;
	static ::java::lang::invoke::MethodHandle* mh_ss;
	static ::java::lang::invoke::MethodHandle* mh_is;
	static ::java::lang::invoke::MethodHandle* mh_js;
	static ::java::lang::invoke::MethodHandle* mh_fs;
	static ::java::lang::invoke::MethodHandle* mh_ds;
	static ::java::lang::invoke::MethodHandle* mh_zi;
	static ::java::lang::invoke::MethodHandle* mh_bi;
	static ::java::lang::invoke::MethodHandle* mh_ci;
	static ::java::lang::invoke::MethodHandle* mh_si;
	static ::java::lang::invoke::MethodHandle* mh_ii;
	static ::java::lang::invoke::MethodHandle* mh_ji;
	static ::java::lang::invoke::MethodHandle* mh_fi;
	static ::java::lang::invoke::MethodHandle* mh_di;
	static ::java::lang::invoke::MethodHandle* mh_zj;
	static ::java::lang::invoke::MethodHandle* mh_bj;
	static ::java::lang::invoke::MethodHandle* mh_cj;
	static ::java::lang::invoke::MethodHandle* mh_sj;
	static ::java::lang::invoke::MethodHandle* mh_ij;
	static ::java::lang::invoke::MethodHandle* mh_jj;
	static ::java::lang::invoke::MethodHandle* mh_fj;
	static ::java::lang::invoke::MethodHandle* mh_dj;
	static ::java::lang::invoke::MethodHandle* mh_zf;
	static ::java::lang::invoke::MethodHandle* mh_bf;
	static ::java::lang::invoke::MethodHandle* mh_cf;
	static ::java::lang::invoke::MethodHandle* mh_sf;
	static ::java::lang::invoke::MethodHandle* mh_if;
	static ::java::lang::invoke::MethodHandle* mh_jf;
	static ::java::lang::invoke::MethodHandle* mh_ff;
	static ::java::lang::invoke::MethodHandle* mh_df;
	static ::java::lang::invoke::MethodHandle* mh_zd;
	static ::java::lang::invoke::MethodHandle* mh_bd;
	static ::java::lang::invoke::MethodHandle* mh_cd;
	static ::java::lang::invoke::MethodHandle* mh_sd;
	static ::java::lang::invoke::MethodHandle* mh_id;
	static ::java::lang::invoke::MethodHandle* mh_jd;
	static ::java::lang::invoke::MethodHandle* mh_fd;
	static ::java::lang::invoke::MethodHandle* mh_dd;
	static ::java::lang::invoke::MethodHandle* mh_zv;
	static ::java::lang::invoke::MethodHandle* mh_bv;
	static ::java::lang::invoke::MethodHandle* mh_cv;
	static ::java::lang::invoke::MethodHandle* mh_sv;
	static ::java::lang::invoke::MethodHandle* mh_iv;
	static ::java::lang::invoke::MethodHandle* mh_jv;
	static ::java::lang::invoke::MethodHandle* mh_fv;
	static ::java::lang::invoke::MethodHandle* mh_dv;
	static ::java::lang::invoke::MethodHandle* mh_vz;
	static ::java::lang::invoke::MethodHandle* mh_vb;
	static ::java::lang::invoke::MethodHandle* mh_vc;
	static ::java::lang::invoke::MethodHandle* mh_vs;
	static ::java::lang::invoke::MethodHandle* mh_vi;
	static ::java::lang::invoke::MethodHandle* mh_vj;
	static ::java::lang::invoke::MethodHandle* mh_vf;
	static ::java::lang::invoke::MethodHandle* mh_vd;
};

#pragma pop_macro("KIND")
#pragma pop_macro("DO_CASTS")
#pragma pop_macro("BITS")
#pragma pop_macro("NUMERIC_TYPE_WIDENING_ORDER")
#pragma pop_macro("CLASS")
#pragma pop_macro("N")
#pragma pop_macro("NAME")

#endif // _Test6998541_h_