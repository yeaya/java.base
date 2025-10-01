#include <java/lang/constant/ConstantDescs.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BSM_VARHANDLE_FIELD
#undef CONDY_BOOTSTRAP_ARGS
#undef BSM_VARHANDLE_ARRAY
#undef NULL
#undef BSM_VARHANDLE_STATIC_FIELD
#undef INDY_BOOTSTRAP_ARGS
#undef BSM_NULL_CONSTANT
#undef TRUE
#undef MHD_METHODHANDLE_ASTYPE
#undef BSM_PRIMITIVE_CLASS
#undef STATIC
#undef BSM_ENUM_CONSTANT
#undef BSM_EXPLICIT_CAST
#undef DEFAULT_NAME
#undef BSM_INVOKE
#undef FALSE
#undef BSM_GET_STATIC_FINAL
#undef VIRTUAL

using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _ConstantDescs_FieldInfo_[] = {
	{"DEFAULT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, DEFAULT_NAME)},
	{"CD_Object", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Object)},
	{"CD_String", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_String)},
	{"CD_Class", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Class)},
	{"CD_Number", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Number)},
	{"CD_Integer", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Integer)},
	{"CD_Long", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Long)},
	{"CD_Float", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Float)},
	{"CD_Double", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Double)},
	{"CD_Short", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Short)},
	{"CD_Byte", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Byte)},
	{"CD_Character", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Character)},
	{"CD_Boolean", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Boolean)},
	{"CD_Void", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Void)},
	{"CD_Throwable", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Throwable)},
	{"CD_Exception", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Exception)},
	{"CD_Enum", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Enum)},
	{"CD_VarHandle", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_VarHandle)},
	{"CD_MethodHandles", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodHandles)},
	{"CD_MethodHandles_Lookup", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodHandles_Lookup)},
	{"CD_MethodHandle", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodHandle)},
	{"CD_MethodType", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodType)},
	{"CD_CallSite", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_CallSite)},
	{"CD_Collection", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Collection)},
	{"CD_List", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_List)},
	{"CD_Set", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Set)},
	{"CD_Map", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_Map)},
	{"CD_ConstantDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_ConstantDesc)},
	{"CD_ClassDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_ClassDesc)},
	{"CD_EnumDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_EnumDesc)},
	{"CD_MethodTypeDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodTypeDesc)},
	{"CD_MethodHandleDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodHandleDesc)},
	{"CD_DirectMethodHandleDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_DirectMethodHandleDesc)},
	{"CD_VarHandleDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_VarHandleDesc)},
	{"CD_MethodHandleDesc_Kind", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_MethodHandleDesc_Kind)},
	{"CD_DynamicConstantDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_DynamicConstantDesc)},
	{"CD_DynamicCallSiteDesc", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_DynamicCallSiteDesc)},
	{"CD_ConstantBootstraps", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_ConstantBootstraps)},
	{"INDY_BOOTSTRAP_ARGS", "[Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantDescs, INDY_BOOTSTRAP_ARGS)},
	{"CONDY_BOOTSTRAP_ARGS", "[Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantDescs, CONDY_BOOTSTRAP_ARGS)},
	{"BSM_PRIMITIVE_CLASS", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_PRIMITIVE_CLASS)},
	{"BSM_ENUM_CONSTANT", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_ENUM_CONSTANT)},
	{"BSM_GET_STATIC_FINAL", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_GET_STATIC_FINAL)},
	{"BSM_NULL_CONSTANT", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_NULL_CONSTANT)},
	{"BSM_VARHANDLE_FIELD", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_VARHANDLE_FIELD)},
	{"BSM_VARHANDLE_STATIC_FIELD", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_VARHANDLE_STATIC_FIELD)},
	{"BSM_VARHANDLE_ARRAY", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_VARHANDLE_ARRAY)},
	{"BSM_INVOKE", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_INVOKE)},
	{"BSM_EXPLICIT_CAST", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, BSM_EXPLICIT_CAST)},
	{"CD_int", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_int)},
	{"CD_long", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_long)},
	{"CD_float", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_float)},
	{"CD_double", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_double)},
	{"CD_short", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_short)},
	{"CD_byte", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_byte)},
	{"CD_char", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_char)},
	{"CD_boolean", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_boolean)},
	{"CD_void", "Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, CD_void)},
	{"NULL", "Ljava/lang/constant/ConstantDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, NULL)},
	{"TRUE", "Ljava/lang/constant/DynamicConstantDesc;", "Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, TRUE)},
	{"FALSE", "Ljava/lang/constant/DynamicConstantDesc;", "Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ConstantDescs, FALSE)},
	{"MHD_METHODHANDLE_ASTYPE", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $STATIC | $FINAL, $staticField(ConstantDescs, MHD_METHODHANDLE_ASTYPE)},
	{}
};

$MethodInfo _ConstantDescs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ConstantDescs::*)()>(&ConstantDescs::init$))},
	{"ofCallsiteBootstrap", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$DirectMethodHandleDesc*(*)($ClassDesc*,$String*,$ClassDesc*,$ClassDescArray*)>(&ConstantDescs::ofCallsiteBootstrap))},
	{"ofConstantBootstrap", "(Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$DirectMethodHandleDesc*(*)($ClassDesc*,$String*,$ClassDesc*,$ClassDescArray*)>(&ConstantDescs::ofConstantBootstrap))},
	{}
};

