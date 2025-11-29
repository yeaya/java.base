#include <java/lang/invoke/TypeConvertingMethodAdapter.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <sun/invoke/util/BytecodeDescriptor.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ASM7
#undef BIPUSH
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CHECKCAST
#undef DOUBLE
#undef F2D
#undef F2L
#undef FLOAT
#undef FROM_TYPE_SORT
#undef FROM_WRAPPER_NAME
#undef I2D
#undef I2F
#undef I2L
#undef ICONST_0
#undef INT
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef L2D
#undef L2F
#undef LONG
#undef MAX_VALUE
#undef MIN_VALUE
#undef NAME_BOX_METHOD
#undef NAME_OBJECT
#undef NOP
#undef NUM_WRAPPERS
#undef SHORT
#undef SIPUSH
#undef TYPE
#undef WRAPPER_PREFIX

using $WrapperArray = $Array<::sun::invoke::util::Wrapper>;
using $intArray2 = $Array<int32_t, 2>;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $BytecodeDescriptor = ::sun::invoke::util::BytecodeDescriptor;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _TypeConvertingMethodAdapter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeConvertingMethodAdapter, $assertionsDisabled)},
	{"NUM_WRAPPERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeConvertingMethodAdapter, NUM_WRAPPERS)},
	{"NAME_OBJECT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, NAME_OBJECT)},
	{"WRAPPER_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, WRAPPER_PREFIX)},
	{"NAME_BOX_METHOD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, NAME_BOX_METHOD)},
	{"wideningOpcodes", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, wideningOpcodes)},
	{"FROM_WRAPPER_NAME", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, FROM_WRAPPER_NAME)},
	{"FROM_TYPE_SORT", "[Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeConvertingMethodAdapter, FROM_TYPE_SORT)},
	{}
};

$MethodInfo _TypeConvertingMethodAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, 0, $method(static_cast<void(TypeConvertingMethodAdapter::*)($MethodVisitor*)>(&TypeConvertingMethodAdapter::init$))},
	{"box", "(Lsun/invoke/util/Wrapper;)V", nullptr, 0},
	{"boxIfTypePrimitive", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, 0},
	{"boxingDescriptor", "(Lsun/invoke/util/Wrapper;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Wrapper*)>(&TypeConvertingMethodAdapter::boxingDescriptor))},
	{"cast", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"convertType", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", 0},
	{"descriptorToName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(TypeConvertingMethodAdapter::*)($String*)>(&TypeConvertingMethodAdapter::descriptorToName))},
	{"hashWrapperName", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&TypeConvertingMethodAdapter::hashWrapperName))},
	{"iconst", "(I)V", nullptr, 0},
	{"initWidening", "(Lsun/invoke/util/Wrapper;I[Lsun/invoke/util/Wrapper;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($Wrapper*,int32_t,$WrapperArray*)>(&TypeConvertingMethodAdapter::initWidening))},
	{"toWrapper", "(Ljava/lang/String;)Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE, $method(static_cast<$Wrapper*(TypeConvertingMethodAdapter::*)($String*)>(&TypeConvertingMethodAdapter::toWrapper))},
	{"unbox", "(Ljava/lang/String;Lsun/invoke/util/Wrapper;)V", nullptr, 0},
	{"unboxMethod", "(Lsun/invoke/util/Wrapper;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Wrapper*)>(&TypeConvertingMethodAdapter::unboxMethod))},
	{"unboxingDescriptor", "(Lsun/invoke/util/Wrapper;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Wrapper*)>(&TypeConvertingMethodAdapter::unboxingDescriptor))},
	{"widen", "(Lsun/invoke/util/Wrapper;Lsun/invoke/util/Wrapper;)V", nullptr, 0},
	{"wrapperName", "(Lsun/invoke/util/Wrapper;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Wrapper*)>(&TypeConvertingMethodAdapter::wrapperName))},
	{"wrapperOrNullFromDescriptor", "(Ljava/lang/String;)Lsun/invoke/util/Wrapper;", nullptr, $PRIVATE, $method(static_cast<$Wrapper*(TypeConvertingMethodAdapter::*)($String*)>(&TypeConvertingMethodAdapter::wrapperOrNullFromDescriptor))},
	{}
};

$ClassInfo _TypeConvertingMethodAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.TypeConvertingMethodAdapter",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	nullptr,
	_TypeConvertingMethodAdapter_FieldInfo_,
	_TypeConvertingMethodAdapter_MethodInfo_
};

$Object* allocate$TypeConvertingMethodAdapter($Class* clazz) {
	return $of($alloc(TypeConvertingMethodAdapter));
}

bool TypeConvertingMethodAdapter::$assertionsDisabled = false;
$String* TypeConvertingMethodAdapter::NAME_OBJECT = nullptr;
$String* TypeConvertingMethodAdapter::WRAPPER_PREFIX = nullptr;
$String* TypeConvertingMethodAdapter::NAME_BOX_METHOD = nullptr;
$intArray2* TypeConvertingMethodAdapter::wideningOpcodes = nullptr;
$WrapperArray* TypeConvertingMethodAdapter::FROM_WRAPPER_NAME = nullptr;
$WrapperArray* TypeConvertingMethodAdapter::FROM_TYPE_SORT = nullptr;

void TypeConvertingMethodAdapter::init$($MethodVisitor* mv) {
	$MethodVisitor::init$($Opcodes::ASM7, mv);
}

void TypeConvertingMethodAdapter::initWidening($Wrapper* to, int32_t opcode, $WrapperArray* from) {
	$init(TypeConvertingMethodAdapter);
	{
		$var($WrapperArray, arr$, from);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Wrapper* f = arr$->get(i$);
			{
				$nc($nc(TypeConvertingMethodAdapter::wideningOpcodes)->get($nc(f)->ordinal()))->set($nc(to)->ordinal(), opcode);
			}
		}
	}
}

int32_t TypeConvertingMethodAdapter::hashWrapperName($String* xn) {
	$init(TypeConvertingMethodAdapter);
	if ($nc(xn)->length() < 3) {
		return 0;
	}
	int32_t var$0 = 3 * $nc(xn)->charAt(1);
	return (var$0 + xn->charAt(2)) % 16;
}

$Wrapper* TypeConvertingMethodAdapter::wrapperOrNullFromDescriptor($String* desc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(desc)->startsWith(TypeConvertingMethodAdapter::WRAPPER_PREFIX)) {
		return nullptr;
	}
	int32_t var$0 = $nc(TypeConvertingMethodAdapter::WRAPPER_PREFIX)->length();
	$var($String, cname, $nc(desc)->substring(var$0, desc->length() - 1));
	$Wrapper* w = $nc(TypeConvertingMethodAdapter::FROM_WRAPPER_NAME)->get(hashWrapperName(cname));
	if (w == nullptr || $nc($($nc(w)->wrapperSimpleName()))->equals(cname)) {
		return w;
	} else {
		return nullptr;
	}
}

$String* TypeConvertingMethodAdapter::wrapperName($Wrapper* w) {
	$init(TypeConvertingMethodAdapter);
	return $str({"java/lang/"_s, $($nc(w)->wrapperSimpleName())});
}

$String* TypeConvertingMethodAdapter::unboxMethod($Wrapper* w) {
	$init(TypeConvertingMethodAdapter);
	return $str({$($nc(w)->primitiveSimpleName()), "Value"_s});
}

$String* TypeConvertingMethodAdapter::boxingDescriptor($Wrapper* w) {
	$init(TypeConvertingMethodAdapter);
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"("_s, $$str($nc(w)->basicTypeChar()), ")L"_s}));
	$var($String, var$0, $$concat(var$1, $(wrapperName(w))));
	return $concat(var$0, ";");
}

