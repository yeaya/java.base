#include <java/lang/constant/DynamicConstantDesc.h>

#include <java/io/Serializable.h>
#include <java/lang/BootstrapMethodError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum$EnumDesc.h>
#include <java/lang/Error.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc$AnonymousDynamicConstantDesc.h>
#include <java/lang/constant/DynamicConstantDesc$CanonicalMapHolder.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CANONICAL_MAP
#undef DEFAULT_NAME
#undef EMPTY_CONSTANTDESC
#undef NULL

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $Serializable = ::java::io::Serializable;
using $BootstrapMethodError = ::java::lang::BootstrapMethodError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum$EnumDesc = ::java::lang::Enum$EnumDesc;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DynamicConstantDesc$AnonymousDynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc$AnonymousDynamicConstantDesc;
using $DynamicConstantDesc$CanonicalMapHolder = ::java::lang::constant::DynamicConstantDesc$CanonicalMapHolder;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace constant {

class DynamicConstantDesc$$Lambda$toString : public $Function {
	$class(DynamicConstantDesc$$Lambda$toString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($of($nc(inst$))->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$$Lambda$toString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$$Lambda$toString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DynamicConstantDesc$$Lambda$toString::*)()>(&DynamicConstantDesc$$Lambda$toString::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DynamicConstantDesc$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$$Lambda$toString::class$ = nullptr;

$FieldInfo _DynamicConstantDesc_FieldInfo_[] = {
	{"bootstrapMethod", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDesc, bootstrapMethod$)},
	{"bootstrapArgs", "[Ljava/lang/constant/ConstantDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDesc, bootstrapArgs$)},
	{"constantName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDesc, constantName$)},
	{"constantType", "Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDesc, constantType$)},
	{}
};

$MethodInfo _DynamicConstantDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)V", nullptr, $PROTECTED | $TRANSIENT, $method(static_cast<void(DynamicConstantDesc::*)($DirectMethodHandleDesc*,$String*,$ClassDesc*,$ConstantDescArray*)>(&DynamicConstantDesc::init$))},
	{"bootstrapArgs", "()[Ljava/lang/constant/ConstantDesc;", nullptr, $PUBLIC},
	{"bootstrapArgsList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/constant/ConstantDesc;>;", $PUBLIC},
	{"bootstrapMethod", "()Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC},
	{"canonicalizeArrayVarHandle", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizeArrayVarHandle))},
	{"canonicalizeEnum", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizeEnum))},
	{"canonicalizeFieldVarHandle", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizeFieldVarHandle))},
	{"canonicalizeNull", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizeNull))},
	{"canonicalizePrimitiveClass", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizePrimitiveClass))},
	{"canonicalizeStaticFieldVarHandle", "(Ljava/lang/constant/DynamicConstantDesc;)Ljava/lang/constant/ConstantDesc;", "(Ljava/lang/constant/DynamicConstantDesc<*>;)Ljava/lang/constant/ConstantDesc;", $PRIVATE | $STATIC, $method(static_cast<$ConstantDesc*(*)(DynamicConstantDesc*)>(&DynamicConstantDesc::canonicalizeStaticFieldVarHandle))},
	{"constantName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"constantType", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicConstantDesc;", "<T:Ljava/lang/Object;>(Ljava/lang/constant/DirectMethodHandleDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicConstantDesc<TT;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<DynamicConstantDesc*(*)($DirectMethodHandleDesc*,$ConstantDescArray*)>(&DynamicConstantDesc::of))},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc;)Ljava/lang/constant/DynamicConstantDesc;", "<T:Ljava/lang/Object;>(Ljava/lang/constant/DirectMethodHandleDesc;)Ljava/lang/constant/DynamicConstantDesc<TT;>;", $PUBLIC | $STATIC, $method(static_cast<DynamicConstantDesc*(*)($DirectMethodHandleDesc*)>(&DynamicConstantDesc::of))},
	{"ofCanonical", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/ConstantDesc;", "<T:Ljava/lang/Object;>(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/ConstantDesc;", $PUBLIC | $STATIC, $method(static_cast<$ConstantDesc*(*)($DirectMethodHandleDesc*,$String*,$ClassDesc*,$ConstantDescArray*)>(&DynamicConstantDesc::ofCanonical))},
	{"ofNamed", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicConstantDesc;", "<T:Ljava/lang/Object;>(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicConstantDesc<TT;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<DynamicConstantDesc*(*)($DirectMethodHandleDesc*,$String*,$ClassDesc*,$ConstantDescArray*)>(&DynamicConstantDesc::ofNamed))},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;)TT;", $PUBLIC, nullptr, "java.lang.ReflectiveOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryCanonicalize", "()Ljava/lang/constant/ConstantDesc;", nullptr, $PRIVATE, $method(static_cast<$ConstantDesc*(DynamicConstantDesc::*)()>(&DynamicConstantDesc::tryCanonicalize))},
	{}
};