$ClassInfo _ConstantDescs_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.constant.ConstantDescs",
	"java.lang.Object",
	nullptr,
	_ConstantDescs_FieldInfo_,
	_ConstantDescs_MethodInfo_
};

$Object* allocate$ConstantDescs($Class* clazz) {
	return $of($alloc(ConstantDescs));
}


$String* ConstantDescs::DEFAULT_NAME = nullptr;

$ClassDesc* ConstantDescs::CD_Object = nullptr;

$ClassDesc* ConstantDescs::CD_String = nullptr;

$ClassDesc* ConstantDescs::CD_Class = nullptr;

$ClassDesc* ConstantDescs::CD_Number = nullptr;

$ClassDesc* ConstantDescs::CD_Integer = nullptr;

$ClassDesc* ConstantDescs::CD_Long = nullptr;

$ClassDesc* ConstantDescs::CD_Float = nullptr;

$ClassDesc* ConstantDescs::CD_Double = nullptr;

$ClassDesc* ConstantDescs::CD_Short = nullptr;

$ClassDesc* ConstantDescs::CD_Byte = nullptr;

$ClassDesc* ConstantDescs::CD_Character = nullptr;

$ClassDesc* ConstantDescs::CD_Boolean = nullptr;

$ClassDesc* ConstantDescs::CD_Void = nullptr;

$ClassDesc* ConstantDescs::CD_Throwable = nullptr;

$ClassDesc* ConstantDescs::CD_Exception = nullptr;

$ClassDesc* ConstantDescs::CD_Enum = nullptr;

$ClassDesc* ConstantDescs::CD_VarHandle = nullptr;

$ClassDesc* ConstantDescs::CD_MethodHandles = nullptr;

$ClassDesc* ConstantDescs::CD_MethodHandles_Lookup = nullptr;

$ClassDesc* ConstantDescs::CD_MethodHandle = nullptr;

$ClassDesc* ConstantDescs::CD_MethodType = nullptr;

$ClassDesc* ConstantDescs::CD_CallSite = nullptr;

$ClassDesc* ConstantDescs::CD_Collection = nullptr;

$ClassDesc* ConstantDescs::CD_List = nullptr;

$ClassDesc* ConstantDescs::CD_Set = nullptr;

$ClassDesc* ConstantDescs::CD_Map = nullptr;

$ClassDesc* ConstantDescs::CD_ConstantDesc = nullptr;

$ClassDesc* ConstantDescs::CD_ClassDesc = nullptr;

$ClassDesc* ConstantDescs::CD_EnumDesc = nullptr;

$ClassDesc* ConstantDescs::CD_MethodTypeDesc = nullptr;

$ClassDesc* ConstantDescs::CD_MethodHandleDesc = nullptr;

$ClassDesc* ConstantDescs::CD_DirectMethodHandleDesc = nullptr;

$ClassDesc* ConstantDescs::CD_VarHandleDesc = nullptr;

$ClassDesc* ConstantDescs::CD_MethodHandleDesc_Kind = nullptr;

$ClassDesc* ConstantDescs::CD_DynamicConstantDesc = nullptr;

$ClassDesc* ConstantDescs::CD_DynamicCallSiteDesc = nullptr;