$String* TypeConvertingMethodAdapter::unboxingDescriptor($Wrapper* w) {
	$init(TypeConvertingMethodAdapter);
	return $str({"()"_s, $$str($nc(w)->basicTypeChar())});
}

void TypeConvertingMethodAdapter::boxIfTypePrimitive($Type* t) {
	$Wrapper* w = $nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->get($nc(t)->getSort());
	if (w != nullptr) {
		box(w);
	}
}

void TypeConvertingMethodAdapter::widen($Wrapper* ws, $Wrapper* wt) {
	if (ws != wt) {
		int32_t opcode = $nc($nc(TypeConvertingMethodAdapter::wideningOpcodes)->get($nc(ws)->ordinal()))->get($nc(wt)->ordinal());
		if (opcode != $Opcodes::NOP) {
			visitInsn(opcode);
		}
	}
}

void TypeConvertingMethodAdapter::box($Wrapper* w) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, wrapperName(w));
	$var($String, var$1, TypeConvertingMethodAdapter::NAME_BOX_METHOD);
	visitMethodInsn($Opcodes::INVOKESTATIC, var$0, var$1, $(boxingDescriptor(w)), false);
}

void TypeConvertingMethodAdapter::unbox($String* sname, $Wrapper* wt) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, sname);
	$var($String, var$1, unboxMethod(wt));
	visitMethodInsn($Opcodes::INVOKEVIRTUAL, var$0, var$1, $(unboxingDescriptor(wt)), false);
}

