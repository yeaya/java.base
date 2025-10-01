#ifndef _java_lang_invoke_VarHandleGuards_h_
#define _java_lang_invoke_VarHandleGuards_h_
//$ class java.lang.invoke.VarHandleGuards
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
			class VarHandle$AccessDescriptor;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleGuards : public ::java::lang::Object {
	$class(VarHandleGuards, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VarHandleGuards();
	void init$();
	static double guard_DD_D(::java::lang::invoke::VarHandle* handle, double arg0, double arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_DD_Z(::java::lang::invoke::VarHandle* handle, double arg0, double arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_D_D(::java::lang::invoke::VarHandle* handle, double arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_D_V(::java::lang::invoke::VarHandle* handle, double arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_FF_F(::java::lang::invoke::VarHandle* handle, float arg0, float arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_FF_Z(::java::lang::invoke::VarHandle* handle, float arg0, float arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_F_F(::java::lang::invoke::VarHandle* handle, float arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_F_V(::java::lang::invoke::VarHandle* handle, float arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_II_I(::java::lang::invoke::VarHandle* handle, int32_t arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_II_Z(::java::lang::invoke::VarHandle* handle, int32_t arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_I_I(::java::lang::invoke::VarHandle* handle, int32_t arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_I_V(::java::lang::invoke::VarHandle* handle, int32_t arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_JJ_J(::java::lang::invoke::VarHandle* handle, int64_t arg0, int64_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_JJ_Z(::java::lang::invoke::VarHandle* handle, int64_t arg0, int64_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_J_J(::java::lang::invoke::VarHandle* handle, int64_t arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_J_V(::java::lang::invoke::VarHandle* handle, int64_t arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_LDD_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, double arg1, double arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LDD_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, double arg1, double arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_LD_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, double arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LD_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, double arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_LFF_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, float arg1, float arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LFF_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, float arg1, float arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_LF_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, float arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LF_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, float arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_LIDD_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LIDD_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_LID_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LID_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_LIFF_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LIFF_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_LIF_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LIF_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LIII_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LIII_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LII_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LII_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LII_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LIJJ_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LIJJ_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LIJ_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LIJ_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_LILL_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LILL_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_LIL_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LIL_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_LI_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_LI_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LI_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LI_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_LI_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LI_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int32_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LJII_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LJII_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LJI_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LJI_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LJJJ_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LJJJ_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LJJ_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LJJ_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LJJ_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_LJ_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_LJ_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LJ_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, int64_t arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_LLL_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LLL_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_LL_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, Object$* arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_LL_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, Object$* arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static bool guard_LL_Z(::java::lang::invoke::VarHandle* handle, Object$* arg0, Object$* arg1, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard_L_D(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard_L_F(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard_L_I(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard_L_J(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard_L_L(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static void guard_L_V(::java::lang::invoke::VarHandle* handle, Object$* arg0, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static double guard__D(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static float guard__F(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int32_t guard__I(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static int64_t guard__J(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static $Object* guard__L(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarHandleGuards_h_