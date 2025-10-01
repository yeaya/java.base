#include <java/lang/invoke/VarHandleGuards.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessDescriptor.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessDescriptor = ::java::lang::invoke::VarHandle$AccessDescriptor;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_DD_D1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_DD_Z2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_D_D3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_D_V4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_FF_F5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_FF_Z6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_F_F7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_F_V8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_II_I9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_II_Z10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_I_I11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_I_V12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_JJ_J13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_JJ_Z14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_J_J15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_J_V16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LDD_D17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LDD_Z18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LD_D19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LD_V20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LFF_F21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LFF_Z22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LF_F23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LF_V24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIDD_D25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIDD_Z26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LID_D27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LID_V28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIFF_F29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIFF_Z30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIF_F31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIF_V32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIII_I33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIII_Z34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LII_I35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LII_V36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LII_Z37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIJJ_J38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIJJ_Z39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIJ_J40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIJ_V41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LILL_L42[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LILL_Z43[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIL_L44[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LIL_V45[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_D46[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_F47[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_I48[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_J49[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_L50[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LI_V51[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJII_I52[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJII_Z53[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJI_I54[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJI_V55[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJJJ_J56[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJJJ_Z57[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJJ_J58[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJJ_V59[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJJ_Z60[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJ_I61[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJ_J62[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LJ_V63[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LLL_L64[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LLL_Z65[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LL_L66[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LL_V67[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_LL_Z68[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_D69[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_F70[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_I71[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_J72[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_L73[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard_L_V74[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard__D75[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard__F76[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard__I77[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard__J78[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _VarHandleGuards_MethodAnnotations_guard__L79[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$MethodInfo _VarHandleGuards_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleGuards::*)()>(&VarHandleGuards::init$))},
	{"guard_DD_D", "(Ljava/lang/invoke/VarHandle;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_DD_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_DD_D1},
	{"guard_DD_Z", "(Ljava/lang/invoke/VarHandle;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_DD_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_DD_Z2},
	{"guard_D_D", "(Ljava/lang/invoke/VarHandle;DLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_D_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_D_D3},
	{"guard_D_V", "(Ljava/lang/invoke/VarHandle;DLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_D_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_D_V4},
	{"guard_FF_F", "(Ljava/lang/invoke/VarHandle;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_FF_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_FF_F5},
	{"guard_FF_Z", "(Ljava/lang/invoke/VarHandle;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_FF_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_FF_Z6},
	{"guard_F_F", "(Ljava/lang/invoke/VarHandle;FLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_F_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_F_F7},
	{"guard_F_V", "(Ljava/lang/invoke/VarHandle;FLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_F_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_F_V8},
	{"guard_II_I", "(Ljava/lang/invoke/VarHandle;IILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_II_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_II_I9},
	{"guard_II_Z", "(Ljava/lang/invoke/VarHandle;IILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_II_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_II_Z10},
	{"guard_I_I", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_I_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_I_I11},
	{"guard_I_V", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_I_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_I_V12},
	{"guard_JJ_J", "(Ljava/lang/invoke/VarHandle;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_JJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_JJ_J13},
	{"guard_JJ_Z", "(Ljava/lang/invoke/VarHandle;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_JJ_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_JJ_Z14},
	{"guard_J_J", "(Ljava/lang/invoke/VarHandle;JLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_J_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_J_J15},
	{"guard_J_V", "(Ljava/lang/invoke/VarHandle;JLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_J_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_J_V16},
	{"guard_LDD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LDD_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LDD_D17},
	{"guard_LDD_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LDD_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LDD_Z18},
	{"guard_LD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LD_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LD_D19},
	{"guard_LD_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LD_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LD_V20},
	{"guard_LFF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LFF_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LFF_F21},
	{"guard_LFF_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LFF_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LFF_Z22},
	{"guard_LF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LF_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LF_F23},
	{"guard_LF_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LF_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LF_V24},
	{"guard_LIDD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIDD_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIDD_D25},
	{"guard_LIDD_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIDD_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIDD_Z26},
	{"guard_LID_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LID_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LID_D27},
	{"guard_LID_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LID_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LID_V28},
	{"guard_LIFF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIFF_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIFF_F29},
	{"guard_LIFF_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIFF_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIFF_Z30},
	{"guard_LIF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIF_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIF_F31},
	{"guard_LIF_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIF_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIF_V32},
	{"guard_LIII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IIILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIII_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIII_I33},
	{"guard_LIII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IIILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIII_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIII_Z34},
	{"guard_LII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LII_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LII_I35},
	{"guard_LII_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LII_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LII_V36},
	{"guard_LII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LII_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LII_Z37},
	{"guard_LIJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIJJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIJJ_J38},
	{"guard_LIJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIJJ_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIJJ_Z39},
	{"guard_LIJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIJ_J40},
	{"guard_LIJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIJ_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIJ_V41},
	{"guard_LILL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LILL_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LILL_L42},
	{"guard_LILL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LILL_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LILL_Z43},
	{"guard_LIL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIL_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIL_L44},
	{"guard_LIL_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LIL_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LIL_V45},
	{"guard_LI_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_D46},
	{"guard_LI_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_F47},
	{"guard_LI_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_I48},
	{"guard_LI_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_J49},
	{"guard_LI_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_L50},
	{"guard_LI_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LI_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LI_V51},
	{"guard_LJII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JIILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int64_t,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJII_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJII_I52},
	{"guard_LJII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JIILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int32_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJII_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJII_Z53},
	{"guard_LJI_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int64_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJI_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJI_I54},
	{"guard_LJI_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int32_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJI_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJI_V55},
	{"guard_LJJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJJJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJJJ_J56},
	{"guard_LJJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJJJ_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJJJ_Z57},
	{"guard_LJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJJ_J58},
	{"guard_LJJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJJ_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJJ_V59},
	{"guard_LJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJJ_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJJ_Z60},
	{"guard_LJ_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJ_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJ_I61},
	{"guard_LJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJ_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJ_J62},
	{"guard_LJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LJ_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LJ_V63},
	{"guard_LLL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LLL_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LLL_L64},
	{"guard_LLL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LLL_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LLL_Z65},
	{"guard_LL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LL_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LL_L66},
	{"guard_LL_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LL_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LL_V67},
	{"guard_LL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_LL_Z)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_LL_Z68},
	{"guard_L_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_D69},
	{"guard_L_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_F70},
	{"guard_L_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_I71},
	{"guard_L_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_J72},
	{"guard_L_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_L73},
	{"guard_L_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($VarHandle*,Object$*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard_L_V)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard_L_V74},
	{"guard__D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $method(static_cast<double(*)($VarHandle*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard__D)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard__D75},
	{"guard__F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($VarHandle*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard__F)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard__F76},
	{"guard__I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($VarHandle*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard__I)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard__I77},
	{"guard__J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)($VarHandle*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard__J)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard__J78},
	{"guard__L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $method(static_cast<$Object*(*)($VarHandle*,$VarHandle$AccessDescriptor*)>(&VarHandleGuards::guard__L)), "java.lang.Throwable", nullptr, _VarHandleGuards_MethodAnnotations_guard__L79},
	{}
};

$ClassInfo _VarHandleGuards_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleGuards",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleGuards_MethodInfo_
};

$Object* allocate$VarHandleGuards($Class* clazz) {
	return $of($alloc(VarHandleGuards));
}

void VarHandleGuards::init$() {
}

$Object* VarHandleGuards::guard_L_L($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0})));
	}
}

void VarHandleGuards::guard_LL_V($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, arg1}));
		}
	}
}

bool VarHandleGuards::guard_LLL_Z($VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, arg2, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, arg1, arg2})));
	}
}

$Object* VarHandleGuards::guard_LLL_L($VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, arg2, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, arg1, arg2})));
	}
}

$Object* VarHandleGuards::guard_LL_L($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, arg1})));
	}
}

int32_t VarHandleGuards::guard_L_I($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0})));
	}
}

void VarHandleGuards::guard_LI_V($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LII_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LII_I($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LI_I($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_L_J($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0})));
	}
}

void VarHandleGuards::guard_LJ_V($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LJJ_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int64_t VarHandleGuards::guard_LJJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int64_t VarHandleGuards::guard_LJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

float VarHandleGuards::guard_L_F($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0})));
	}
}

void VarHandleGuards::guard_LF_V($VarHandle* handle, Object$* arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LFF_Z($VarHandle* handle, Object$* arg0, float arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LFF_F($VarHandle* handle, Object$* arg0, float arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LF_F($VarHandle* handle, Object$* arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

double VarHandleGuards::guard_L_D($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0})));
	}
}

void VarHandleGuards::guard_LD_V($VarHandle* handle, Object$* arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LDD_Z($VarHandle* handle, Object$* arg0, double arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LDD_D($VarHandle* handle, Object$* arg0, double arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LD_D($VarHandle* handle, Object$* arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

$Object* VarHandleGuards::guard__L($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect()))})));
	}
}

void VarHandleGuards::guard_L_V($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0}));
		}
	}
}

bool VarHandleGuards::guard_LL_Z($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, arg1, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, arg1})));
	}
}

int32_t VarHandleGuards::guard__I($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect()))})));
	}
}

void VarHandleGuards::guard_I_V($VarHandle* handle, int32_t arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_II_Z($VarHandle* handle, int32_t arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

int32_t VarHandleGuards::guard_II_I($VarHandle* handle, int32_t arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

int32_t VarHandleGuards::guard_I_I($VarHandle* handle, int32_t arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)})));
	}
}

int64_t VarHandleGuards::guard__J($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect()))})));
	}
}

void VarHandleGuards::guard_J_V($VarHandle* handle, int64_t arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_JJ_Z($VarHandle* handle, int64_t arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_JJ_J($VarHandle* handle, int64_t arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_J_J($VarHandle* handle, int64_t arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)})));
	}
}

float VarHandleGuards::guard__F($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect()))})));
	}
}

