#include <java/lang/invoke/MethodHandleNatives$Constants.h>

#include <java/lang/invoke/MethodHandleNatives.h>
#include <jcpp.h>

#undef ACCESS_VM_ANNOTATIONS
#undef HIDDEN_CLASS
#undef LM_MODULE
#undef LM_TRUSTED
#undef LM_UNCONDITIONAL
#undef MN_CALLER_SENSITIVE
#undef MN_IS_CONSTRUCTOR
#undef MN_IS_FIELD
#undef MN_IS_METHOD
#undef MN_IS_TYPE
#undef MN_REFERENCE_KIND_MASK
#undef MN_REFERENCE_KIND_SHIFT
#undef MN_SEARCH_INTERFACES
#undef MN_SEARCH_SUPERCLASSES
#undef MN_TRUSTED_FINAL
#undef NESTMATE_CLASS
#undef REF_LIMIT
#undef REF_NONE
#undef STRONG_LOADER_LINK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleNatives$Constants_FieldInfo_[] = {
	{"MN_IS_METHOD", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_IS_METHOD)},
	{"MN_IS_CONSTRUCTOR", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_IS_CONSTRUCTOR)},
	{"MN_IS_FIELD", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_IS_FIELD)},
	{"MN_IS_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_IS_TYPE)},
	{"MN_CALLER_SENSITIVE", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_CALLER_SENSITIVE)},
	{"MN_TRUSTED_FINAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_TRUSTED_FINAL)},
	{"MN_REFERENCE_KIND_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_REFERENCE_KIND_SHIFT)},
	{"MN_REFERENCE_KIND_MASK", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_REFERENCE_KIND_MASK)},
	{"MN_SEARCH_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_SEARCH_SUPERCLASSES)},
	{"MN_SEARCH_INTERFACES", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, MN_SEARCH_INTERFACES)},
	{"REF_NONE", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_NONE)},
	{"REF_getField", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_getField)},
	{"REF_getStatic", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_getStatic)},
	{"REF_putField", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_putField)},
	{"REF_putStatic", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_putStatic)},
	{"REF_invokeVirtual", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_invokeVirtual)},
	{"REF_invokeStatic", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_invokeStatic)},
	{"REF_invokeSpecial", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_invokeSpecial)},
	{"REF_newInvokeSpecial", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_newInvokeSpecial)},
	{"REF_invokeInterface", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_invokeInterface)},
	{"REF_LIMIT", "B", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, REF_LIMIT)},
	{"NESTMATE_CLASS", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, NESTMATE_CLASS)},
	{"HIDDEN_CLASS", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, HIDDEN_CLASS)},
	{"STRONG_LOADER_LINK", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, STRONG_LOADER_LINK)},
	{"ACCESS_VM_ANNOTATIONS", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, ACCESS_VM_ANNOTATIONS)},
	{"LM_MODULE", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, LM_MODULE)},
	{"LM_UNCONDITIONAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, LM_UNCONDITIONAL)},
	{"LM_TRUSTED", "I", nullptr, $STATIC | $FINAL, $constField(MethodHandleNatives$Constants, LM_TRUSTED)},
	{}
};

$MethodInfo _MethodHandleNatives$Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodHandleNatives$Constants, init$, void)},
	{}
};

$InnerClassInfo _MethodHandleNatives$Constants_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleNatives$Constants", "java.lang.invoke.MethodHandleNatives", "Constants", $STATIC},
	{}
};

$ClassInfo _MethodHandleNatives$Constants_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleNatives$Constants",
	"java.lang.Object",
	nullptr,
	_MethodHandleNatives$Constants_FieldInfo_,
	_MethodHandleNatives$Constants_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleNatives$Constants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleNatives"
};

$Object* allocate$MethodHandleNatives$Constants($Class* clazz) {
	return $of($alloc(MethodHandleNatives$Constants));
}

void MethodHandleNatives$Constants::init$() {
}

MethodHandleNatives$Constants::MethodHandleNatives$Constants() {
}

$Class* MethodHandleNatives$Constants::load$($String* name, bool initialize) {
	$loadClass(MethodHandleNatives$Constants, name, initialize, &_MethodHandleNatives$Constants_ClassInfo_, allocate$MethodHandleNatives$Constants);
	return class$;
}

$Class* MethodHandleNatives$Constants::class$ = nullptr;

		} // invoke
	} // lang
} // java