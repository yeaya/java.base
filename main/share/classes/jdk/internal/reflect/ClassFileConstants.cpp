#include <jdk/internal/reflect/ClassFileConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACC_PUBLIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ClassFileConstants_FieldInfo_[] = {
	{"opc_aconst_null", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aconst_null)},
	{"opc_sipush", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_sipush)},
	{"opc_ldc", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_ldc)},
	{"opc_iload_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_iload_0)},
	{"opc_iload_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_iload_1)},
	{"opc_iload_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_iload_2)},
	{"opc_iload_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_iload_3)},
	{"opc_lload_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_lload_0)},
	{"opc_lload_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_lload_1)},
	{"opc_lload_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_lload_2)},
	{"opc_lload_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_lload_3)},
	{"opc_fload_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_fload_0)},
	{"opc_fload_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_fload_1)},
	{"opc_fload_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_fload_2)},
	{"opc_fload_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_fload_3)},
	{"opc_dload_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dload_0)},
	{"opc_dload_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dload_1)},
	{"opc_dload_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dload_2)},
	{"opc_dload_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dload_3)},
	{"opc_aload_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aload_0)},
	{"opc_aload_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aload_1)},
	{"opc_aload_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aload_2)},
	{"opc_aload_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aload_3)},
	{"opc_aaload", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_aaload)},
	{"opc_astore_0", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_astore_0)},
	{"opc_astore_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_astore_1)},
	{"opc_astore_2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_astore_2)},
	{"opc_astore_3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_astore_3)},
	{"opc_pop", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_pop)},
	{"opc_dup", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dup)},
	{"opc_dup_x1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dup_x1)},
	{"opc_swap", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_swap)},
	{"opc_i2l", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2l)},
	{"opc_i2f", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2f)},
	{"opc_i2d", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2d)},
	{"opc_l2i", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_l2i)},
	{"opc_l2f", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_l2f)},
	{"opc_l2d", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_l2d)},
	{"opc_f2i", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_f2i)},
	{"opc_f2l", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_f2l)},
	{"opc_f2d", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_f2d)},
	{"opc_d2i", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_d2i)},
	{"opc_d2l", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_d2l)},
	{"opc_d2f", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_d2f)},
	{"opc_i2b", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2b)},
	{"opc_i2c", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2c)},
	{"opc_i2s", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_i2s)},
	{"opc_ifeq", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_ifeq)},
	{"opc_if_icmpeq", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_if_icmpeq)},
	{"opc_goto", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_goto)},
	{"opc_ireturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_ireturn)},
	{"opc_lreturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_lreturn)},
	{"opc_freturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_freturn)},
	{"opc_dreturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_dreturn)},
	{"opc_areturn", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_areturn)},
	{"opc_return", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_return)},
	{"opc_getstatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_getstatic)},
	{"opc_putstatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_putstatic)},
	{"opc_getfield", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_getfield)},
	{"opc_putfield", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_putfield)},
	{"opc_invokevirtual", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_invokevirtual)},
	{"opc_invokespecial", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_invokespecial)},
	{"opc_invokestatic", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_invokestatic)},
	{"opc_invokeinterface", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_invokeinterface)},
	{"opc_arraylength", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_arraylength)},
	{"opc_new", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_new)},
	{"opc_athrow", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_athrow)},
	{"opc_checkcast", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_checkcast)},
	{"opc_instanceof", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_instanceof)},
	{"opc_ifnull", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_ifnull)},
	{"opc_ifnonnull", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, opc_ifnonnull)},
	{"CONSTANT_Class", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_Class)},
	{"CONSTANT_Fieldref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_Fieldref)},
	{"CONSTANT_Methodref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_Methodref)},
	{"CONSTANT_InterfaceMethodref", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_InterfaceMethodref)},
	{"CONSTANT_NameAndType", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_NameAndType)},
	{"CONSTANT_String", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_String)},
	{"CONSTANT_Utf8", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, CONSTANT_Utf8)},
	{"ACC_PUBLIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFileConstants, ACC_PUBLIC)},
	{}
};

$ClassInfo _ClassFileConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.reflect.ClassFileConstants",
	nullptr,
	nullptr,
	_ClassFileConstants_FieldInfo_
};

$Object* allocate$ClassFileConstants($Class* clazz) {
	return $of($alloc(ClassFileConstants));
}

$Class* ClassFileConstants::load$($String* name, bool initialize) {
	$loadClass(ClassFileConstants, name, initialize, &_ClassFileConstants_ClassInfo_, allocate$ClassFileConstants);
	return class$;
}

$Class* ClassFileConstants::class$ = nullptr;

		} // reflect
	} // internal
} // jdk