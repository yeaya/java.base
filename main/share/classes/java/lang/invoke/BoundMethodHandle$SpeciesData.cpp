#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/ClassSpecializer.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ARG_TYPE_LIMIT
#undef BMH_TRANSFORMS
#undef MH_AND_LF
#undef SPECIALIZER
#undef TN_COPY_NO_EXTEND

using $BoundMethodHandle$SpeciesDataArray = $Array<::java::lang::invoke::BoundMethodHandle$SpeciesData>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$Specializer = ::java::lang::invoke::BoundMethodHandle$Specializer;
using $ClassSpecializer = ::java::lang::invoke::ClassSpecializer;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $SimpleMethodHandle = ::java::lang::invoke::SimpleMethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _BoundMethodHandle$SpeciesData_FieldAnnotations_extensions[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _BoundMethodHandle$SpeciesData_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundMethodHandle$SpeciesData, $assertionsDisabled)},
	{"extensions", "[Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $PRIVATE | $FINAL, $field(BoundMethodHandle$SpeciesData, extensions), _BoundMethodHandle$SpeciesData_FieldAnnotations_extensions},
	{}
};

$MethodInfo _BoundMethodHandle$SpeciesData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/BoundMethodHandle$Specializer;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BoundMethodHandle$SpeciesData::*)($BoundMethodHandle$Specializer*,$String*)>(&BoundMethodHandle$SpeciesData::init$))},
	{"deriveClassName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"deriveFieldTypes", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/Class<*>;>;", $PROTECTED, $method(static_cast<$List*(BoundMethodHandle$SpeciesData::*)($String*)>(&BoundMethodHandle$SpeciesData::deriveFieldTypes))},
	{"deriveFieldTypes", "(Ljava/lang/Object;)Ljava/util/List;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"deriveTransformHelper", "(Ljava/lang/invoke/MemberName;I)Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED},
	{"deriveTransformHelperArguments", "(Ljava/lang/invoke/MemberName;ILjava/util/List;Ljava/util/List;)Ljava/util/List;", "<X:Ljava/lang/Object;>(Ljava/lang/invoke/MemberName;ILjava/util/List<TX;>;Ljava/util/List<TX;>;)Ljava/util/List<TX;>;", $PROTECTED},
	{"deriveTypeString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"extendWith", "(B)Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, 0, $method(static_cast<BoundMethodHandle$SpeciesData*(BoundMethodHandle$SpeciesData::*)(int8_t)>(&BoundMethodHandle$SpeciesData::extendWith))},
	{"verifyTHAargs", "(Ljava/lang/invoke/MemberName;ILjava/util/List;Ljava/util/List;)Z", "(Ljava/lang/invoke/MemberName;ILjava/util/List<*>;Ljava/util/List<*>;)Z", $PRIVATE, $method(static_cast<bool(BoundMethodHandle$SpeciesData::*)($MemberName*,int32_t,$List*,$List*)>(&BoundMethodHandle$SpeciesData::verifyTHAargs))},
	{}
};

$InnerClassInfo _BoundMethodHandle$SpeciesData_InnerClassesInfo_[] = {
	{"java.lang.invoke.BoundMethodHandle$SpeciesData", "java.lang.invoke.BoundMethodHandle", "SpeciesData", $STATIC | $FINAL},
	{"java.lang.invoke.ClassSpecializer$SpeciesData", "java.lang.invoke.ClassSpecializer", "SpeciesData", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BoundMethodHandle$SpeciesData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.BoundMethodHandle$SpeciesData",
	"java.lang.invoke.ClassSpecializer$SpeciesData",
	nullptr,
	_BoundMethodHandle$SpeciesData_FieldInfo_,
	_BoundMethodHandle$SpeciesData_MethodInfo_,
	"Ljava/lang/invoke/ClassSpecializer<Ljava/lang/invoke/BoundMethodHandle;Ljava/lang/String;Ljava/lang/invoke/BoundMethodHandle$SpeciesData;>.SpeciesData;",
	nullptr,
	_BoundMethodHandle$SpeciesData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BoundMethodHandle"
};

$Object* allocate$BoundMethodHandle$SpeciesData($Class* clazz) {
	return $of($alloc(BoundMethodHandle$SpeciesData));
}

bool BoundMethodHandle$SpeciesData::$assertionsDisabled = false;

void BoundMethodHandle$SpeciesData::init$($BoundMethodHandle$Specializer* outer, $String* key) {
	$ClassSpecializer$SpeciesData::init$((static_cast<$BoundMethodHandle$Specializer*>($nc(outer))), key);
	$init($LambdaForm$BasicType);
	$set(this, extensions, $new($BoundMethodHandle$SpeciesDataArray, $LambdaForm$BasicType::ARG_TYPE_LIMIT));
}

$String* BoundMethodHandle$SpeciesData::deriveClassName() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeString, deriveTypeString());
	if ($nc(typeString)->isEmpty()) {
		$load($SimpleMethodHandle);
		return $SimpleMethodHandle::class$->getName();
	}
	$load($BoundMethodHandle);
	return $str({$($BoundMethodHandle::class$->getName()), "$Species_"_s, typeString});
}

$List* BoundMethodHandle$SpeciesData::deriveFieldTypes($String* key) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, types, $new($ArrayList, $nc(key)->length()));
	for (int32_t i = 0; i < $nc(key)->length(); ++i) {
		types->add($nc($($LambdaForm$BasicType::basicType(key->charAt(i))))->basicTypeClass());
	}
	return types;
}

