#include <java/lang/invoke/VarForm.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef COMPARE_AND_EXCHANGE
#undef COMPARE_AND_SET
#undef COUNT
#undef ERASE
#undef GET
#undef GET_AND_UPDATE
#undef IMPL_LOOKUP
#undef SET
#undef TYPE

using $MemberNameArray = $Array<::java::lang::invoke::MemberName>;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;

namespace java {
	namespace lang {
		namespace invoke {

void VarForm::init$($Class* implClass, $Class* receiver, $Class* value, $ClassArray* intermediate) {
	$init($VarHandle$AccessType);
	$set(this, methodType_table, $new($MethodTypeArray, $VarHandle$AccessType::COUNT));
	$init($VarHandle$AccessMode);
	$set(this, memberName_table, $new($MemberNameArray, $VarHandle$AccessMode::COUNT));
	$set(this, implClass, implClass);
	if (receiver == nullptr) {
		initMethodTypes(value, intermediate);
	} else {
		$var($ClassArray, coordinates, $new($ClassArray, $nc(intermediate)->length + 1));
		coordinates->set(0, receiver);
		$System::arraycopy(intermediate, 0, coordinates, 1, intermediate->length);
		initMethodTypes(value, coordinates);
	}
}

void VarForm::init$($Class* value, $ClassArray* coordinates) {
	$init($VarHandle$AccessType);
	$set(this, methodType_table, $new($MethodTypeArray, $VarHandle$AccessType::COUNT));
	$set(this, memberName_table, nullptr);
	$set(this, implClass, nullptr);
	initMethodTypes(value, coordinates);
}

void VarForm::initMethodTypes($Class* value, $ClassArray* coordinates$renamed) {
	$useLocalObjectStack();
	$var($ClassArray, coordinates, coordinates$renamed);
	$Class* erasedValue = $MethodTypeForm::canonicalize(value, $MethodTypeForm::ERASE);
	$var($ClassArray, erasedCoordinates, $MethodTypeForm::canonicalizeAll(coordinates, $MethodTypeForm::ERASE));
	if (erasedValue != nullptr) {
		value = erasedValue;
	}
	if (erasedCoordinates != nullptr) {
		$assign(coordinates, erasedCoordinates);
	}
	$var($MethodType, type, $MethodType::methodType(value, coordinates));
	$init($VarHandle$AccessType);
	$nc(this->methodType_table)->set($VarHandle$AccessType::GET->ordinal(), type);
	int32_t var$0 = $VarHandle$AccessType::GET_AND_UPDATE->ordinal();
	$assign(type, this->methodType_table->set(var$0, $($nc(type)->appendParameterTypes($$new($ClassArray, {value})))));
	int32_t var$1 = $VarHandle$AccessType::SET->ordinal();
	this->methodType_table->set(var$1, $($nc(type)->changeReturnType($Void::TYPE)));
	int32_t var$2 = $VarHandle$AccessType::COMPARE_AND_EXCHANGE->ordinal();
	$assign(type, this->methodType_table->set(var$2, $(type->appendParameterTypes($$new($ClassArray, {value})))));
	int32_t var$3 = $VarHandle$AccessType::COMPARE_AND_SET->ordinal();
	this->methodType_table->set(var$3, $($nc(type)->changeReturnType($Boolean::TYPE)));
}

$MethodType* VarForm::getMethodType(int32_t type) {
	return $nc(this->methodType_table)->get(type);
}

$MemberName* VarForm::getMemberName(int32_t mode) {
	$var($MemberName, mn, getMemberNameOrNull(mode));
	if (mn == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return mn;
}

$MemberName* VarForm::getMemberNameOrNull(int32_t mode) {
	$var($MemberName, mn, $nc(this->memberName_table)->get(mode));
	if (mn == nullptr) {
		$assign(mn, resolveMemberName(mode));
	}
	return mn;
}

$MemberName* VarForm::resolveMemberName(int32_t mode) {
	$useLocalObjectStack();
	$VarHandle$AccessMode* value = $($VarHandle$AccessMode::values())->get(mode);
	$var($String, methodName, $nc(value)->methodName());
	$load($VarHandle);
	$var($MethodType, type, $nc($nc(this->methodType_table)->get(value->at->ordinal()))->insertParameterTypes(0, $$new($ClassArray, {$VarHandle::class$})));
	$init($MethodHandles$Lookup);
	return $nc(this->memberName_table)->set(mode, $($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrNull(6, this->implClass, methodName, type)));
}

$MethodTypeArray* VarForm::getMethodType_V_init() {
	$useLocalObjectStack();
	$var($MethodTypeArray, table, $new($MethodTypeArray, $($VarHandle$AccessType::values())->length));
	for (int32_t i = 0; i < $nc(this->methodType_table)->length; ++i) {
		$var($MethodType, mt, this->methodType_table->get(i));
		table->set(i, $($nc(mt)->changeReturnType($Void::TYPE)));
	}
	$set(this, methodType_V_table, table);
	return table;
}

$MethodType* VarForm::getMethodType_V(int32_t type) {
	$var($MethodTypeArray, table, this->methodType_V_table);
	if (table == nullptr) {
		$assign(table, getMethodType_V_init());
	}
	return $nc(table)->get(type);
}

VarForm::VarForm() {
}

$Class* VarForm::load$($String* name, bool initialize) {
	$CompoundAttribute methodType_tablefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute memberName_tablefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute methodType_V_tablefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"implClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarForm, implClass)},
		{"methodType_table", "[Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarForm, methodType_table), methodType_tablefieldAnnotations$$},
		{"memberName_table", "[Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $field(VarForm, memberName_table), memberName_tablefieldAnnotations$$},
		{"methodType_V_table", "[Ljava/lang/invoke/MethodType;", nullptr, 0, $field(VarForm, methodType_V_table), methodType_V_tablefieldAnnotations$$},
		{}
	};
	$CompoundAttribute getMemberNamemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getMemberNameOrNullmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getMethodTypemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getMethodType_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getMethodType_V_initmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute resolveMemberNamemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", $TRANSIENT, $method(VarForm, init$, void, $Class*, $Class*, $Class*, $ClassArray*)},
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", 0, $method(VarForm, init$, void, $Class*, $ClassArray*)},
		{"getMemberName", "(I)Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $method(VarForm, getMemberName, $MemberName*, int32_t), nullptr, nullptr, getMemberNamemethodAnnotations$$},
		{"getMemberNameOrNull", "(I)Ljava/lang/invoke/MemberName;", nullptr, $FINAL, $method(VarForm, getMemberNameOrNull, $MemberName*, int32_t), nullptr, nullptr, getMemberNameOrNullmethodAnnotations$$},
		{"getMethodType", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(VarForm, getMethodType, $MethodType*, int32_t), nullptr, nullptr, getMethodTypemethodAnnotations$$},
		{"getMethodType_V", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(VarForm, getMethodType_V, $MethodType*, int32_t), nullptr, nullptr, getMethodType_VmethodAnnotations$$},
		{"getMethodType_V_init", "()[Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(VarForm, getMethodType_V_init, $MethodTypeArray*), nullptr, nullptr, getMethodType_V_initmethodAnnotations$$},
		{"initMethodTypes", "(Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", $TRANSIENT, $method(VarForm, initMethodTypes, void, $Class*, $ClassArray*)},
		{"resolveMemberName", "(I)Ljava/lang/invoke/MemberName;", nullptr, 0, $method(VarForm, resolveMemberName, $MemberName*, int32_t), nullptr, nullptr, resolveMemberNamemethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarForm",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VarForm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarForm);
	});
	return class$;
}

$Class* VarForm::class$ = nullptr;

		} // invoke
	} // lang
} // java