$ClassDesc* ConstantDescs::CD_ConstantBootstraps = nullptr;
$ClassDescArray* ConstantDescs::INDY_BOOTSTRAP_ARGS = nullptr;
$ClassDescArray* ConstantDescs::CONDY_BOOTSTRAP_ARGS = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_PRIMITIVE_CLASS = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_ENUM_CONSTANT = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_GET_STATIC_FINAL = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_NULL_CONSTANT = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_VARHANDLE_FIELD = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_VARHANDLE_STATIC_FIELD = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_VARHANDLE_ARRAY = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_INVOKE = nullptr;

$DirectMethodHandleDesc* ConstantDescs::BSM_EXPLICIT_CAST = nullptr;

$ClassDesc* ConstantDescs::CD_int = nullptr;

$ClassDesc* ConstantDescs::CD_long = nullptr;

$ClassDesc* ConstantDescs::CD_float = nullptr;

$ClassDesc* ConstantDescs::CD_double = nullptr;

$ClassDesc* ConstantDescs::CD_short = nullptr;

$ClassDesc* ConstantDescs::CD_byte = nullptr;

$ClassDesc* ConstantDescs::CD_char = nullptr;

$ClassDesc* ConstantDescs::CD_boolean = nullptr;

$ClassDesc* ConstantDescs::CD_void = nullptr;

$ConstantDesc* ConstantDescs::NULL = nullptr;

$DynamicConstantDesc* ConstantDescs::TRUE = nullptr;

$DynamicConstantDesc* ConstantDescs::FALSE = nullptr;
$DirectMethodHandleDesc* ConstantDescs::MHD_METHODHANDLE_ASTYPE = nullptr;

void ConstantDescs::init$() {
}

$DirectMethodHandleDesc* ConstantDescs::ofCallsiteBootstrap($ClassDesc* owner, $String* name, $ClassDesc* returnType, $ClassDescArray* paramTypes) {
	$init(ConstantDescs);
	$init($DirectMethodHandleDesc$Kind);
	return $MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::STATIC, owner, name, $($nc($($MethodTypeDesc::of(returnType, paramTypes)))->insertParameterTypes(0, ConstantDescs::INDY_BOOTSTRAP_ARGS)));
}

$DirectMethodHandleDesc* ConstantDescs::ofConstantBootstrap($ClassDesc* owner, $String* name, $ClassDesc* returnType, $ClassDescArray* paramTypes) {
	$init(ConstantDescs);
	$init($DirectMethodHandleDesc$Kind);
	return $MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::STATIC, owner, name, $($nc($($MethodTypeDesc::of(returnType, paramTypes)))->insertParameterTypes(0, ConstantDescs::CONDY_BOOTSTRAP_ARGS)));
}