$String* BoundMethodHandle$SpeciesData::deriveTypeString() {
	return $cast($String, key());
}

$MethodHandle* BoundMethodHandle$SpeciesData::deriveTransformHelper($MemberName* transform, int32_t whichtm) {
	$useLocalCurrentObjectStackCache();
	$init($BoundMethodHandle$Specializer);
	if (whichtm == $BoundMethodHandle$Specializer::TN_COPY_NO_EXTEND) {
		return factory();
	} else {
		$init($LambdaForm$BasicType);
		if (whichtm < $LambdaForm$BasicType::ARG_TYPE_LIMIT) {
			return $nc($(extendWith((int8_t)whichtm)))->factory();
		} else {
			$throw($($MethodHandleStatics::newInternalError("bad transform"_s)));
		}
	}
}

$List* BoundMethodHandle$SpeciesData::deriveTransformHelperArguments($MemberName* transform, int32_t whichtm, $List* args, $List* fields) {
	if (!BoundMethodHandle$SpeciesData::$assertionsDisabled && !(verifyTHAargs(transform, whichtm, args, fields))) {
		$throwNew($AssertionError);
	}
	$nc(args)->addAll(2, fields);
	return args;
}

bool BoundMethodHandle$SpeciesData::verifyTHAargs($MemberName* transform, int32_t whichtm, $List* args, $List* fields) {
	$useLocalCurrentObjectStackCache();
	$init($BoundMethodHandle$Specializer);
	if (!BoundMethodHandle$SpeciesData::$assertionsDisabled && !($equals(transform, $nc($BoundMethodHandle$Specializer::BMH_TRANSFORMS)->get(whichtm)))) {
		$throwNew($AssertionError);
	}
	bool var$0 = !BoundMethodHandle$SpeciesData::$assertionsDisabled;
	if (var$0) {
		int32_t var$1 = $nc(args)->size();
		var$0 = !(var$1 == $nc($($nc(transform)->getMethodType()))->parameterCount());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	bool var$2 = !BoundMethodHandle$SpeciesData::$assertionsDisabled;
	if (var$2) {
		int32_t var$3 = $nc(fields)->size();
		var$2 = !(var$3 == this->fieldCount());
	}
	if (var$2) {
		$throwNew($AssertionError);
	}
	int32_t MH_AND_LF = 2;
	if (whichtm == $BoundMethodHandle$Specializer::TN_COPY_NO_EXTEND) {
		if (!BoundMethodHandle$SpeciesData::$assertionsDisabled && !($nc($($nc(transform)->getMethodType()))->parameterCount() == MH_AND_LF)) {
			$throwNew($AssertionError);
		}
	} else {
		$init($LambdaForm$BasicType);
		if (whichtm < $LambdaForm$BasicType::ARG_TYPE_LIMIT) {
			if (!BoundMethodHandle$SpeciesData::$assertionsDisabled && !($nc($($nc(transform)->getMethodType()))->parameterCount() == MH_AND_LF + 1)) {
				$throwNew($AssertionError);
			}
			$LambdaForm$BasicType* type = $LambdaForm$BasicType::basicType((int8_t)whichtm);
			bool var$4 = !BoundMethodHandle$SpeciesData::$assertionsDisabled;
			if (var$4) {
				var$4 = !($nc($($nc(transform)->getParameterTypes()))->get(MH_AND_LF) == type->basicTypeClass());
			}
			if (var$4) {
				$throwNew($AssertionError);
			}
		} else {
			return false;
		}
	}
	return true;
}

BoundMethodHandle$SpeciesData* BoundMethodHandle$SpeciesData::extendWith(int8_t typeNum) {
	$useLocalCurrentObjectStackCache();
	$var(BoundMethodHandle$SpeciesData, sd, $nc(this->extensions)->get(typeNum));
	if (sd != nullptr) {
		return sd;
	}
	$init($BoundMethodHandle);
	$var($String, var$0, $cast($String, $(key())));
	$assign(sd, $cast(BoundMethodHandle$SpeciesData, $nc($BoundMethodHandle::SPECIALIZER)->findSpecies($$concat(var$0, $$str($nc($($LambdaForm$BasicType::basicType(typeNum)))->basicTypeChar())))));
	$nc(this->extensions)->set(typeNum, sd);
	return sd;
}

$List* BoundMethodHandle$SpeciesData::deriveFieldTypes(Object$* key) {
	return this->deriveFieldTypes($cast($String, key));
}

void clinit$BoundMethodHandle$SpeciesData($Class* class$) {
	$load($BoundMethodHandle);
	BoundMethodHandle$SpeciesData::$assertionsDisabled = !$BoundMethodHandle::class$->desiredAssertionStatus();
}

BoundMethodHandle$SpeciesData::BoundMethodHandle$SpeciesData() {
}

$Class* BoundMethodHandle$SpeciesData::load$($String* name, bool initialize) {
	$loadClass(BoundMethodHandle$SpeciesData, name, initialize, &_BoundMethodHandle$SpeciesData_ClassInfo_, clinit$BoundMethodHandle$SpeciesData, allocate$BoundMethodHandle$SpeciesData);
	return class$;
}

$Class* BoundMethodHandle$SpeciesData::class$ = nullptr;

		} // invoke
	} // lang
} // java