$InnerClassInfo _DynamicConstantDesc_InnerClassesInfo_[] = {
	{"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder", "java.lang.constant.DynamicConstantDesc", "CanonicalMapHolder", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.constant.DynamicConstantDesc$AnonymousDynamicConstantDesc", "java.lang.constant.DynamicConstantDesc", "AnonymousDynamicConstantDesc", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DynamicConstantDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.constant.DynamicConstantDesc",
	"java.lang.Object",
	"java.lang.constant.ConstantDesc",
	_DynamicConstantDesc_FieldInfo_,
	_DynamicConstantDesc_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/constant/ConstantDesc;",
	nullptr,
	_DynamicConstantDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder,java.lang.constant.DynamicConstantDesc$AnonymousDynamicConstantDesc"
};

$Object* allocate$DynamicConstantDesc($Class* clazz) {
	return $of($alloc(DynamicConstantDesc));
}

void DynamicConstantDesc::init$($DirectMethodHandleDesc* bootstrapMethod, $String* constantName, $ClassDesc* constantType, $ConstantDescArray* bootstrapArgs) {
	$set(this, bootstrapMethod$, $cast($DirectMethodHandleDesc, $Objects::requireNonNull(bootstrapMethod)));
	$set(this, constantName$, $ConstantUtils::validateMemberName($cast($String, $Objects::requireNonNull(constantName)), true));
	$set(this, constantType$, $cast($ClassDesc, $Objects::requireNonNull(constantType)));
	$set(this, bootstrapArgs$, $cast($ConstantDescArray, $nc(($cast($ConstantDescArray, $Objects::requireNonNull(bootstrapArgs))))->clone()));
	if ($nc(constantName)->length() == 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal invocation name: "_s, constantName}));
	}
}

$ConstantDesc* DynamicConstantDesc::ofCanonical($DirectMethodHandleDesc* bootstrapMethod, $String* constantName, $ClassDesc* constantType, $ConstantDescArray* bootstrapArgs) {
	$init(DynamicConstantDesc);
	return $nc($(DynamicConstantDesc::ofNamed(bootstrapMethod, constantName, constantType, bootstrapArgs)))->tryCanonicalize();
}

DynamicConstantDesc* DynamicConstantDesc::ofNamed($DirectMethodHandleDesc* bootstrapMethod, $String* constantName, $ClassDesc* constantType, $ConstantDescArray* bootstrapArgs) {
	$init(DynamicConstantDesc);
	return $new($DynamicConstantDesc$AnonymousDynamicConstantDesc, bootstrapMethod, constantName, constantType, bootstrapArgs);
}

DynamicConstantDesc* DynamicConstantDesc::of($DirectMethodHandleDesc* bootstrapMethod, $ConstantDescArray* bootstrapArgs) {
	$init(DynamicConstantDesc);
	$useLocalCurrentObjectStackCache();
	return ofNamed(bootstrapMethod, "_"_s, $($cast($ClassDesc, $nc($($nc(bootstrapMethod)->invocationType()))->returnType())), bootstrapArgs);
}

DynamicConstantDesc* DynamicConstantDesc::of($DirectMethodHandleDesc* bootstrapMethod) {
	$init(DynamicConstantDesc);
	$init($ConstantUtils);
	return of(bootstrapMethod, $ConstantUtils::EMPTY_CONSTANTDESC);
}

$String* DynamicConstantDesc::constantName() {
	return this->constantName$;
}

$ClassDesc* DynamicConstantDesc::constantType() {
	return this->constantType$;
}

$DirectMethodHandleDesc* DynamicConstantDesc::bootstrapMethod() {
	return this->bootstrapMethod$;
}

$ConstantDescArray* DynamicConstantDesc::bootstrapArgs() {
	return $cast($ConstantDescArray, $nc(this->bootstrapArgs$)->clone());
}

$List* DynamicConstantDesc::bootstrapArgsList() {
	return $List::of(this->bootstrapArgs$);
}

$Object* DynamicConstantDesc::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, bsm, $cast($MethodHandle, $nc(this->bootstrapMethod$)->resolveConstantDesc(lookup)));
		bool var$0 = $nc($($nc(bsm)->type()))->parameterCount() < 2;
		$load($MethodHandles$Lookup);
		if (var$0 || !$MethodHandles$Lookup::class$->isAssignableFrom($($cast($Class, $nc($($nc(bsm)->type()))->parameterType(0))))) {
			$throwNew($BootstrapMethodError, $$str({"Invalid bootstrap method declared for resolving a dynamic constant: "_s, this->bootstrapMethod$}));
		}
		$var($ObjectArray, bsmArgs, $new($ObjectArray, 3 + $nc(this->bootstrapArgs$)->length));
		bsmArgs->set(0, lookup);
		bsmArgs->set(1, this->constantName$);
		bsmArgs->set(2, $($nc(this->constantType$)->resolveConstantDesc(lookup)));
		for (int32_t i = 0; i < $nc(this->bootstrapArgs$)->length; ++i) {
			bsmArgs->set(3 + i, $($nc($nc(this->bootstrapArgs$)->get(i))->resolveConstantDesc(lookup)));
		}
		return $of($nc(bsm)->invokeWithArguments(bsmArgs));
	} catch ($Error& e) {
		$throw(e);
	} catch ($Throwable& t) {
		$throwNew($BootstrapMethodError, t);
	}
	$shouldNotReachHere();
}