void VarHandleGuards::guard_F_V($VarHandle* handle, float arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_FF_Z($VarHandle* handle, float arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

float VarHandleGuards::guard_FF_F($VarHandle* handle, float arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

float VarHandleGuards::guard_F_F($VarHandle* handle, float arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)})));
	}
}

double VarHandleGuards::guard__D($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect()))})));
	}
}

void VarHandleGuards::guard_D_V($VarHandle* handle, double arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_DD_Z($VarHandle* handle, double arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

double VarHandleGuards::guard_DD_D($VarHandle* handle, double arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0), $$of(arg1)})));
	}
}

double VarHandleGuards::guard_D_D($VarHandle* handle, double arg0, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), $$of(arg0), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), $$of(arg0)})));
	}
}

$Object* VarHandleGuards::guard_LI_L($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LIL_V($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), arg2, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), arg2, $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), arg2}));
		}
	}
}

bool VarHandleGuards::guard_LILL_Z($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), arg2, arg3, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), arg2, arg3})));
	}
}

$Object* VarHandleGuards::guard_LILL_L($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), arg2, arg3, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), arg2, arg3})));
	}
}

$Object* VarHandleGuards::guard_LIL_L($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), arg2, $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
		return $of($nc(ad->returnType)->cast(r));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $of($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), arg2})));
	}
}

