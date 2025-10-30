#include <java/lang/invoke/LambdaForm$Kind.h>

#include <java/lang/Enum.h>
#include <java/lang/invoke/LambdaForm.h>
#include <jcpp.h>

#undef BOUND_REINVOKER
#undef COLLECT
#undef COLLECTOR
#undef CONVERT
#undef DELEGATE
#undef DIRECT_INVOKE_INTERFACE
#undef DIRECT_INVOKE_SPECIAL
#undef DIRECT_INVOKE_SPECIAL_IFC
#undef DIRECT_INVOKE_STATIC
#undef DIRECT_INVOKE_STATIC_INIT
#undef DIRECT_INVOKE_VIRTUAL
#undef DIRECT_NEW_INVOKE_SPECIAL
#undef EXACT_INVOKER
#undef EXACT_LINKER
#undef FIELD
#undef GENERIC
#undef GENERIC_INVOKER
#undef GENERIC_LINKER
#undef GET_BOOLEAN
#undef GET_BOOLEAN_VOLATILE
#undef GET_BYTE
#undef GET_BYTE_VOLATILE
#undef GET_CHAR
#undef GET_CHAR_VOLATILE
#undef GET_DOUBLE
#undef GET_DOUBLE_VOLATILE
#undef GET_FLOAT
#undef GET_FLOAT_VOLATILE
#undef GET_INT
#undef GET_INT_VOLATILE
#undef GET_LONG
#undef GET_LONG_VOLATILE
#undef GET_REFERENCE
#undef GET_REFERENCE_VOLATILE
#undef GET_SHORT
#undef GET_SHORT_VOLATILE
#undef GUARD
#undef GUARD_WITH_CATCH
#undef IDENTITY
#undef LINK_TO_CALL_SITE
#undef LINK_TO_TARGET_METHOD
#undef LOOP
#undef PUT_BOOLEAN
#undef PUT_BOOLEAN_VOLATILE
#undef PUT_BYTE
#undef PUT_BYTE_VOLATILE
#undef PUT_CHAR
#undef PUT_CHAR_VOLATILE
#undef PUT_DOUBLE
#undef PUT_DOUBLE_VOLATILE
#undef PUT_FLOAT
#undef PUT_FLOAT_VOLATILE
#undef PUT_INT
#undef PUT_INT_VOLATILE
#undef PUT_LONG
#undef PUT_LONG_VOLATILE
#undef PUT_REFERENCE
#undef PUT_REFERENCE_VOLATILE
#undef PUT_SHORT
#undef PUT_SHORT_VOLATILE
#undef REINVOKER
#undef SPREAD
#undef TABLE_SWITCH
#undef TRY_FINALLY
#undef VARHANDLE_EXACT_INVOKER
#undef VARHANDLE_INVOKER
#undef VARHANDLE_LINKER
#undef ZERO