$ConstantDesc* DynamicConstantDesc::tryCanonicalize() {
	$init($DynamicConstantDesc$CanonicalMapHolder);
	$var($Function, f, $cast($Function, $nc($DynamicConstantDesc$CanonicalMapHolder::CANONICAL_MAP)->get(this->bootstrapMethod$)));
	if (f != nullptr) {
		try {
			return $cast($ConstantDesc, f->apply(this));
		} catch ($Throwable& t) {
			return this;
		}
	}
	return this;
}

$ConstantDesc* DynamicConstantDesc::canonicalizeNull(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 0) {
		return desc;
	}
	$init($ConstantDescs);
	return $ConstantDescs::NULL;
}

$ConstantDesc* DynamicConstantDesc::canonicalizeEnum(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 0 || $nc(desc)->constantName$ == nullptr) {
		return desc;
	}
	return $Enum$EnumDesc::of($nc(desc)->constantType$, desc->constantName$);
}

$ConstantDesc* DynamicConstantDesc::canonicalizePrimitiveClass(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	$init($ConstantDescs);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 0 || !$nc($($nc(desc)->constantType()))->equals($ConstantDescs::CD_Class) || $nc(desc)->constantName$ == nullptr) {
		return desc;
	}
	return $ClassDesc::ofDescriptor($nc(desc)->constantName$);
}