void VarHandleGuards::guard_LII_V($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIII_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LIII_I($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LI_J($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LIJ_V($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIJJ_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LIJJ_J($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LIJ_J($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LI_F($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LIF_V($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIFF_Z($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

float VarHandleGuards::guard_LIFF_F($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

float VarHandleGuards::guard_LIF_F($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $floatValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LI_D($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LID_V($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIDD_Z($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

double VarHandleGuards::guard_LIDD_D($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

double VarHandleGuards::guard_LID_D($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $doubleValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LJ_I($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LJI_V($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LJII_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LJII_I($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LJI_I($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $intValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)})));
	}
}

void VarHandleGuards::guard_LJJ_V($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
	} else {
		bool var$1 = handle->isDirect();
		if (var$1 && $nc(handle->vform)->getMethodType_V(ad->type) == ad->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $($of($nc(handle->vform)->getMemberName(ad->mode)))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
			$nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LJJJ_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $booleanValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LJJJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == ad->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {$of(handle), arg0, $$of(arg1), $$of(arg2), $$of(arg3), $($of($nc(handle->vform)->getMemberName(ad->mode)))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle(ad->mode));
		return $longValue($nc($($nc(mh)->asType(ad->symbolicMethodTypeInvoker)))->invokeBasic($$new($ObjectArray, {$($of(handle->asDirect())), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

VarHandleGuards::VarHandleGuards() {
}

$Class* VarHandleGuards::load$($String* name, bool initialize) {
	$loadClass(VarHandleGuards, name, initialize, &_VarHandleGuards_ClassInfo_, allocate$VarHandleGuards);
	return class$;
}

$Class* VarHandleGuards::class$ = nullptr;

		} // invoke
	} // lang
} // java