$String* TypeConvertingMethodAdapter::descriptorToName($String* desc) {
	int32_t last = $nc(desc)->length() - 1;
	bool var$0 = desc->charAt(0) == u'L';
	if (var$0 && desc->charAt(last) == u';') {
		return desc->substring(1, last);
	} else {
		return desc;
	}
}

void TypeConvertingMethodAdapter::cast($String* ds, $String* dt) {
	$useLocalCurrentObjectStackCache();
	$var($String, ns, descriptorToName(ds));
	$var($String, nt, descriptorToName(dt));
	bool var$0 = !$nc(nt)->equals(ns);
	if (var$0 && !nt->equals(TypeConvertingMethodAdapter::NAME_OBJECT)) {
		visitTypeInsn($Opcodes::CHECKCAST, nt);
	}
}

$Wrapper* TypeConvertingMethodAdapter::toWrapper($String* desc) {
	char16_t first = $nc(desc)->charAt(0);
	if (first == u'[' || first == u'(') {
		first = u'L';
	}
	return $Wrapper::forBasicType(first);
}

void TypeConvertingMethodAdapter::convertType($Class* arg, $Class* target, $Class* functional) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($of(arg))->equals(target);
	if (var$0 && $of(arg)->equals(functional)) {
		return;
	}
	$init($Void);
	if (arg == $Void::TYPE || target == $Void::TYPE) {
		return;
	}
	if ($nc(arg)->isPrimitive()) {
		$Wrapper* wArg = $Wrapper::forPrimitiveType(arg);
		if ($nc(target)->isPrimitive()) {
			widen(wArg, $($Wrapper::forPrimitiveType(target)));
		} else {
			$var($String, dTarget, $BytecodeDescriptor::unparse(target));
			$Wrapper* wPrimTarget = wrapperOrNullFromDescriptor(dTarget);
			if (wPrimTarget != nullptr) {
				widen(wArg, wPrimTarget);
				box(wPrimTarget);
			} else {
				box(wArg);
				cast($(wrapperName(wArg)), dTarget);
			}
		}
	} else {
		$var($String, dArg, $BytecodeDescriptor::unparse(arg));
		$var($String, dSrc, nullptr);
		if ($nc(functional)->isPrimitive()) {
			$assign(dSrc, dArg);
		} else {
			$assign(dSrc, $BytecodeDescriptor::unparse(functional));
			cast(dArg, dSrc);
		}
		$var($String, dTarget, $BytecodeDescriptor::unparse(target));
		if ($nc(target)->isPrimitive()) {
			$Wrapper* wTarget = toWrapper(dTarget);
			$Wrapper* wps = wrapperOrNullFromDescriptor(dSrc);
			if (wps != nullptr) {
				bool var$1 = wps->isSigned();
				if (var$1 || wps->isFloating()) {
					unbox($(wrapperName(wps)), wTarget);
				} else {
					unbox($(wrapperName(wps)), wps);
					widen(wps, wTarget);
				}
			} else {
				$var($String, intermediate, nullptr);
				bool var$2 = $nc(wTarget)->isSigned();
				if (var$2 || $nc(wTarget)->isFloating()) {
					$assign(intermediate, "java/lang/Number"_s);
				} else {
					$assign(intermediate, wrapperName(wTarget));
				}
				cast(dSrc, intermediate);
				unbox(intermediate, wTarget);
			}
		} else {
			cast(dSrc, dTarget);
		}
	}
}

void TypeConvertingMethodAdapter::iconst(int32_t cst) {
	if (cst >= -1 && cst <= 5) {
		$nc(this->mv)->visitInsn($Opcodes::ICONST_0 + cst);
	} else if (cst >= $Byte::MIN_VALUE && cst <= $Byte::MAX_VALUE) {
		$nc(this->mv)->visitIntInsn($Opcodes::BIPUSH, cst);
	} else if (cst >= $Short::MIN_VALUE && cst <= $Short::MAX_VALUE) {
		$nc(this->mv)->visitIntInsn($Opcodes::SIPUSH, cst);
	} else {
		$nc(this->mv)->visitLdcInsn($($Integer::valueOf(cst)));
	}
}