using $LambdaForm$KindArray = $Array<::java::lang::invoke::LambdaForm$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaForm$Kind_FieldInfo_[] = {
	{"GENERIC", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GENERIC)},
	{"ZERO", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, ZERO)},
	{"IDENTITY", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, IDENTITY)},
	{"BOUND_REINVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, BOUND_REINVOKER)},
	{"REINVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, REINVOKER)},
	{"DELEGATE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DELEGATE)},
	{"EXACT_LINKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, EXACT_LINKER)},
	{"EXACT_INVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, EXACT_INVOKER)},
	{"GENERIC_LINKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GENERIC_LINKER)},
	{"GENERIC_INVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GENERIC_INVOKER)},
	{"LINK_TO_TARGET_METHOD", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, LINK_TO_TARGET_METHOD)},
	{"LINK_TO_CALL_SITE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, LINK_TO_CALL_SITE)},
	{"DIRECT_INVOKE_VIRTUAL", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_VIRTUAL)},
	{"DIRECT_INVOKE_SPECIAL", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_SPECIAL)},
	{"DIRECT_INVOKE_SPECIAL_IFC", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_SPECIAL_IFC)},
	{"DIRECT_INVOKE_STATIC", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_STATIC)},
	{"DIRECT_NEW_INVOKE_SPECIAL", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_NEW_INVOKE_SPECIAL)},
	{"DIRECT_INVOKE_INTERFACE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_INTERFACE)},
	{"DIRECT_INVOKE_STATIC_INIT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, DIRECT_INVOKE_STATIC_INIT)},
	{"GET_REFERENCE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_REFERENCE)},
	{"PUT_REFERENCE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_REFERENCE)},
	{"GET_REFERENCE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_REFERENCE_VOLATILE)},
	{"PUT_REFERENCE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_REFERENCE_VOLATILE)},
	{"GET_INT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_INT)},
	{"PUT_INT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_INT)},
	{"GET_INT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_INT_VOLATILE)},
	{"PUT_INT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_INT_VOLATILE)},
	{"GET_BOOLEAN", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_BOOLEAN)},
	{"PUT_BOOLEAN", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_BOOLEAN)},
	{"GET_BOOLEAN_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_BOOLEAN_VOLATILE)},
	{"PUT_BOOLEAN_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_BOOLEAN_VOLATILE)},
	{"GET_BYTE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_BYTE)},
	{"PUT_BYTE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_BYTE)},
	{"GET_BYTE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_BYTE_VOLATILE)},
	{"PUT_BYTE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_BYTE_VOLATILE)},
	{"GET_CHAR", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_CHAR)},
	{"PUT_CHAR", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_CHAR)},
	{"GET_CHAR_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_CHAR_VOLATILE)},
	{"PUT_CHAR_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_CHAR_VOLATILE)},
	{"GET_SHORT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_SHORT)},
	{"PUT_SHORT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_SHORT)},
	{"GET_SHORT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_SHORT_VOLATILE)},
	{"PUT_SHORT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_SHORT_VOLATILE)},
	{"GET_LONG", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_LONG)},
	{"PUT_LONG", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_LONG)},
	{"GET_LONG_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_LONG_VOLATILE)},
	{"PUT_LONG_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_LONG_VOLATILE)},
	{"GET_FLOAT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_FLOAT)},
	{"PUT_FLOAT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_FLOAT)},
	{"GET_FLOAT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_FLOAT_VOLATILE)},
	{"PUT_FLOAT_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_FLOAT_VOLATILE)},
	{"GET_DOUBLE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_DOUBLE)},
	{"PUT_DOUBLE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_DOUBLE)},
	{"GET_DOUBLE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GET_DOUBLE_VOLATILE)},
	{"PUT_DOUBLE_VOLATILE", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, PUT_DOUBLE_VOLATILE)},
	{"TRY_FINALLY", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, TRY_FINALLY)},
	{"TABLE_SWITCH", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, TABLE_SWITCH)},
	{"COLLECT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, COLLECT)},
	{"COLLECTOR", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, COLLECTOR)},
	{"CONVERT", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, CONVERT)},
	{"SPREAD", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, SPREAD)},
	{"LOOP", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, LOOP)},
	{"FIELD", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, FIELD)},
	{"GUARD", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GUARD)},
	{"GUARD_WITH_CATCH", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, GUARD_WITH_CATCH)},
	{"VARHANDLE_EXACT_INVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, VARHANDLE_EXACT_INVOKER)},
	{"VARHANDLE_INVOKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, VARHANDLE_INVOKER)},
	{"VARHANDLE_LINKER", "Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaForm$Kind, VARHANDLE_LINKER)},
	{"$VALUES", "[Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaForm$Kind, $VALUES)},
	{"defaultLambdaName", "Ljava/lang/String;", nullptr, $FINAL, $field(LambdaForm$Kind, defaultLambdaName)},
	{"methodName", "Ljava/lang/String;", nullptr, $FINAL, $field(LambdaForm$Kind, methodName)},
	{}
};

$MethodInfo _LambdaForm$Kind_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LambdaForm$KindArray*(*)()>(&LambdaForm$Kind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(LambdaForm$Kind::*)($String*,int32_t,$String*)>(&LambdaForm$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(LambdaForm$Kind::*)($String*,int32_t,$String*,$String*)>(&LambdaForm$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LambdaForm$Kind*(*)($String*)>(&LambdaForm$Kind::valueOf))},
	{"values", "()[Ljava/lang/invoke/LambdaForm$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LambdaForm$KindArray*(*)()>(&LambdaForm$Kind::values))},
	{}
};

$InnerClassInfo _LambdaForm$Kind_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$Kind", "java.lang.invoke.LambdaForm", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaForm$Kind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.LambdaForm$Kind",
	"java.lang.Enum",
	nullptr,
	_LambdaForm$Kind_FieldInfo_,
	_LambdaForm$Kind_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/LambdaForm$Kind;>;",
	nullptr,
	_LambdaForm$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$Kind($Class* clazz) {
	return $of($alloc(LambdaForm$Kind));
}

LambdaForm$Kind* LambdaForm$Kind::GENERIC = nullptr;
LambdaForm$Kind* LambdaForm$Kind::ZERO = nullptr;
LambdaForm$Kind* LambdaForm$Kind::IDENTITY = nullptr;
LambdaForm$Kind* LambdaForm$Kind::BOUND_REINVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::REINVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DELEGATE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::EXACT_LINKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::EXACT_INVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GENERIC_LINKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GENERIC_INVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::LINK_TO_TARGET_METHOD = nullptr;
LambdaForm$Kind* LambdaForm$Kind::LINK_TO_CALL_SITE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_SPECIAL = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_STATIC = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_INTERFACE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_REFERENCE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_REFERENCE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_REFERENCE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_REFERENCE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_INT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_INT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_INT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_INT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_BOOLEAN = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_BOOLEAN = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_BOOLEAN_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_BOOLEAN_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_BYTE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_BYTE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_BYTE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_BYTE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_CHAR = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_CHAR = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_CHAR_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_CHAR_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_SHORT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_SHORT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_SHORT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_SHORT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_LONG = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_LONG = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_LONG_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_LONG_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_FLOAT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_FLOAT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_FLOAT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_FLOAT_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_DOUBLE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_DOUBLE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GET_DOUBLE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::PUT_DOUBLE_VOLATILE = nullptr;
LambdaForm$Kind* LambdaForm$Kind::TRY_FINALLY = nullptr;
LambdaForm$Kind* LambdaForm$Kind::TABLE_SWITCH = nullptr;
LambdaForm$Kind* LambdaForm$Kind::COLLECT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::COLLECTOR = nullptr;
LambdaForm$Kind* LambdaForm$Kind::CONVERT = nullptr;
LambdaForm$Kind* LambdaForm$Kind::SPREAD = nullptr;
LambdaForm$Kind* LambdaForm$Kind::LOOP = nullptr;
LambdaForm$Kind* LambdaForm$Kind::FIELD = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GUARD = nullptr;
LambdaForm$Kind* LambdaForm$Kind::GUARD_WITH_CATCH = nullptr;
LambdaForm$Kind* LambdaForm$Kind::VARHANDLE_EXACT_INVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::VARHANDLE_INVOKER = nullptr;
LambdaForm$Kind* LambdaForm$Kind::VARHANDLE_LINKER = nullptr;
$LambdaForm$KindArray* LambdaForm$Kind::$VALUES = nullptr;

$LambdaForm$KindArray* LambdaForm$Kind::$values() {
	$init(LambdaForm$Kind);
	return $new($LambdaForm$KindArray, {
		LambdaForm$Kind::GENERIC,
		LambdaForm$Kind::ZERO,
		LambdaForm$Kind::IDENTITY,
		LambdaForm$Kind::BOUND_REINVOKER,
		LambdaForm$Kind::REINVOKER,
		LambdaForm$Kind::DELEGATE,
		LambdaForm$Kind::EXACT_LINKER,
		LambdaForm$Kind::EXACT_INVOKER,
		LambdaForm$Kind::GENERIC_LINKER,
		LambdaForm$Kind::GENERIC_INVOKER,
		LambdaForm$Kind::LINK_TO_TARGET_METHOD,
		LambdaForm$Kind::LINK_TO_CALL_SITE,
		LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL,
		LambdaForm$Kind::DIRECT_INVOKE_SPECIAL,
		LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC,
		LambdaForm$Kind::DIRECT_INVOKE_STATIC,
		LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL,
		LambdaForm$Kind::DIRECT_INVOKE_INTERFACE,
		LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT,
		LambdaForm$Kind::GET_REFERENCE,
		LambdaForm$Kind::PUT_REFERENCE,
		LambdaForm$Kind::GET_REFERENCE_VOLATILE,
		LambdaForm$Kind::PUT_REFERENCE_VOLATILE,
		LambdaForm$Kind::GET_INT,
		LambdaForm$Kind::PUT_INT,
		LambdaForm$Kind::GET_INT_VOLATILE,
		LambdaForm$Kind::PUT_INT_VOLATILE,
		LambdaForm$Kind::GET_BOOLEAN,
		LambdaForm$Kind::PUT_BOOLEAN,
		LambdaForm$Kind::GET_BOOLEAN_VOLATILE,
		LambdaForm$Kind::PUT_BOOLEAN_VOLATILE,
		LambdaForm$Kind::GET_BYTE,
		LambdaForm$Kind::PUT_BYTE,
		LambdaForm$Kind::GET_BYTE_VOLATILE,
		LambdaForm$Kind::PUT_BYTE_VOLATILE,
		LambdaForm$Kind::GET_CHAR,
		LambdaForm$Kind::PUT_CHAR,
		LambdaForm$Kind::GET_CHAR_VOLATILE,
		LambdaForm$Kind::PUT_CHAR_VOLATILE,
		LambdaForm$Kind::GET_SHORT,
		LambdaForm$Kind::PUT_SHORT,
		LambdaForm$Kind::GET_SHORT_VOLATILE,
		LambdaForm$Kind::PUT_SHORT_VOLATILE,
		LambdaForm$Kind::GET_LONG,
		LambdaForm$Kind::PUT_LONG,
		LambdaForm$Kind::GET_LONG_VOLATILE,
		LambdaForm$Kind::PUT_LONG_VOLATILE,
		LambdaForm$Kind::GET_FLOAT,
		LambdaForm$Kind::PUT_FLOAT,
		LambdaForm$Kind::GET_FLOAT_VOLATILE,
		LambdaForm$Kind::PUT_FLOAT_VOLATILE,
		LambdaForm$Kind::GET_DOUBLE,
		LambdaForm$Kind::PUT_DOUBLE,
		LambdaForm$Kind::GET_DOUBLE_VOLATILE,
		LambdaForm$Kind::PUT_DOUBLE_VOLATILE,
		LambdaForm$Kind::TRY_FINALLY,
		LambdaForm$Kind::TABLE_SWITCH,
		LambdaForm$Kind::COLLECT,
		LambdaForm$Kind::COLLECTOR,
		LambdaForm$Kind::CONVERT,
		LambdaForm$Kind::SPREAD,
		LambdaForm$Kind::LOOP,
		LambdaForm$Kind::FIELD,
		LambdaForm$Kind::GUARD,
		LambdaForm$Kind::GUARD_WITH_CATCH,
		LambdaForm$Kind::VARHANDLE_EXACT_INVOKER,
		LambdaForm$Kind::VARHANDLE_INVOKER,
		LambdaForm$Kind::VARHANDLE_LINKER
	});
}

$LambdaForm$KindArray* LambdaForm$Kind::values() {
	$init(LambdaForm$Kind);
	return $cast($LambdaForm$KindArray, LambdaForm$Kind::$VALUES->clone());
}

LambdaForm$Kind* LambdaForm$Kind::valueOf($String* name) {
	$init(LambdaForm$Kind);
	return $cast(LambdaForm$Kind, $Enum::valueOf(LambdaForm$Kind::class$, name));
}

void LambdaForm$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $String* defaultLambdaName) {
	LambdaForm$Kind::init$($enum$name, $enum$ordinal, defaultLambdaName, defaultLambdaName);
}

void LambdaForm$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $String* defaultLambdaName, $String* methodName) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, defaultLambdaName, defaultLambdaName);
	$set(this, methodName, methodName);
}

void clinit$LambdaForm$Kind($Class* class$) {
	$assignStatic(LambdaForm$Kind::GENERIC, $new(LambdaForm$Kind, "GENERIC"_s, 0, "invoke"_s));
	$assignStatic(LambdaForm$Kind::ZERO, $new(LambdaForm$Kind, "ZERO"_s, 1, "zero"_s));
	$assignStatic(LambdaForm$Kind::IDENTITY, $new(LambdaForm$Kind, "IDENTITY"_s, 2, "identity"_s));
	$assignStatic(LambdaForm$Kind::BOUND_REINVOKER, $new(LambdaForm$Kind, "BOUND_REINVOKER"_s, 3, "BMH.reinvoke"_s, "reinvoke"_s));
	$assignStatic(LambdaForm$Kind::REINVOKER, $new(LambdaForm$Kind, "REINVOKER"_s, 4, "MH.reinvoke"_s, "reinvoke"_s));
	$assignStatic(LambdaForm$Kind::DELEGATE, $new(LambdaForm$Kind, "DELEGATE"_s, 5, "MH.delegate"_s, "delegate"_s));
	$assignStatic(LambdaForm$Kind::EXACT_LINKER, $new(LambdaForm$Kind, "EXACT_LINKER"_s, 6, "MH.invokeExact_MT"_s, "invokeExact_MT"_s));
	$assignStatic(LambdaForm$Kind::EXACT_INVOKER, $new(LambdaForm$Kind, "EXACT_INVOKER"_s, 7, "MH.exactInvoker"_s, "exactInvoker"_s));
	$assignStatic(LambdaForm$Kind::GENERIC_LINKER, $new(LambdaForm$Kind, "GENERIC_LINKER"_s, 8, "MH.invoke_MT"_s, "invoke_MT"_s));
	$assignStatic(LambdaForm$Kind::GENERIC_INVOKER, $new(LambdaForm$Kind, "GENERIC_INVOKER"_s, 9, "MH.invoker"_s, "invoker"_s));
	$assignStatic(LambdaForm$Kind::LINK_TO_TARGET_METHOD, $new(LambdaForm$Kind, "LINK_TO_TARGET_METHOD"_s, 10, "linkToTargetMethod"_s));
	$assignStatic(LambdaForm$Kind::LINK_TO_CALL_SITE, $new(LambdaForm$Kind, "LINK_TO_CALL_SITE"_s, 11, "linkToCallSite"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_VIRTUAL, $new(LambdaForm$Kind, "DIRECT_INVOKE_VIRTUAL"_s, 12, "DMH.invokeVirtual"_s, "invokeVirtual"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_SPECIAL, $new(LambdaForm$Kind, "DIRECT_INVOKE_SPECIAL"_s, 13, "DMH.invokeSpecial"_s, "invokeSpecial"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_SPECIAL_IFC, $new(LambdaForm$Kind, "DIRECT_INVOKE_SPECIAL_IFC"_s, 14, "DMH.invokeSpecialIFC"_s, "invokeSpecialIFC"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_STATIC, $new(LambdaForm$Kind, "DIRECT_INVOKE_STATIC"_s, 15, "DMH.invokeStatic"_s, "invokeStatic"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_NEW_INVOKE_SPECIAL, $new(LambdaForm$Kind, "DIRECT_NEW_INVOKE_SPECIAL"_s, 16, "DMH.newInvokeSpecial"_s, "newInvokeSpecial"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_INTERFACE, $new(LambdaForm$Kind, "DIRECT_INVOKE_INTERFACE"_s, 17, "DMH.invokeInterface"_s, "invokeInterface"_s));
	$assignStatic(LambdaForm$Kind::DIRECT_INVOKE_STATIC_INIT, $new(LambdaForm$Kind, "DIRECT_INVOKE_STATIC_INIT"_s, 18, "DMH.invokeStaticInit"_s, "invokeStaticInit"_s));
	$assignStatic(LambdaForm$Kind::GET_REFERENCE, $new(LambdaForm$Kind, "GET_REFERENCE"_s, 19, "getReference"_s));
	$assignStatic(LambdaForm$Kind::PUT_REFERENCE, $new(LambdaForm$Kind, "PUT_REFERENCE"_s, 20, "putReference"_s));
	$assignStatic(LambdaForm$Kind::GET_REFERENCE_VOLATILE, $new(LambdaForm$Kind, "GET_REFERENCE_VOLATILE"_s, 21, "getReferenceVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_REFERENCE_VOLATILE, $new(LambdaForm$Kind, "PUT_REFERENCE_VOLATILE"_s, 22, "putReferenceVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_INT, $new(LambdaForm$Kind, "GET_INT"_s, 23, "getInt"_s));
	$assignStatic(LambdaForm$Kind::PUT_INT, $new(LambdaForm$Kind, "PUT_INT"_s, 24, "putInt"_s));
	$assignStatic(LambdaForm$Kind::GET_INT_VOLATILE, $new(LambdaForm$Kind, "GET_INT_VOLATILE"_s, 25, "getIntVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_INT_VOLATILE, $new(LambdaForm$Kind, "PUT_INT_VOLATILE"_s, 26, "putIntVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_BOOLEAN, $new(LambdaForm$Kind, "GET_BOOLEAN"_s, 27, "getBoolean"_s));
	$assignStatic(LambdaForm$Kind::PUT_BOOLEAN, $new(LambdaForm$Kind, "PUT_BOOLEAN"_s, 28, "putBoolean"_s));
	$assignStatic(LambdaForm$Kind::GET_BOOLEAN_VOLATILE, $new(LambdaForm$Kind, "GET_BOOLEAN_VOLATILE"_s, 29, "getBooleanVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_BOOLEAN_VOLATILE, $new(LambdaForm$Kind, "PUT_BOOLEAN_VOLATILE"_s, 30, "putBooleanVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_BYTE, $new(LambdaForm$Kind, "GET_BYTE"_s, 31, "getByte"_s));
	$assignStatic(LambdaForm$Kind::PUT_BYTE, $new(LambdaForm$Kind, "PUT_BYTE"_s, 32, "putByte"_s));
	$assignStatic(LambdaForm$Kind::GET_BYTE_VOLATILE, $new(LambdaForm$Kind, "GET_BYTE_VOLATILE"_s, 33, "getByteVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_BYTE_VOLATILE, $new(LambdaForm$Kind, "PUT_BYTE_VOLATILE"_s, 34, "putByteVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_CHAR, $new(LambdaForm$Kind, "GET_CHAR"_s, 35, "getChar"_s));
	$assignStatic(LambdaForm$Kind::PUT_CHAR, $new(LambdaForm$Kind, "PUT_CHAR"_s, 36, "putChar"_s));
	$assignStatic(LambdaForm$Kind::GET_CHAR_VOLATILE, $new(LambdaForm$Kind, "GET_CHAR_VOLATILE"_s, 37, "getCharVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_CHAR_VOLATILE, $new(LambdaForm$Kind, "PUT_CHAR_VOLATILE"_s, 38, "putCharVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_SHORT, $new(LambdaForm$Kind, "GET_SHORT"_s, 39, "getShort"_s));
	$assignStatic(LambdaForm$Kind::PUT_SHORT, $new(LambdaForm$Kind, "PUT_SHORT"_s, 40, "putShort"_s));
	$assignStatic(LambdaForm$Kind::GET_SHORT_VOLATILE, $new(LambdaForm$Kind, "GET_SHORT_VOLATILE"_s, 41, "getShortVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_SHORT_VOLATILE, $new(LambdaForm$Kind, "PUT_SHORT_VOLATILE"_s, 42, "putShortVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_LONG, $new(LambdaForm$Kind, "GET_LONG"_s, 43, "getLong"_s));
	$assignStatic(LambdaForm$Kind::PUT_LONG, $new(LambdaForm$Kind, "PUT_LONG"_s, 44, "putLong"_s));
	$assignStatic(LambdaForm$Kind::GET_LONG_VOLATILE, $new(LambdaForm$Kind, "GET_LONG_VOLATILE"_s, 45, "getLongVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_LONG_VOLATILE, $new(LambdaForm$Kind, "PUT_LONG_VOLATILE"_s, 46, "putLongVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_FLOAT, $new(LambdaForm$Kind, "GET_FLOAT"_s, 47, "getFloat"_s));
	$assignStatic(LambdaForm$Kind::PUT_FLOAT, $new(LambdaForm$Kind, "PUT_FLOAT"_s, 48, "putFloat"_s));
	$assignStatic(LambdaForm$Kind::GET_FLOAT_VOLATILE, $new(LambdaForm$Kind, "GET_FLOAT_VOLATILE"_s, 49, "getFloatVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_FLOAT_VOLATILE, $new(LambdaForm$Kind, "PUT_FLOAT_VOLATILE"_s, 50, "putFloatVolatile"_s));
	$assignStatic(LambdaForm$Kind::GET_DOUBLE, $new(LambdaForm$Kind, "GET_DOUBLE"_s, 51, "getDouble"_s));
	$assignStatic(LambdaForm$Kind::PUT_DOUBLE, $new(LambdaForm$Kind, "PUT_DOUBLE"_s, 52, "putDouble"_s));
	$assignStatic(LambdaForm$Kind::GET_DOUBLE_VOLATILE, $new(LambdaForm$Kind, "GET_DOUBLE_VOLATILE"_s, 53, "getDoubleVolatile"_s));
	$assignStatic(LambdaForm$Kind::PUT_DOUBLE_VOLATILE, $new(LambdaForm$Kind, "PUT_DOUBLE_VOLATILE"_s, 54, "putDoubleVolatile"_s));
	$assignStatic(LambdaForm$Kind::TRY_FINALLY, $new(LambdaForm$Kind, "TRY_FINALLY"_s, 55, "tryFinally"_s));
	$assignStatic(LambdaForm$Kind::TABLE_SWITCH, $new(LambdaForm$Kind, "TABLE_SWITCH"_s, 56, "tableSwitch"_s));
	$assignStatic(LambdaForm$Kind::COLLECT, $new(LambdaForm$Kind, "COLLECT"_s, 57, "collect"_s));
	$assignStatic(LambdaForm$Kind::COLLECTOR, $new(LambdaForm$Kind, "COLLECTOR"_s, 58, "collector"_s));
	$assignStatic(LambdaForm$Kind::CONVERT, $new(LambdaForm$Kind, "CONVERT"_s, 59, "convert"_s));
	$assignStatic(LambdaForm$Kind::SPREAD, $new(LambdaForm$Kind, "SPREAD"_s, 60, "spread"_s));
	$assignStatic(LambdaForm$Kind::LOOP, $new(LambdaForm$Kind, "LOOP"_s, 61, "loop"_s));
	$assignStatic(LambdaForm$Kind::FIELD, $new(LambdaForm$Kind, "FIELD"_s, 62, "field"_s));
	$assignStatic(LambdaForm$Kind::GUARD, $new(LambdaForm$Kind, "GUARD"_s, 63, "guard"_s));
	$assignStatic(LambdaForm$Kind::GUARD_WITH_CATCH, $new(LambdaForm$Kind, "GUARD_WITH_CATCH"_s, 64, "guardWithCatch"_s));
	$assignStatic(LambdaForm$Kind::VARHANDLE_EXACT_INVOKER, $new(LambdaForm$Kind, "VARHANDLE_EXACT_INVOKER"_s, 65, "VH.exactInvoker"_s));
	$assignStatic(LambdaForm$Kind::VARHANDLE_INVOKER, $new(LambdaForm$Kind, "VARHANDLE_INVOKER"_s, 66, "VH.invoker"_s, "invoker"_s));
	$assignStatic(LambdaForm$Kind::VARHANDLE_LINKER, $new(LambdaForm$Kind, "VARHANDLE_LINKER"_s, 67, "VH.invoke_MT"_s, "invoke_MT"_s));
	$assignStatic(LambdaForm$Kind::$VALUES, LambdaForm$Kind::$values());
}

LambdaForm$Kind::LambdaForm$Kind() {
}

$Class* LambdaForm$Kind::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$Kind, name, initialize, &_LambdaForm$Kind_ClassInfo_, clinit$LambdaForm$Kind, allocate$LambdaForm$Kind);
	return class$;
}

$Class* LambdaForm$Kind::class$ = nullptr;

		} // invoke
	} // lang
} // java