void clinit$ConstantDescs($Class* class$) {
	$assignStatic(ConstantDescs::DEFAULT_NAME, "_"_s);
	$assignStatic(ConstantDescs::CD_Object, $ClassDesc::of("java.lang.Object"_s));
	$assignStatic(ConstantDescs::CD_String, $ClassDesc::of("java.lang.String"_s));
	$assignStatic(ConstantDescs::CD_Class, $ClassDesc::of("java.lang.Class"_s));
	$assignStatic(ConstantDescs::CD_Number, $ClassDesc::of("java.lang.Number"_s));
	$assignStatic(ConstantDescs::CD_Integer, $ClassDesc::of("java.lang.Integer"_s));
	$assignStatic(ConstantDescs::CD_Long, $ClassDesc::of("java.lang.Long"_s));
	$assignStatic(ConstantDescs::CD_Float, $ClassDesc::of("java.lang.Float"_s));
	$assignStatic(ConstantDescs::CD_Double, $ClassDesc::of("java.lang.Double"_s));
	$assignStatic(ConstantDescs::CD_Short, $ClassDesc::of("java.lang.Short"_s));
	$assignStatic(ConstantDescs::CD_Byte, $ClassDesc::of("java.lang.Byte"_s));
	$assignStatic(ConstantDescs::CD_Character, $ClassDesc::of("java.lang.Character"_s));
	$assignStatic(ConstantDescs::CD_Boolean, $ClassDesc::of("java.lang.Boolean"_s));
	$assignStatic(ConstantDescs::CD_Void, $ClassDesc::of("java.lang.Void"_s));
	$assignStatic(ConstantDescs::CD_Throwable, $ClassDesc::of("java.lang.Throwable"_s));
	$assignStatic(ConstantDescs::CD_Exception, $ClassDesc::of("java.lang.Exception"_s));
	$assignStatic(ConstantDescs::CD_Enum, $ClassDesc::of("java.lang.Enum"_s));
	$assignStatic(ConstantDescs::CD_VarHandle, $ClassDesc::of("java.lang.invoke.VarHandle"_s));
	$assignStatic(ConstantDescs::CD_MethodHandles, $ClassDesc::of("java.lang.invoke.MethodHandles"_s));
	$assignStatic(ConstantDescs::CD_MethodHandles_Lookup, $nc(ConstantDescs::CD_MethodHandles)->nested("Lookup"_s));
	$assignStatic(ConstantDescs::CD_MethodHandle, $ClassDesc::of("java.lang.invoke.MethodHandle"_s));
	$assignStatic(ConstantDescs::CD_MethodType, $ClassDesc::of("java.lang.invoke.MethodType"_s));
	$assignStatic(ConstantDescs::CD_CallSite, $ClassDesc::of("java.lang.invoke.CallSite"_s));
	$assignStatic(ConstantDescs::CD_Collection, $ClassDesc::of("java.util.Collection"_s));
	$assignStatic(ConstantDescs::CD_List, $ClassDesc::of("java.util.List"_s));
	$assignStatic(ConstantDescs::CD_Set, $ClassDesc::of("java.util.Set"_s));
	$assignStatic(ConstantDescs::CD_Map, $ClassDesc::of("java.util.Map"_s));
	$assignStatic(ConstantDescs::CD_ConstantDesc, $ClassDesc::of("java.lang.constant.ConstantDesc"_s));
	$assignStatic(ConstantDescs::CD_ClassDesc, $ClassDesc::of("java.lang.constant.ClassDesc"_s));
	$assignStatic(ConstantDescs::CD_EnumDesc, $nc(ConstantDescs::CD_Enum)->nested("EnumDesc"_s));
	$assignStatic(ConstantDescs::CD_MethodTypeDesc, $ClassDesc::of("java.lang.constant.MethodTypeDesc"_s));
	$assignStatic(ConstantDescs::CD_MethodHandleDesc, $ClassDesc::of("java.lang.constant.MethodHandleDesc"_s));
	$assignStatic(ConstantDescs::CD_DirectMethodHandleDesc, $ClassDesc::of("java.lang.constant.DirectMethodHandleDesc"_s));
	$assignStatic(ConstantDescs::CD_VarHandleDesc, $nc(ConstantDescs::CD_VarHandle)->nested("VarHandleDesc"_s));
	$assignStatic(ConstantDescs::CD_MethodHandleDesc_Kind, $nc(ConstantDescs::CD_DirectMethodHandleDesc)->nested("Kind"_s));
	$assignStatic(ConstantDescs::CD_DynamicConstantDesc, $ClassDesc::of("java.lang.constant.DynamicConstantDesc"_s));
	$assignStatic(ConstantDescs::CD_DynamicCallSiteDesc, $ClassDesc::of("java.lang.constant.DynamicCallSiteDesc"_s));
	$assignStatic(ConstantDescs::CD_ConstantBootstraps, $ClassDesc::of("java.lang.invoke.ConstantBootstraps"_s));
	$assignStatic(ConstantDescs::INDY_BOOTSTRAP_ARGS, $new($ClassDescArray, {
		ConstantDescs::CD_MethodHandles_Lookup,
		ConstantDescs::CD_String,
		ConstantDescs::CD_MethodType
	}));
	$assignStatic(ConstantDescs::CONDY_BOOTSTRAP_ARGS, $new($ClassDescArray, {
		ConstantDescs::CD_MethodHandles_Lookup,
		ConstantDescs::CD_String,
		ConstantDescs::CD_Class
	}));
	$assignStatic(ConstantDescs::BSM_PRIMITIVE_CLASS, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "primitiveClass"_s, ConstantDescs::CD_Class, $$new($ClassDescArray, 0)));
	$assignStatic(ConstantDescs::BSM_ENUM_CONSTANT, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "enumConstant"_s, ConstantDescs::CD_Enum, $$new($ClassDescArray, 0)));
	$assignStatic(ConstantDescs::BSM_GET_STATIC_FINAL, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "getStaticFinal"_s, ConstantDescs::CD_Object, $$new($ClassDescArray, {ConstantDescs::CD_Class})));
	$assignStatic(ConstantDescs::BSM_NULL_CONSTANT, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "nullConstant"_s, ConstantDescs::CD_Object, $$new($ClassDescArray, 0)));
	$assignStatic(ConstantDescs::BSM_VARHANDLE_FIELD, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "fieldVarHandle"_s, ConstantDescs::CD_VarHandle, $$new($ClassDescArray, {
		ConstantDescs::CD_Class,
		ConstantDescs::CD_Class
	})));
	$assignStatic(ConstantDescs::BSM_VARHANDLE_STATIC_FIELD, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "staticFieldVarHandle"_s, ConstantDescs::CD_VarHandle, $$new($ClassDescArray, {
		ConstantDescs::CD_Class,
		ConstantDescs::CD_Class
	})));
	$assignStatic(ConstantDescs::BSM_VARHANDLE_ARRAY, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "arrayVarHandle"_s, ConstantDescs::CD_VarHandle, $$new($ClassDescArray, {ConstantDescs::CD_Class})));
	$assignStatic(ConstantDescs::BSM_INVOKE, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "invoke"_s, ConstantDescs::CD_Object, $$new($ClassDescArray, {
		ConstantDescs::CD_MethodHandle,
		$($cast($ClassDesc, $nc(ConstantDescs::CD_Object)->arrayType()))
	})));
	$assignStatic(ConstantDescs::BSM_EXPLICIT_CAST, ConstantDescs::ofConstantBootstrap(ConstantDescs::CD_ConstantBootstraps, "explicitCast"_s, ConstantDescs::CD_Object, $$new($ClassDescArray, {ConstantDescs::CD_Object})));
	$assignStatic(ConstantDescs::CD_int, $ClassDesc::ofDescriptor("I"_s));
	$assignStatic(ConstantDescs::CD_long, $ClassDesc::ofDescriptor("J"_s));
	$assignStatic(ConstantDescs::CD_float, $ClassDesc::ofDescriptor("F"_s));
	$assignStatic(ConstantDescs::CD_double, $ClassDesc::ofDescriptor("D"_s));
	$assignStatic(ConstantDescs::CD_short, $ClassDesc::ofDescriptor("S"_s));
	$assignStatic(ConstantDescs::CD_byte, $ClassDesc::ofDescriptor("B"_s));
	$assignStatic(ConstantDescs::CD_char, $ClassDesc::ofDescriptor("C"_s));
	$assignStatic(ConstantDescs::CD_boolean, $ClassDesc::ofDescriptor("Z"_s));
	$assignStatic(ConstantDescs::CD_void, $ClassDesc::ofDescriptor("V"_s));
	$assignStatic(ConstantDescs::NULL, $DynamicConstantDesc::ofNamed(ConstantDescs::BSM_NULL_CONSTANT, ConstantDescs::DEFAULT_NAME, ConstantDescs::CD_Object, $$new($ConstantDescArray, 0)));
	$assignStatic(ConstantDescs::TRUE, $DynamicConstantDesc::ofNamed(ConstantDescs::BSM_GET_STATIC_FINAL, "TRUE"_s, ConstantDescs::CD_Boolean, $$new($ConstantDescArray, {static_cast<$ConstantDesc*>(ConstantDescs::CD_Boolean)})));
	$assignStatic(ConstantDescs::FALSE, $DynamicConstantDesc::ofNamed(ConstantDescs::BSM_GET_STATIC_FINAL, "FALSE"_s, ConstantDescs::CD_Boolean, $$new($ConstantDescArray, {static_cast<$ConstantDesc*>(ConstantDescs::CD_Boolean)})));
	$init($DirectMethodHandleDesc$Kind);
	$assignStatic(ConstantDescs::MHD_METHODHANDLE_ASTYPE, $MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::VIRTUAL, ConstantDescs::CD_MethodHandle, "asType"_s, $($MethodTypeDesc::of(ConstantDescs::CD_MethodHandle, $$new($ClassDescArray, {ConstantDescs::CD_MethodType})))));
}

ConstantDescs::ConstantDescs() {
}

$Class* ConstantDescs::load$($String* name, bool initialize) {
	$loadClass(ConstantDescs, name, initialize, &_ConstantDescs_ClassInfo_, clinit$ConstantDescs, allocate$ConstantDescs);
	return class$;
}

$Class* ConstantDescs::class$ = nullptr;

		} // constant
	} // lang
} // java