void clinit$TypeConvertingMethodAdapter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TypeConvertingMethodAdapter::NAME_OBJECT, "java/lang/Object"_s);
	$assignStatic(TypeConvertingMethodAdapter::WRAPPER_PREFIX, "Ljava/lang/"_s);
	$assignStatic(TypeConvertingMethodAdapter::NAME_BOX_METHOD, "valueOf"_s);
	TypeConvertingMethodAdapter::$assertionsDisabled = !TypeConvertingMethodAdapter::class$->desiredAssertionStatus();
	$assignStatic(TypeConvertingMethodAdapter::wideningOpcodes, $new($intArray2, TypeConvertingMethodAdapter::NUM_WRAPPERS, TypeConvertingMethodAdapter::NUM_WRAPPERS));
	$assignStatic(TypeConvertingMethodAdapter::FROM_WRAPPER_NAME, $new($WrapperArray, 16));
	$assignStatic(TypeConvertingMethodAdapter::FROM_TYPE_SORT, $new($WrapperArray, 12));
	{
		{
			$var($WrapperArray, arr$, $Wrapper::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Wrapper* w = arr$->get(i$);
				{
					if ($nc(w)->basicTypeChar() != u'L') {
						int32_t wi = TypeConvertingMethodAdapter::hashWrapperName($(w->wrapperSimpleName()));
						if (!TypeConvertingMethodAdapter::$assertionsDisabled && !($nc(TypeConvertingMethodAdapter::FROM_WRAPPER_NAME)->get(wi) == nullptr)) {
							$throwNew($AssertionError);
						}
						$nc(TypeConvertingMethodAdapter::FROM_WRAPPER_NAME)->set(wi, w);
					}
				}
			}
		}
		$init($Wrapper);
		TypeConvertingMethodAdapter::initWidening($Wrapper::LONG, $Opcodes::I2L, $$new($WrapperArray, {
			$Wrapper::BYTE,
			$Wrapper::SHORT,
			$Wrapper::INT,
			$Wrapper::CHAR
		}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::LONG, $Opcodes::F2L, $$new($WrapperArray, {$Wrapper::FLOAT}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::FLOAT, $Opcodes::I2F, $$new($WrapperArray, {
			$Wrapper::BYTE,
			$Wrapper::SHORT,
			$Wrapper::INT,
			$Wrapper::CHAR
		}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::FLOAT, $Opcodes::L2F, $$new($WrapperArray, {$Wrapper::LONG}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::DOUBLE, $Opcodes::I2D, $$new($WrapperArray, {
			$Wrapper::BYTE,
			$Wrapper::SHORT,
			$Wrapper::INT,
			$Wrapper::CHAR
		}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::DOUBLE, $Opcodes::F2D, $$new($WrapperArray, {$Wrapper::FLOAT}));
		TypeConvertingMethodAdapter::initWidening($Wrapper::DOUBLE, $Opcodes::L2D, $$new($WrapperArray, {$Wrapper::LONG}));
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::BYTE, $Wrapper::BYTE);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::SHORT, $Wrapper::SHORT);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::INT, $Wrapper::INT);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::LONG, $Wrapper::LONG);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::CHAR, $Wrapper::CHAR);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::FLOAT, $Wrapper::FLOAT);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::DOUBLE, $Wrapper::DOUBLE);
		$nc(TypeConvertingMethodAdapter::FROM_TYPE_SORT)->set($Type::BOOLEAN, $Wrapper::BOOLEAN);
	}
}

TypeConvertingMethodAdapter::TypeConvertingMethodAdapter() {
}

$Class* TypeConvertingMethodAdapter::load$($String* name, bool initialize) {
	$loadClass(TypeConvertingMethodAdapter, name, initialize, &_TypeConvertingMethodAdapter_ClassInfo_, clinit$TypeConvertingMethodAdapter, allocate$TypeConvertingMethodAdapter);
	return class$;
}

$Class* TypeConvertingMethodAdapter::class$ = nullptr;

		} // invoke
	} // lang
} // java