#include <java/lang/constant/DynamicCallSiteDesc.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef DEFAULT_NAME
#undef EMPTY_CONSTANTDESC

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace constant {

class DynamicCallSiteDesc$$Lambda$toString : public $Function {
	$class(DynamicCallSiteDesc$$Lambda$toString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($of($nc(inst$))->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicCallSiteDesc$$Lambda$toString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicCallSiteDesc$$Lambda$toString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DynamicCallSiteDesc$$Lambda$toString::*)()>(&DynamicCallSiteDesc$$Lambda$toString::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DynamicCallSiteDesc$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicCallSiteDesc$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicCallSiteDesc$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(DynamicCallSiteDesc$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicCallSiteDesc$$Lambda$toString::class$ = nullptr;

$FieldInfo _DynamicCallSiteDesc_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DynamicCallSiteDesc, $assertionsDisabled)},
	{"bootstrapMethod", "Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicCallSiteDesc, bootstrapMethod$)},
	{"bootstrapArgs", "[Ljava/lang/constant/ConstantDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicCallSiteDesc, bootstrapArgs$)},
	{"invocationName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DynamicCallSiteDesc, invocationName$)},
	{"invocationType", "Ljava/lang/constant/MethodTypeDesc;", nullptr, $PRIVATE | $FINAL, $field(DynamicCallSiteDesc, invocationType$)},
	{}
};

$MethodInfo _DynamicCallSiteDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;[Ljava/lang/constant/ConstantDesc;)V", nullptr, $PRIVATE, $method(static_cast<void(DynamicCallSiteDesc::*)($DirectMethodHandleDesc*,$String*,$MethodTypeDesc*,$ConstantDescArray*)>(&DynamicCallSiteDesc::init$))},
	{"bootstrapArgs", "()[Ljava/lang/constant/ConstantDesc;", nullptr, $PUBLIC},
	{"bootstrapMethod", "()Ljava/lang/constant/MethodHandleDesc;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"invocationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"invocationType", "()Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;[Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicCallSiteDesc;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<DynamicCallSiteDesc*(*)($DirectMethodHandleDesc*,$String*,$MethodTypeDesc*,$ConstantDescArray*)>(&DynamicCallSiteDesc::of))},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;)Ljava/lang/constant/DynamicCallSiteDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DynamicCallSiteDesc*(*)($DirectMethodHandleDesc*,$String*,$MethodTypeDesc*)>(&DynamicCallSiteDesc::of))},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc;Ljava/lang/constant/MethodTypeDesc;)Ljava/lang/constant/DynamicCallSiteDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DynamicCallSiteDesc*(*)($DirectMethodHandleDesc*,$MethodTypeDesc*)>(&DynamicCallSiteDesc::of))},
	{"resolveCallSiteDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/CallSite;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withArgs", "([Ljava/lang/constant/ConstantDesc;)Ljava/lang/constant/DynamicCallSiteDesc;", nullptr, $PUBLIC | $TRANSIENT},
	{"withNameAndType", "(Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;)Ljava/lang/constant/DynamicCallSiteDesc;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DynamicCallSiteDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.constant.DynamicCallSiteDesc",
	"java.lang.Object",
	nullptr,
	_DynamicCallSiteDesc_FieldInfo_,
	_DynamicCallSiteDesc_MethodInfo_
};

$Object* allocate$DynamicCallSiteDesc($Class* clazz) {
	return $of($alloc(DynamicCallSiteDesc));
}

bool DynamicCallSiteDesc::$assertionsDisabled = false;

void DynamicCallSiteDesc::init$($DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, $MethodTypeDesc* invocationType, $ConstantDescArray* bootstrapArgs) {
	$useLocalCurrentObjectStackCache();
	$set(this, invocationName$, $ConstantUtils::validateMemberName($cast($String, $Objects::requireNonNull(invocationName)), true));
	$set(this, invocationType$, $cast($MethodTypeDesc, $Objects::requireNonNull(invocationType)));
	$set(this, bootstrapMethod$, $cast($DirectMethodHandleDesc, $Objects::requireNonNull(bootstrapMethod)));
	$set(this, bootstrapArgs$, $cast($ConstantDescArray, $Objects::requireNonNull($cast($ConstantDescArray, $($nc(bootstrapArgs)->clone())))));
	for (int32_t i = 0; i < $nc(this->bootstrapArgs$)->length; ++i) {
		$Objects::requireNonNull($nc(this->bootstrapArgs$)->get(i));
	}
	if ($nc(invocationName)->length() == 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal invocation name: "_s, invocationName}));
	}
}

DynamicCallSiteDesc* DynamicCallSiteDesc::of($DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, $MethodTypeDesc* invocationType, $ConstantDescArray* bootstrapArgs) {
	$init(DynamicCallSiteDesc);
	return $new(DynamicCallSiteDesc, bootstrapMethod, invocationName, invocationType, bootstrapArgs);
}

DynamicCallSiteDesc* DynamicCallSiteDesc::of($DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, $MethodTypeDesc* invocationType) {
	$init(DynamicCallSiteDesc);
	$init($ConstantUtils);
	return $new(DynamicCallSiteDesc, bootstrapMethod, invocationName, invocationType, $ConstantUtils::EMPTY_CONSTANTDESC);
}

DynamicCallSiteDesc* DynamicCallSiteDesc::of($DirectMethodHandleDesc* bootstrapMethod, $MethodTypeDesc* invocationType) {
	$init(DynamicCallSiteDesc);
	$init($ConstantDescs);
	return of(bootstrapMethod, $ConstantDescs::DEFAULT_NAME, invocationType);
}

DynamicCallSiteDesc* DynamicCallSiteDesc::withArgs($ConstantDescArray* bootstrapArgs) {
	return $new(DynamicCallSiteDesc, this->bootstrapMethod$, this->invocationName$, this->invocationType$, bootstrapArgs);
}

DynamicCallSiteDesc* DynamicCallSiteDesc::withNameAndType($String* invocationName, $MethodTypeDesc* invocationType) {
	return $new(DynamicCallSiteDesc, this->bootstrapMethod$, invocationName, invocationType, this->bootstrapArgs$);
}

$String* DynamicCallSiteDesc::invocationName() {
	return this->invocationName$;
}

$MethodTypeDesc* DynamicCallSiteDesc::invocationType() {
	return this->invocationType$;
}

$MethodHandleDesc* DynamicCallSiteDesc::bootstrapMethod() {
	return this->bootstrapMethod$;
}

$ConstantDescArray* DynamicCallSiteDesc::bootstrapArgs() {
	return $cast($ConstantDescArray, $nc(this->bootstrapArgs$)->clone());
}

$CallSite* DynamicCallSiteDesc::resolveCallSiteDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	if (!DynamicCallSiteDesc::$assertionsDisabled && !$nc($($cast($ClassDesc, $nc($($nc(this->bootstrapMethod$)->invocationType()))->parameterType(1))))->equals($ConstantDescs::CD_String)) {
		$throwNew($AssertionError);
	}
	$var($MethodHandle, bsm, $cast($MethodHandle, $nc(this->bootstrapMethod$)->resolveConstantDesc(lookup)));
	$var($ObjectArray, args, $new($ObjectArray, $nc(this->bootstrapArgs$)->length + 3));
	args->set(0, lookup);
	args->set(1, this->invocationName$);
	args->set(2, $($nc(this->invocationType$)->resolveConstantDesc(lookup)));
	$System::arraycopy(this->bootstrapArgs$, 0, args, 3, $nc(this->bootstrapArgs$)->length);
	return $cast($CallSite, $nc(bsm)->invokeWithArguments(args));
}

bool DynamicCallSiteDesc::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(DynamicCallSiteDesc, specifier, $cast(DynamicCallSiteDesc, o));
	bool var$3 = $Objects::equals(this->bootstrapMethod$, $nc(specifier)->bootstrapMethod$);
	bool var$2 = var$3 && $Arrays::equals(this->bootstrapArgs$, $nc(specifier)->bootstrapArgs$);
	bool var$1 = var$2 && $Objects::equals(this->invocationName$, $nc(specifier)->invocationName$);
	return var$1 && $Objects::equals(this->invocationType$, $nc(specifier)->invocationType$);
}

int32_t DynamicCallSiteDesc::hashCode() {
	int32_t result = $Objects::hash($$new($ObjectArray, {
		$of(this->bootstrapMethod$),
		$of(this->invocationName$),
		$of(this->invocationType$)
	}));
	result = 31 * result + $Arrays::hashCode(this->bootstrapArgs$);
	return result;
}

$String* DynamicCallSiteDesc::toString() {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	return $String::format("DynamicCallSiteDesc[%s::%s(%s%s):%s]"_s, $$new($ObjectArray, {
		$($of($nc($($nc(this->bootstrapMethod$)->owner()))->displayName())),
		$($of($nc(this->bootstrapMethod$)->methodName())),
		$nc(this->invocationName$)->equals($ConstantDescs::DEFAULT_NAME) ? $of(""_s) : $of($$str({this->invocationName$, "/"_s})),
		$($nc($($nc($($Stream::of(this->bootstrapArgs$)))->map(static_cast<$Function*>($$new(DynamicCallSiteDesc$$Lambda$toString)))))->collect($($Collectors::joining(","_s)))),
		$($of($nc(this->invocationType$)->displayDescriptor()))
	}));
}

void clinit$DynamicCallSiteDesc($Class* class$) {
	DynamicCallSiteDesc::$assertionsDisabled = !DynamicCallSiteDesc::class$->desiredAssertionStatus();
}

DynamicCallSiteDesc::DynamicCallSiteDesc() {
}

$Class* DynamicCallSiteDesc::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DynamicCallSiteDesc$$Lambda$toString::classInfo$.name)) {
			return DynamicCallSiteDesc$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(DynamicCallSiteDesc, name, initialize, &_DynamicCallSiteDesc_ClassInfo_, clinit$DynamicCallSiteDesc, allocate$DynamicCallSiteDesc);
	return class$;
}

$Class* DynamicCallSiteDesc::class$ = nullptr;

		} // constant
	} // lang
} // java