$ConstantDesc* DynamicConstantDesc::canonicalizeStaticFieldVarHandle(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	$init($ConstantDescs);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 2 || !$nc($($nc(desc)->constantType()))->equals($ConstantDescs::CD_VarHandle)) {
		return desc;
	}
	return $VarHandle$VarHandleDesc::ofStaticField($cast($ClassDesc, $nc($nc(desc)->bootstrapArgs$)->get(0)), desc->constantName$, $cast($ClassDesc, $nc(desc->bootstrapArgs$)->get(1)));
}

$ConstantDesc* DynamicConstantDesc::canonicalizeFieldVarHandle(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	$init($ConstantDescs);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 2 || !$nc($($nc(desc)->constantType()))->equals($ConstantDescs::CD_VarHandle)) {
		return desc;
	}
	return $VarHandle$VarHandleDesc::ofField($cast($ClassDesc, $nc($nc(desc)->bootstrapArgs$)->get(0)), desc->constantName$, $cast($ClassDesc, $nc(desc->bootstrapArgs$)->get(1)));
}

$ConstantDesc* DynamicConstantDesc::canonicalizeArrayVarHandle(DynamicConstantDesc* desc) {
	$init(DynamicConstantDesc);
	$init($ConstantDescs);
	if ($nc($nc(desc)->bootstrapArgs$)->length != 1 || !$nc($($nc(desc)->constantType()))->equals($ConstantDescs::CD_VarHandle)) {
		return desc;
	}
	return $VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $nc($nc(desc)->bootstrapArgs$)->get(0)));
}

bool DynamicConstantDesc::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$var(DynamicConstantDesc, desc, nullptr);
	bool var$4 = $instanceOf(DynamicConstantDesc, o);
	if (var$4) {
		$assign(desc, $cast(DynamicConstantDesc, o));
		var$4 = true;
	}
	bool var$3 = (var$4);
	bool var$2 = var$3 && $Objects::equals(this->bootstrapMethod$, $nc(desc)->bootstrapMethod$);
	bool var$1 = var$2 && $Arrays::equals(this->bootstrapArgs$, $nc(desc)->bootstrapArgs$);
	bool var$0 = var$1 && $Objects::equals(this->constantName$, $nc(desc)->constantName$);
	return var$0 && $Objects::equals(this->constantType$, $nc(desc)->constantType$);
}

int32_t DynamicConstantDesc::hashCode() {
	int32_t result = $Objects::hash($$new($ObjectArray, {
		$of(this->bootstrapMethod$),
		$of(this->constantName$),
		$of(this->constantType$)
	}));
	result = 31 * result + $Arrays::hashCode(this->bootstrapArgs$);
	return result;
}

$String* DynamicConstantDesc::toString() {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	return $String::format("DynamicConstantDesc[%s::%s(%s%s)%s]"_s, $$new($ObjectArray, {
		$($of($nc($($nc(this->bootstrapMethod$)->owner()))->displayName())),
		$($of($nc(this->bootstrapMethod$)->methodName())),
		$nc(this->constantName$)->equals($ConstantDescs::DEFAULT_NAME) ? $of(""_s) : $of($$str({this->constantName$, "/"_s})),
		$($nc($($nc($($Stream::of(this->bootstrapArgs$)))->map(static_cast<$Function*>($$new(DynamicConstantDesc$$Lambda$toString)))))->collect($($Collectors::joining(","_s)))),
		$($of($nc(this->constantType$)->displayName()))
	}));
}

DynamicConstantDesc::DynamicConstantDesc() {
}

$Class* DynamicConstantDesc::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DynamicConstantDesc$$Lambda$toString::classInfo$.name)) {
			return DynamicConstantDesc$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(DynamicConstantDesc, name, initialize, &_DynamicConstantDesc_ClassInfo_, allocate$DynamicConstantDesc);
	return class$;
}

$Class* DynamicConstantDesc::class$ = nullptr;

		} // constant
	} // lang
} // java